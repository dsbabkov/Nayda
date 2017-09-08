#ifndef CARD_H
#define CARD_H

#include <QString>
#include <QMap>
#include <map>


/*
 * There are .csv tables of all the cards.
 * The_Game receives from Before_The_Game stock type (calculated basing on the settings selected in a
 * specific Before_The_Game menu).
 * According to this stock type it fills up the basis maps of the cards. This will be needed to show cards
 * in the game.
 * At the same time the Server does the same job and also makes the vectors from initial maps
 * taking away cards from basis maps.
 * So the program-client will have basis maps of cards and small maps of the cards that player has.
 * It will be two maps: things_in_the_game, races_professions and one vector "cards_on_the_hands";
 * About the other players client-programm knows things_in_the_game, races_professions.
 * There are some mechanics, that show the other player's hands to another or all the players. But for the
 * main time they are unknown to the program-client. So the vector!!! "cards_on_the_hands" exisists, but is filled
 * with a specific card_type "rubashka". Client knows the quantity, but not the fullfilment.
 * "cards_on_the_hands" should be the vector, since the order might be important: there are mechanics, that allows
 * to take some cards from player. Might be a good idea to allow player to change cards in places from time to time.
 *
*/


enum class cardAddon {Basic, WildAxe, ClirickalMistakes };


class Game_Card
{

public:
    Game_Card();
    Game_Card (int card_ID, QString picture_address, QString card_name, cardAddon card_Addon);

    int card_ID() const;
    void setCard_ID(int card_ID);

    QString card_Picture_address() const;
    void setCard_Picture_address(const QString &card_Picture_address);

    QString card_Name() const;
    void setCard_Name(const QString &card_Name);

    cardAddon cardAddOn() const;
    void setCardAddOn(const cardAddon &cardAddOn);

private:

    int _card_ID;
    QString _card_Picture_address;
    QString _card_Name;
    cardAddon _cardAddOn;



};

class Game_Card_Stock


{
  public:
  Game_Card_Stock();
  Game_Card_Stock (int stock_type, int total_cards_to_be_played, int cards_left_to_be_played, int time_replayed);

  int type() const;
  void setType(int type);

private:

  int _type;  //make it as a specific type!
  int _total_cards; //how many card were in an initial stock
  int _cards_left; //how many cards left in a game;
  int _time_replayed; //how many times were the stock replayed (somekind of a debug info)

  std::vector<Game_Card> _stock;


};






#endif // CARD_H


