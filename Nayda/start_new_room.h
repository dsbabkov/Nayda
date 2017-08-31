#ifndef START_NEW_ROOM_H
#define START_NEW_ROOM_H

#include <QWidget>

namespace Ui {
class start_new_room;
}

class start_new_room : public QWidget
{
    Q_OBJECT

public:
    explicit start_new_room(QWidget *parent = 0);
    ~start_new_room();

private:
    Ui::start_new_room *ui;
};

#endif // START_NEW_ROOM_H
