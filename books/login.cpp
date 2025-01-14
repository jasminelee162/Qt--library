#include "login.h"
#include "ui_login.h"
#include <QCryptographicHash>
#include <QDebug>
#include <QMessageBox>
#include <QSqlQuery>

Login::Login(QWidget *parent) :
                                QWidget(parent),
                                ui(new Ui::Login)
{
  ui->setupUi(this);
     ui->lineEdit_2->setEchoMode(QLineEdit::Password);
     ui->pswCheck->setIcon(QIcon(":/icon/eye_close.png"));
  //resize(800,600);
  reg = new Register;
  Rp1 = new RetrievePassword;
  A1 = new Admin;
  U1 = new User;

  this->setWindowTitle(QString::fromLocal8Bit("登录界面"));
}

Login::~Login() { delete ui; }

void Login::on_pushButton_clicked() {
  QString username = ui->lineEdit->text();
  QString password = ui->lineEdit_2->text();

  QSqlQuery query;
  query.prepare("SELECT * FROM users WHERE username = ? AND password = ?");
  query.addBindValue(username);
  query.addBindValue(password);

  if (query.exec() && query.next()) {
    int role = query.value("role").toInt(); // 获取用户角色

    if (role == 1) {
      // 登录成功，管理员权限
      A1->show();
      this->close();
    } else {
      // 登录成功，普通用户权限
      U1->show();
      U1->userId = query.value("user_id").toInt();
      U1->displayTonZInTableView(U1->t1);
      this->close();
    }
  } else {
      // 弹出选择信息框
              QMessageBox msgBox;
              msgBox.setWindowTitle(QString::fromLocal8Bit("登录失败"));
              msgBox.setText(QString::fromLocal8Bit("无法登录。是否需要找回密码?"));
              msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
              msgBox.setDefaultButton(QMessageBox::Yes);

              int ret = msgBox.exec();

              if (ret == QMessageBox::Yes) {
                  // 用户选择“是”，打开找回密码窗口
                  this->close();
                  RetrievePassword *retrievepassword = new RetrievePassword();
                  retrievepassword->show();
              }
  }
}

void Login::on_pushButton_2_clicked() {
    this->close();
    reg->show();
}

void Login::on_pushButton_3_clicked() {
    this->close();
    Rp1->show();
}





void Login::on_pswCheck_clicked()
{
    if (ui->lineEdit_2->echoMode() == QLineEdit::Password) {
           ui->lineEdit_2->setEchoMode(QLineEdit::Normal);
           ui->pswCheck->setIcon(QIcon(":/icon/eye_open.png"));
       } else {
           ui->lineEdit_2->setEchoMode(QLineEdit::Password);
           ui->pswCheck->setIcon(QIcon(":/icon/eye_close.png"));
       }
}
