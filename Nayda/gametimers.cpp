#include "gametimers.h"
#include "ui_gametimers.h"

GameTimers::GameTimers(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameTimers)
{
    ui->setupUi(this);
}

GameTimers::~GameTimers()
{
    delete ui;
}
