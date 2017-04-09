#include "game_gui_test.h"
#include "ui_game_gui_test.h"

Game_GUI_test::Game_GUI_test(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Game_GUI_test)
{
    ui->setupUi(this);
}

Game_GUI_test::~Game_GUI_test()
{
    delete ui;
}
