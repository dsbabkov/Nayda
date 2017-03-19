/********************************************************************************
** Form generated from reading UI file 'TheGame_GUI.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEGAME_GUI_H
#define UI_THEGAME_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TheGame_GUI
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *pushButton;

    void setupUi(QDialog *TheGame_GUI)
    {
        if (TheGame_GUI->objectName().isEmpty())
            TheGame_GUI->setObjectName(QStringLiteral("TheGame_GUI"));
        TheGame_GUI->resize(1244, 797);
        buttonBox = new QDialogButtonBox(TheGame_GUI);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(250, 320, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        pushButton = new QPushButton(TheGame_GUI);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 30, 80, 21));

        retranslateUi(TheGame_GUI);
        QObject::connect(buttonBox, SIGNAL(accepted()), TheGame_GUI, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TheGame_GUI, SLOT(reject()));

        QMetaObject::connectSlotsByName(TheGame_GUI);
    } // setupUi

    void retranslateUi(QDialog *TheGame_GUI)
    {
        TheGame_GUI->setWindowTitle(QApplication::translate("TheGame_GUI", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TheGame_GUI", "SwitchBack", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TheGame_GUI: public Ui_TheGame_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEGAME_GUI_H
