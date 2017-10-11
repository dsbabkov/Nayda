#include "battlefield.h"
#include "ui_battlefield.h"

battleField::battleField(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::battleField)
{
    ui->setupUi(this);
}

battleField::~battleField()
{
    delete ui;
}
