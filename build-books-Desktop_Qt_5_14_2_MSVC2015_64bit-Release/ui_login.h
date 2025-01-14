/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QFrame *frame;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pswCheck;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(800, 600);
        Login->setMinimumSize(QSize(800, 600));
        frame = new QFrame(Login);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 600));
        frame->setStyleSheet(QString::fromUtf8("QFrame{ background-color: qlineargradient(spread:pad, x1:0.505618, y1:0, x2:0.494, y2:0.806818, stop:0 rgba(255, 171, 195, 255), stop:1 rgba(252, 245, 234, 255)); };\n"
"\n"
"QFrame QWidget{ background-color: transparent; };"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 80, 361, 71));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"Agency FB\";"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icon/title.png")));
        label->setScaledContents(true);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(360, 220, 211, 41));
        lineEdit->setTabletTracking(true);
        lineEdit->setStyleSheet(QString::fromUtf8("QTableView,QLineEdit{ background-color: #fcf5ea; border: 1px solid #DCDFE6; border-radius: 6px; padding: 5px 10px; font-size: 20px; }\n"
"QLineEdit:hover{ border: 1px solid #ff577a; }"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 220, 101, 41));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icon/unLabel.PNG")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 320, 81, 41));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/icon/pswLabel.PNG")));
        label_3->setScaledContents(true);
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(360, 320, 211, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QTableView,QLineEdit{ background-color: #fcf5ea; border: 1px solid #DCDFE6; border-radius: 6px; padding: 5px 10px; font-size: 20px; }\n"
"QLineEdit:hover{ border: 1px solid #ff577a; }"));
        lineEdit_2->setInputMethodHints(Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText);
        lineEdit_2->setEchoMode(QLineEdit::Password);
        pswCheck = new QPushButton(frame);
        pswCheck->setObjectName(QString::fromUtf8("pswCheck"));
        pswCheck->setGeometry(QRect(600, 320, 40, 40));
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(150, 450, 491, 71));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(80, 40));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 20px; }\n"
"QPushButton:hover { color: #ffffff; font-weight: bold; background-color: #fd839a; }\n"
""));

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(80, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 20px; }\n"
"QPushButton:hover { color: #ffffff; font-weight: bold; background-color: #fd839a; }\n"
""));

        horizontalLayout_3->addWidget(pushButton_2);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_12);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(60, 40));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 20px; }\n"
"QPushButton:hover { color: #ffffff; font-weight: bold; background-color: #fd839a; }"));

        horizontalLayout_3->addWidget(pushButton_3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        pswCheck->setText(QString());
        pushButton->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Login", "\346\211\276\345\233\236\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
