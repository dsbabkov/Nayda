#include "Application/The_Game/The_Game.h"
#include "ui_The_Game.h"

The_Game::The_Game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::The_Game)
{
    ui->setupUi(this);
}

The_Game::~The_Game()
{
    delete ui;
}
