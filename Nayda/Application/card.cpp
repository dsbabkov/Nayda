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

int Game_Card_Stock::type() const
{
    return _type;
}

void Game_Card_Stock::setType(int type)
{
    _type = type;
}

Game_Card::Game_Card()
{
    
}

Game_Card::Game_Card(int card_ID, QString picture_address, QString card_name, cardAddon card_Addon)
{
    _card_ID = card_ID;
    _card_Picture_address = picture_address;
    _card_Name = card_name;
    _cardAddOn = card_Addon;
}

int Game_Card::card_ID() const
{
    return _card_ID;
}

void Game_Card::setCard_ID(int card_ID)
{
    _card_ID = card_ID;
}

QString Game_Card::card_Picture_address() const
{
    return _card_Picture_address;
}

void Game_Card::setCard_Picture_address(const QString &card_Picture_address)
{
    _card_Picture_address = card_Picture_address;
}

QString Game_Card::card_Name() const
{
    return _card_Name;
}

void Game_Card::setCard_Name(const QString &card_Name)
{
    _card_Name = card_Name;
}

cardAddon Game_Card::cardAddOn() const
{
    return _cardAddOn;
}

void Game_Card::setCardAddOn(const cardAddon &cardAddOn)
{
    _cardAddOn = cardAddOn;
}

