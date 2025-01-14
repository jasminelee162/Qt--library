#include "admin.h"
#include "admin.h"
#include "ui_admin.h"
#include <QDebug>

Admin::Admin(QWidget *parent) :
                                QWidget(parent),
                                ui(new Ui::Admin)
{
  ui->setupUi(this);
  initPage();

  this->setWindowTitle(QString::fromLocal8Bit("管理员主页"));
  this->resize(1100,750);

  displayBooksInTableView(ui->tableView);


  // 设置背景图片
  this->setStyleSheet("background-image: url(:/icon/BACKGROUND.JPG);");

  QIcon icon(":/icon/admin.png");
   setWindowIcon(icon);
}


Admin::~Admin() { delete ui; }

void Admin::initPage() {
  auto l = ui->tool->children(); //获得子控件

  for (auto it : l) {
    //为每个页面进行绑定槽函数
    if (it->objectName().contains("btn")) {
      connect(static_cast<QPushButton *>(it), &QPushButton::clicked, this,
              &Admin::DealMenu);
    }
  }
}

//显示图书信息
void Admin::displayBooksInTableView(QTableView *tableView) {
  // 创建QSqlTableModel对象
  QSqlTableModel *model = new QSqlTableModel(this);

  // 设置数据库表格
  model->setTable("books");

  // 加载所有数据
  model->select();

  // 将模型设置到QTableView控件中
  tableView->setModel(model);
  // 设置表头标题为中文
  model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("书名"));
  model->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("作者"));
  model->setHeaderData(3, Qt::Horizontal, QString::fromLocal8Bit("出版社"));
  model->setHeaderData(4, Qt::Horizontal, QString::fromLocal8Bit("出版年份"));
  model->setHeaderData(5, Qt::Horizontal, QString::fromLocal8Bit("总数量"));
  model->setHeaderData(6, Qt::Horizontal, QString::fromLocal8Bit("可用数量"));

  tableView->hideColumn(7);
  tableView->hideColumn(8);
  // 自动调整列宽
  tableView->resizeColumnsToContents();
  tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

//显示借阅信息
void Admin::displayBroowsInTableView(QTableView *tableView) {
  // 创建 QSqlQueryModel 对象
  QSqlQueryModel *model = new QSqlQueryModel(this);

  // 构建 SQL 查询，通过 JOIN 连接 borrow_info、users 和 books 表
  QString queryStr =
      "SELECT borrow_info.borrow_id, users.username, books.title, "
      "borrow_info.borrow_date, borrow_info.return_date, borrow_info.due_date "
      "FROM borrow_info "
      "JOIN users ON borrow_info.user_id = users.user_id "
      "JOIN books ON borrow_info.book_id = books.book_id";

  // 设置查询语句
  model->setQuery(queryStr);

  // 检查查询是否成功
  if (model->lastError().isValid()) {
    QMessageBox::critical(this, "Database Error", model->lastError().text());
    return;
  }

  // 检查查询结果行数
  if (model->rowCount() == 0) {
    QMessageBox::information(this, "No Data", QString::fromLocal8Bit("没有找到借阅记录"));
  }

  // 将模型设置到 QTableView 控件中
  tableView->setModel(model);

  // 设置表头标题为中文
  model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("账户名"));
  model->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("书名"));
  model->setHeaderData(3, Qt::Horizontal, QString::fromLocal8Bit("借阅日期"));
  model->setHeaderData(4, Qt::Horizontal, QString::fromLocal8Bit("归还日期"));
  model->setHeaderData(5, Qt::Horizontal, QString::fromLocal8Bit("应还日期"));

  // 自动调整列宽
  tableView->resizeColumnsToContents();
  tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void Admin::loadHelpFile() {
  // 创建 QFile 对象，打开 help.txt 文件
  QFile file("help2.txt");

  // 检查文件是否存在并可以读取
  if (!file.exists()) {
    QMessageBox::warning(this, "File Not Found",
                         QString::fromLocal8Bit("help.txt 文件未找到！"));
    return;
  }

  if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    QMessageBox::critical(this, "File Error",
                          QString::fromLocal8Bit("无法打开 help.txt 文件！"));
    return;
  }

  // 使用 QTextStream 读取文件内容
  QTextStream in(&file);
  in.setCodec("UTF-8"); // 设置为 UTF-8 编码

  QString fileContent = in.readAll();

  // 将文件内容设置到 textEdit 控件中
  ui->textEdit_2->setPlainText(fileContent);

  // 关闭文件
  file.close();
}

