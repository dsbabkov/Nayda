#ifndef SERVER_H
#define SERVER_H

#include <QWidget>

#include <QObject>
#include <QString>
#include <Application/card.h> //cards

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

      Game_Card_Stock _Main_Doors;
      Game_Card_Stock _Main_Treausures;
      Game_Card_Stock _Fold_Doors;
      Game_Card_Stock _Fold_Treasures;

      Game_Card_Stock _Basis_Doors;
      Game_Card_Stock _Basis_Treasures;





  };







#endif // SERVER_H



