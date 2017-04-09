#ifndef THE_GAME_H
#define THE_GAME_H

#include <QMainWindow>
//#include "Application/Main_Application/main_application.h"

namespace Ui {
class The_Game;
}

class The_Game :  public QMainWindow
{
    Q_OBJECT

public:
    explicit The_Game (QWidget *parent = 0);
    ~The_Game();

private:
    Ui::The_Game *ui;
};




#endif // THE_GAME_H
