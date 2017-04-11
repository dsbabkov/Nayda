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

    Ui::Before_The_Game *getUi() const;
    //void setUi(Ui::Before_The_Game *value);

signals:

    void dbg_switch_to_game_mode(bool);

public slots:

    void dbg_switch_to_game_mode_button_pressed(void);


private:
    Ui::Before_The_Game *ui;
    
};

#endif // BEFORE_THE_GAME_H
