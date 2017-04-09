#ifndef MAIN_APPLICATION_H
#define MAIN_APPLICATION_H

#include <QMainWindow>

namespace Ui {
class Main_Application;
}

class Main_Application : public QMainWindow
{
    Q_OBJECT

public:
    explicit Main_Application(QWidget *parent = 0);
    ~Main_Application();

private:
    Ui::Main_Application *ui;
};

#endif // MAIN_APPLICATION_H
