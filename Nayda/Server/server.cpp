#include "Server/server.h"
#include "QDebug"



//Before_The_Game::Before_The_Game(QWidget *parent) :
//    QMainWindow(parent),
//    ui(new Ui::Before_The_Game)
//{

Server::Server(QObject *parent) : QObject(parent) { m_value = 0; }

bool Server::something()
{
    int i = 1;
    return true;
}

void Server::dbg_the_game_begins_state_received(bool begins)
{
    if (begins)
    qDebug() << endl << "Server_received_the_game_begins_state";
}

Game_Card_Stock::Game_Card_Stock(int stock_type, int total_cards_to_be_played, int cards_left_to_be_played, int time_replayed)
{
   _type = stock_type; //I suppose, this should
   _total_cards = total_cards_to_be_played;
   _cards_left = cards_left_to_be_played;
   _time_replayed = time_replayed;
   //stock initialized;

}

Game_Card::Game_Card(int card_ID, QString picture_address, QString card_name)
{
    _card_ID = card_ID;
    _card_Picture_address = picture_address;
    _card_Name = card_name;
}
