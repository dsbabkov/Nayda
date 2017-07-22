#ifndef BEFORE_THE_GAME_H
#define BEFORE_THE_GAME_H

#include <QMainWindow>
#include "Server/server.h"



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

    void update_game_options_number_of_players (int number_of_players);
    void update_game_options_game_type (int game_type);
    void update_game_options_card_stack_type (int card_stack_type);


signals:

    void dbg_switch_to_game_mode(bool);
    void dbg_the_game_begins(bool);

public slots:

    void dbg_switch_to_game_mode_button_pressed(void);


private:
    Ui::Before_The_Game *ui;
    Server* m_server_ptr;



    int number_of_players; //total amount of players
    int card_stack_mode; //type_of_stack(wich_addons)
    int time_for_move; //time to make first step (seconds) - may be do define strategy
    int time_to_think; //time to think before next step




    
};

#endif // BEFORE_THE_GAME_H
