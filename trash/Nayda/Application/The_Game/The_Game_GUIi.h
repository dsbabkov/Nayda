#ifndef THEGAME_GUII_H
#define THEGAME_GUII_H

#include <QDialog>

namespace Ui {
class TheGame_GUI;
}

class TheGame_GUI : public QDialog
{
    Q_OBJECT

public:
    explicit TheGame_GUI(QWidget *parent = 0);
    ~TheGame_GUI();

    //Ui::TheGame_GUI *ui;


public slots:
    void ClosingSlot(bool a) {
        emit (ClosingTheWindow(a));

    }

signals:

    void ClosingTheWindow(bool);



private:
    Ui::TheGame_GUI *ui;
};

#endif // THEGAME_GUII_H
