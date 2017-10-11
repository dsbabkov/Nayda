#include "battlefield.h"
#include "ui_battlefield.h"

battleField::battleField(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::battleField)
{
    ui->setupUi(this);


}

battleField::~battleField()
{
    delete ui;
}

void battleField::cardsRepresenter()
{
    //find the HW size of the window
    QRect HW_Screen_Size = QApplication::desktop()->screenGeometry();
    int HW_Screen_Size_Width = HW_Screen_Size.width();
    int HW_Screen_Size_Height = HW_Screen_Size.height();

    //setup the koefficients;
    const float race_class_btn_size_geometric_width_to_height_ratio = 2.71f;
    const float race_class_btn_size_width = 0.0415f;
    const float race_class_btn_size_height = race_class_btn_size_geometric_width_to_height_ratio*race_class_btn_size_width;


    QPushButton* theBtnRepresenter1 = new QPushButton (this);
    QPushButton* theBtnRepresenter2 = new QPushButton (this);
    QPushButton* theBtnRepresenter3 = new QPushButton (this);
    QPushButton* theBtnRepresenter4 = new QPushButton (this);
    QPushButton* theBtnRepresenter5 = new QPushButton (this);



    std::vector<QPushButton*> representersVector = {theBtnRepresenter1, theBtnRepresenter2,
                                                   theBtnRepresenter3,theBtnRepresenter4,
                                                   theBtnRepresenter5};

    auto iter = _monsersDeck->begin();
    for (int var = 0; var < representersVector.size(); ++var) {
        representersVector[var]->setMaximumWidth(race_class_btn_size_width*HW_Screen_Size_Width);
        representersVector[var]->setMaximumHeight(race_class_btn_size_height*HW_Screen_Size_Height);
        representersVector[var]->setMinimumWidth(race_class_btn_size_width*HW_Screen_Size_Width);
        representersVector[var]->setMinimumHeight(race_class_btn_size_height*HW_Screen_Size_Height);
        representersVector[var]->setText("Hello!");
        ui->horizontalLayout_2->addWidget(representersVector[var]);



        //QPixmap pxmp_btn("Pictures/No_Race_dbg.png");
        QPixmap pxmp_btn(iter->second.pictureAddress());
        if (iter != _monsersDeck->end()) iter++;
        QPalette plte_btn;
        plte_btn.setBrush(representersVector[var]->backgroundRole(),
        QBrush(pxmp_btn.scaled(race_class_btn_size_width*HW_Screen_Size_Width,
                                                                 race_class_btn_size_height*HW_Screen_Size_Height,
                                                                 Qt::IgnoreAspectRatio, Qt::SmoothTransformation)));

        representersVector[var]->setFlat(true);
        representersVector[var]->setAutoFillBackground(true);
        representersVector[var]->setPalette(plte_btn);
        representersVector[var]->setText("");

    }





}

void battleField::setMonsersDeck(const std::map<int, gameCardDoorMonster> *monsersDeck)
{
    _monsersDeck = monsersDeck;
}

