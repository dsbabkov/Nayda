#include "Application/Before_The_Game/Before_The_Game.h"
//#include "ui_main_application.h"
#include "ui_Before_The_Game.h"

Before_The_Game::Before_The_Game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Before_The_Game)
{
    ui->setupUi(this);



    QObject::connect( ui->btnHide, SIGNAL(clicked()), this, SLOT(hide()));
    QObject::connect (ui->btnHide, SIGNAL(clicked(bool)), this, SLOT(dbg_switch_to_game_mode_button_pressed()));
//    QObject::connect( ui->btnHide, SIGNAL(clicked()), TheGame_GUI_obj, SLOT(show()));
//    QObject::connect( TheGame_GUI_obj, SIGNAL(ClosingTheWindow(bool)),this , SLOT(show()));
//    QObject::connect(ui->btnHide, SIGNAL(clicked()), SomeTestAnotherMain_obj, SLOT(show()));


}






Before_The_Game::~Before_The_Game()
{
    delete ui;
}

void Before_The_Game::dbg_switch_to_game_mode_button_pressed()
{
    emit dbg_switch_to_game_mode(true);
}


//void Before_The_Game::setUi(Ui::Before_The_Game *value)
//{
//    ui = value;
//}
