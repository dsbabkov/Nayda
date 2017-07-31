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



    //configure_with_default_settings;
    number_of_players = 3;
    time_for_move = 30;
    time_to_think = 30;

}






Before_The_Game::~Before_The_Game()
{
    delete ui;
}

void Before_The_Game::dbg_switch_to_game_mode_button_pressed()
{
    emit dbg_switch_to_game_mode(true);
    emit dbg_the_game_begins(true);
    emit update_game_options_card_stack_type(this->card_stack_mode);
    //emit update_game
}


//void Before_The_Game::setUi(Ui::Before_The_Game *value)
//{
//    ui = value;
//}
