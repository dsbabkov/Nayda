#include "gamerwidget.h"
#include "ui_gamerwidget.h"

GamerWidget::GamerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GamerWidget)
{
    ui->setupUi(this);

}

GamerWidget::~GamerWidget()
{
    delete ui;
}

bool GamerWidget::is_MainPlayer() const
{
    return _is_MainPlayer;
}

void GamerWidget::setIs_MainPlayer(bool is_MainPlayer)
{
    _is_MainPlayer = is_MainPlayer;
}

void GamerWidget::redraw_as_a_secondary_player()
{
    ui->btn_auto_advice->hide();
    ui->btn_diplomacy->hide();
    ui->btn_fast_action->hide();
}


