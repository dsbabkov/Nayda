#ifndef THE_GAME_H
#define THE_GAME_H

#include <QMainWindow>
#include "gamerwidget.h"

#include "Server/server.h"
#include "Application/player.h"
#include <map>
#include "Application/card.h"
#include <QFile>


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

    void theMonstersParser(const QString& filename);
    gameCardDoorMonster monsterStringParser(const QString& monster_string);

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

    player _players_opponents[5];
    player _main_player;


    //this stock depends on the Game Mode;
    //Nonetheless, it is allways the same through all the game, since its only function is
    //to store the whole amount of cards that can be played and to display them on widgets
    //The real card stock is the VECTOR!!! And it should never been stored on the client side
    //during debug stage it will be generated and stored alltogether in the game constructor

    //Game_Cards are filled inside the Game.cpp (constructor)

    std::map <int, Game_Card> _basisStock;
    std::map <int, gameCardDoorMonster> _monstersDeck;


    //Game_Card_Stock Game_Stock_Doors;
    //Game_Card_Stock Game_Stock_Treasures;
    //Game_Card_Stock Fold_Doors;
    //Game_Card_Stock Fold_Treausures;




};







#endif // THE_GAME_H
