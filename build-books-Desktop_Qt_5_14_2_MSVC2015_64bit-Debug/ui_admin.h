/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QWidget *tool;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QToolButton *btn_book;
    QToolButton *btn_jieyue;
    QToolButton *btn_tongzhi;
    QToolButton *btn_help;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *wighet_book;
    QGridLayout *gridLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTableView *tableView;
    QWidget *widget_jieyue;
    QVBoxLayout *verticalLayout_8;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_8;
    QTableView *tableView_2;
    QWidget *widget_tongzhi;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_4;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_18;
    QSpacerItem *horizontalSpacer_26;
    QLabel *label_6;
    QDateEdit *dateEdit;
    QSpacerItem *horizontalSpacer_28;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_3;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_11;
    QWidget *widget_help;
    QGridLayout *gridLayout_6;
    QFrame *frame_5;
    QGridLayout *gridLayout_5;
    QTextEdit *textEdit_2;

    void setupUi(QWidget *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->resize(800, 600);
        Admin->setMinimumSize(QSize(800, 600));
        gridLayout_4 = new QGridLayout(Admin);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(Admin);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("QFrame { background-color: #ffffff; };\n"
"QFrame QWidget { background-color: transparent; };\n"
"background-image: url(:/icon/3.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tool = new QWidget(frame);
        tool->setObjectName(QString::fromUtf8("tool"));
        tool->setMinimumSize(QSize(200, 0));
        tool->setMaximumSize(QSize(150, 16777215));
        verticalLayout_2 = new QVBoxLayout(tool);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        btn_book = new QToolButton(tool);
        btn_book->setObjectName(QString::fromUtf8("btn_book"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_book->sizePolicy().hasHeightForWidth());
        btn_book->setSizePolicy(sizePolicy);
        btn_book->setMinimumSize(QSize(40, 40));
        btn_book->setLayoutDirection(Qt::LeftToRight);
        btn_book->setStyleSheet(QString::fromUtf8("QToolButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 22px; }\n"
"QToolButton:hover { color: #1E90FF; font-weight: bold; background-color: #fd839a; }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/gl.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_book->setIcon(icon);
        btn_book->setIconSize(QSize(22, 22));
        btn_book->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(btn_book);

        btn_jieyue = new QToolButton(tool);
        btn_jieyue->setObjectName(QString::fromUtf8("btn_jieyue"));
        sizePolicy.setHeightForWidth(btn_jieyue->sizePolicy().hasHeightForWidth());
        btn_jieyue->setSizePolicy(sizePolicy);
        btn_jieyue->setMinimumSize(QSize(40, 40));
        btn_jieyue->setStyleSheet(QString::fromUtf8("QToolButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 22px; }\n"
"QToolButton:hover { color: #1E90FF; font-weight: bold; background-color: #fd839a; }"));
        btn_jieyue->setIcon(icon);
        btn_jieyue->setIconSize(QSize(22, 22));
        btn_jieyue->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(btn_jieyue);

        btn_tongzhi = new QToolButton(tool);
        btn_tongzhi->setObjectName(QString::fromUtf8("btn_tongzhi"));
        sizePolicy.setHeightForWidth(btn_tongzhi->sizePolicy().hasHeightForWidth());
        btn_tongzhi->setSizePolicy(sizePolicy);
        btn_tongzhi->setMinimumSize(QSize(40, 40));
        btn_tongzhi->setStyleSheet(QString::fromUtf8("QToolButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 22px; }\n"
"QToolButton:hover { color: #1E90FF; font-weight: bold; background-color: #fd839a; }"));
        btn_tongzhi->setIcon(icon);
        btn_tongzhi->setIconSize(QSize(22, 22));
        btn_tongzhi->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(btn_tongzhi);

        btn_help = new QToolButton(tool);
        btn_help->setObjectName(QString::fromUtf8("btn_help"));
        sizePolicy.setHeightForWidth(btn_help->sizePolicy().hasHeightForWidth());
        btn_help->setSizePolicy(sizePolicy);
        btn_help->setMinimumSize(QSize(40, 40));
        btn_help->setStyleSheet(QString::fromUtf8("QToolButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 22px; }\n"
"QToolButton:hover { color: #1E90FF; font-weight: bold; background-color: #fd839a; }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_help->setIcon(icon1);
        btn_help->setIconSize(QSize(22, 22));
        btn_help->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(btn_help);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addWidget(tool);

        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(0, 0));
        wighet_book = new QWidget();
        wighet_book->setObjectName(QString::fromUtf8("wighet_book"));
        gridLayout_3 = new QGridLayout(wighet_book);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(wighet_book);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8("QPushButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 13px; }\n"
"QPushButton:hover { color: #1E90FF; font-weight: bold; background-color: #fd839a; }\n"
"QTableView,QLineEdit{ background-color: #ffffff; border: 1px solid #DCDFE6; border-radius: 6px; padding: 5px 10px; font-size: 13px; }\n"
"QLineEdit:hover{ border: 1px solid #409EFF; }"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_2);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB 13"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font: 30px \"Agency FB\" bold;"));
        label_2->setTextFormat(Qt::MarkdownText);
        label_2->setMargin(20);

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Agency FB\";"));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(50, 34));
        pushButton->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("table {\n"
"    border-collapse: separate; /* \344\277\235\346\214\201\345\215\225\345\205\203\346\240\274\345\210\206\347\246\273 */\n"
"    border-spacing: 12px; /* \345\215\225\345\205\203\346\240\274\351\227\264\350\267\235 */\n"
"    width: 80%; /* \350\241\250\346\240\274\345\256\275\345\272\246\345\215\240\346\273\241\345\256\271\345\231\250 */\n"
"    margin: 20px 0; /* \350\241\250\346\240\274\344\270\212\344\270\213\351\227\264\350\267\235 */\n"
"    background-color: rgba(252, 204, 28, 0.1); /* \350\241\250\346\240\274\346\225\264\344\275\223\350\203\214\346\231\257\357\274\214\345\270\246\351\200\217\346\230\216\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"/* \345\215\225\345\205\203\346\240\274\346\240\267\345\274\217 */\n"
"td, th {\n"
"    padding: 12px 16px; /* \345\215\225\345\205\203\346\240\274\345\206\205\350\276\271\350\267\235 */\n"
"    text-align: center; /* \346\226\207\346\234\254\345\261\205\344\270\255\345\257\271\351\275\220 */\n"
"    vertical-align: middle; /* \345\206\205\345\256\271"
                        "\345\236\202\347\233\264\345\261\205\344\270\255 */\n"
"    background-color: #fffbe6; /* \351\273\230\350\256\244\345\215\225\345\205\203\346\240\274\350\203\214\346\231\257 */\n"
"    border-radius: 8px; /* \345\215\225\345\205\203\346\240\274\345\234\206\350\247\222 */\n"
"    transition: transform 0.3s ease, box-shadow 0.3s ease; /* \345\271\263\346\273\221\345\212\250\347\224\273\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"/* \350\241\250\345\244\264\346\240\267\345\274\217 */\n"
"th {\n"
"    font-weight: bold;\n"
"    background-color: #fccc1c; /* \344\270\273\350\211\262\350\260\203\344\272\256\351\273\204\350\211\262 */\n"
"    color: #734012; /* \346\267\261\346\243\225\350\211\262\346\226\207\345\255\227 */\n"
"    text-transform: uppercase; /* \350\241\250\345\244\264\346\226\207\345\255\227\345\244\247\345\206\231 */\n"
"    pointer-events: none; /* \347\246\201\346\255\242\350\241\250\345\244\264\346\202\254\346\265\256\344\272\244\344\272\222 */\n"
"}\n"
"\n"
"/* \350\241\250\345\244\264\346\227\240"
                        "\346\202\254\346\265\256\346\225\210\346\236\234 */\n"
"th:hover {\n"
"    transform: none; /* \347\246\201\347\224\250\346\224\276\345\244\247\346\225\210\346\236\234 */\n"
"    box-shadow: none; /* \347\246\201\347\224\250\351\230\264\345\275\261\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"/* \350\241\214\346\202\254\346\265\256\346\225\210\346\236\234 */\n"
"tr {\n"
"    transition: transform 0.3s ease, box-shadow 0.3s ease; /* \350\241\214\346\202\254\346\265\256\345\212\250\347\224\273 */\n"
"}\n"
"\n"
"tr:hover {\n"
"    transform: scale(1.02); /* \346\225\264\350\241\214\347\225\245\345\276\256\346\224\276\345\244\247 */\n"
"    box-shadow: 0 8px 16px rgba(0, 0, 0, 0.15); /* \346\267\273\345\212\240\346\225\264\350\241\214\346\237\224\345\222\214\351\230\264\345\275\261 */\n"
"}\n"
"\n"
"/* \345\245\207\346\225\260\350\241\214\350\203\214\346\231\257 */\n"
"tr:nth-child(odd) td {\n"
"    background-color: rgba(252, 204, 28, 0.15); /* \351\200\217\346\230\216\344\272\256\351\273\204\350\211\262 */\n"
"}\n"
""
                        "\n"
"/* \345\201\266\346\225\260\350\241\214\350\203\214\346\231\257 */\n"
"tr:nth-child(even) td {\n"
"    background-color: rgba(252, 204, 28, 0.05); /* \346\233\264\346\265\205\351\273\204\350\211\262 */\n"
"}\n"
"\n"
"/* \345\215\225\345\205\203\346\240\274\344\271\213\351\227\264\347\232\204\351\227\264\350\267\235\350\260\203\346\225\264 */\n"
"td {\n"
"\n"
"    margin: 5px;\n"
"    border-spacing: 10px;\n"
"}"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(50, 34));
        pushButton_2->setMaximumSize(QSize(16777215, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Agency FB\";\n"
""));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(50, 34));
        pushButton_3->setMaximumSize(QSize(16777215, 30));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Agency FB\";\n"
