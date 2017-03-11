#include "main_application.h"
#include <QApplication>
#include <QDebug>
#include "BeforeTheGame/Classes/Before_TheGame.h"
#include "Classes/AddressLineClass.h"





int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Main_Application w;
    w.show();


    qDebug() << "Here we go!";

    //w.hide();


    return a.exec();
}
