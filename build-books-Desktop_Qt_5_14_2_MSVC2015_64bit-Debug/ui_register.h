/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(800, 600);
        Register->setStyleSheet(QString::fromUtf8("\n"
"QWidget{ background-color: qlineargradient(spread:pad, x1:0.505618, y1:0, x2:0.494, y2:0.806818, stop:0 rgba(255, 171, 195, 255), stop:1 rgba(252, 245, 234, 255)); };\n"
"\n"
"QFrame { background-color: transparent; };"));
        label = new QLabel(Register);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 70, 231, 51));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"Agency FB\";"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icon/regLabel.PNG")));
        label->setScaledContents(true);
        label_2 = new QLabel(Register);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 160, 71, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icon/unLabel.PNG")));
        label_2->setScaledContents(true);
        lineEdit = new QLineEdit(Register);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(390, 160, 200, 41));
        lineEdit->setMinimumSize(QSize(200, 30));
        lineEdit->setStyleSheet(QString::fromUtf8("QTableView,QLineEdit{ background-color: #fcf5ea; border: 1px solid #DCDFE6; border-radius: 6px; padding: 5px 10px; font-size: 20px; }\n"
"QLineEdit:hover{ border: 1px solid #ff577a; }"));
        label_3 = new QLabel(Register);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 230, 61, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/icon/pswLabel.PNG")));
        label_3->setScaledContents(true);
        lineEdit_2 = new QLineEdit(Register);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(390, 230, 200, 41));
        lineEdit_2->setMinimumSize(QSize(200, 30));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QTableView,QLineEdit{ background-color: #fcf5ea; border: 1px solid #DCDFE6; border-radius: 6px; padding: 5px 10px; font-size: 20px; }\n"
"QLineEdit:hover{ border: 1px solid #ff577a; }"));
        label_4 = new QLabel(Register);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(210, 300, 61, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icon/emailLabel.PNG")));
        label_4->setScaledContents(true);
        lineEdit_3 = new QLineEdit(Register);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(390, 300, 200, 41));
        lineEdit_3->setMinimumSize(QSize(200, 30));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QTableView,QLineEdit{ background-color: #fcf5ea; border: 1px solid #DCDFE6; border-radius: 6px; padding: 5px 10px; font-size: 20px; }\n"
"QLineEdit:hover{ border: 1px solid #ff577a; }"));
        label_5 = new QLabel(Register);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(210, 370, 61, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/icon/adminLabel.PNG")));
        label_5->setScaledContents(true);
        comboBox = new QComboBox(Register);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(390, 370, 200, 41));
        comboBox->setMinimumSize(QSize(200, 25));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox, QLineEdit, QTextEdit, QTextBrowser, QTimeEdit, QDateEdit, QDateTimeEdit, QSpinBox,\n"
"QDoubleSpinBox { background-color: #fcf5ea; border: 1px solid #ff577a; border-radius: 6px; padding: 5px 10px; font-size: 20px; }\n"
"QTextEdit, QTextBrowser { padding-right: 3px; }\n"
"QLineEdit:hover, QComboBox:hover, QTimeEdit:hover, QDateEdit:hover, QDateTimeEdit:hover, QSpinBox:hover, QDoubleSpinBox:hover { border: 1px solid #ff577a; }\n"
"QComboBox::down-arrow { width:10px; height:10px; right:2px; image:url(:/icons/down.png); }\n"
"QComboBox::drop-down { subcontrol-origin:padding; subcontrol-position:top right; width:15px; border-left-width:0px; border-left-style:solid; border-top-right-radius:3px; border-bottom-right-radius:3px; border-left-color:#ff577a; }\n"
"QComboBox QAbstractItemView::item{ min-height:20px; min-width:10px; }\n"
"QComboBox::drop-down:on{ top: 1px; }"));
        pushButton = new QPushButton(Register);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 460, 111, 41));
        pushButton->setMinimumSize(QSize(80, 40));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 20px; }\n"
"QPushButton:hover { color: #ffffff; font-weight: bold; background-color: #fd839a; }"));
        pushButton_2 = new QPushButton(Register);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(480, 460, 111, 41));
        pushButton_2->setMinimumSize(QSize(80, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 20px; }\n"
"QPushButton:hover { color: #ffffff; font-weight: bold; background-color: #fd839a; }"));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        pushButton->setText(QCoreApplication::translate("Register", "\346\263\250\345\206\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Register", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
