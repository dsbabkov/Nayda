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


    //setup size before rescaling.
    //resize will be allowed only for PC version and only for some preset definition

#ifdef PC_VERSION
    //some code

    //find the HW size of the window
    QRect HW_Screen_Size = QApplication::desktop()->screenGeometry();
    int HW_Screen_Size_Width = HW_Screen_Size.width();
    int HW_Screen_Size_Heigh = HW_Screen_Size.height();

#ifdef DEBUG_MESSAGES
    qDebug() << "Available dimensions. Screen w = " << HW_Screen_Size_Width << " Screen h = " << HW_Screen_Size_Heigh;
#endif

    //set the size_constants
    //height of Munchkin picture, width, etc...
    //with respect to the size of the window - use proportions

    const double Main_Picture_Size_Width_coeff = 0.13021*0.75;
    const double Main_Picture_Size_Height_coeff = 0.27778*0.75;

    const double Quick_Acion_Size_Width_coeff = Main_Picture_Size_Width_coeff*0.75*0.4;
    const double Quick_Acion_Size_Height_coeff = Main_Picture_Size_Height_coeff*0.75;

    const double Level_Label_Size_Width_coeff = Main_Picture_Size_Width_coeff*0.7;
    const double Level_Label_Size_Height_coeff = Main_Picture_Size_Height_coeff*0.7;


#endif

#ifdef MOBILE_VERSION
    //some code
#endif



    //Setting-up button's connections.

    //QObject::connect( ui->btnHide, SIGNAL(clicked()), this, SLOT(hide()));
    QObject::connect(ui->btn_switch_back, SIGNAL(clicked()), this, SLOT(hide()));
    QObject::connect(this, SIGNAL(dbg_to_be_shown(bool)), this, SLOT(showFullScreen()));//SLOT(showFullScreen())) SLOT(show();
    QObject::connect(ui->btn_switch_back, SIGNAL(clicked(bool)), this, SLOT(dbg_return_to_the_main_window()));


    //setting-up main Game Ico

    //all of such kind is equal;
    //1. create pixmap;
    //2. rescale pixmap
    //3. create palette
    //4. set brush of palette as previously created pixmap
    //5. set everything for button: fillbackground; palette; flat; fixed size;
    //6. move to the expected position and leave it there
    //7. define whether it could be movable???

    //Setting up coefficients
    const float koeff_GameField_size = 0.7;

    const float koeff_GamerWidget_size_Height = (1 - koeff_GameField_size)/2;
    const float koeff_GamerWidget_size_Width = koeff_GameField_size/3;

    const float koeff_GameTimers_size_Height = koeff_GamerWidget_size_Height; // should be the same
    const float koeff_GameTimers_size_Width = koeff_GameField_size/3;
    const float koeff_GameInfoBox_size_Height = 0.66; //why it is impossible 2/3???
    const float koeff_GameInfoBox_size_Width = (1 - koeff_GameField_size) / 2;


    //setting up the GUI staff
    //Defining its coefficients with respect to the total size of availible field;




    ui->GameField->setMinimumWidth(koeff_GameField_size*HW_Screen_Size_Width);
    ui->GameField->setMinimumHeight(koeff_GameField_size*HW_Screen_Size_Heigh);

    ui->MainGamer->setMinimumHeight(koeff_GamerWidget_size_Height*HW_Screen_Size_Heigh);
    ui->MainGamer->setMaximumHeight(koeff_GamerWidget_size_Height*HW_Screen_Size_Heigh);
    //with respect to the MainGamer, the height size won't be larger then allowed,
    //but may take all the availible space if the width is concerned; Why not?
    //ui->MainGamer->setMinimumWidth(koeff_GamerWidget_size_Width*HW_Screen_Size_Width);
    ui->MainGamer->setMaximumWidth(koeff_GamerWidget_size_Width*HW_Screen_Size_Width);

    ui->TimersWidget->setMinimumHeight(koeff_GameTimers_size_Height*HW_Screen_Size_Heigh);
    ui->TimersWidget->setMaximumHeight(koeff_GameTimers_size_Height*HW_Screen_Size_Heigh);

    ui->TimersWidget->setMinimumWidth(koeff_GameTimers_size_Width*HW_Screen_Size_Width);
    ui->TimersWidget->setMaximumWidth(koeff_GameTimers_size_Width*HW_Screen_Size_Width);

    ui->GameInfoBox->setMinimumHeight(koeff_GameInfoBox_size_Height*HW_Screen_Size_Heigh);
    ui->GameInfoBox->setMaximumHeight(koeff_GameInfoBox_size_Height*HW_Screen_Size_Heigh);

    ui->GameInfoBox->setMinimumWidth(koeff_GameInfoBox_size_Width*HW_Screen_Size_Width);
    ui->GameInfoBox->setMaximumWidth(koeff_GameInfoBox_size_Width*HW_Screen_Size_Width);


#ifdef DEBUG_MESSAGES
    qDebug() << "GameInfoBox. setMinimumHeight = setMaximumHeight " << koeff_GameInfoBox_size_Height*HW_Screen_Size_Heigh << endl
             <<" GameInfoBox.setMinimumWidth = " << koeff_GameInfoBox_size_Width*HW_Screen_Size_Width;
#endif







    ui->btn_switch_back->setMinimumWidth(koeff_GameInfoBox_size_Width*HW_Screen_Size_Width);
    ui->btn_switch_back->setMaximumWidth(koeff_GameInfoBox_size_Width*HW_Screen_Size_Width);


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


