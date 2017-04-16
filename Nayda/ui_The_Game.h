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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
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
    QGraphicsView *graphicsView;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *The_Game)
    {
        if (The_Game->objectName().isEmpty())
            The_Game->setObjectName(QStringLiteral("The_Game"));
        The_Game->resize(800, 600);
        centralwidget = new QWidget(The_Game);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        btn_switch_back = new QPushButton(centralwidget);
        btn_switch_back->setObjectName(QStringLiteral("btn_switch_back"));
        btn_switch_back->setGeometry(QRect(280, 230, 80, 21));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(30, 390, 256, 192));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(440, 190, 241, 301));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
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
        btn_switch_back->setText(QApplication::translate("The_Game", "Switch_Back", Q_NULLPTR));
        label->setText(QApplication::translate("The_Game", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class The_Game: public Ui_The_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THE_GAME_H