//切换界面
void Admin::DealMenu() {
  auto str = sender()->objectName();

  //切换页面
  do {
    if ("btn_book" == str) {
      ui->stackedWidget->setCurrentIndex(0);
      break;
    }

    if ("btn_jieyue" == str) {
      ui->stackedWidget->setCurrentIndex(1);
      break;
    }

    if ("btn_tongzhi" == str) {
      ui->stackedWidget->setCurrentIndex(2);
      // 获取当前日期和时间
      QDateTime currentDateTime = QDateTime::currentDateTime();
      // 将当前日期和时间设置到 QDateTimeEdit 控件中
      ui->dateEdit->setDateTime(currentDateTime);
      break;
    }
    if ("btn_help" == str) {
      ui->stackedWidget->setCurrentIndex(3);
      break;
    }

  } while (false);
}

//添加图书
void Admin::on_pushButton_2_clicked() {
  QDialog *dialog = new QDialog;
  // 创建界面UI
  QLineEdit *lineEditTitle = new QLineEdit(dialog);
  QLineEdit *lineEditAuthor = new QLineEdit(dialog);
  QLineEdit *lineEditPublisher = new QLineEdit(dialog);
  QLineEdit *lineEditYear = new QLineEdit(dialog);
  QLineEdit *lineEditTotalCount = new QLineEdit(dialog);
  QLineEdit *lineEditAvailableCount = new QLineEdit(dialog);
  QTextEdit *textEditDescription = new QTextEdit(dialog); // 图书简介
  QPushButton *btnChooseCoverImage = new QPushButton(
      QString::fromLocal8Bit("选择封面"), dialog);  // 选择封面图片按钮
  QLabel *labelCoverImagePath = new QLabel(dialog); // 显示封面图片路径

  QPushButton *btnAddBook =
      new QPushButton(QString::fromLocal8Bit("添加"), this);
  QVBoxLayout *Tlayout = new QVBoxLayout; // 将控件添加到dialog布局

  // layout1：书籍信息部分
  QVBoxLayout *layout = new QVBoxLayout;
  layout->addWidget(new QLabel(QString::fromLocal8Bit("图书名:")));
  layout->addWidget(lineEditTitle);
  layout->addWidget(new QLabel(QString::fromLocal8Bit("作者:")));
  layout->addWidget(lineEditAuthor);
  layout->addWidget(new QLabel(QString::fromLocal8Bit("出版社:")));
  layout->addWidget(lineEditPublisher);
  layout->addWidget(new QLabel(QString::fromLocal8Bit("图书年份:")));
  layout->addWidget(lineEditYear);
  layout->addWidget(new QLabel(QString::fromLocal8Bit("图书总数量:")));
  layout->addWidget(lineEditTotalCount);
  layout->addWidget(new QLabel(QString::fromLocal8Bit("当前可用数量:")));
  layout->addWidget(lineEditAvailableCount);

  // layout2：封面选择部分
  QVBoxLayout *layout2 = new QVBoxLayout;
  layout2->addWidget(new QLabel(QString::fromLocal8Bit("选择封面图片:")));
  layout2->addWidget(labelCoverImagePath); // 显示选择的封面路径
  layout2->addWidget(btnChooseCoverImage);
  layout2->addStretch(1); // 保持紧凑，但留一些空间

  // 水平布局：保持layout和layout2高度一致
  QHBoxLayout *h1 = new QHBoxLayout;
  h1->addLayout(layout);
  h1->addLayout(layout2);

  // 图书简介部分
  Tlayout->addLayout(h1);
  Tlayout->addWidget(new QLabel(QString::fromLocal8Bit("图书简介:")));
  Tlayout->addWidget(textEditDescription);

  // 添加图书按钮
  Tlayout->addWidget(btnAddBook);

  // 设置布局紧凑
  Tlayout->setSpacing(10);                 // 设置控件之间的间距
  layout->setSpacing(5);                   // 设置layout内控件间距
  layout2->setSpacing(5);                  // 设置layout2内控件间距
  layout2->setContentsMargins(0, 0, 0, 0); // 去除layout2的边距

  // 设置按钮更大尺寸
  btnChooseCoverImage->setMinimumSize(200, 40); // 设置按钮尺寸
  btnChooseCoverImage->setMaximumSize(200, 40); // 设置按钮尺寸

  // 连接封面选择按钮
  connect(btnChooseCoverImage, &QPushButton::clicked, [=]() {
    // 打开文件对话框选择图片文件
    QString filePath = QFileDialog::getOpenFileName(
        dialog, QString::fromLocal8Bit("选择封面图片"), "",
        "Images (*.png *.jpg *.jpeg *.bmp *.gif)");
    if (!filePath.isEmpty()) {
      path = filePath;
      // 显示选择的封面图片
      QPixmap pixmap(filePath);
      labelCoverImagePath->setPixmap(pixmap.scaled(
          400, 600, Qt::KeepAspectRatio)); // 可调节大小，保持长宽比
      labelCoverImagePath->setAlignment(Qt::AlignCenter); // 设置图片居中显示
    }
  });

  // 连接添加按钮
  connect(btnAddBook, &QPushButton::clicked, dialog, [=]() {
    // 获取用户输入的值
    QString title = lineEditTitle->text();
    QString author = lineEditAuthor->text();
    QString publisher = lineEditPublisher->text();
    QString yearStr = lineEditYear->text();
    QString totalCountStr = lineEditTotalCount->text();
    QString availableCountStr = lineEditAvailableCount->text();
    QString description = textEditDescription->toPlainText(); // 获取图书简介
    QString coverImagePath =
        path /*labelCoverImagePath->text()*/; // 获取封面图片路径

    // 验证输入
    if (title.isEmpty() || author.isEmpty() || yearStr.isEmpty() ||
        totalCountStr.isEmpty() || availableCountStr.isEmpty() ||
        coverImagePath.isEmpty()) {
      QMessageBox::warning(this, "Input Error", QString::fromLocal8Bit("所有内容都需要填写"));
      return;
    }

    // 将年份、总数量、可用数量转换为整数
    int year = yearStr.toInt();
    int totalCount = totalCountStr.toInt();
    int availableCount = availableCountStr.toInt();

    // 连接到数据库
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
      QMessageBox::critical(this, "Database Error", QString::fromLocal8Bit("数据库未打开"));
      return;
    }

    // 插入数据到数据库
    QSqlQuery query;
    query.prepare("INSERT INTO books (title, author, publisher, year, "
                  "total_count, available_count, cover_image_url, description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue(title);
    query.addBindValue(author);
    query.addBindValue(publisher);
    query.addBindValue(year);
    query.addBindValue(totalCount);
    query.addBindValue(availableCount);
    query.addBindValue(coverImagePath); // 存储封面图片路径
    query.addBindValue(description);    // 存储图书简介

    if (query.exec()) {
      QMessageBox::information(this, "Success", "Book added successfully.");
      dialog->accept();

      // 清空QSqlTableModel的数据
      QSqlTableModel *model =
          static_cast<QSqlTableModel *>(ui->tableView->model());
      if (model) {
        model->clear(); // 清除模型中的数据
      }
      displayBooksInTableView(ui->tableView); // 重新显示模型数据

    } else {
      QMessageBox::critical(this, "Database Error", query.lastError().text());
    }
  });

  dialog->setLayout(Tlayout);
  // 去掉问号按钮
    dialog->setWindowFlags(Qt::Dialog | Qt::WindowTitleHint | Qt::WindowCloseButtonHint);

  dialog->setStyleSheet("background-color: #f8efe8;");
  dialog->exec();
}

