#include "Application/The_Game/The_Game.h"
#include "ui_The_Game.h"
#include <QPixmap>

The_Game::The_Game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::The_Game)
{
    ui->setupUi(this);

    //QObject::connect( ui->btnHide, SIGNAL(clicked()), this, SLOT(hide()));
    QObject::connect(ui->btn_switch_back, SIGNAL(clicked()), this, SLOT(hide()));
    QObject::connect(this, SIGNAL(dbg_to_be_shown(bool)), this, SLOT(show()));
    QObject::connect(ui->btn_switch_back, SIGNAL(clicked(bool)), this, SLOT(dbg_return_to_the_main_window()));

    QPixmap myPixmap("Klirik_1.jpg");
    ui->label->setPixmap(myPixmap);



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


