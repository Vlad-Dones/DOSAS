/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayoutSearch;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonSearch;
    QLineEdit *lineEditSearch;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("* {\n"
"	font-weight: 400;\n"
"	font-size: 14px;\n"
"	line-height: 105%;\n"
"\n"
"	color: #232323;\n"
"	\n"
"	border: none;\n"
"	background: #F7F7F7;\n"
"	/*border-radius: 10px;*/\n"
"   }"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayoutSearch = new QHBoxLayout();
        horizontalLayoutSearch->setObjectName(QString::fromUtf8("horizontalLayoutSearch"));
        horizontalLayoutSearch->setContentsMargins(6, -1, 6, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutSearch->addItem(horizontalSpacer);

        pushButtonSearch = new QPushButton(centralwidget);
        pushButtonSearch->setObjectName(QString::fromUtf8("pushButtonSearch"));
        pushButtonSearch->setMinimumSize(QSize(80, 22));
        pushButtonSearch->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"\n"
"\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 18px;\n"
"\n"
"color: #FFFFFF;\n"
"text-align: center;\n"
"\n"
"background: #4169E1;\n"
"border-radius: 6px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background: #0000F6;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #0000CD;\n"
"}\n"
"\n"
"\n"
"QPushButton:disabled{\n"
"			\n"
"	color: rgba(35, 35, 35, 24%);\n"
"	background: rgba(35, 35, 35, 6%);\n"
"}"));

        horizontalLayoutSearch->addWidget(pushButtonSearch);

        lineEditSearch = new QLineEdit(centralwidget);
        lineEditSearch->setObjectName(QString::fromUtf8("lineEditSearch"));
        lineEditSearch->setMinimumSize(QSize(400, 22));
        lineEditSearch->setMaximumSize(QSize(246, 16777215));
        lineEditSearch->setContextMenuPolicy(Qt::NoContextMenu);
        lineEditSearch->setStyleSheet(QString::fromUtf8("\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 18px;\n"
"\n"
"color: #000000;\n"
"border: 1px solid #232323;\n"
"border-radius: 6px;\n"
"\n"
"background-color: #FFFFFF;\n"
"background-image: url(:/sources/resources/img/search-icon_21x13.png); \n"
"background-repeat: no-repeat;\n"
"background-position: center right;\n"
"\n"
""));
        lineEditSearch->setMaxLength(64);
        lineEditSearch->setAlignment(Qt::AlignCenter);
        lineEditSearch->setClearButtonEnabled(true);

        horizontalLayoutSearch->addWidget(lineEditSearch);


        verticalLayout->addLayout(horizontalLayoutSearch);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEnabled(true);
        tableView->setMouseTracking(true);
        tableView->setTabletTracking(true);
        tableView->setStyleSheet(QString::fromUtf8("/* style in styles.qss */\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        tableView->setFrameShape(QFrame::NoFrame);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionMode(QAbstractItemView::NoSelection);
        tableView->setSortingEnabled(false);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\320\265\320\264\320\266\320\265\321\200 \320\277\320\260\321\200\320\276\320\273\320\265\320\271", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("MainWindow", "\320\244\320\270\320\273\321\214\321\202\321\200", nullptr));
        lineEditSearch->setText(QString());
        lineEditSearch->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\220\320\264\321\200\320\265\321\201 \321\201\320\260\320\271\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