//编辑图书信息
void Admin::on_pushButton_clicked() {
  // 获取用户输入的书名
  QString bookTitle = ui->lineEdit->text().trimmed();

  if (bookTitle.isEmpty()) {
    // QMessageBox::warning(this, "Input Error", "Please enter a book title.");
    // 清空QSqlTableModel的数据
    QSqlTableModel *model =
        static_cast<QSqlTableModel *>(ui->tableView->model());
    if (model) {
      model->clear(); // 清除模型中的数据
    }
    displayBooksInTableView(ui->tableView); //重新显示模型数据
    return;
  }

  // 创建QSqlTableModel对象
  QSqlTableModel *model = new QSqlTableModel(this);

  // 设置数据库表格
  model->setTable("books");

  // 设置查询条件，使用LIKE进行模糊匹配
  QString filter =
      QString("title LIKE '%%1%'").arg(bookTitle); // %1 会替换为书名
  model->setFilter(filter);

  // 加载数据
  model->select();

  // 检查是否有数据
  if (model->rowCount() == 0) {
    QMessageBox::information(this, "No Results",
                             QString::fromLocal8Bit("未找到相关图书"));
  }

  // 将模型设置到QTableView控件中
  ui->tableView->setModel(model);

  // 设置表头标题为中文
  model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("书名"));
  model->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("作者"));
  model->setHeaderData(3, Qt::Horizontal, QString::fromLocal8Bit("出版社"));
  model->setHeaderData(4, Qt::Horizontal, QString::fromLocal8Bit("出版年份"));
  model->setHeaderData(5, Qt::Horizontal, QString::fromLocal8Bit("总数量"));
  model->setHeaderData(6, Qt::Horizontal, QString::fromLocal8Bit("可用数量"));


  ui->tableView->hideColumn(7);
  ui->tableView->hideColumn(8);
  // 自动调整列宽
  ui->tableView->resizeColumnsToContents();
  ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void Admin::on_pushButton_3_clicked() {
  // 获取 QTableView 中选中的单元格（如果选中的是一列，也会返回相关列的信息）
  QModelIndexList selectedIndexes =
      ui->tableView->selectionModel()->selectedIndexes();
  if (selectedIndexes.isEmpty()) {
    QMessageBox::warning(this, "No Selection", QString::fromLocal8Bit("请选择一本书进行编辑"));
    return;
  }

  // 获取选中的第一行数据
  int row = selectedIndexes.first().row();
  QSqlTableModel *model = static_cast<QSqlTableModel *>(ui->tableView->model());
  QSqlRecord record = model->record(row);

  // 获取现有图书信息
  QString bookTitle = record.value("title").toString();
  QString bookAuthor = record.value("author").toString();
  QString bookPublisher = record.value("publisher").toString();
  int bookYear = record.value("year").toInt();
  int bookTotalCount = record.value("total_count").toInt();
  int bookAvailableCount = record.value("available_count").toInt();

  // 创建对话框
  QDialog *dialog = new QDialog(this);
  dialog->setWindowTitle("Edit Book Information");
dialog->setStyleSheet("background-color: #f8efe8;");
// 去掉问号按钮
  dialog->setWindowFlags(Qt::Dialog | Qt::WindowTitleHint | Qt::WindowCloseButtonHint);
  // 创建输入框
  QLineEdit *lineEditTitle = new QLineEdit(dialog);
  QLineEdit *lineEditAuthor = new QLineEdit(dialog);
  QLineEdit *lineEditPublisher = new QLineEdit(dialog);
  QLineEdit *lineEditYear = new QLineEdit(dialog);
  QLineEdit *lineEditTotalCount = new QLineEdit(dialog);
  QLineEdit *lineEditAvailableCount = new QLineEdit(dialog);

  // 设置现有图书信息
  lineEditTitle->setText(bookTitle);
  lineEditAuthor->setText(bookAuthor);
  lineEditPublisher->setText(bookPublisher);
  lineEditYear->setText(QString::number(bookYear));
  lineEditTotalCount->setText(QString::number(bookTotalCount));
  lineEditAvailableCount->setText(QString::number(bookAvailableCount));

  // 创建“保存”按钮
  QPushButton *btnSave = new QPushButton("Save", dialog);

  // 布局
  QVBoxLayout *layout = new QVBoxLayout(dialog);
  layout->addWidget(new QLabel("Title:"));
  layout->addWidget(lineEditTitle);
  layout->addWidget(new QLabel("Author:"));
  layout->addWidget(lineEditAuthor);
  layout->addWidget(new QLabel("Publisher:"));
  layout->addWidget(lineEditPublisher);
  layout->addWidget(new QLabel("Year:"));
  layout->addWidget(lineEditYear);
  layout->addWidget(new QLabel("Total Count:"));
  layout->addWidget(lineEditTotalCount);
  layout->addWidget(new QLabel("Available Count:"));
  layout->addWidget(lineEditAvailableCount);
  layout->addWidget(btnSave);

  // 点击“保存”按钮时更新数据库
  connect(btnSave, &QPushButton::clicked, dialog, [=]() {
    // 获取用户输入的修改后的值
    QString newTitle = lineEditTitle->text();
    QString newAuthor = lineEditAuthor->text();
    QString newPublisher = lineEditPublisher->text();
    int newYear = lineEditYear->text().toInt();
    int newTotalCount = lineEditTotalCount->text().toInt();
    int newAvailableCount = lineEditAvailableCount->text().toInt();

    // 验证输入
    if (newTitle.isEmpty() || newAuthor.isEmpty() || newYear == 0 ||
        newTotalCount == 0 || newAvailableCount == 0) {
      QMessageBox::warning(dialog, "Input Error", QString::fromLocal8Bit("所有内容都需要填写"));
      return;
    }

    // 创建 SQL 更新查询
    QSqlQuery query;
    query.prepare(
        "UPDATE books SET title = ?, author = ?, publisher = ?, year = ?, "
        "total_count = ?, available_count = ? WHERE book_id = ?");
    query.addBindValue(newTitle);
    query.addBindValue(newAuthor);
    query.addBindValue(newPublisher);
    query.addBindValue(newYear);
    query.addBindValue(newTotalCount);
    query.addBindValue(newAvailableCount);
    query.addBindValue(record.value("book_id").toInt());

    // 执行更新查询
    if (query.exec()) {
      QMessageBox::information(this, "Success", QString::fromLocal8Bit("书本信息更新成功"));

      // 刷新 QTableView 中的数据
      QSqlTableModel *model =
          static_cast<QSqlTableModel *>(ui->tableView->model());
      model->select();  // 重新加载数据
      dialog->accept(); // 关闭对话框
    } else {
      QMessageBox::critical(this, "Database Error", query.lastError().text());
    }
  });

  // 设置布局
  dialog->setLayout(layout);
  dialog->exec();
}

