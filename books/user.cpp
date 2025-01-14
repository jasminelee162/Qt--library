#include "user.h"
#include "ui_user.h"
#include "login.h"
User::User(QWidget *parent) :
                              QWidget(parent),
                              ui(new Ui::User)
{
  ui->setupUi(this);
  initPage();

  this->setWindowTitle(QString::fromLocal8Bit("用户主页"));

  displayBooksInTableView(ui->tableView);
    this->resize(1100,750);

  t1 = ui->tableView_3;

  // 设置背景图片
  this->setStyleSheet("background-image: url(:/icon/BACKGROUND.JPG);");

  //返回主页面不可见
  ui->returnButton->setVisible(false);

  isSearched=false;

  QIcon icon(":/icon/user.png");
   setWindowIcon(icon);
}

User::~User() { delete ui; }

void User::initPage() {
    auto l = ui->tool->children(); //获得子控件

    connect(ui->pushButton_4, &QPushButton::clicked, this, &User::on_pushButton_4_clicked);

    for (auto it : l) {
        //为每个页面进行绑定槽函数
        if (it->objectName().contains("btn")) {
            connect(static_cast<QPushButton*>(it), &QPushButton::clicked, this,
                &User::DealMenu);
        }
    }
}

void User::displayBooksInTableView(QTableView *tableView) {
  // 创建QSqlTableModel对象
  QSqlTableModel *model = new QSqlTableModel(this);

  // 设置数据库表格
  model->setTable("books");

  // 加载所有数据
  model->select();

  // 将模型设置到QTableView控件中
  tableView->setModel(model);
  // 设置表头
  model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("书名"));
  model->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("作者"));
  model->setHeaderData(3, Qt::Horizontal, QString::fromLocal8Bit("出版社"));
  model->setHeaderData(4, Qt::Horizontal, QString::fromLocal8Bit("出版年份"));
  model->setHeaderData(5, Qt::Horizontal, QString::fromLocal8Bit("总数量"));
  model->setHeaderData(6, Qt::Horizontal, QString::fromLocal8Bit("可用数量"));

    //隐藏图片路径和m描述
  tableView->hideColumn(7);
  tableView->hideColumn(8);
  // 自动调整列宽
  tableView->resizeColumnsToContents();
  tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void User::displayBrowInTableView(QTableView *tableView) {
  // 创建 QSqlQueryModel 对象
  QSqlQueryModel *model = new QSqlQueryModel(this);

  // 构建 SQL 查询，通过 JOIN 连接 borrow_info 和 books 表
  QString queryStr =
      QString("SELECT borrow_info.borrow_id, books.title, "
              "borrow_info.borrow_date, borrow_info.return_date, "
              "borrow_info.due_date "
              "FROM borrow_info "
              "JOIN books ON borrow_info.book_id = books.book_id "
              "WHERE borrow_info.user_id = %1")
          .arg(userId);

  // 设置查询语句
  model->setQuery(queryStr);

  // 检查查询是否成功
  if (model->lastError().isValid()) {
    QMessageBox::critical(this, "Database Error", model->lastError().text());
    return;
  }

  // 检查查询结果行数
  if (model->rowCount() == 0) {
    QMessageBox::information(this, "No Data",
                             "No borrow records found for this user.");
  }

  // 将模型设置到 QTableView 控件中
  tableView->setModel(model);

  // 设置表头标题为中文
  model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("书名"));
  model->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("借阅日期"));
  model->setHeaderData(3, Qt::Horizontal, QString::fromLocal8Bit("归还日期"));
  model->setHeaderData(4, Qt::Horizontal, QString::fromLocal8Bit("应还日期"));

  // 自动调整列宽
  tableView->resizeColumnsToContents();
  tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

  // 查找用户信息并显示到 QLineEdit
  QSqlQuery userQuery;
  userQuery.prepare(
      "SELECT username, email, role FROM users WHERE user_id = ?");
  userQuery.addBindValue(userId);

  if (userQuery.exec() && userQuery.next()) {
    QString username = userQuery.value(0).toString();
    QString email = userQuery.value(1).toString();
    QString role;
    if (userQuery.value(2).toInt() == 0) {
      role = QString::fromLocal8Bit("用户");
    } else {
      role = QString::fromLocal8Bit("管理员");
    }

    // 设置 QLineEdit 显示信息
    ui->lineEdit_2->setText(username); // 显示用户名
    ui->lineEdit_3->setText(email);    // 显示邮箱
    ui->lineEdit_4->setText(role);     // 显示角色（权限）
  } else {
    QMessageBox::critical(this, "Database Error",
                          "Failed to retrieve user information.");
  }
}

