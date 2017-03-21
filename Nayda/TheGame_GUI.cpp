#include "TheGame_GUIi.h"
#include "ui_TheGame_GUI.h"
#include "main_application.h"


TheGame_GUI::TheGame_GUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TheGame_GUI)
{
    ui->setupUi(this);



    QPushButton *button1= new QPushButton(QObject::tr("But1"),this);
    QPushButton *button2= new QPushButton(QObject::tr("But2"),this);
    QPushButton *button3= new QPushButton(QObject::tr("But3"),this);
    QPushButton *button4= new QPushButton(QObject::tr("But4"),this);
    QPushButton *button5= new QPushButton(QObject::tr("But5"),this);
    QPushButton *button6= new QPushButton(QObject::tr("But6"),this);
    QPushButton *button7= new QPushButton(QObject::tr("But7"),this);
    QPushButton *button8= new QPushButton(QObject::tr("But8"),this);
    QPushButton *button9= new QPushButton(QObject::tr("But9"),this);


    ui->gridLayout_2->addWidget(button1, 0, 0);
    ui->gridLayout_2->addWidget(button2, 0, 1);
    ui->gridLayout_2->addWidget(button3, 0, 2);
    ui->gridLayout_2->addWidget(button4, 1, 0, 2, 1);
    ui->gridLayout_2->addWidget(button5, 1, 1);
    ui->gridLayout_2->addWidget(button6, 1, 2);
    //ui->gridLayout_2->addWidget(button7, 2, 0, 2, 1);
    ui->gridLayout_2->addWidget(button8, 2, 1);
    ui->gridLayout_2->addWidget(button9, 2, 2);
    ui->gridLayout_2->addWidget(ui->pushButton,3,0);


     QObject::connect( ui->pushButton, SIGNAL(clicked()), this, SLOT(hide()));
     QObject::connect( ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(ClosingSlot(bool)));




}

TheGame_GUI::~TheGame_GUI()
{
    delete ui;
}
