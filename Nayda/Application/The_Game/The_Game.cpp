#include "Application/The_Game/The_Game.h"
#include "ui_The_Game.h"
#include <QPixmap>
#include <QPropertyAnimation>
#include <QDesktopWidget>
#include <QDebug>

The_Game::The_Game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::The_Game)
{
    ui->setupUi(this);

    //QObject::connect( ui->btnHide, SIGNAL(clicked()), this, SLOT(hide()));
    QObject::connect(ui->btn_switch_back, SIGNAL(clicked()), this, SLOT(hide()));
    QObject::connect(this, SIGNAL(dbg_to_be_shown(bool)), this, SLOT(showFullScreen()));//SLOT(showFullScreen())) SLOT(show();
    QObject::connect(ui->btn_switch_back, SIGNAL(clicked(bool)), this, SLOT(dbg_return_to_the_main_window()));

    QPixmap myPixmap("Klirik_1.jpg");
    QPixmap my1Pixmap("Grudnoi.jpg");

    //ui->label->setPixmap(myPixmap);
    QPixmap another = myPixmap.scaled(300, 250, Qt::KeepAspectRatio);


    //ui->label->setPixmap(another);



    QPalette somepalette;
    somepalette.setBrush(ui->pushButton_4->backgroundRole(),QBrush(my1Pixmap));
    ui->pushButton_4->setAutoFillBackground(true);
    ui->pushButton_4->setAutoFillBackground(true);
    ui->pushButton_4->setPalette(somepalette);
    ui->pushButton_4->setFlat(true);
    ui->pushButton_4->setFixedSize(another.rect().size());

    //QPixmap someother = myPixmap.scaled(this->size().height(),0.1*this->size().width(), Qt::KeepAspectRatio);

    QPixmap pxmp_MunchkinHero("Munchkin_game_cover.jpg");
    QPixmap someother = pxmp_MunchkinHero.scaled(300,250, Qt::KeepAspectRatio);

    QPalette someotherpalette;
    someotherpalette.setBrush(ui->pushButton_3->backgroundRole(), QBrush(someother));
    //somepalette.setBrush(ui->pushButton_3->backgroundRole(),QBrush(my1Pixmap));
    ui->pushButton_3->setAutoFillBackground(true);
    ui->pushButton_3->setAutoFillBackground(true);
    ui->pushButton_3->setPalette(someotherpalette);
    ui->pushButton_3->setFlat(true);
    ui->pushButton_3->setFixedSize(someother.rect().size());

    QPixmap pxmp_Hireling("Hireling.jpg");
    QPixmap someother2 = pxmp_Hireling.scaled(300,250, Qt::KeepAspectRatio);

    QPalette someotherpalette2;
    someotherpalette2.setBrush(ui->pushButton_2->backgroundRole(), QBrush(someother2));
    //somepalette.setBrush(ui->pushButton_3->backgroundRole(),QBrush(my1Pixmap));
    ui->pushButton_2->setAutoFillBackground(true);
    ui->pushButton_2->setAutoFillBackground(true);
    ui->pushButton_2->setPalette(someotherpalette2);
    ui->pushButton_2->setFlat(true);
    ui->pushButton_2->setFixedSize(someother2.rect().size());

//    ui->pushButton_4->setIcon(QIcon(another));
//    ui->pushButton_4->setIconSize(another.rect().size());

    // get the dimension available on this screen
    //QSize availableSize = qApp->desktop()->availableGeometry().size();
    //int width = availableSize.width();
    //int height = availableSize.height();
    //qDebug() << "Available dimensions " << width << "x" << height;
    //width = 0.9; // 90% of the screen size
    //height = 0.9; // 90% of the screen size
   // qDebug() << "Computed dimensions " << width << "x" << height;
   // QSize newSize( width, height );
    QRect givenSize = QApplication::desktop()->screenGeometry();
    int width = givenSize.width();
    int height = givenSize.height();
    qDebug() << "Available dimensions. w = " << width << "h = " << height;

    double height_hand_card_size_coeff = 0.27778;
    double width_hand_card_size_coeff = 0.13021;

    QPixmap pxmp_CardStack_1("Hireling.jpg");
    QPixmap rescaled_pxmp_CardStack_1 = pxmp_CardStack_1.scaled(height_hand_card_size_coeff*height,
                                                                width_hand_card_size_coeff*width,
                                                                Qt::KeepAspectRatio);

    QPalette cardStackPalette;
    cardStackPalette.setBrush(ui->pushButton_12->backgroundRole(), QBrush(rescaled_pxmp_CardStack_1));
    //somepalette.setBrush(ui->pushButton_3->backgroundRole(),QBrush(my1Pixmap));
    ui->pushButton_12->setAutoFillBackground(true);
    ui->pushButton_12->setAutoFillBackground(true);
    ui->pushButton_12->setPalette(someotherpalette2);
    ui->pushButton_12->setFlat(true);
    ui->pushButton_12->setFixedSize(rescaled_pxmp_CardStack_1.rect().size());
    //ui->pushButton_12->set

    //remeber the double! =)
    double height_level_icon_size_coeff = 0.2 *(height_hand_card_size_coeff);
    double width_level_icon_size_coeff = 0.2 * (width_hand_card_size_coeff);
    QPixmap Level_Initial("level1.jpg");
    QPixmap rescaled_level_initial = Level_Initial.scaled(height_level_icon_size_coeff*height, width_level_icon_size_coeff*width,
                                                          Qt::KeepAspectRatio);
    ui->label_2->setScaledContents(true);
    qDebug() << "Height = " << rescaled_level_initial.size().height() << "Width = " << rescaled_level_initial.size().width();
    qDebug() << "Height = " << height_level_icon_size_coeff << "Width = " << width_level_icon_size_coeff;

    ui->label_2->setPixmap(rescaled_level_initial);

    QLabel* defining_array[12];
    defining_array[0] = ui->label_3;
    defining_array[1] = ui->label_4;
    defining_array[2] = ui->label_5;
    defining_array[3] = ui->label_6;
    defining_array[4] = ui->label_7;
    defining_array[5] = ui->label_8;
    defining_array[6] = ui->label_9;
    defining_array[7] = ui->label_10;
    defining_array[8] = ui->label_11;
    defining_array[9] = ui->label_12;
    defining_array[10] = ui->label_13;
    defining_array[11] = ui->label_14;

    QPixmap* defining_pixmap_array[12];
    QPixmap ico0("ico_0.jpg");
    QPixmap ico1("ico_1.jpg");
    QPixmap ico2("ico_2.jpg");
    QPixmap ico3("ico_3.jpg");
    QPixmap ico4("ico_4.jpg");
    QPixmap ico5("ico_5.jpg");
    QPixmap ico6("ico_6.jpg");
    QPixmap ico7("ico_7.jpg");
    QPixmap ico8("ico_8.jpg");
    QPixmap ico9("ico_9.jpg");
    QPixmap ico10("ico_10.jpg");
    QPixmap ico11("ico_11.jpg");


    defining_pixmap_array[0] = &ico0;
    defining_pixmap_array[1] = &ico1;
    defining_pixmap_array[2] = &ico2;
    defining_pixmap_array[3] = &ico3;
    defining_pixmap_array[4] = &ico4;
    defining_pixmap_array[5] = &ico5;
    defining_pixmap_array[6] = &ico6;
    defining_pixmap_array[7] = &ico7;
    defining_pixmap_array[8] = &ico8;
    defining_pixmap_array[9] = &ico9;
    defining_pixmap_array[10] = &ico10;
    defining_pixmap_array[11] = &ico11;

    for (int i = 0; i < 12 ; ++i) {
    QPixmap rescaled = defining_pixmap_array[i]->scaled(height_level_icon_size_coeff*height, width_level_icon_size_coeff*width,
                                                        Qt::KeepAspectRatio);
    defining_array[i]->setScaledContents(true);
    defining_array[i]->setPixmap(rescaled);

    }





}

The_Game::~The_Game()
{
    delete ui;
}

void The_Game::dbg_was_pushed_to_game_mode()
{
    emit dbg_to_be_shown(true);
}

void The_Game::dbg_return_to_the_main_window()
{
    emit dbg_return_to_before_the_game(true);
}


