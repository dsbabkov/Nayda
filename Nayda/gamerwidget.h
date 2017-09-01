#ifndef GAMERWIDGET_H
#define GAMERWIDGET_H

#include <QWidget>

namespace Ui {
class GamerWidget;
}

class GamerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit GamerWidget(QWidget *parent = 0);
    ~GamerWidget();



    bool is_MainPlayer() const;
    void setIs_MainPlayer(bool is_MainPlayer);
    void redraw_as_a_secondary_player();

private:
    Ui::GamerWidget *ui;
    bool _is_MainPlayer;


};

#endif // GAMERWIDGET_H
