#ifndef USER_H
#define USER_H

#include <QAxobject>
#include <QComboBox>
#include <QDateEdit>
#include <QDateTime>
#include <QDebug>
#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QPainter>
#include <QPushButton>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlTableModel>
#include <QTableView>
#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>

namespace Ui {
class User;
}

class User : public QWidget
{
  Q_OBJECT

public:
  explicit User(QWidget *parent = nullptr);
  ~User();

  void initPage();

  void displayBooksInTableView(QTableView *tableView);

  void displayBrowInTableView(QTableView *tableView);

  void displayTonZInTableView(QTableView *tableView);

  void showRedDotOnButton(bool show);

  void loadHelpFile();
public slots:
  void DealMenu();

private slots:
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

  void on_btn_jieyue_clicked();

  void on_pushButton_3_clicked();

  void on_pushButton_8_clicked();

  void on_btn_tongzhi_clicked();

  void on_tableView_3_doubleClicked(const QModelIndex &index);

  void on_btn_help_clicked();

  void on_tableView_doubleClicked(const QModelIndex &index);

  void on_pushButton_4_clicked();

  void on_pushButton_5_clicked();

  void on_returnButton_clicked();

public:
  int userId;
  QTableView *t1;
 bool isSearched;
private:
  Ui::User *ui;
};

#endif // USER_H
