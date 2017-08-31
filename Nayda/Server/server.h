#ifndef SERVER_H
#define SERVER_H

#include <QWidget>

#include <QObject>
#include <QString>

  class Server : public QObject
  {
      Q_OBJECT

  public:
      explicit Server(QObject* parent = 0);

      int value() const { return m_value; }
      virtual bool something();
  public slots:
      void dbg_the_game_begins_state_received(bool begins);

  signals:
      void valueChanged(int newValue);

  private:
      int m_value;
  };


  class Game_Card
  {

  public:

      Game_Card (int card_ID, QString picture_address, QString card_name);

  private:

      int _card_ID;
      QString _card_Picture_address;
      QString _card_Name;



  };

  class Game_Card_Stock


  {
    public:
    Game_Card_Stock (int stock_type, int total_cards_to_be_played, int cards_left_to_be_played, int time_replayed);

    private:

    int _type;  //make it as a specific type!
    int _total_cards; //how many card were in an initial stock
    int _cards_left; //how many cards left in a game;
    int _time_replayed; //how many times were the stock replayed (somekind of a debug info)


  };




#endif // SERVER_H



