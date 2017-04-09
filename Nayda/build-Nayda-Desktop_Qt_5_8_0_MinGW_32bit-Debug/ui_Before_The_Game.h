/********************************************************************************
** Form generated from reading UI file 'Before_The_Game.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEFORE_THE_GAME_H
#define UI_BEFORE_THE_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_Application
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Settings;
    QPushButton *Create_Lobby;
    QPushButton *About_Authors;
    QPushButton *Find_Lobby;
    QPushButton *btnHide;
    QPushButton *pushButton;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Main_Application)
    {
        if (Main_Application->objectName().isEmpty())
            Main_Application->setObjectName(QStringLiteral("Main_Application"));
        Main_Application->resize(1244, 797);
        centralWidget = new QWidget(Main_Application);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(80, 100, 151, 251));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Settings = new QPushButton(gridLayoutWidget);
        Settings->setObjectName(QStringLiteral("Settings"));

        gridLayout->addWidget(Settings, 2, 0, 1, 1);

        Create_Lobby = new QPushButton(gridLayoutWidget);
        Create_Lobby->setObjectName(QStringLiteral("Create_Lobby"));

        gridLayout->addWidget(Create_Lobby, 0, 0, 1, 1);

        About_Authors = new QPushButton(gridLayoutWidget);
        About_Authors->setObjectName(QStringLiteral("About_Authors"));

        gridLayout->addWidget(About_Authors, 3, 0, 1, 1);

        Find_Lobby = new QPushButton(gridLayoutWidget);
        Find_Lobby->setObjectName(QStringLiteral("Find_Lobby"));

        gridLayout->addWidget(Find_Lobby, 1, 0, 1, 1);

        btnHide = new QPushButton(gridLayoutWidget);
        btnHide->setObjectName(QStringLiteral("btnHide"));

        gridLayout->addWidget(btnHide, 5, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(250, 100, 301, 251));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Main_Application->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Main_Application);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1244, 22));
        Main_Application->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Main_Application);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Main_Application->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Main_Application);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Main_Application->setStatusBar(statusBar);

        retranslateUi(Main_Application);

        QMetaObject::connectSlotsByName(Main_Application);
    } // setupUi

    void retranslateUi(QMainWindow *Main_Application)
    {
        Main_Application->setWindowTitle(QApplication::translate("Main_Application", "Main_Application", Q_NULLPTR));
        Settings->setText(QApplication::translate("Main_Application", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", Q_NULLPTR));
        Create_Lobby->setText(QApplication::translate("Main_Application", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\267\320\260\320\273", Q_NULLPTR));
        About_Authors->setText(QApplication::translate("Main_Application", "\320\236\320\261 \320\220\320\262\321\202\320\276\321\200\320\260\321\205", Q_NULLPTR));
        Find_Lobby->setText(QApplication::translate("Main_Application", "\320\235\320\260\320\271\321\202\320\270 \320\267\320\260\320\273", Q_NULLPTR));
        btnHide->setText(QApplication::translate("Main_Application", "btnHide", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Main_Application", "\320\222\321\213\321\205\320\276\320\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Main_Application: public Ui_Main_Application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEFORE_THE_GAME_H
