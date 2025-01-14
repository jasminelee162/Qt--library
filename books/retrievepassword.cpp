#include "retrievepassword.h"
#include "ui_retrievepassword.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include "login.h"
RetrievePassword::RetrievePassword(QWidget *parent) :
                                                      QWidget(parent),
                                                      ui(new Ui::RetrievePassword)
{
  ui->setupUi(this);
  //resize(800,600);
  this->setWindowTitle(QString::fromLocal8Bit("找回密码"));
   ui->lineEdit_2->setText(QString::fromLocal8Bit("点击下方按钮找回密码"));

}

RetrievePassword::~RetrievePassword()
{
  delete ui;
}

void RetrievePassword::on_pushButton_clicked() {
  QString username = ui->lineEdit->text();
  QString email = ui->lineEdit_3->text();

  if (username.isEmpty() || email.isEmpty()) {
    QMessageBox::warning(this, "Input Error",
                         "Username and Email must not be empty.");
    return;
  }

  QSqlQuery query;
  query.prepare("SELECT password FROM users WHERE username = ? AND email = ?");
  query.addBindValue(username);
  query.addBindValue(email);

  if (query.exec() && query.next()) {
    QString hashedPassword =
        query.value("password").toString(); // 从数据库中获取加密后的密码
    ui->lineEdit_2->setText(hashedPassword);
  } else {
    QMessageBox::warning(
        this, "Error",
        "No account found with the provided username and email.");
  }
}

void RetrievePassword::on_pushButton_2_clicked()
{
    this->close();
    Login* login = new Login;
    login->show();
}
