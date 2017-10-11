#ifndef BATTLEFIELD_H
#define BATTLEFIELD_H

#include <QWidget>
#include <QPropertyAnimation>
#include <QDesktopWidget>
#include <Application/card.h>
#include <QPushButton>


namespace Ui {
class battleField;
}

class battleField : public QWidget
{
    Q_OBJECT

public:
    explicit battleField(QWidget *parent = 0);
    ~battleField();


    void cardsRepresenter();

    void setMonsersDeck(const std::map<int, gameCardDoorMonster> *monsersDeck);
    void setAmplifiersDeck(const std::map<int, gameCardDoorAmplifier> *amplifiersDeck);
    void setCursesDeck(const std::map<int, gameCardDoorCurse> *cursesDeck);
    void setProfessionsDeck(const std::map<int, gameCardDoorProfession> *professionsDeck);
    void setRacesDeck(const std::map<int, gameCardDoorRace> *racesDeck);
    void setSpecialMechanicsDeck(const std::map<int, gameCardDoorSpecialMechanic> *specialMechanicsDeck);
    void setArmorDeck(const std::map<int, gameCardTreasureArmor> *armorDeck);
    void setArmorAmplifiersDeck(const std::map<int, gameCardTreasureArmorAmplifier> *armorAmplifiersDeck);
    void setBattleAmplifiersDeck(const std::map<int, gameCardTreasureBattleAmplifier> *battleAmplifiersDeck);
    void setLevelUpDeck(const std::map<int, gameCardTreasureLevelUp> *levelUpDeck);
    void setSpecialMechanicsTreasureDeck(const std::map<int, gameCardTreasureSpecialMechanic> *specialMechanicsTreasureDeck);
    void setThingsAmplifiersDeck(const std::map<int, gameCardTreasureThingsAmplifiers> *thingsAmplifiersDeck);
    void setWeaponsDeck(const std::map<int, gameCardTreasureWeapon> *weaponsDeck);

private:
    Ui::battleField *ui;

    //const std::map<int, gameCardDoorMonster> &_monsersDeck;
    const std::map<int, gameCardDoorMonster> *_monsersDeck;
    const std::map<int, gameCardDoorAmplifier> *_amplifiersDeck;
    const std::map<int, gameCardDoorCurse> *_cursesDeck;
    const std::map<int, gameCardDoorProfession> *_professionsDeck;
    const std::map<int, gameCardDoorRace> *_racesDeck;
    const std::map<int, gameCardDoorSpecialMechanic> *_specialMechanicsDeck;

    const std::map<int, gameCardTreasureArmor> *_armorDeck;
    const std::map<int, gameCardTreasureArmorAmplifier> *_armorAmplifiersDeck;
    const std::map<int, gameCardTreasureBattleAmplifier> *_battleAmplifiersDeck;
    const std::map<int, gameCardTreasureLevelUp> *_levelUpDeck;
    const std::map<int, gameCardTreasureSpecialMechanic> *_specialMechanicsTreasureDeck;
    const std::map<int, gameCardTreasureThingsAmplifiers> *_thingsAmplifiersDeck;
    const std::map<int, gameCardTreasureWeapon> *_weaponsDeck;


};

#endif // BATTLEFIELD_H