void User::displayTonZInTableView(QTableView *tableView) {
  // 创建 QSqlQueryModel 对象
  QSqlQueryModel *model = new QSqlQueryModel(this);

  // 构建 SQL 查询，使用 LEFT JOIN 获取通知信息及用户查看状态
  QString queryStr = QString("SELECT notifications.notification_id, "
                             "notifications.title, notifications.content, "
                             "notifications.publish_date, "
                             "IFNULL(user_notifications.is_read, 0) AS is_read "
                             "FROM notifications "
                             "LEFT JOIN user_notifications "
                             "ON notifications.notification_id = "
                             "user_notifications.notification_id "
                             "AND user_notifications.user_id = %1")
                         .arg(userId);

  // 设置查询语句
  model->setQuery(queryStr);

  // 检查查询是否成功
  if (model->lastError().isValid()) {
    QMessageBox::critical(this, "Database Error", model->lastError().text());
    return;
  }

  // 将模型设置到 QTableView 控件中
  tableView->setModel(model);

  // 设置表头标题为中文
  model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("标题"));
  model->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("通知内容"));
  model->setHeaderData(3, Qt::Horizontal, QString::fromLocal8Bit("发布时间"));
  model->setHeaderData(4, Qt::Horizontal, QString::fromLocal8Bit("查看状态"));

  // 设置查看状态列显示"未查看"/"已查看"的信息
  bool hasUnreadNotification = false;
  for (int row = 0; row < model->rowCount(); ++row) {
    bool isRead =
        model->data(model->index(row, 4)).toInt(); // 获取查看状态列的值
    // qDebug() << "isRead value at row " << row << ": " << isRead;

    // 如果 isRead 为 0，则标记为未查看，否则为已查看
    QString status = (isRead == 0) ? QString::fromLocal8Bit("未查看")
                                   : QString::fromLocal8Bit("已查看");
    model->setData(model->index(row, 4), status); // 更新该行的查看状态显示

    // 检查是否有未查看的通知
    if (isRead == 0) {
      hasUnreadNotification = true;
    }
  }

  // 如果有未查看的通知，则显示小红点
  if (hasUnreadNotification) {
    showRedDotOnButton(true);
  } else {
    showRedDotOnButton(false);
//    ui->btn_tongzhi->setIcon("Mytongzhi.png");

  }

  // 自动调整列宽
  tableView->resizeColumnsToContents();
  tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void User::showRedDotOnButton(bool show) {
  // 获取 QToolButton
  QToolButton *toolButton = ui->btn_tongzhi; // 替换为你的 QToolButton 对象

  if (show) {
    // 创建红点图标
    QPixmap redDot(10, 10);
    redDot.fill(Qt::red);

    // 使用 QIcon 来设置图标
    QIcon redDotIcon(redDot);

    // 设置 QToolButton 的图标
    toolButton->setIcon(redDotIcon);
    toolButton->setIconSize(QSize(10, 10)); // 调整图标大小
  } else {
    // 创建红点图标
    QPixmap redDot(":/icon/Mytongzhi.png");

    // 使用 QIcon 来设置图标
    QIcon redDotIcon(redDot);

    // 设置 QToolButton 的图标
    toolButton->setIcon(redDotIcon);
    toolButton->setIconSize(QSize(35, 35)); // 调整图标大小
  }
}

void User::loadHelpFile() {
  // 创建 QFile 对象，打开 help.txt 文件
  QFile file(":/Debug/debug/help.txt");
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
  ui->textEdit->setPlainText(fileContent);

  // 关闭文件
  file.close();
}

void User::DealMenu() {
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
      break;
    }
    if ("btn_help" == str) {
      ui->stackedWidget->setCurrentIndex(3);
      break;
    }

  } while (false);
}

