#ifndef BATTLEFIELD_H
#define BATTLEFIELD_H

#include <QWidget>
#include <QPropertyAnimation>
#include <QDesktopWidget>


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

private:
    Ui::battleField *ui;
};

#endif // BATTLEFIELD_H
