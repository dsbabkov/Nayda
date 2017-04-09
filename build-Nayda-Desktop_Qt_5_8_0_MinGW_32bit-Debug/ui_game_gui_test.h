/********************************************************************************
** Form generated from reading UI file 'game_gui_test.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_GUI_TEST_H
#define UI_GAME_GUI_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game_GUI_test
{
public:
    QWidget *centralwidget;
    QPushButton *switch2Main;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Game_GUI_test)
    {
        if (Game_GUI_test->objectName().isEmpty())
            Game_GUI_test->setObjectName(QStringLiteral("Game_GUI_test"));
        Game_GUI_test->resize(800, 600);
        centralwidget = new QWidget(Game_GUI_test);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        switch2Main = new QPushButton(centralwidget);
        switch2Main->setObjectName(QStringLiteral("switch2Main"));
        switch2Main->setGeometry(QRect(210, 190, 80, 21));
        Game_GUI_test->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Game_GUI_test);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        Game_GUI_test->setMenuBar(menubar);
        statusbar = new QStatusBar(Game_GUI_test);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Game_GUI_test->setStatusBar(statusbar);

        retranslateUi(Game_GUI_test);

        QMetaObject::connectSlotsByName(Game_GUI_test);
    } // setupUi

    void retranslateUi(QMainWindow *Game_GUI_test)
    {
        Game_GUI_test->setWindowTitle(QApplication::translate("Game_GUI_test", "MainWindow", Q_NULLPTR));
        switch2Main->setText(QApplication::translate("Game_GUI_test", "GoBack", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Game_GUI_test: public Ui_Game_GUI_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_GUI_TEST_H
