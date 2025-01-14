#ifndef ADMIN_H
#define ADMIN_H

#include <QDateTime>
#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QPushButton>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlTableModel>
#include <QTableView>
#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>

namespace Ui {
class Admin;
}

class Admin : public QWidget
{
  Q_OBJECT

public:
  explicit Admin(QWidget *parent = nullptr);
  ~Admin();

  void initPage();

  void displayBooksInTableView(QTableView *tableView);
  void displayBroowsInTableView(QTableView *tableView);

  void loadHelpFile();

public slots:
  void DealMenu();

private slots:
  void on_pushButton_2_clicked();

  void on_pushButton_clicked();

  void on_pushButton_3_clicked();

  void on_pushButton_4_clicked();

  void on_pushButton_5_clicked();

  void on_btn_jieyue_clicked();

  void on_pushButton_8_clicked();

  void on_btn_help_clicked();

private:
  Ui::Admin *ui;
  QString path;
};

#endif // ADMIN_H
