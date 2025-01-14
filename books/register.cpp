#include "register.h"
#include "ui_register.h"
#include <QCryptographicHash>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include "login.h"
Register::Register(QWidget *parent) :
                                      QWidget(parent),
                                      ui(new Ui::Register)
{
  ui->setupUi(this);
 // resize(800,600);
  this->setWindowTitle(QString::fromLocal8Bit("注册页面"));
  ui->comboBox->addItem(QString::fromLocal8Bit("管理员"));
  ui->comboBox->addItem(QString::fromLocal8Bit("用户"));
}

Register::~Register()
{
  delete ui;
}

void Register::on_pushButton_clicked() {
  QString username = ui->lineEdit->text();
  QString password = ui->lineEdit_2->text();
  QString email = ui->lineEdit_3->text();
  bool isAdmin;
  if (ui->comboBox->currentIndex() == 0) {
    isAdmin = true;
  } else {
    isAdmin = false;
  }

  // 密码加密处理（这里只是简单示例，实际中应该用更强的加密方式）
  //  QString hashedPassword =
  //      QCryptographicHash::hash(password.toUtf8(),
  //      QCryptographicHash::Sha256)
  //          .toHex();

  QSqlQuery query;
  query.prepare("INSERT INTO users (username, password, email, role) VALUES "
                "(?, ?, ?, ?)");
  query.addBindValue(username);
  query.addBindValue(password);
  query.addBindValue(email);
  query.addBindValue(isAdmin ? 1 : 0); // 根据复选框设置角色

  if (!query.exec()) {
    QMessageBox::critical(this, QString::fromLocal8Bit("无法注册"), QString::fromLocal8Bit("无法成功注册，请重试"));
  } else {
    QMessageBox::information(this, QString::fromLocal8Bit("注册成功"), QString::fromLocal8Bit("用户注册成功"));
    this->close();
    Login* login=new Login();
    login->show();
  }
}

void Register::on_pushButton_2_clicked()
{
    this->close();
    Login* login=new Login();
    login->show();
}
