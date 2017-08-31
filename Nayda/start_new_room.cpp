#include "start_new_room.h"
#include "ui_start_new_room.h"

start_new_room::start_new_room(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::start_new_room)
{
    ui->setupUi(this);
}

start_new_room::~start_new_room()
{
    delete ui;
}
