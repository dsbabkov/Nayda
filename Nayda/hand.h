#ifndef HAND_H
#define HAND_H

#include <QWidget>
#include <QDesktopWidget>
#include <QRect>
#include <QPushButton>

namespace Ui {
class Hand;
}

class Hand : public QWidget
{
    Q_OBJECT

public:
    explicit Hand(QWidget *parent = 0);
    ~Hand();


signals:
    void cardIsPlayingByPlayer(bool);
    void cardIsReplacingByPlayer(bool);
    void cardIsFoldingByPlayer(bool);

public slots:




private:
    Ui::Hand *ui;
    std::vector<QPushButton*>_cardsVector;




};

#endif // HAND_H
