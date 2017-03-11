#include "main_application.h"
#include "ui_main_application.h"
#include "TheGame_GUIi.h"


Main_Application::Main_Application(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Main_Application)
{
    ui->setupUi(this);



   // MyScene* scene = new MyScene(this);//создаем НАШУ сцену
   // ui->graphicsView->setScene(scene); //и ассоциируем ее с QGraphicsView

    TheGame_GUI *TheGame_GUI_obj = new TheGame_GUI(this);
    TheGame_GUI_obj->hide();

    //MyLineDialog *lineDialog = new MyLineDialog(scene->getFrameColor(),scene->getFrameWidth(),scene->getFrameStyle(),this);

    QObject::connect( ui->btnHide, SIGNAL(clicked()), this, SLOT(hide()));
    QObject::connect( ui->btnHide, SIGNAL(clicked()), TheGame_GUI_obj, SLOT(show()));
    QObject::connect( TheGame_GUI_obj, SIGNAL(ClosingTheWindow(bool)),this , SLOT(show()));


}





Main_Application::~Main_Application()
{
    delete ui;
}
