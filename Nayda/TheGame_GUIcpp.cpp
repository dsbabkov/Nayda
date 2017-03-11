#include "TheGame_GUIi.h"
#include "ui_TheGame_GUI.h"
#include "main_application.h"


TheGame_GUI::TheGame_GUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TheGame_GUI)
{
    ui->setupUi(this);

     QObject::connect( ui->pushButton, SIGNAL(clicked()), this, SLOT(hide()));
     QObject::connect( ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(ClosingSlot(bool)));




}

TheGame_GUI::~TheGame_GUI()
{
    delete ui;
}
