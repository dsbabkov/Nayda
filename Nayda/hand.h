#ifndef HAND_H
#define HAND_H

#include <QWidget>
#include <QDesktopWidget>
#include <QRect>

namespace Ui {
class Hand;
}

class Hand : public QWidget
{
    Q_OBJECT

public:
    explicit Hand(QWidget *parent = 0);
    ~Hand();

private:
    Ui::Hand *ui;
};

#endif // HAND_H
