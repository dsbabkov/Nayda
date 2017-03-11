#include "main_application.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Main_Application w;
    w.show();


    qDebug() << "Here we go!";

    return a.exec();
}
