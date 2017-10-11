#ifndef BATTLEFIELD_H
#define BATTLEFIELD_H

#include <QWidget>
#include <QPropertyAnimation>
#include <QDesktopWidget>
#include <Application/card.h>
#include <QPushButton>


namespace Ui {
class battleField;
}

class battleField : public QWidget
{
    Q_OBJECT

public:
    explicit battleField(QWidget *parent = 0);
    ~battleField();


    void cardsRepresenter();

    void setMonsersDeck(const std::map<int, gameCardDoorMonster> *monsersDeck);


private:
    Ui::battleField *ui;

    //const std::map<int, gameCardDoorMonster> &_monsersDeck;
    const std::map<int, gameCardDoorMonster> *_monsersDeck;

};

#endif // BATTLEFIELD_H
