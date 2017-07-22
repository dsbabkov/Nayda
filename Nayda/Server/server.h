#ifndef SERVER_H
#define SERVER_H

#include <QWidget>

#include <QObject>

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






#endif // SERVER_H



