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


QString gameCardDoorMonster::pictureAddress() const
{
    return _pictureAddress;
}

void gameCardDoorMonster::setPictureAddress(const QString &pictureAddress)
{
    _pictureAddress = pictureAddress;
}

QString gameCardDoorMonster::cardName() const
{
    return _cardName;
}

void gameCardDoorMonster::setCardName(const QString &cardName)
{
    _cardName = cardName;
}

QString gameCardDoorMonster::monsterName() const
{
    return _monsterName;
}

void gameCardDoorMonster::setMonsterName(const QString &monsterName)
{
    _monsterName = monsterName;
}

cardAddon gameCardDoorMonster::addOn() const
{
    return _addOn;
}

void gameCardDoorMonster::setAddOn(const cardAddon &addOn)
{
    _addOn = addOn;
}

doorType gameCardDoorMonster::type() const
{
    return _type;
}

void gameCardDoorMonster::setType(const doorType &type)
{
    _type = type;
}

bool gameCardDoorMonster::isUndead() const
{
    return _isUndead;
}

void gameCardDoorMonster::setIsUndead(bool isUndead)
{
    _isUndead = isUndead;
}

bool gameCardDoorMonster::fromHell() const
{
    return _fromHell;
}

void gameCardDoorMonster::setFromHell(bool fromHell)
{
    _fromHell = fromHell;
}

int gameCardDoorMonster::monsterLevel() const
{
    return _monsterLevel;
}

void gameCardDoorMonster::setMonsterLevel(int monsterLevel)
{
    _monsterLevel = monsterLevel;
}

int gameCardDoorMonster::strongAgainstHuman() const
{
    return _strongAgainstHuman;
}

void gameCardDoorMonster::setStrongAgainstHuman(int strongAgainstHuman)
{
    _strongAgainstHuman = strongAgainstHuman;
}

int gameCardDoorMonster::strongAgainstElf() const
{
    return _strongAgainstElf;
}

void gameCardDoorMonster::setStrongAgainstElf(int strongAgainstElf)
{
    _strongAgainstElf = strongAgainstElf;
}

int gameCardDoorMonster::strongAgainstHalfling() const
{
    return _strongAgainstHalfling;
}

void gameCardDoorMonster::setStrongAgainstHalfling(int strongAgainstHalfling)
{
    _strongAgainstHalfling = strongAgainstHalfling;
}

int gameCardDoorMonster::strongAgainstDwarf() const
{
    return _strongAgainstDwarf;
}

void gameCardDoorMonster::setStrongAgainstDwarf(int strongAgainstDwarf)
{
    _strongAgainstDwarf = strongAgainstDwarf;
}

int gameCardDoorMonster::strongAgainstOrk() const
{
    return _strongAgainstOrk;
}

void gameCardDoorMonster::setStrongAgainstOrk(int strongAgainstOrk)
{
    _strongAgainstOrk = strongAgainstOrk;
}

int gameCardDoorMonster::strongAgainstGnome() const
{
    return _strongAgainstGnome;
}

void gameCardDoorMonster::setStrongAgainstGnome(int strongAgainstGnome)
{
    _strongAgainstGnome = strongAgainstGnome;
}

int gameCardDoorMonster::strongAgainstNoClass() const
{
    return _strongAgainstNoClass;
}

void gameCardDoorMonster::setStrongAgainstNoClass(int strongAgainstNoClass)
{
    _strongAgainstNoClass = strongAgainstNoClass;
}

int gameCardDoorMonster::strongAgainstHalfBreed() const
{
    return _strongAgainstHalfBreed;
}

void gameCardDoorMonster::setStrongAgainstHalfBreed(int strongAgainstHalfBreed)
{
    _strongAgainstHalfBreed = strongAgainstHalfBreed;
}

int gameCardDoorMonster::strongAgainstSuperMunchkin() const
{
    return _strongAgainstSuperMunchkin;
}

void gameCardDoorMonster::setStrongAgainstSuperMunchkin(int strongAgainstSuperMunchkin)
{
    _strongAgainstSuperMunchkin = strongAgainstSuperMunchkin;
}

int gameCardDoorMonster::strongAgainstWoman() const
{
    return _strongAgainstWoman;
}

void gameCardDoorMonster::setStrongAgainstWoman(int strongAgainstWoman)
{
    _strongAgainstWoman = strongAgainstWoman;
}

int gameCardDoorMonster::strongAgainstWarrior() const
{
    return _strongAgainstWarrior;
}

void gameCardDoorMonster::setStrongAgainstWarrior(int strongAgainstWarrior)
{
    _strongAgainstWarrior = strongAgainstWarrior;
}

int gameCardDoorMonster::strongAgainstWizard() const
{
    return _strongAgainstWizard;
}

void gameCardDoorMonster::setStrongAgainstWizard(int strongAgainstWizard)
{
    _strongAgainstWizard = strongAgainstWizard;
}

