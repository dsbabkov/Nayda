#include "player.h"

player::player()
{
    _isMainPlayer = false;

    _playerLevel = 1;
    _warPower = 1;
    _cardsOnHands = 0;
    _cardsOnHandsLimit = 5;
    _cards_in_game = 0;

    _headSlotFull = false;
    _legsSlotFull = false;
    _leftHandSlotFull = false;
    _rightHandSlotFull = false;
    _thereIsOneBigThing = false;
    _thereIsLimitOnBigThings = true;

    _race = Race::Human;
    _profession = Profession::No_Profession;


}

Profession player::profession() const
{
    return _profession;
}

void player::setProfession(const Profession &profession)
{
    _profession = profession;
}

Race player::race() const
{
    return _race;
}

void player::setRace(const Race &race)
{
    _race = race;
}

bool player::thereIsLimitOnBigThings() const
{
    return _thereIsLimitOnBigThings;
}

void player::setThereIsLimitOnBigThings(bool thereIsLimitOnBigThings)
{
    _thereIsLimitOnBigThings = thereIsLimitOnBigThings;
}

bool player::thereIsOneBigThing() const
{
    return _thereIsOneBigThing;
}

void player::setThereIsOneBigThing(bool thereIsOneBigThing)
{
    _thereIsOneBigThing = thereIsOneBigThing;
}

bool player::rightHandSlotFull() const
{
    return _rightHandSlotFull;
}

void player::setRightHandSlotFull(bool rightHandSlotFull)
{
    _rightHandSlotFull = rightHandSlotFull;
}

bool player::leftHandSlotFull() const
{
    return _leftHandSlotFull;
}

void player::setLeftHandSlotFull(bool leftHandSlotFull)
{
    _leftHandSlotFull = leftHandSlotFull;
}

bool player::legsSlotFull() const
{
    return _legsSlotFull;
}

void player::setLegsSlotFull(bool legsSlotFull)
{
    _legsSlotFull = legsSlotFull;
}

bool player::headSlotFull() const
{
    return _headSlotFull;
}

void player::setHeadSlotFull(bool headSlotFull)
{
    _headSlotFull = headSlotFull;
}

int player::cards_in_game() const
{
    return _cards_in_game;
}

void player::setCards_in_game(int cards_in_game)
{
    _cards_in_game = cards_in_game;
}

int player::cardsOnHandsLimit() const
{
    return _cardsOnHandsLimit;
}

void player::setCardsOnHandsLimit(int cardsOnHandsLimit)
{
    _cardsOnHandsLimit = cardsOnHandsLimit;
}

int player::cardsOnHands() const
{
    return _cardsOnHands;
}

void player::setCardsOnHands(int cardsOnHands)
{
    _cardsOnHands = cardsOnHands;
}

int player::warPower() const
{
    return _warPower;
}

void player::setWarPower(int warPower)
{
    _warPower = warPower;
}

int player::playerLevel() const
{
    return _playerLevel;
}

void player::setPlayerLevel(int playerLevel)
{
    _playerLevel = playerLevel;
}
