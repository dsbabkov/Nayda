#ifndef BEFORE_THE_GAME_H
#define BEFORE_THE_GAME_H

#include <QMainWindow>
//#include "Application/Main_Application/main_application.h"

namespace Ui {
class Before_The_Game;
}

class Before_The_Game :  public QMainWindow
{
    Q_OBJECT

public:
    explicit Before_The_Game (QWidget *parent = 0);
    ~Before_The_Game();

private:
    Ui::Before_The_Game *ui;

};

#endif // BEFORE_THE_GAME_H
