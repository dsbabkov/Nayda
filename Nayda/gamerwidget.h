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

private:
    Ui::GamerWidget *ui;
};

#endif // GAMERWIDGET_H
