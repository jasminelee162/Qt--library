#include "widget.h"

#include "admin.h"
#include "login.h"
#include "user.h"
#include <QApplication>
#include <QFile>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

bool connectToDatabase() {
  QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
  db.setHostName("localhost");
  db.setDatabaseName("library");
  db.setUserName("root");   // MySQL 用户名
  db.setPassword("cMS050306"); // MySQL 密码
  if (!db.open()) {
    QMessageBox::critical(nullptr, "Database Connection",
                          "Failed to connect to database: " +
                              db.lastError().text());
    return false;
  }
  return true;
}

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  //加载样式表
  QFile file(":/css/index.css");
  if (file.open(QFile::ReadOnly)) {
    QString qss = QLatin1String(file.readAll());
    qApp->setStyleSheet(qss);
    file.close();
  }

  //全局字体
  QFont font("Arial", 12);
  a.setFont(font);

  // 连接数据库
  if (!connectToDatabase()) {
    return -1;
  }

  Login w;
  w.show();
  return a.exec();
}
