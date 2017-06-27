#ifndef GAMETIMERS_H
#define GAMETIMERS_H

#include <QWidget>

namespace Ui {
class GameTimers;
}

class GameTimers : public QWidget
{
    Q_OBJECT

public:
    explicit GameTimers(QWidget *parent = 0);
    ~GameTimers();

private:
    Ui::GameTimers *ui;
};

#endif // GAMETIMERS_H
