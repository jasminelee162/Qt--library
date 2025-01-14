/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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

class Ui_User
{
public:
    QGridLayout *gridLayout;
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
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QWidget *widget_jieyue;
    QGridLayout *gridLayout_6;
    QFrame *frame_3;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QTableView *tableView_2;
    QWidget *widget_tongzhi;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_4;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_9;
    QTableView *tableView_3;
    QWidget *widget_help;
    QVBoxLayout *verticalLayout_10;
    QFrame *frame_5;
    QGridLayout *gridLayout_5;
    QTextEdit *textEdit;

    void setupUi(QWidget *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName(QString::fromUtf8("User"));
        User->resize(800, 600);
        gridLayout = new QGridLayout(User);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(User);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("QFrame { background-color: #ffffff; };\n"
"QFrame QWidget { background-color: transparent; };"));
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
        tool->setMinimumSize(QSize(0, 0));
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
        btn_book->setStyleSheet(QString::fromUtf8("QToolButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 13px; }\n"
"QToolButton:hover { color: #ffffff; font-weight: bold; background-color: #fd839a; }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/Mybooks.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_book->setIcon(icon);
        btn_book->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(btn_book);

        btn_jieyue = new QToolButton(tool);
        btn_jieyue->setObjectName(QString::fromUtf8("btn_jieyue"));
        sizePolicy.setHeightForWidth(btn_jieyue->sizePolicy().hasHeightForWidth());
        btn_jieyue->setSizePolicy(sizePolicy);
        btn_jieyue->setMinimumSize(QSize(40, 40));
        btn_jieyue->setStyleSheet(QString::fromUtf8("QToolButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 13px; }\n"
"QToolButton:hover { color: #ffffff; font-weight: bold; background-color: #fd839a; }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/one_person.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_jieyue->setIcon(icon1);
        btn_jieyue->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(btn_jieyue);

        btn_tongzhi = new QToolButton(tool);
        btn_tongzhi->setObjectName(QString::fromUtf8("btn_tongzhi"));
        sizePolicy.setHeightForWidth(btn_tongzhi->sizePolicy().hasHeightForWidth());
        btn_tongzhi->setSizePolicy(sizePolicy);
        btn_tongzhi->setMinimumSize(QSize(40, 40));
        btn_tongzhi->setStyleSheet(QString::fromUtf8("QToolButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 13px; }\n"
"QToolButton:hover { color: #ffffff; font-weight: bold; background-color: #fd839a; }"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/Mytongzhi.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_tongzhi->setIcon(icon2);
        btn_tongzhi->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(btn_tongzhi);

        btn_help = new QToolButton(tool);
        btn_help->setObjectName(QString::fromUtf8("btn_help"));
        sizePolicy.setHeightForWidth(btn_help->sizePolicy().hasHeightForWidth());
        btn_help->setSizePolicy(sizePolicy);
        btn_help->setMinimumSize(QSize(40, 40));
        btn_help->setStyleSheet(QString::fromUtf8("QToolButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 13px; }\n"
"QToolButton:hover { color: #ffffff; font-weight: bold; background-color: #fd839a; }"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_help->setIcon(icon3);
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
"QPushButton:hover { color: #ffffff; font-weight: bold; background-color: #fd839a; }\n"
"QTableView,QLineEdit{ background-color: #ffffff; border: 1px solid #DCDFE6; border-radius: 6px; padding: 5px 10px; font-size: 13px; }\n"
"QLineEdit:hover{ border: 1px solid #409EFF; }"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_2);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";"));

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(50, 29));
        pushButton->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(50, 30));
        pushButton_2->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        tableView = new QTableView(frame_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setMinimumSize(QSize(0, 490));
        tableView->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setTextElideMode(Qt::ElideMiddle);
        tableView->horizontalHeader()->setHighlightSections(false);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setHighlightSections(false);

        verticalLayout_3->addWidget(tableView);


        verticalLayout_5->addLayout(verticalLayout_3);


        gridLayout_3->addWidget(frame_2, 0, 0, 1, 1);

        stackedWidget->addWidget(wighet_book);
        widget_jieyue = new QWidget();
        widget_jieyue->setObjectName(QString::fromUtf8("widget_jieyue"));
        gridLayout_6 = new QGridLayout(widget_jieyue);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(widget_jieyue);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setStyleSheet(QString::fromUtf8("QPushButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 13px; }\n"
"QPushButton:hover { color: #ffffff; font-weight: bold; background-color: #fd839a; }\n"
"QTableView,QLineEdit{ background-color: #ffffff; border: 1px solid #DCDFE6; border-radius: 6px; padding: 5px 10px; font-size: 13px; }\n"
"QLineEdit:hover{ border: 1px solid #409EFF; }"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frame_3);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        lineEdit_2 = new QLineEdit(frame_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setReadOnly(true);

        horizontalLayout_7->addWidget(lineEdit_2);


        verticalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        lineEdit_3 = new QLineEdit(frame_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_3);


        verticalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_9->addWidget(label_7);

        lineEdit_4 = new QLineEdit(frame_3);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit_4);


        verticalLayout_6->addLayout(horizontalLayout_9);


        horizontalLayout_10->addLayout(verticalLayout_6);

        label = new QLabel(frame_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(190, 160));
        label->setMaximumSize(QSize(250, 16777215));
        label->setStyleSheet(QString::fromUtf8(" border-radius: 6px"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icon/touxiang.png")));
        label->setScaledContents(true);

        horizontalLayout_10->addWidget(label);


        verticalLayout_8->addLayout(horizontalLayout_10);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(10);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";"));

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

        pushButton_3 = new QPushButton(frame_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(50, 30));

        horizontalLayout_5->addWidget(pushButton_3);

        pushButton_8 = new QPushButton(frame_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setMinimumSize(QSize(50, 30));
        pushButton_8->setMaximumSize(QSize(16777215, 30));
        pushButton_8->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Agency FB\";"));

        horizontalLayout_5->addWidget(pushButton_8);


        verticalLayout_7->addLayout(horizontalLayout_5);

        tableView_2 = new QTableView(frame_3);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setMinimumSize(QSize(0, 250));
        tableView_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        tableView_2->horizontalHeader()->setHighlightSections(false);
        tableView_2->verticalHeader()->setVisible(false);
        tableView_2->verticalHeader()->setHighlightSections(false);

        verticalLayout_7->addWidget(tableView_2);


        verticalLayout_8->addLayout(verticalLayout_7);


        gridLayout_7->addLayout(verticalLayout_8, 0, 0, 1, 1);


        gridLayout_6->addWidget(frame_3, 0, 0, 1, 1);

        stackedWidget->addWidget(widget_jieyue);
        widget_tongzhi = new QWidget();
        widget_tongzhi->setObjectName(QString::fromUtf8("widget_tongzhi"));
        verticalLayout_4 = new QVBoxLayout(widget_tongzhi);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(widget_tongzhi);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setStyleSheet(QString::fromUtf8("QPushButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 13px; }\n"
"QPushButton:hover { color: #ffffff; font-weight: bold; background-color: #fd839a; }\n"
"QTableView,QLineEdit{ background-color: #ffffff; border: 1px solid #DCDFE6; border-radius: 6px; padding: 5px 10px; font-size: 13px; }\n"
"QLineEdit:hover{ border: 1px solid #409EFF; }"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";"));

        horizontalLayout_6->addWidget(label_4);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);


        verticalLayout_9->addLayout(horizontalLayout_6);

        tableView_3 = new QTableView(frame_4);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));
        tableView_3->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\256\213\344\275\223\";"));
        tableView_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_3->setTextElideMode(Qt::ElideMiddle);
        tableView_3->horizontalHeader()->setHighlightSections(false);
        tableView_3->verticalHeader()->setVisible(false);
        tableView_3->verticalHeader()->setHighlightSections(false);

        verticalLayout_9->addWidget(tableView_3);


        gridLayout_4->addLayout(verticalLayout_9, 0, 0, 1, 1);


        verticalLayout_4->addWidget(frame_4);

        stackedWidget->addWidget(widget_tongzhi);
        widget_help = new QWidget();
        widget_help->setObjectName(QString::fromUtf8("widget_help"));
        verticalLayout_10 = new QVBoxLayout(widget_help);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
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
        textEdit = new QTextEdit(frame_5);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("border-color: rgb(220, 223, 230);\n"
"font: 14pt \"\345\256\213\344\275\223\";"));
        textEdit->setReadOnly(true);

        gridLayout_5->addWidget(textEdit, 0, 0, 1, 1);


        verticalLayout_10->addWidget(frame_5);

        stackedWidget->addWidget(widget_help);

        horizontalLayout->addWidget(stackedWidget);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QWidget *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "Form", nullptr));
        btn_book->setText(QCoreApplication::translate("User", "\345\233\276\344\271\246\345\212\237\350\203\275", nullptr));
        btn_jieyue->setText(QCoreApplication::translate("User", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        btn_tongzhi->setText(QCoreApplication::translate("User", "\346\237\245\347\234\213\351\200\232\347\237\245", nullptr));
        btn_help->setText(QCoreApplication::translate("User", "\345\270\256\345\212\251\346\226\207\346\241\243", nullptr));
        label_2->setText(QCoreApplication::translate("User", "\345\233\276\344\271\246\345\212\237\350\203\275\351\241\265\351\235\242", nullptr));
        pushButton->setText(QCoreApplication::translate("User", "\346\220\234\347\264\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("User", "\345\200\237\351\230\205\345\233\276\344\271\246", nullptr));
        label_5->setText(QCoreApplication::translate("User", "\347\224\250\346\210\267\345\220\215:", nullptr));
        label_6->setText(QCoreApplication::translate("User", "\351\202\256   \347\256\261:", nullptr));
        label_7->setText(QCoreApplication::translate("User", "\346\235\203   \351\231\220:", nullptr));
        label->setText(QString());
        label_3->setText(QCoreApplication::translate("User", "\345\200\237\344\271\246\344\277\241\346\201\257", nullptr));
        pushButton_3->setText(QCoreApplication::translate("User", "\345\275\222\350\277\230\345\233\276\344\271\246", nullptr));
        pushButton_8->setText(QCoreApplication::translate("User", "\345\257\274\345\207\272\345\200\237\351\230\205\344\277\241\346\201\257", nullptr));
        label_4->setText(QCoreApplication::translate("User", "\351\200\232\347\237\245\351\241\265\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
