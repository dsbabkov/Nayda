#ifndef GAME_GUI_TEST_H
#define GAME_GUI_TEST_H

#include <QMainWindow>

namespace Ui {
class Game_GUI_test;
}

class Game_GUI_test : public QMainWindow
{
    Q_OBJECT

public:
    explicit Game_GUI_test(QWidget *parent = 0);
    ~Game_GUI_test();

private:
    Ui::Game_GUI_test *ui;
};

#endif // GAME_GUI_TEST_H
