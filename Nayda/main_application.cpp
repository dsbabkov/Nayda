#include "main_application.h"
#include "ui_main_application.h"

Main_Application::Main_Application(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Main_Application)
{
    ui->setupUi(this);
}

Main_Application::~Main_Application()
{
    delete ui;
}