//删除图书
void Admin::on_pushButton_4_clicked() {
    // 获取 QTableView 中选中的行
    QModelIndexList selectedIndexes =
        ui->tableView->selectionModel()->selectedIndexes();

    if (selectedIndexes.isEmpty()) {
        QMessageBox::warning(this, "No Selection",
                             QString::fromLocal8Bit("请选择一本书进行删除操作"));
        return;
    }

    // 获取选中的第一行数据
    int row = selectedIndexes.first().row();
    QSqlTableModel *model = static_cast<QSqlTableModel *>(ui->tableView->model());
    QSqlRecord record = model->record(row);

    // 获取图书的 ID
    int bookId = record.value("book_id").toInt();

    // 检查图书是否被借阅但未归还
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM borrow_info WHERE book_id = ? AND return_date IS NULL");
    checkQuery.addBindValue(bookId);

    if (!checkQuery.exec()) {
        QMessageBox::critical(this, "Database Error", checkQuery.lastError().text());
        return;
    }

    if (checkQuery.next() && checkQuery.value(0).toInt() > 0) {
        // 图书被借阅而未归还，不允许删除
        QMessageBox::warning(this, "Delete Error", QString::fromLocal8Bit("这本书不能被删掉由于当前处于借阅状态"));
        return;
    }

    // 确认删除操作
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm Delete",
                                  QString::fromLocal8Bit("确认要删除该图书吗？"),
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        // 创建 SQL 删除查询
        QSqlQuery query;

        // 首先删除 borrow_info 表中与该书相关的所有记录
        query.prepare("DELETE FROM borrow_info WHERE book_id = ?");
        query.addBindValue(bookId);
        if (!query.exec()) {
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }

        // 然后删除 books 表中的记录
        query.prepare("DELETE FROM books WHERE book_id = ?");
        query.addBindValue(bookId);
        if (query.exec()) {
            QMessageBox::information(this, "Success",QString::fromLocal8Bit("该书和该书的借阅已删除"));

            // 刷新 QTableView 中的数据
            model->select(); // 重新加载数据，更新视图
        } else {
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }
    }
}


