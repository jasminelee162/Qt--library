#ifndef LOGIN_H
#define LOGIN_H

#include "admin.h"
#include "register.h"
#include "retrievepassword.h"
#include "user.h"
#include <QWidget>

namespace Ui {
class Login;
}

class Login : public QWidget
{
  Q_OBJECT

public:
  explicit Login(QWidget *parent = nullptr);
  ~Login();

private slots:
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

  void on_pushButton_3_clicked();



  void on_pswCheck_clicked();

private:
  Ui::Login *ui;
  Register *reg;
  RetrievePassword *Rp1;
  Admin *A1;
  User *U1;
};

#endif // LOGIN_H
