#include "Application/The_Game/The_Game.h"
#include "ui_The_Game.h"
#include <QPixmap>
#include <QPropertyAnimation>

The_Game::The_Game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::The_Game)
{
    ui->setupUi(this);

    //QObject::connect( ui->btnHide, SIGNAL(clicked()), this, SLOT(hide()));
    QObject::connect(ui->btn_switch_back, SIGNAL(clicked()), this, SLOT(hide()));
    QObject::connect(this, SIGNAL(dbg_to_be_shown(bool)), this, SLOT(show()));//SLOT(showFullScreen()));
    QObject::connect(ui->btn_switch_back, SIGNAL(clicked(bool)), this, SLOT(dbg_return_to_the_main_window()));

    QPixmap myPixmap("Klirik_1.jpg");
    QPixmap my1Pixmap("Grudnoi.jpg");
    ui->label->setPixmap(myPixmap);
    QPixmap another = myPixmap.scaled(300, 250, Qt::KeepAspectRatio);
    ui->label->setPixmap(another);
    //ui->label->setPixmap(my1Pixmap);


    QPalette somepalette;
    somepalette.setBrush(ui->pushButton_4->backgroundRole(),QBrush(my1Pixmap));
    ui->pushButton_4->setAutoFillBackground(true);
    ui->pushButton_4->setAutoFillBackground(true);
    ui->pushButton_4->setPalette(somepalette);
    ui->pushButton_4->setFlat(true);
    ui->pushButton_4->setFixedSize(another.rect().size());

    //QPixmap someother = myPixmap.scaled(this->size().height(),0.1*this->size().width(), Qt::KeepAspectRatio);

    QPixmap pxmp_MunchkinHero("Munchkin_game_cover.jpg");
    QPixmap someother = pxmp_MunchkinHero.scaled(300,250, Qt::KeepAspectRatio);

    QPalette someotherpalette;
    someotherpalette.setBrush(ui->pushButton_3->backgroundRole(), QBrush(someother));
    //somepalette.setBrush(ui->pushButton_3->backgroundRole(),QBrush(my1Pixmap));
    ui->pushButton_3->setAutoFillBackground(true);
    ui->pushButton_3->setAutoFillBackground(true);
    ui->pushButton_3->setPalette(someotherpalette);
    ui->pushButton_3->setFlat(true);
    ui->pushButton_3->setFixedSize(someother.rect().size());



    QPixmap pxmp_Hireling("Hireling.jpg");
    QPixmap someother2 = pxmp_Hireling.scaled(300,250, Qt::KeepAspectRatio);

    QPalette someotherpalette2;
    someotherpalette2.setBrush(ui->pushButton_2->backgroundRole(), QBrush(someother2));
    //somepalette.setBrush(ui->pushButton_3->backgroundRole(),QBrush(my1Pixmap));
    ui->pushButton_2->setAutoFillBackground(true);
    ui->pushButton_2->setAutoFillBackground(true);
    ui->pushButton_2->setPalette(someotherpalette2);
    ui->pushButton_2->setFlat(true);
    ui->pushButton_2->setFixedSize(someother2.rect().size());

//    ui->pushButton_4->setIcon(QIcon(another));
//    ui->pushButton_4->setIconSize(another.rect().size());






}

The_Game::~The_Game()
{
    delete ui;
}

void The_Game::dbg_was_pushed_to_game_mode()
{
    emit dbg_to_be_shown(true);
}

void The_Game::dbg_return_to_the_main_window()
{
    emit dbg_return_to_before_the_game(true);
}