void Admin::on_pushButton_5_clicked() {
  // 获取用户输入的通知标题、内容和发布时间
  QString title = ui->lineEdit_2->text();
  QString content = ui->textEdit->toPlainText();
  QDateTime publishDateStr = ui->dateEdit->dateTime();

  // 验证输入是否合法
  if (title.isEmpty() || content.isEmpty()) {
    QMessageBox::warning(this, "Input Error", QString::fromLocal8Bit("标题不能为空"));
    return;
  }

  //如果日期无效，提醒用户
  if (!publishDateStr.isValid()) {
    QMessageBox::warning(this, "Invalid Date", "Please enter a validdate.");
    return;
  }

  // 创建 SQL 插入查询
  QSqlQuery query;
  query.prepare("INSERT INTO notifications (title, content, publish_date) "
                "VALUES (?, ?, ?)");
  query.addBindValue(title);          // 绑定通知标题
  query.addBindValue(content);        // 绑定通知内容
  query.addBindValue(publishDateStr); // 绑定发布时间

  // 执行查询
  if (query.exec()) {
    QMessageBox::information(this, "Success",
                             QString::fromLocal8Bit("通知已成功发布！"));
    // 清空输入框
    ui->lineEdit_2->clear();
    // ui->dateEdit->clear();
    ui->textEdit->clear();
  } else {
    QMessageBox::critical(this, "Database Error", query.lastError().text());
  }
}