""));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setMinimumSize(QSize(50, 34));
        pushButton_4->setMaximumSize(QSize(16777215, 30));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Agency FB\";\n"
""));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout_3->addLayout(horizontalLayout_2);

        tableView = new QTableView(frame_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setMinimumSize(QSize(0, 490));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,130);\n"
"color: rgb(0\357\274\2140\357\274\2140);\n"
"\n"
"font: 75 11pt \"Arial\";\n"
"border:3px groove black ;"));
        tableView->setAutoScrollMargin(16);
        tableView->setEditTriggers(QAbstractItemView::SelectedClicked);
        tableView->setIconSize(QSize(16, 16));
        tableView->setTextElideMode(Qt::ElideMiddle);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setHighlightSections(false);

        verticalLayout_3->addWidget(tableView);


        verticalLayout_5->addLayout(verticalLayout_3);


        gridLayout_3->addWidget(frame_2, 0, 0, 1, 1);

        stackedWidget->addWidget(wighet_book);
        widget_jieyue = new QWidget();
        widget_jieyue->setObjectName(QString::fromUtf8("widget_jieyue"));
        verticalLayout_8 = new QVBoxLayout(widget_jieyue);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(widget_jieyue);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setStyleSheet(QString::fromUtf8("QPushButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 13px; }\n"
"QPushButton:hover { color: #1E90FF; font-weight: bold; background-color: #fd839a; }\n"
"QTableView,QLineEdit{ background-color: #ffffff; border: 1px solid #DCDFE6; border-radius: 6px; padding: 5px 10px; font-size: 13px; }\n"
"QLineEdit:hover{ border: 1px solid #409EFF; }"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_3);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(10);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 30px \"Agency FB\" bold;"));
        label_3->setMargin(20);

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        pushButton_8 = new QPushButton(frame_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setMinimumSize(QSize(50, 34));
        pushButton_8->setMaximumSize(QSize(16777215, 30));
        pushButton_8->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Agency FB\";\n"
""));

        horizontalLayout_5->addWidget(pushButton_8);


        verticalLayout_7->addLayout(horizontalLayout_5);

        tableView_2 = new QTableView(frame_3);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setMinimumSize(QSize(0, 490));
        tableView_2->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";\n"
