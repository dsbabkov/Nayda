#include "main_application.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Main_Application w;
    w.show();

    return a.exec();
}
