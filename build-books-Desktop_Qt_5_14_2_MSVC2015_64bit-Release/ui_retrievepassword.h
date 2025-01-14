/********************************************************************************
** Form generated from reading UI file 'retrievepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETRIEVEPASSWORD_H
#define UI_RETRIEVEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RetrievePassword
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *RetrievePassword)
    {
        if (RetrievePassword->objectName().isEmpty())
            RetrievePassword->setObjectName(QString::fromUtf8("RetrievePassword"));
        RetrievePassword->resize(800, 600);
        RetrievePassword->setStyleSheet(QString::fromUtf8(" QWidget{ background-color: qlineargradient(spread:pad, x1:0.505618, y1:0, x2:0.494, y2:0.806818, stop:0 rgba(255, 171, 195, 255), stop:1 rgba(252, 245, 234, 255)); };\n"
"\n"
"QFrame { background-color: transparent; };"));
        label = new QLabel(RetrievePassword);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 100, 301, 51));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"Agency FB\";"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icon/findPswLabel.PNG")));
        label->setScaledContents(true);
        label_2 = new QLabel(RetrievePassword);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 220, 61, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icon/unLabel.PNG")));
        label_2->setScaledContents(true);
        lineEdit = new QLineEdit(RetrievePassword);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(410, 220, 200, 41));
        lineEdit->setMinimumSize(QSize(200, 30));
        lineEdit->setStyleSheet(QString::fromUtf8("QTableView,QLineEdit{ background-color: #fcf5ea; border: 1px solid #DCDFE6; border-radius: 6px; padding: 5px 10px; font-size: 20px; }\n"
"QLineEdit:hover{ border: 1px solid #ff577a; }"));
        label_4 = new QLabel(RetrievePassword);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(240, 300, 54, 30));
        label_4->setMinimumSize(QSize(50, 0));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icon/emailLabel.PNG")));
        label_4->setScaledContents(true);
        lineEdit_3 = new QLineEdit(RetrievePassword);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(410, 300, 200, 41));
        lineEdit_3->setMinimumSize(QSize(200, 30));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QTableView,QLineEdit{ background-color: #fcf5ea; border: 1px solid #DCDFE6; border-radius: 6px; padding: 5px 10px; font-size: 20px; }\n"
"QLineEdit:hover{ border: 1px solid #ff577a; }"));
        lineEdit_2 = new QLineEdit(RetrievePassword);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(210, 390, 371, 51));
        lineEdit_2->setMinimumSize(QSize(200, 30));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QTableView,QLineEdit{ background-color: #fcf5ea; border: 1px solid #DCDFE6; border-radius: 6px; padding: 5px 10px; font-size: 20px; }\n"
"QLineEdit:hover{ border: 1px solid #ff577a; }"));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(RetrievePassword);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 480, 101, 51));
        pushButton->setMinimumSize(QSize(70, 40));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 20px; }\n"
"QPushButton:hover { color: #ffffff; font-weight: bold; background-color: #fd839a; }"));
        pushButton_2 = new QPushButton(RetrievePassword);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 480, 111, 51));
        pushButton_2->setMinimumSize(QSize(70, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 20px; }\n"
"QPushButton:hover { color: #ffffff; font-weight: bold; background-color: #fd839a; }"));

        retranslateUi(RetrievePassword);

        QMetaObject::connectSlotsByName(RetrievePassword);
    } // setupUi

    void retranslateUi(QWidget *RetrievePassword)
    {
        RetrievePassword->setWindowTitle(QCoreApplication::translate("RetrievePassword", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_4->setText(QString());
        pushButton->setText(QCoreApplication::translate("RetrievePassword", "\346\211\276\345\233\236\345\257\206\347\240\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("RetrievePassword", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RetrievePassword: public Ui_RetrievePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETRIEVEPASSWORD_H
