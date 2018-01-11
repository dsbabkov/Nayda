#include "hand.h"
#include "ui_hand.h"

Hand::Hand(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Hand)
{
    ui->setupUi(this);


    QRect HW_Screen_Size = QApplication::desktop()->screenGeometry();
    int HW_Screen_Size_Width = HW_Screen_Size.width();
    int HW_Screen_Size_Height = HW_Screen_Size.height();

    //setup the koefficients;
    const float handCard_btn_size_geometric_width_to_height_ratio = 2.71f;
    const float handCard_btn_size_width = 0.0415f;
    const float handCard_btn_size_height = handCard_btn_size_geometric_width_to_height_ratio*handCard_btn_size_width;

    //set the maximum Height of the "Hand" Widget
    setMaximumHeight(HW_Screen_Size_Height*handCard_btn_size_height);


    //place picture
    QPixmap pxmp_HandCover("Pictures/Hand/sunRiseMiddle.png");
    QPalette plte_HandCover;
    plte_HandCover.setBrush(backgroundRole(),
    QBrush(pxmp_HandCover.scaled(handCard_btn_size_width*HW_Screen_Size_Width,
                                                             handCard_btn_size_height*HW_Screen_Size_Height,
                                                             Qt::IgnoreAspectRatio, Qt::SmoothTransformation)));


    setAutoFillBackground(true);
    setPalette(plte_HandCover);


}


void Hand::setMonsersDeck(const std::map<int, gameCardDoorMonster> *monsersDeck)
{
    _monstersDeck = monsersDeck;
}

void Hand::setAmplifiersDeck(const std::map<int, gameCardDoorAmplifier> *amplifiersDeck)
{
    _amplifiersDeck = amplifiersDeck;
}

void Hand::setCursesDeck(const std::map<int, gameCardDoorCurse> *cursesDeck)
{
    _cursesDeck = cursesDeck;
}

void Hand::setProfessionsDeck(const std::map<int, gameCardDoorProfession> *professionsDeck)
{
    _professionsDeck = professionsDeck;
}

void Hand::setRacesDeck(const std::map<int, gameCardDoorRace> *racesDeck)
{
    _racesDeck = racesDeck;
}

void Hand::setSpecialMechanicsDeck(const std::map<int, gameCardDoorSpecialMechanic> *specialMechanicsDeck)
{
    _specialMechanicsDeck = specialMechanicsDeck;
}

void Hand::setArmorDeck(const std::map<int, gameCardTreasureArmor> *armorDeck)
{
    _armorDeck = armorDeck;
}

void Hand::setArmorAmplifiersDeck(const std::map<int, gameCardTreasureArmorAmplifier> *armorAmplifiersDeck)
{
    _armorAmplifiersDeck = armorAmplifiersDeck;
}

void Hand::setBattleAmplifiersDeck(const std::map<int, gameCardTreasureBattleAmplifier> *battleAmplifiersDeck)
{
    _battleAmplifiersDeck = battleAmplifiersDeck;
}

void Hand::setLevelUpDeck(const std::map<int, gameCardTreasureLevelUp> *levelUpDeck)
{
    _levelUpDeck = levelUpDeck;
}

void Hand::setSpecialMechanicsTreasureDeck(const std::map<int, gameCardTreasureSpecialMechanic> *specialMechanicsTreasureDeck)
{
    _specialMechanicsTreasureDeck = specialMechanicsTreasureDeck;
}

void Hand::setThingsAmplifiersDeck(const std::map<int, gameCardTreasureThingsAmplifiers> *thingsAmplifiersDeck)
{
    _thingsAmplifiersDeck = thingsAmplifiersDeck;
}

void Hand::setWeaponsDeck(const std::map<int, gameCardTreasureWeapon> *weaponsDeck)
{
    _weaponsDeck = weaponsDeck;
}

Hand::~Hand()
{
    delete ui;
}

void Hand::addNewCardToHands(unsigned int cardID)
{

}
