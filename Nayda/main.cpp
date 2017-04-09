#include "main_application.h"
#include <QApplication>
#include "Application/Before_The_Game/Before_The_Game.h"
#include "Application/The_Game/The_Game.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Before_The_Game obj_Before_The_Game;
    The_Game obj_The_Game;
    //Main_Application w;
    //w.show();

    obj_Before_The_Game.show();
    obj_The_Game.show();

    return a.exec();
}
