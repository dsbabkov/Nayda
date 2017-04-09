/********************************************************************************
** Form generated from reading UI file 'the_game.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THE_GAME_H
#define UI_THE_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_The_Game
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *The_Game)
    {
        if (The_Game->objectName().isEmpty())
            The_Game->setObjectName(QStringLiteral("The_Game"));
        The_Game->resize(800, 600);
        centralwidget = new QWidget(The_Game);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        The_Game->setCentralWidget(centralwidget);
        menubar = new QMenuBar(The_Game);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        The_Game->setMenuBar(menubar);
        statusbar = new QStatusBar(The_Game);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        The_Game->setStatusBar(statusbar);

        retranslateUi(The_Game);

        QMetaObject::connectSlotsByName(The_Game);
    } // setupUi

    void retranslateUi(QMainWindow *The_Game)
    {
        The_Game->setWindowTitle(QApplication::translate("The_Game", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class The_Game: public Ui_The_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THE_GAME_H
