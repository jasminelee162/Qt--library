#ifndef RETRIEVEPASSWORD_H
#define RETRIEVEPASSWORD_H

#include <QWidget>

namespace Ui {
class RetrievePassword;
}

class RetrievePassword : public QWidget
{
  Q_OBJECT

public:
  explicit RetrievePassword(QWidget *parent = nullptr);
  ~RetrievePassword();

private slots:
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

private:
  Ui::RetrievePassword *ui;
};

#endif // RETRIEVEPASSWORD_H
