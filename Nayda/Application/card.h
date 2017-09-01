#ifndef CARD_H
#define CARD_H

#include <QString>
#include <QMap>




class Game_Card
{

public:
    Game_Card();
    Game_Card (int card_ID, QString picture_address, QString card_name);

private:

    int _card_ID;
    QString _card_Picture_address;
    QString _card_Name;



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

  QMap<Game_Card, int> _stock;


};



#endif // CARD_H


