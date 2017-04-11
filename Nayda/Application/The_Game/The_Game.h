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

    //Ui::The_Game *getUi() const;

signals:
    void dbg_to_be_shown(bool);
    void dbg_return_to_before_the_game(bool);

public slots:
    void dbg_was_pushed_to_game_mode();
    void dbg_return_to_the_main_window();

    
private:
    Ui::The_Game *ui;
};




#endif // THE_GAME_H
