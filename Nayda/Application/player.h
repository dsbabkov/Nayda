#ifndef PLAYER_H
#define PLAYER_H

#include <map>


#define DEFAULT_GAME_STOCK

//Depending on the game stock!!!!!

#ifdef DEFAULT_GAME_STOCK
//There will be five Races and five Classes (Here and Further Renamed to Professions) in the Basic Game
//Player can only have 4 abilities from Races and 4 abilities from Classes;
//Therefore there will be an array of each group;
//Passive abilities should have a special sign near Avatar, active abilities should have not only the sign,
//but also the button in the specific menu (the total of six buttons for Mage-Priest & Halfling-Ork for ex).
//There will be maximum of
// Race-Active-Abilities == 2
// Race-Passive-Abilities == 4
// Profession-Active-Abilities == 4
// Profession-Passive-Abilities == 2
//Therefore maximum of
// Passive_labels == 6
// Active_labels == 6 (will be made as buttons in a spec. menu)



enum class Race { Human, Elf, Dwarf, Gnome, Halfling, Ork };
enum class Profession {No_Profession, Warrior, Rogue, Priest, Bard, Mage}; //using "profession instead of class



enum class Race_Active_Abilities {No_Abilities, Power_of_the_Lonesome, The_Second_Chance, Rejecting};
enum class Race_Passive_Abilities {No_Abilities, Big_Guy, Big_Hands, Escaping, Semi_Altruism,
                                   Power_of_GN_Nose_Auto_Escape, Businessman, Overpower};

enum class Profession_Active_Abilities {No_Abilities,  Ressurection, Banishment, Theft, Shrinking, Berserking, Enchanting,
                             Flight, Pacification };
enum class Profession_Passive_Abilities {No_Abilities, Power_of_the_Parity, Bards_Luck };

enum class Abilities_Keys_Races {elven_ability_1, elven_ability_2, dwarfs_ability_1, dwarfs_ability_2,
                           gnomes_ability_1, gnomes_ability_2, halflings_ability_1, halflings_ability_2,
                           orks_ability_1, orks_ability_2 };
enum class Abilities_Keys_Professions {warriors_ability_1, warriors_ability_2, rogue_ability_1, rogue_ability_2,
                                      priests_ability_1, priests_ability_2, bards_ability_1, bards_ability_2,
                                      mage_ability_1, mage_ability_2};

#endif


class player
{

    bool _isMainPlayer;

    int _playerLevel;
    int _warPower;
    int _cardsOnHands;
    int _cardsOnHandsLimit;
    int _cards_in_game;


    bool _headSlotFull;
    bool _legsSlotFull;
    bool _leftHandSlotFull;
    bool _rightHandSlotFull;
    bool _thereIsOneBigThing;
    bool _thereIsLimitOnBigThings; //may be remove it if checking the race


    Race _race;
    Profession _profession;


    bool _halfBlood;
    bool _superMunchkin;

    Race _second_race;
    Profession _second_profession;

    bool _halfBlood_without_second_race;
    bool _superMunchkin_without_second_profession;

    std::map <Race_Active_Abilities, Abilities_Keys_Races> _raceActiveAbilities;
    std::map <Race_Passive_Abilities, Abilities_Keys_Races> _racePassiveAbilities;
    std::map <Profession_Active_Abilities, Abilities_Keys_Professions> _professionActiveAbilities;
    std::map <Profession_Passive_Abilities, Abilities_Keys_Professions> _professionPassiveAbilites;


public:


    player();


    void addRaceActiveAbility(Race_Active_Abilities raceActiveAbility, Abilities_Keys_Races raceAbilityKey);
    void addRacePassiveAbility(Race_Passive_Abilities racePassiveAbility, Abilities_Keys_Races raceAbilityKey);
    void addProfessionActiveAbility(Profession_Active_Abilities professionActiveAbility, Abilities_Keys_Professions professionAbilityKey);
    void addProfessionPassiveAbility(Profession_Passive_Abilities professionPassiveAbility, Abilities_Keys_Professions professionAbilityKey);


    int playerLevel() const;
    void setPlayerLevel(int playerLevel);
    int warPower() const;
    void setWarPower(int warPower);
    int cardsOnHands() const;
    void setCardsOnHands(int cardsOnHands);
    int cardsOnHandsLimit() const;
    void setCardsOnHandsLimit(int cardsOnHandsLimit);
    int cards_in_game() const;
    void setCards_in_game(int cards_in_game);
    bool headSlotFull() const;
    void setHeadSlotFull(bool headSlotFull);
    bool legsSlotFull() const;
    void setLegsSlotFull(bool legsSlotFull);
    bool leftHandSlotFull() const;
    void setLeftHandSlotFull(bool leftHandSlotFull);
    bool rightHandSlotFull() const;
    void setRightHandSlotFull(bool rightHandSlotFull);
    bool thereIsOneBigThing() const;
    void setThereIsOneBigThing(bool thereIsOneBigThing);
    bool thereIsLimitOnBigThings() const;
    void setThereIsLimitOnBigThings(bool thereIsLimitOnBigThings);
    Race race() const;
    void setRace(const Race &race);
    Profession profession() const;
    void setProfession(const Profession &profession);
    Race second_race() const;
    void setSecond_race(const Race &second_race);
    Profession second_profession() const;
    void setSecond_profession(const Profession &second_profession);
    bool halfBlood_without_second_race() const;
    void setHalfBlood_without_second_race(bool halfBlood_without_second_race);
    bool superMunchkin_without_second_profession() const;
    void setSuperMunchkin_without_second_profession(bool superMunchkin_without_second_profession);


};

#endif // PLAYER_H
