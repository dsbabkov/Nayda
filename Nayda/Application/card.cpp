#include "card.h"

Game_Card_Stock::Game_Card_Stock()
{

}

Game_Card_Stock::Game_Card_Stock(int stock_type, int total_cards_to_be_played, int cards_left_to_be_played, int time_replayed)
{
   _type = stock_type; //I suppose, this should
   _total_cards = total_cards_to_be_played;
   _cards_left = cards_left_to_be_played;
   _time_replayed = time_replayed;
   //stock initialized;

}

Game_Card::Game_Card()
{

}

Game_Card::Game_Card(int card_ID, QString picture_address, QString card_name)
{
    _card_ID = card_ID;
    _card_Picture_address = picture_address;
    _card_Name = card_name;
}
