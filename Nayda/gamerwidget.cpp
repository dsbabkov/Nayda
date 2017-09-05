#include "gamerwidget.h"
#include "ui_gamerwidget.h"

GamerWidget::GamerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GamerWidget)
{
    ui->setupUi(this);

    //https://wiki.qt.io/Qt_Coding_Style/ru



    //find the HW size of the window
    QRect HW_Screen_Size = QApplication::desktop()->screenGeometry();
    int HW_Screen_Size_Width = HW_Screen_Size.width();
    int HW_Screen_Size_Height = HW_Screen_Size.height();




    //Hide odds

    ui->btn_race_2->hide();
    ui->lbl_halfblood->hide();
    ui->btn_class_2->hide();
    ui->lbl_supermunchkin->hide();





    //setup the koefficients;
    const float race_class_btn_size_geometric_width_to_height_ratio = 1.55f;
    const float race_class_btn_size_width = 0.07f;
    const float race_class_btn_size_height = race_class_btn_size_geometric_width_to_height_ratio*race_class_btn_size_width;



    //setup the "card"-race size
    ui->btn_race_1->setMaximumWidth(race_class_btn_size_width*HW_Screen_Size_Width);
    ui->btn_race_1->setMaximumHeight(race_class_btn_size_height*HW_Screen_Size_Width);
    ui->btn_race_1->setMinimumWidth(race_class_btn_size_width*HW_Screen_Size_Width);
    ui->btn_race_1->setMinimumHeight(race_class_btn_size_height*HW_Screen_Size_Width);


    QPixmap pxmp_icon_race_1("Pictures/No_Race.jpg");
    QPalette plte_icon_race_1;
    plte_icon_race_1.setBrush(ui->btn_race_1->backgroundRole(),
                              QBrush(pxmp_icon_race_1.scaled(134,208,
                              Qt::KeepAspectRatio, Qt::SmoothTransformation)));
     ui->btn_race_1->setFlat(true);
     ui->btn_race_1->setAutoFillBackground(true);
     ui->btn_race_1->setPalette(plte_icon_race_1);


    //resizing pxmp
    pxmp_icon_race_1.scaled(race_class_btn_size_width*HW_Screen_Size_Width,race_class_btn_size_height*HW_Screen_Size_Height,
                            Qt::KeepAspectRatio, Qt::SmoothTransformation);




    QIcon icon_race_1(pxmp_icon_race_1.scaled(196,300,
                                              Qt::KeepAspectRatio, Qt::SmoothTransformation));


    qDebug() <<"Size of the pixmap.scaled, Width: " << pxmp_icon_race_1.scaled(134,208,
                                                                               Qt::KeepAspectRatio, Qt::SmoothTransformation).size().width();
    qDebug() << "Size of the pixmap.scaled, Height: " << pxmp_icon_race_1.scaled(134,208,
                                                                                 Qt::KeepAspectRatio, Qt::SmoothTransformation).size().height();





    //ui->btn_race_1->setIcon(icon_race_1);
    //ui->btn_race_1->setText("");


    qDebug() << "Size of the button, Width: " << race_class_btn_size_width*HW_Screen_Size_Width;
    qDebug() << "Size of the button, Height: " << race_class_btn_size_height*HW_Screen_Size_Width;










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


