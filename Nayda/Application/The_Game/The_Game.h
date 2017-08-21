#ifndef THE_GAME_H
#define THE_GAME_H

#include <QMainWindow>
#include "gamerwidget.h"

#include "Server/server.h"

#define PC_VERSION //begin with PC
#define DEBUG_MESSAGES //start with debug enabled
#define DEBUG_NO_SERVER

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

    //game_settings
    int m_time_to_think;
    int m_time_for_move;
    int m_number_of_players;

    //special option will allow to be more than 5 opponents
    GamerWidget* opponent[5]; //make as controlled unique_ptr;





};




#endif // THE_GAME_H
