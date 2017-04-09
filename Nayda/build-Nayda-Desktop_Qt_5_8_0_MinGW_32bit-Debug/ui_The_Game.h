/********************************************************************************
** Form generated from reading UI file 'The_Game.ui'
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
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheGame_GUI
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QFrame *Battlefield;
    QHBoxLayout *horizontalLayout_6;
    QWidget *Game_History;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_10;
    QWidget *widget;
    QPushButton *Drop_The_Cube;
    QHBoxLayout *horizontalLayout_9;
    QFrame *Cards_Doors_Stack;
    QFrame *Cards_Treasures_Stack;
    QHBoxLayout *horizontalLayout_8;
    QFrame *Cards_Doors_Fold;
    QFrame *Cards_Treasures_Fold;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_4;

    void setupUi(QDialog *TheGame_GUI)
    {
        if (TheGame_GUI->objectName().isEmpty())
            TheGame_GUI->setObjectName(QStringLiteral("TheGame_GUI"));
        TheGame_GUI->resize(1244, 797);
        gridLayout_2 = new QGridLayout(TheGame_GUI);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        Battlefield = new QFrame(TheGame_GUI);
        Battlefield->setObjectName(QStringLiteral("Battlefield"));
        Battlefield->setFrameShape(QFrame::StyledPanel);
        Battlefield->setFrameShadow(QFrame::Raised);

        horizontalLayout_7->addWidget(Battlefield);


        verticalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        Game_History = new QWidget(TheGame_GUI);
        Game_History->setObjectName(QStringLiteral("Game_History"));

        horizontalLayout_6->addWidget(Game_History);


        verticalLayout_6->addLayout(horizontalLayout_6);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        widget = new QWidget(TheGame_GUI);
        widget->setObjectName(QStringLiteral("widget"));

        horizontalLayout_10->addWidget(widget);

        Drop_The_Cube = new QPushButton(TheGame_GUI);
        Drop_The_Cube->setObjectName(QStringLiteral("Drop_The_Cube"));

        horizontalLayout_10->addWidget(Drop_The_Cube);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        Cards_Doors_Stack = new QFrame(TheGame_GUI);
        Cards_Doors_Stack->setObjectName(QStringLiteral("Cards_Doors_Stack"));
        Cards_Doors_Stack->setFrameShape(QFrame::StyledPanel);
        Cards_Doors_Stack->setFrameShadow(QFrame::Raised);

        horizontalLayout_9->addWidget(Cards_Doors_Stack);

        Cards_Treasures_Stack = new QFrame(TheGame_GUI);
        Cards_Treasures_Stack->setObjectName(QStringLiteral("Cards_Treasures_Stack"));
        Cards_Treasures_Stack->setFrameShape(QFrame::StyledPanel);
        Cards_Treasures_Stack->setFrameShadow(QFrame::Raised);

        horizontalLayout_9->addWidget(Cards_Treasures_Stack);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        Cards_Doors_Fold = new QFrame(TheGame_GUI);
        Cards_Doors_Fold->setObjectName(QStringLiteral("Cards_Doors_Fold"));
        Cards_Doors_Fold->setFrameShape(QFrame::StyledPanel);
        Cards_Doors_Fold->setFrameShadow(QFrame::Raised);

        horizontalLayout_8->addWidget(Cards_Doors_Fold);

        Cards_Treasures_Fold = new QFrame(TheGame_GUI);
        Cards_Treasures_Fold->setObjectName(QStringLiteral("Cards_Treasures_Fold"));
        Cards_Treasures_Fold->setFrameShape(QFrame::StyledPanel);
        Cards_Treasures_Fold->setFrameShadow(QFrame::Raised);

        horizontalLayout_8->addWidget(Cards_Treasures_Fold);


        verticalLayout_5->addLayout(horizontalLayout_8);


        horizontalLayout_4->addLayout(verticalLayout_5);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));

        gridLayout_2->addLayout(horizontalLayout_5, 0, 1, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setSizeConstraint(QLayout::SetMaximumSize);
        pushButton = new QPushButton(TheGame_GUI);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_8->addWidget(pushButton);


        gridLayout_2->addLayout(verticalLayout_8, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));

        gridLayout_2->addLayout(verticalLayout_4, 1, 0, 1, 1);


        retranslateUi(TheGame_GUI);

        QMetaObject::connectSlotsByName(TheGame_GUI);
    } // setupUi

    void retranslateUi(QDialog *TheGame_GUI)
    {
        TheGame_GUI->setWindowTitle(QApplication::translate("TheGame_GUI", "Dialog", Q_NULLPTR));
        Drop_The_Cube->setText(QApplication::translate("TheGame_GUI", "\320\221\321\200\320\276\321\201\320\270\321\202\321\214 \320\272\321\203\320\261\320\270\320\272", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TheGame_GUI", "SwitchBack", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TheGame_GUI: public Ui_TheGame_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THE_GAME_H
