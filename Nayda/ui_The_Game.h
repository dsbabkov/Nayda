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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_The_Game
{
public:
    QWidget *centralwidget;
    QPushButton *btn_switch_back;
    QPushButton *btn_mainGamer_QuickAction;
    QPushButton *btn_mainGamer_Avatar;
    QLabel *lbl_mainGamer_number_of_quick_actions;
    QLabel *lbl_mainGamer_level;
    QMenuBar *menubar;
    QMenu *menuStart;
    QMenu *menuOptions;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *The_Game)
    {
        if (The_Game->objectName().isEmpty())
            The_Game->setObjectName(QStringLiteral("The_Game"));
        The_Game->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(The_Game->sizePolicy().hasHeightForWidth());
        The_Game->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(The_Game);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        btn_switch_back = new QPushButton(centralwidget);
        btn_switch_back->setObjectName(QStringLiteral("btn_switch_back"));
        btn_switch_back->setGeometry(QRect(9, 174, 80, 21));
        btn_mainGamer_QuickAction = new QPushButton(centralwidget);
        btn_mainGamer_QuickAction->setObjectName(QStringLiteral("btn_mainGamer_QuickAction"));
        btn_mainGamer_QuickAction->setGeometry(QRect(510, 950, 80, 21));
        btn_mainGamer_Avatar = new QPushButton(centralwidget);
        btn_mainGamer_Avatar->setObjectName(QStringLiteral("btn_mainGamer_Avatar"));
        btn_mainGamer_Avatar->setGeometry(QRect(599, 930, 81, 51));
        lbl_mainGamer_number_of_quick_actions = new QLabel(centralwidget);
        lbl_mainGamer_number_of_quick_actions->setObjectName(QStringLiteral("lbl_mainGamer_number_of_quick_actions"));
        lbl_mainGamer_number_of_quick_actions->setGeometry(QRect(530, 930, 31, 16));
        lbl_mainGamer_level = new QLabel(centralwidget);
        lbl_mainGamer_level->setObjectName(QStringLiteral("lbl_mainGamer_level"));
        lbl_mainGamer_level->setGeometry(QRect(600, 910, 47, 13));
        The_Game->setCentralWidget(centralwidget);
        menubar = new QMenuBar(The_Game);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 20));
        menuStart = new QMenu(menubar);
        menuStart->setObjectName(QStringLiteral("menuStart"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        The_Game->setMenuBar(menubar);
        statusbar = new QStatusBar(The_Game);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        The_Game->setStatusBar(statusbar);

        menubar->addAction(menuStart->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuAbout->menuAction());

        retranslateUi(The_Game);

        QMetaObject::connectSlotsByName(The_Game);
    } // setupUi

    void retranslateUi(QMainWindow *The_Game)
    {
        The_Game->setWindowTitle(QApplication::translate("The_Game", "MainWindow", Q_NULLPTR));
        btn_switch_back->setText(QApplication::translate("The_Game", "Switch_Back", Q_NULLPTR));
        btn_mainGamer_QuickAction->setText(QApplication::translate("The_Game", "QuickAction", Q_NULLPTR));
        btn_mainGamer_Avatar->setText(QApplication::translate("The_Game", "Avatar", Q_NULLPTR));
        lbl_mainGamer_number_of_quick_actions->setText(QApplication::translate("The_Game", "1", Q_NULLPTR));
        lbl_mainGamer_level->setText(QApplication::translate("The_Game", "Level", Q_NULLPTR));
        menuStart->setTitle(QApplication::translate("The_Game", "Start", Q_NULLPTR));
        menuOptions->setTitle(QApplication::translate("The_Game", "Options", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("The_Game", "About", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class The_Game: public Ui_The_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THE_GAME_H