int gameCardDoorMonster::strongAgainstThief() const
{
    return _strongAgainstThief;
}

void gameCardDoorMonster::setStrongAgainstThief(int strongAgainstThief)
{
    _strongAgainstThief = strongAgainstThief;
}

int gameCardDoorMonster::strongAgainstBard() const
{
    return _strongAgainstBard;
}

void gameCardDoorMonster::setStrongAgainstBard(int strongAgainstBard)
{
    _strongAgainstBard = strongAgainstBard;
}

int gameCardDoorMonster::strongAgainstCleric() const
{
    return _strongAgainstCleric;
}

void gameCardDoorMonster::setStrongAgainstCleric(int strongAgainstCleric)
{
    _strongAgainstCleric = strongAgainstCleric;
}

int gameCardDoorMonster::strongAgainstSaturday() const
{
    return _strongAgainstSaturday;
}

void gameCardDoorMonster::setStrongAgainstSaturday(int strongAgainstSaturday)
{
    _strongAgainstSaturday = strongAgainstSaturday;
}

bool gameCardDoorMonster::dontFightWithWoman() const
{
    return _dontFightWithWoman;
}

void gameCardDoorMonster::setDontFightWithWoman(bool dontFightWithWoman)
{
    _dontFightWithWoman = dontFightWithWoman;
}

bool gameCardDoorMonster::dontFightWithThief() const
{
    return _dontFightWithThief;
}

void gameCardDoorMonster::setDontFightWithThief(bool dontFightWithThief)
{
    _dontFightWithThief = dontFightWithThief;
}

bool gameCardDoorMonster::dontFightWithElf() const
{
    return _dontFightWithElf;
}

void gameCardDoorMonster::setDontFightWithElf(bool dontFightWithElf)
{
    _dontFightWithElf = dontFightWithElf;
}

bool gameCardDoorMonster::dontFightwithOrk() const
{
    return _dontFightwithOrk;
}

void gameCardDoorMonster::setDontFightwithOrk(bool dontFightwithOrk)
{
    _dontFightwithOrk = dontFightwithOrk;
}

int gameCardDoorMonster::dontFightTillLevel() const
{
    return _dontFightTillLevel;
}

void gameCardDoorMonster::setDontFightTillLevel(int dontFightTillLevel)
{
    _dontFightTillLevel = dontFightTillLevel;
}

bool gameCardDoorMonster::specialMechanicAgainstAll() const
{
    return _specialMechanicAgainstAll;
}

void gameCardDoorMonster::setSpecialMechanicAgainstAll(bool specialMechanicAgainstAll)
{
    _specialMechanicAgainstAll = specialMechanicAgainstAll;
}

bool gameCardDoorMonster::specialMechanicAgainstWoman() const
{
    return _specialMechanicAgainstWoman;
}

void gameCardDoorMonster::setSpecialMechanicAgainstWoman(bool specialMechanicAgainstWoman)
{
    _specialMechanicAgainstWoman = specialMechanicAgainstWoman;
}

bool gameCardDoorMonster::specialMechanicAgainstCleric() const
{
    return _specialMechanicAgainstCleric;
}

void gameCardDoorMonster::setSpecialMechanicAgainstCleric(bool specialMechanicAgainstCleric)
{
    _specialMechanicAgainstCleric = specialMechanicAgainstCleric;
}

bool gameCardDoorMonster::specialMechanicAginstThief() const
{
    return _specialMechanicAginstThief;
}

void gameCardDoorMonster::setSpecialMechanicAginstThief(bool specialMechanicAginstThief)
{
    _specialMechanicAginstThief = specialMechanicAginstThief;
}

bool gameCardDoorMonster::specialMechanicAgainstElf() const
{
    return _specialMechanicAgainstElf;
}

void gameCardDoorMonster::setSpecialMechanicAgainstElf(bool specialMechanicAgainstElf)
{
    _specialMechanicAgainstElf = specialMechanicAgainstElf;
}

bool gameCardDoorMonster::specialMechanicAgainstWizard() const
{
    return _specialMechanicAgainstWizard;
}

void gameCardDoorMonster::setSpecialMechanicAgainstWizard(bool specialMechanicAgainstWizard)
{
    _specialMechanicAgainstWizard = specialMechanicAgainstWizard;
}

bool gameCardDoorMonster::specialMechanicAgainstHalfling() const
{
    return _specialMechanicAgainstHalfling;
}

void gameCardDoorMonster::setSpecialMechanicAgainstHalfling(bool specialMechanicAgainstHalfling)
{
    _specialMechanicAgainstHalfling = specialMechanicAgainstHalfling;
}

int gameCardDoorMonster::cardID() const
{
    return _cardID;
}

void gameCardDoorMonster::setCardID(int cardID)
{
    _cardID = cardID;
}
