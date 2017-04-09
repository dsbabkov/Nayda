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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_Application
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Main_Application)
    {
        if (Main_Application->objectName().isEmpty())
            Main_Application->setObjectName(QStringLiteral("Main_Application"));
        Main_Application->resize(400, 300);
        menuBar = new QMenuBar(Main_Application);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Main_Application->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Main_Application);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Main_Application->addToolBar(mainToolBar);
        centralWidget = new QWidget(Main_Application);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Main_Application->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Main_Application);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Main_Application->setStatusBar(statusBar);

        retranslateUi(Main_Application);

        QMetaObject::connectSlotsByName(Main_Application);
    } // setupUi

    void retranslateUi(QMainWindow *Main_Application)
    {
        Main_Application->setWindowTitle(QApplication::translate("Main_Application", "Main_Application", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Main_Application: public Ui_Main_Application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_APPLICATION_H