""));
        tableView_2->setAutoScrollMargin(16);
        tableView_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_2->setTextElideMode(Qt::ElideMiddle);
        tableView_2->horizontalHeader()->setHighlightSections(false);
        tableView_2->verticalHeader()->setVisible(false);
        tableView_2->verticalHeader()->setHighlightSections(false);

        verticalLayout_7->addWidget(tableView_2);


        verticalLayout_6->addLayout(verticalLayout_7);


        verticalLayout_8->addWidget(frame_3);

        stackedWidget->addWidget(widget_jieyue);
        widget_tongzhi = new QWidget();
        widget_tongzhi->setObjectName(QString::fromUtf8("widget_tongzhi"));
        verticalLayout_4 = new QVBoxLayout(widget_tongzhi);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        frame_4 = new QFrame(widget_tongzhi);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setStyleSheet(QString::fromUtf8("QPushButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 13px; }\n"
"QPushButton:hover { color: 	#1E90FF; font-weight: bold; background-color: #fd839a; }\n"
"QLineEdit,QTextEdit{ background-color: #ffffff; border: 1px solid #DCDFE6; border-radius: 6px; padding: 5px 10px; font-size: 13px; }\n"
"QTextEdit,QLineEdit:hover{ border: 1px solid #409EFF; }"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 30px \"Agency FB\" bold;"));
        label_4->setMargin(20);

        horizontalLayout_6->addWidget(label_4);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);


        verticalLayout_10->addLayout(horizontalLayout_6);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_14);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label = new QLabel(frame_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 13pt \"Agency FB\";"));

        horizontalLayout_9->addWidget(label);

        lineEdit_2 = new QLineEdit(frame_4);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(450, 0));

        horizontalLayout_9->addWidget(lineEdit_2);


        horizontalLayout_11->addLayout(horizontalLayout_9);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_15);


        verticalLayout_10->addLayout(horizontalLayout_11);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_26);

        label_6 = new QLabel(frame_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 13pt \"Agency FB\";"));

        horizontalLayout_18->addWidget(label_6);

        dateEdit = new QDateEdit(frame_4);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMinimumSize(QSize(450, 0));
        dateEdit->setStyleSheet(QString::fromUtf8("QTimeEdit::up-button, QDateEdit::up-button, QDateTimeEdit::up-button, QSpinBox::up-button, QDoubleSpinBox::up-button { width:10px; height:10px; image:url(:/icons/up.png); padding: 3px 8px 0px 0px; }\n"
"QTimeEdit::down-button, QDateEdit::down-button, QDateTimeEdit::down-button, QSpinBox::down-button, QDoubleSpinBox::down-button { width:10px; height:10px; image:url(:/icons/down.png); padding: 0px 8px 3px 0px; }\n"
"QTimeEdit::up-button:pressed, QDateEdit::up-button:pressed, QDateTimeEdit::up-button:pressed, QSpinBox::up-button:pressed, QDoubleSpinBox::up-button:pressed { top: -2px; }\n"
"QTimeEdit::down-button:pressed, QDateEdit::down-button:pressed, QDateTimeEdit::down-button:pressed, QSpinBox::down-button:pressed, QDoubleSpinBox::down-button:pressed { bottom: -2px; }"));

        horizontalLayout_18->addWidget(dateEdit);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_28);


        verticalLayout_10->addLayout(horizontalLayout_18);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_12 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_12);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_5 = new QLabel(frame_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 13pt \"Agency FB\";"));

        verticalLayout_9->addWidget(label_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_3);


        horizontalLayout_8->addLayout(verticalLayout_9);

        textEdit = new QTextEdit(frame_4);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMinimumSize(QSize(450, 0));
        textEdit->setStyleSheet(QString::fromUtf8("border-color: rgb(220, 223, 230);\n"
"font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_8->addWidget(textEdit);


        horizontalLayout_10->addLayout(horizontalLayout_8);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_13);


        verticalLayout_10->addLayout(horizontalLayout_10);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_10 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);

        horizontalSpacer_16 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_16);

        pushButton_5 = new QPushButton(frame_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(80, 40));
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Agency FB\";"));

        horizontalLayout_7->addWidget(pushButton_5);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);


        verticalLayout_10->addLayout(horizontalLayout_7);


        gridLayout->addLayout(verticalLayout_10, 0, 0, 1, 1);


        verticalLayout_4->addWidget(frame_4);

        stackedWidget->addWidget(widget_tongzhi);
        widget_help = new QWidget();
        widget_help->setObjectName(QString::fromUtf8("widget_help"));
        gridLayout_6 = new QGridLayout(widget_help);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        frame_5 = new QFrame(widget_help);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setStyleSheet(QString::fromUtf8("QPushButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 13px; }\n"
"QPushButton:hover { color: #ffffff; font-weight: bold; background-color: #fd839a; }\n"
"QLineEdit,QTextEdit{ background-color: #ffffff; border: 1px solid #DCDFE6; border-radius: 6px; padding: 5px 10px; font-size: 13px; }\n"
"QTextEdit,QLineEdit:hover{ border: 1px solid #409EFF; }"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(0);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        textEdit_2 = new QTextEdit(frame_5);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setStyleSheet(QString::fromUtf8("border-color: rgb(220, 223, 230);\n"
"font: 14pt \"\345\256\213\344\275\223\";"));
        textEdit_2->setReadOnly(true);

        gridLayout_5->addWidget(textEdit_2, 0, 0, 1, 1);


        gridLayout_6->addWidget(frame_5, 0, 0, 1, 1);

        stackedWidget->addWidget(widget_help);

        horizontalLayout->addWidget(stackedWidget);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QWidget *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "Form", nullptr));
        btn_book->setText(QCoreApplication::translate("Admin", "\345\233\276\344\271\246\347\256\241\347\220\206", nullptr));
        btn_jieyue->setText(QCoreApplication::translate("Admin", "\345\200\237\351\230\205\347\256\241\347\220\206", nullptr));
        btn_tongzhi->setText(QCoreApplication::translate("Admin", "\345\217\221\345\270\203\351\200\232\347\237\245", nullptr));
        btn_help->setText(QCoreApplication::translate("Admin", "\345\270\256\345\212\251", nullptr));
        label_2->setText(QCoreApplication::translate("Admin", "\345\233\276\344\271\246\347\256\241\347\220\206\351\241\265\351\235\242", nullptr));
        pushButton->setText(QCoreApplication::translate("Admin", "\346\220\234\347\264\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Admin", "\346\267\273\345\212\240", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Admin", "\344\277\256\346\224\271", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Admin", "\345\210\240\351\231\244", nullptr));
        label_3->setText(QCoreApplication::translate("Admin", "\345\200\237\351\230\205\347\256\241\347\220\206\351\241\265\351\235\242", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Admin", "\345\257\274\345\207\272\345\200\237\351\230\205\344\277\241\346\201\257", nullptr));
        label_4->setText(QCoreApplication::translate("Admin", "\351\200\232\347\237\245\347\256\241\347\220\206\351\241\265\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("Admin", "\346\240\207\351\242\230:", nullptr));
        label_6->setText(QCoreApplication::translate("Admin", "\346\227\266\351\227\264:", nullptr));
        label_5->setText(QCoreApplication::translate("Admin", "\345\206\205\345\256\271:", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Admin", "\345\217\221\345\270\203\351\200\232\347\237\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
