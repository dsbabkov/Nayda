/********************************************************************************
** Form generated from reading UI file 'main_application.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_APPLICATION_H
#define UI_MAIN_APPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QPushButton *btnHide;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
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
        btnHide = new QPushButton(centralWidget);
        btnHide->setObjectName(QStringLiteral("btnHide"));
        btnHide->setGeometry(QRect(420, 220, 80, 21));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 270, 80, 21));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(420, 310, 80, 21));
        Main_Application->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Main_Application);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1244, 20));
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
        btnHide->setText(QApplication::translate("Main_Application", "btnHide", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Main_Application", "PushButton", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Main_Application", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Main_Application: public Ui_Main_Application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_APPLICATION_H
