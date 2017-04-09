#include <QApplication>
#include <QDebug>






int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Main_Application Before_The_Game;
    Main_Application The_Game;
    Before_The_Game.show();
    The_Game.hide();


    qDebug() << "Here we go!";

    //w.hide();


    return a.exec();
}
