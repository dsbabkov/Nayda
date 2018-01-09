#include "hand.h"
#include "ui_hand.h"

Hand::Hand(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Hand)
{
    ui->setupUi(this);


    QRect HW_Screen_Size = QApplication::desktop()->screenGeometry();
    int HW_Screen_Size_Width = HW_Screen_Size.width();
    int HW_Screen_Size_Height = HW_Screen_Size.height();

    //setup the koefficients;
    const float handCard_btn_size_geometric_width_to_height_ratio = 2.71f;
    const float handCard_btn_size_width = 0.0415f;
    const float handCard_btn_size_height = handCard_btn_size_geometric_width_to_height_ratio*handCard_btn_size_width;

    //set the maximum Height of the "Hand" Widget
    setMaximumHeight(HW_Screen_Size_Height*handCard_btn_size_height);


    //place picture
    QPixmap pxmp_HandCover("Pictures/Hand/sunRiseMiddle.png");
    QPalette plte_HandCover;
    plte_HandCover.setBrush(backgroundRole(),
    QBrush(pxmp_HandCover.scaled(handCard_btn_size_width*HW_Screen_Size_Width,
                                                             handCard_btn_size_height*HW_Screen_Size_Height,
                                                             Qt::IgnoreAspectRatio, Qt::SmoothTransformation)));


    setAutoFillBackground(true);
    setPalette(plte_HandCover);






}

Hand::~Hand()
{
    delete ui;
}