void User::on_pushButton_clicked() {
  // 获取用户输入的书名
  QString bookTitle = ui->lineEdit->text().trimmed();

  if (bookTitle.isEmpty()) {
     QMessageBox::warning(this, "Input Error", QString::fromLocal8Bit("请输入一个书名"));
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
  isSearched=true;
  ui->returnButton->setVisible(true);
  // 检查是否有数据
  if (model->rowCount() == 0) {
    QMessageBox::information(this, "No Results",
                             QString::fromLocal8Bit("图书馆中没有与")+bookTitle+QString::fromLocal8Bit("相关的书"));
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

void User::on_pushButton_2_clicked() {
  QDialog *dialog = new QDialog;
  dialog->setWindowTitle(QString::fromLocal8Bit("借阅图书"));
  // 去掉问号按钮
  dialog->setWindowFlags(Qt::Dialog | Qt::WindowTitleHint | Qt::WindowCloseButtonHint);
  dialog->resize(400, 300); // 设置窗口大小为 400x300
dialog->setStyleSheet("background-color: #f8efe8;");
  // 创建界面UI
  QComboBox *comboBoxBooks = new QComboBox(dialog); // 下拉框用于选择图书
  QDateEdit *dateEditBorrowDate = new QDateEdit(dialog); // 借阅日期
  QDateEdit *dateEditReturnDate = new QDateEdit(dialog); // 归还日期
  QPushButton *btnBorrowBook =
      new QPushButton(QString::fromLocal8Bit("借阅"), dialog);

  // 设置日期控件的默认值
  dateEditBorrowDate->setDate(QDate::currentDate()); // 借阅日期默认为当前日期
    dateEditBorrowDate->setReadOnly(true); // 设置为只读，用户无法编辑
    dateEditBorrowDate->setButtonSymbols(QAbstractSpinBox::NoButtons); // 隐藏加减按钮
    dateEditReturnDate->setButtonSymbols(QAbstractSpinBox::NoButtons); // 隐藏加减按钮

  dateEditReturnDate->setDate(
      QDate::currentDate().addDays(20)); // 归还日期默认为当前日期10天后
  dateEditReturnDate->setReadOnly(true); // 设置为只读，用户无法编辑

  // 从数据库加载书籍数据到下拉框
  QSqlQuery query;
  query.prepare("SELECT book_id, title FROM books WHERE available_count > 0");
  if (query.exec()) {
    while (query.next()) {
      int bookId = query.value(0).toInt();
      QString title = query.value(1).toString();
      comboBoxBooks->addItem(title,
                             bookId); // 添加书籍名到下拉框，并存储book_id
    }
  }

  // 创建布局
  QVBoxLayout *layout = new QVBoxLayout(dialog);
  layout->addWidget(new QLabel(QString::fromLocal8Bit("请选择书籍:")));
  layout->addWidget(comboBoxBooks);
  layout->addWidget(new QLabel(QString::fromLocal8Bit("借阅日期:")));
  layout->addWidget(dateEditBorrowDate);
  layout->addWidget(new QLabel(QString::fromLocal8Bit("归还日期:")));
  layout->addWidget(dateEditReturnDate);
  layout->addWidget(btnBorrowBook);

  // 连接信号和槽
  connect(btnBorrowBook, &QPushButton::clicked, dialog, [=]() {
    // 获取用户选择的书籍ID
    int selectedBookId = comboBoxBooks->currentData().toInt();
    QString bookTitle = comboBoxBooks->currentText();

    // 获取借阅日期和归还日期
    QDate borrowDate = dateEditBorrowDate->date();
    QDate returnDate = dateEditReturnDate->date();

    // 验证数据
    if (selectedBookId <= 0) {
      QMessageBox::warning(this, "Input Error",
                           QString::fromLocal8Bit("请选择一本书籍！"));
      return;
    }

    // 查询该书籍的可用数量
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT available_count FROM books WHERE book_id = ?");
    checkQuery.addBindValue(selectedBookId);
    if (checkQuery.exec() && checkQuery.next()) {
      int availableCount = checkQuery.value(0).toInt();

      // 判断是否有足够的书籍可供借阅
      if (availableCount <= 0) {
        QMessageBox::warning(
            this, "Stock Error",
            QString::fromLocal8Bit("所选图书已借完，无法借阅！"));
        return; // 若无库存，阻止借阅
      }

      // 开始事务
      QSqlQuery query;

      // 插入借阅信息到 borrow_info 表（注意 return_date 为 NULL）
      query.prepare("INSERT INTO borrow_info (user_id, book_id, borrow_date, "
                    "return_date, due_date) "
                    "VALUES (?, ?, ?, NULL, ?)");
      query.addBindValue(userId); // 当前用户ID
      query.addBindValue(selectedBookId);
      query.addBindValue(borrowDate);
      query.addBindValue(
          returnDate.addDays(10)); // 应归还日期是借阅日期的10天后

      if (query.exec()) {
        // 更新 books 表中的可用数量
        query.prepare("UPDATE books SET available_count = available_count - 1 "
                      "WHERE book_id = ?");
        query.addBindValue(selectedBookId);

        if (query.exec()) {
          QMessageBox::information(this, "Success",
                                   QString::fromLocal8Bit("图书借阅成功！"));
          displayBooksInTableView(ui->tableView);
          displayBrowInTableView(ui->tableView_2);
          dialog->accept();
        } else {
          QMessageBox::critical(
              this, "Database Error",
              QString::fromLocal8Bit("更新图书可用数量失败！"));
        }
      } else {
        QMessageBox::critical(this, "Database Error",
                              QString::fromLocal8Bit("借阅信息插入失败！"));
      }
    } else {
      QMessageBox::critical(this, "Database Error",
                            QString::fromLocal8Bit("查询图书可用数量失败！"));
    }
  });

  dialog->setLayout(layout);
  dialog->exec();
}

void User::on_btn_jieyue_clicked() { displayBrowInTableView(ui->tableView_2); }

void User::on_pushButton_3_clicked() {
  // 获取用户选中的行和列
  QModelIndexList selectedIndexes =
      ui->tableView_2->selectionModel()->selectedIndexes();

  // 如果没有选中任何行，提示用户
  if (selectedIndexes.isEmpty()) {
    QMessageBox::warning(this, "Selection Error",
                         QString::fromLocal8Bit("请先选择一本借阅的图书"));
    return;
  }

  // 获取选中的书名（第二列是书名）
  QString bookTitle = ui->tableView_2->model()
                          ->data(selectedIndexes.first().siblingAtColumn(1))
                          .toString(); // 第二列是书名

  qDebug() << bookTitle;
  // 根据书名查询对应的 book_id
  QSqlQuery query;
  query.prepare("SELECT book_id FROM books WHERE title = ?");
  query.addBindValue(bookTitle);
  if (!query.exec() || !query.next()) {
    QMessageBox::critical(this, "Database Error",
                          QString::fromLocal8Bit("未能找到对应的书籍信息。"));
    return;
  }

  int bookId = query.value(0).toInt(); // 获取 book_id

  // 获取选中的借阅记录的借阅ID
  int borrowId = ui->tableView_2->model()
                     ->data(selectedIndexes.first())
                     .toInt(); // 第一列是借阅ID
  qDebug() << borrowId;
  // 提示用户确认是否归还该图书
  int ret = QMessageBox::question(
      this, "Return Book", QString::fromLocal8Bit("确定要归还这本书吗？"));
  if (ret != QMessageBox::Yes) {
    return; // 如果用户选择否，直接返回
  }

  // 获取当前时间
  QDate currentDate = QDate::currentDate();

  // 更新借阅信息的归还日期
  query.prepare("UPDATE borrow_info SET return_date = ? WHERE borrow_id = ?");
  query.addBindValue(currentDate);
  query.addBindValue(borrowId);

  if (!query.exec()) {
    QMessageBox::critical(this, "Database Error",
                          QString::fromLocal8Bit("更新借阅信息失败：") +
                              query.lastError().text());
    return;
  }

  // 更新图书表的可用数量 +1
  query.prepare("UPDATE books SET available_count = available_count + 1 WHERE "
                "book_id = ?");
  query.addBindValue(bookId);

  if (!query.exec()) {
    QMessageBox::critical(this, "Database Error",
                          QString::fromLocal8Bit("更新图书可用数量失败：") +
                              query.lastError().text());
    return;
  }

  // 显示归还成功的提示
  QMessageBox::information(this, "Success",
                           QString::fromLocal8Bit("图书已成功归还！"));

  // 刷新借阅记录和图书列表
  displayBrowInTableView(ui->tableView_2);
  displayBooksInTableView(ui->tableView);
}

void User::on_pushButton_8_clicked() {
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

void User::on_btn_tongzhi_clicked() { displayTonZInTableView(ui->tableView_3); }

void User::on_tableView_3_doubleClicked(const QModelIndex &index) {
  // 判断是否是第三列（索引从0开始，第三列是2）
  if (index.column() == 2) {
    qDebug() << "1";
    // 获取该单元格的内容（即第三列的内容）
    QString cellContent = index.data().toString();

    // 创建一个弹出对话框
    QDialog *dialog = new QDialog(this);

    // 设置窗口标题
    dialog->setWindowTitle(QString::fromLocal8Bit("详细信息"));

    // 设置窗口标志，去除问号按钮
    dialog->setWindowFlags(dialog->windowFlags() & ~Qt::WindowContextHelpButtonHint);

    // 设置对话框的固定大小或自定义大小
    dialog->setFixedSize(400, 300);  // 设置固定大小（宽 400px，高 300px）
    // 或者
    // dialog->resize(400, 300);  // 设置可调整大小的弹窗

    // 创建一个标签，显示该单元格的内容
    QLabel *label = new QLabel(cellContent, dialog);
    label->setWordWrap(true);  // 设置文本自动换行

    // 创建一个布局，将标签添加到对话框中
    QVBoxLayout *layout = new QVBoxLayout(dialog);
    layout->addWidget(label);

    // 添加一个关闭按钮
    QPushButton *closeButton = new QPushButton(QString::fromLocal8Bit("关闭"), dialog);
    connect(closeButton, &QPushButton::clicked, dialog, &QDialog::accept);
    layout->addWidget(closeButton);

    // 设置布局
    dialog->setLayout(layout);

    // 显示对话框
    dialog->exec();
  } else {
    // 获取点击的行
    int row = index.row();
    // 获取模型
    const QAbstractItemModel *model = index.model();
    // 获取第一列（notificationId）的值
    int notificationId = model->data(model->index(row, 0)).toInt();

    // 更新用户通知的查看状态
    QSqlQuery query;
    query.prepare("INSERT INTO user_notifications (user_id, notification_id, "
                  "is_read, viewed_at) "
                  "VALUES (?, ?, TRUE, NOW()) "
                  "ON DUPLICATE KEY UPDATE is_read = TRUE, viewed_at = NOW()");
    query.addBindValue(userId);
    query.addBindValue(notificationId);

    if (!query.exec()) {
      QMessageBox::critical(this, "Database Error", query.lastError().text());
      return;
    }

    // 更新 UI，标记通知已读
    displayTonZInTableView(ui->tableView_3);
    qDebug() << "2";
  }
}


void User::on_btn_help_clicked() { loadHelpFile(); }

void User::on_tableView_doubleClicked(const QModelIndex &index) {
  QDialog *dialog = new QDialog(this);
  bool isAddMode = false;
  // 创建界面UI
  QLineEdit *lineEditTitle = new QLineEdit(dialog);
  QLineEdit *lineEditAuthor = new QLineEdit(dialog);
  QLineEdit *lineEditPublisher = new QLineEdit(dialog);
  QLineEdit *lineEditYear = new QLineEdit(dialog);
  QLineEdit *lineEditTotalCount = new QLineEdit(dialog);
  QLineEdit *lineEditAvailableCount = new QLineEdit(dialog);
  QTextEdit *textEditDescription = new QTextEdit(dialog); // 图书简介
  // QPushButton *btnChooseCoverImage = new QPushButton(
  // QString::fromLocal8Bit("选择封面"), dialog);  // 选择封面图片按钮
  QLabel *labelCoverImagePath = new QLabel(dialog); // 显示封面图片路径

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
  layout2->addWidget(new QLabel(QString::fromLocal8Bit("封面图片:")));
  layout2->addWidget(labelCoverImagePath); // 显示选择的封面路径
  // layout2->addWidget(btnChooseCoverImage);
  layout2->addStretch(1); // 保持紧凑，但留一些空间

  // 水平布局：保持layout和layout2高度一致
  QHBoxLayout *h1 = new QHBoxLayout;
  h1->addLayout(layout);
  h1->addLayout(layout2);

  // 图书简介部分
  Tlayout->addLayout(h1);
  Tlayout->addWidget(new QLabel(QString::fromLocal8Bit("图书简介:")));
  Tlayout->addWidget(textEditDescription);

  // 如果是查看模式，则不显示添加按钮
  if (isAddMode) {
    QPushButton *btnAddBook =
        new QPushButton(QString::fromLocal8Bit("添加"), this);
    Tlayout->addWidget(btnAddBook);

    //    // 连接封面选择按钮
    //    connect(btnChooseCoverImage, &QPushButton::clicked, [=]() {
    //      // 打开文件对话框选择图片文件
    //      QString filePath = QFileDialog::getOpenFileName(
    //          dialog, "选择封面图片", "",
    //          "Images (*.png *.jpg *.jpeg *.bmp *.gif)");
    //      if (!filePath.isEmpty()) {
    //        QPixmap pixmap(filePath);
    //        labelCoverImagePath->setPixmap(pixmap.scaled(
    //            400, 600, Qt::KeepAspectRatio)); // 可调节大小，保持长宽比
    //        labelCoverImagePath->setAlignment(Qt::AlignCenter); //
    //        设置图片居中显示
    //      }
    //    });

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
      QString coverImagePath = labelCoverImagePath->text(); // 获取封面图片路径

      // 验证输入
      if (title.isEmpty() || author.isEmpty() || yearStr.isEmpty() ||
          totalCountStr.isEmpty() || availableCountStr.isEmpty() ||
          coverImagePath.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "All fields are required.");
        return;
      }

      // 将年份、总数量、可用数量转换为整数
      int year = yearStr.toInt();
      int totalCount = totalCountStr.toInt();
      int availableCount = availableCountStr.toInt();

      // 连接到数据库
      QSqlDatabase db = QSqlDatabase::database();
      if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not open.");
        return;
      }

      // 插入数据到数据库
      QSqlQuery query;
      query.prepare(
          "INSERT INTO books (title, author, publisher, year, "
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
  } else {
    // 如果是查看模式，使用双击时获取的书籍数据填充界面
    QSqlTableModel *model =
        static_cast<QSqlTableModel *>(ui->tableView->model());
    QString title = model->data(model->index(index.row(), 1)).toString();
    QString author = model->data(model->index(index.row(), 2)).toString();
    QString publisher = model->data(model->index(index.row(), 3)).toString();
    QString year = model->data(model->index(index.row(), 4)).toString();
    QString totalCount = model->data(model->index(index.row(), 5)).toString();
    QString availableCount =
        model->data(model->index(index.row(), 6)).toString();
    QString description = model->data(model->index(index.row(), 8)).toString();
    QString coverImagePath =
        model->data(model->index(index.row(), 7)).toString();

    // 将获取的数据填充到控件中
    lineEditTitle->setText(title);
    lineEditAuthor->setText(author);
    lineEditPublisher->setText(publisher);
    lineEditYear->setText(year);
    lineEditTotalCount->setText(totalCount);
    lineEditAvailableCount->setText(availableCount);
    textEditDescription->setPlainText(description);

    QPixmap pixmap(coverImagePath);
    labelCoverImagePath->setPixmap(
        pixmap.scaled(400, 600, Qt::KeepAspectRatio));
    labelCoverImagePath->setAlignment(Qt::AlignCenter);
  }

  dialog->setLayout(Tlayout);
  dialog->exec();
}


void User::on_returnButton_clicked()
{
    displayBooksInTableView(ui->tableView);
     ui->returnButton->setVisible(false);

}
//再次借书功能
void User::on_pushButton_4_clicked()
{
    // 调用借阅图书的逻辑
    on_pushButton_2_clicked();
}
//退出登录
void User::on_pushButton_5_clicked()
{
    this->close();
    Login* login = new Login();
    login->show();
}