//显示借阅信息
void Admin::on_btn_jieyue_clicked() {
  displayBroowsInTableView(ui->tableView_2);
}

//导出借阅信息
void Admin::on_pushButton_8_clicked() {
  // 获取 QTableView 中的模型数据
  QAbstractItemModel *model = ui->tableView_2->model();
  if (!model) {
    QMessageBox::warning(this, "Error",
                         QString::fromLocal8Bit("没有可导出的数据"));
    return;
  }

  // 打开文件保存对话框，让用户选择保存的路径
  QString filePath = QFileDialog::getSaveFileName(
      this, QString::fromLocal8Bit("保存为 CSV 文件"), "",
      "CSV Files (*.csv);;All Files (*)");

  if (filePath.isEmpty()) {
    return; // 如果没有选择路径，直接返回
  }

  // 如果文件名没有以 .csv 结尾，自动加上
  if (!filePath.endsWith(".csv", Qt::CaseInsensitive)) {
    filePath += ".csv";
  }

  // 打开文件进行写入
  QFile file(filePath);
  if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
    QMessageBox::critical(this, "File Error",
                          QString::fromLocal8Bit("无法打开文件进行写入！"));
    return;
  }

  // 使用 QTextStream 写入数据
  QTextStream out(&file);

  // 获取表头并写入 CSV 文件
  int columnCount = model->columnCount();
  for (int col = 0; col < columnCount; ++col) {
    QString header = model->headerData(col, Qt::Horizontal).toString();
    out << header;
    if (col < columnCount - 1) {
      out << ","; // 添加逗号分隔
    }
  }
  out << "\n"; // 换行

  // 写入数据
  int rowCount = model->rowCount();
  for (int row = 0; row < rowCount; ++row) {
    for (int col = 0; col < columnCount; ++col) {
      QString cellData = model->data(model->index(row, col)).toString();
      out << cellData;
      if (col < columnCount - 1) {
        out << ","; // 添加逗号分隔
      }
    }
    out << "\n"; // 换行
  }

  // 关闭文件
  file.close();

  // 提示保存成功
  QMessageBox::information(this, QString::fromLocal8Bit("成功"),
                           QString::fromLocal8Bit("导出成功！"));
}

void Admin::on_btn_help_clicked() { loadHelpFile(); }
