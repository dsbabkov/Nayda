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


//    const double Race_Ico_Size_Width = 0.2 * Main_Picture_Size_Width;
//    const double Race_Ico_Size_Height = 0.4 * Main_Picture_Size_Height;

//    const double Class_Ico_Size_Width = Race_Ico_Size_Width;
//    const double Class_Ico_Size_Height = Race_Ico_Size_Height;

//    const double Level_Ico_Size_Width = Race_Ico_Size_Width;
//    const double Level_Ico_Size_Height = Race_Ico_Size_Height;



#endif

#ifdef MOBILE_VERSION
    //some code
#endif



    //Setting-up button's connections.

    //QObject::connect( ui->btnHide, SIGNAL(clicked()), this, SLOT(hide()));
    QObject::connect(ui->btn_switch_back, SIGNAL(clicked()), this, SLOT(hide()));
    QObject::connect(this, SIGNAL(dbg_to_be_shown(bool)), this, SLOT(showFullScreen()));//SLOT(showFullScreen())) SLOT(show();
    QObject::connect(ui->btn_switch_back, SIGNAL(clicked(bool)), this, SLOT(dbg_return_to_the_main_window()));

    //The Designer looks not obvious for my task. Better to implement the fixed positions 
    //without any resize e
    
    
    


    //setting-up main Game Ico

    //all of such kind is equal;
    //1. create pixmap;
    //2. rescale pixmap
    //3. create palette
    //4. set brush of palette as previously created pixmap
    //5. set everything for button: fillbackground; palette; flat; fixed size;
    //6. move to the expected position and leave it there
    //7. define whether it could be movable???


    //looks like not necessary to make all of that as specific function
    QPixmap pxmp_MainGamer_Avatar("Munchkin_game_cover.jpg");
    pxmp_MainGamer_Avatar = pxmp_MainGamer_Avatar.scaled(HW_Screen_Size_Heigh*Main_Picture_Size_Height_coeff,
                                                     HW_Screen_Size_Width*Main_Picture_Size_Width_coeff,
                                                     Qt::KeepAspectRatio);

    QPalette plte_MainGamer;
    plte_MainGamer.setBrush(ui->btn_mainGamer_Avatar->backgroundRole(), QBrush(pxmp_MainGamer_Avatar));
    //somepalette.setBrush(ui->pushButton_3->backgroundRole(),QBrush(my1Pixmap));
    ui->btn_mainGamer_Avatar->setAutoFillBackground(true);
    ui->btn_mainGamer_Avatar->setPalette(plte_MainGamer);
    ui->btn_mainGamer_Avatar->setFlat(true);
    ui->btn_mainGamer_Avatar->setFixedSize(pxmp_MainGamer_Avatar.rect().size());

    //define the area to move;
    //-5 by y (not to be on the floor)
    //x,y

    ui->btn_mainGamer_Avatar->move((HW_Screen_Size_Width/2) - (pxmp_MainGamer_Avatar.rect().size().width() / 2),
                                   HW_Screen_Size_Heigh - pxmp_MainGamer_Avatar.rect().size().height() - 5);


    //first decide where there will be gamers and than decide how to control it;

    QPixmap pxmp_QuickAction_Button("quick_action_button.jpg");
    pxmp_QuickAction_Button = pxmp_QuickAction_Button.scaled(HW_Screen_Size_Heigh*Quick_Acion_Size_Height_coeff,
                                                             HW_Screen_Size_Width*Quick_Acion_Size_Width_coeff,
                                                             Qt::KeepAspectRatio);


    QPalette plte_QuickAction;
    plte_QuickAction.setBrush(ui->btn_mainGamer_QuickAction->backgroundRole(), QBrush(pxmp_QuickAction_Button));

    ui->btn_mainGamer_QuickAction->setAutoFillBackground(true);
    ui->btn_mainGamer_QuickAction->setPalette(plte_QuickAction);
    ui->btn_mainGamer_QuickAction->setFlat(true);
    ui->btn_mainGamer_QuickAction->setFixedSize(pxmp_QuickAction_Button.rect().size());


    //define the area to move;
    //-5 by y (not to be on the floor)
    //x,y

    ui->btn_mainGamer_QuickAction->move((HW_Screen_Size_Width/2) - (pxmp_MainGamer_Avatar.rect().size().width() / 2) -
                                        pxmp_QuickAction_Button.rect().size().width() - 10,
                                   HW_Screen_Size_Heigh - pxmp_MainGamer_Avatar.rect().size().height() - 5);


    
    //
    //LEVEL_LABEL
    //
   {
    
    
   QPixmap pxmp_Level_Scale("level_digit_1_white.jpg");
   

   //to make it as a half of the Avatar size; To place it on top;
   pxmp_Level_Scale = pxmp_Level_Scale.scaled(pxmp_MainGamer_Avatar.rect().size().width()/2 - 10,
                                              pxmp_MainGamer_Avatar.rect().size().width()/2 - 10,
                                              Qt::KeepAspectRatio);

    QPalette plte_Level_Scale;
    plte_Level_Scale.setBrush(ui->lbl_mainGamer_level->backgroundRole(), QBrush(pxmp_Level_Scale));

    ui->lbl_mainGamer_level->setAutoFillBackground(true);
    ui->lbl_mainGamer_level->setPalette(plte_Level_Scale);
    //ui->lbl_mainGamer_level->setFlat(true);
    ui->lbl_mainGamer_level->setFixedSize(pxmp_Level_Scale.rect().size());

    //define the area to move;
    ui->lbl_mainGamer_level->move((HW_Screen_Size_Width/2) - (pxmp_MainGamer_Avatar.rect().size().width() / 2)
                                        /*pxmp_QuickAction_Button.rect().size().width() - 10*/,
                                   HW_Screen_Size_Heigh - pxmp_MainGamer_Avatar.rect().size().height() - 5 - pxmp_Level_Scale.rect().size().height());

    
   } 

    
    //
    //WAR_POWER_LABEL
    //
    {
        
        
        
    }







    QPixmap pxmp_Hireling("Hireling.jpg");
    QPixmap someother2 = pxmp_Hireling.scaled(300,250, Qt::KeepAspectRatio);


    QRect givenSize = QApplication::desktop()->screenGeometry();
    int width = givenSize.width();
    int height = givenSize.height();
    qDebug() << "Available dimensions. w = " << width << "h = " << height;

    double height_hand_card_size_coeff = 0.27778 / 2;
    double width_hand_card_size_coeff = 0.13021 / 2;

    QPixmap pxmp_CardStack_1("Hireling.jpg");
    QPixmap rescaled_pxmp_CardStack_1 = pxmp_CardStack_1.scaled(height_hand_card_size_coeff*height,
                                                                width_hand_card_size_coeff*width,
                                                                Qt::KeepAspectRatio);

//    QPalette cardStackPalette;
//    cardStackPalette.setBrush(ui->pushButton_12->backgroundRole(), QBrush(rescaled_pxmp_CardStack_1));
//    //somepalette.setBrush(ui->pushButton_3->backgroundRole(),QBrush(my1Pixmap));
//    ui->pushButton_12->setAutoFillBackground(true);
//    ui->pushButton_12->setAutoFillBackground(true);
//    ui->pushButton_12->setPalette(someotherpalette2);
//    ui->pushButton_12->setFlat(true);
//    ui->pushButton_12->setFixedSize(rescaled_pxmp_CardStack_1.rect().size());
//    //ui->pushButton_12->set

    //remeber the double! =)
//    double height_level_icon_size_coeff = 0.4 *(height_hand_card_size_coeff);
//    double width_level_icon_size_coeff = 0.2 * (width_hand_card_size_coeff);
//    QPixmap Level_Initial("level1.jpg");
//    QPixmap rescaled_level_initial = Level_Initial.scaled(height_level_icon_size_coeff*height, width_level_icon_size_coeff*width,
//                                                          Qt::KeepAspectRatio);
//    ui->label_2->setScaledContents(true);
//    qDebug() << "Height = " << rescaled_level_initial.size().height() << "Width = " << rescaled_level_initial.size().width();
//    qDebug() << "Height = " << height_level_icon_size_coeff << "Width = " << width_level_icon_size_coeff;

//    ui->label_2->setPixmap(rescaled_level_initial);
//    ui->label_2->setFixedSize(rescaled_level_initial.size());



//    ui->label->setPixmap(rescaled_level_initial);
//    ui->label->setScaledContents(true);
//    ui->label->setFixedSize(rescaled_level_initial.size());


//     QPalette quick_info_Button_Palette;
//     quick_info_Button_Palette.setBrush(ui->pushButton->backgroundRole(),QBrush(rescaled_level_initial));
//     ui->pushButton->setAutoFillBackground(true);
//     ui->pushButton->setPalette(quick_info_Button_Palette);
//     ui->pushButton->setFlat(true);
//     ui->pushButton->setFixedSize(rescaled_level_initial.rect().size());






//    QLabel* defining_array[12];
//    defining_array[0] = ui->label_3;
//    defining_array[1] = ui->label_4;
//    defining_array[2] = ui->label_5;
//    defining_array[3] = ui->label_6;
//    defining_array[4] = ui->label_7;
//    defining_array[5] = ui->label_8;
//    defining_array[6] = ui->label_9;
//    defining_array[7] = ui->label_10;
//    defining_array[8] = ui->label_11;
//    defining_array[9] = ui->label_12;
//    defining_array[10] = ui->label_13;
//    defining_array[11] = ui->label_14;

//    QPixmap* defining_pixmap_array[12];
//    QPixmap ico0("ico_0.jpg");
//    QPixmap ico1("ico_1.jpg");
//    QPixmap ico2("ico_2.jpg");
//    QPixmap ico3("ico_3.jpg");
//    QPixmap ico4("ico_4.jpg");
//    QPixmap ico5("ico_5.jpg");
//    QPixmap ico6("ico_6.jpg");
//    QPixmap ico7("ico_7.jpg");
//    QPixmap ico8("ico_8.jpg");
//    QPixmap ico9("ico_9.jpg");
//    QPixmap ico10("ico_10.jpg");
//    QPixmap ico11("ico_11.jpg");


//    defining_pixmap_array[0] = &ico0;
//    defining_pixmap_array[1] = &ico1;
//    defining_pixmap_array[2] = &ico2;
//    defining_pixmap_array[3] = &ico3;
//    defining_pixmap_array[4] = &ico4;
//    defining_pixmap_array[5] = &ico5;
//    defining_pixmap_array[6] = &ico6;
//    defining_pixmap_array[7] = &ico7;
//    defining_pixmap_array[8] = &ico8;
//    defining_pixmap_array[9] = &ico9;
//    defining_pixmap_array[10] = &ico10;
//    defining_pixmap_array[11] = &ico11;

//    for (int i = 0; i < 12 ; ++i) {
//    QPixmap rescaled = defining_pixmap_array[i]->scaled(height_level_icon_size_coeff*height, width_level_icon_size_coeff*width,
//                                                        Qt::KeepAspectRatio);
//    defining_array[i]->setScaledContents(true);
//    defining_array[i]->setPixmap(rescaled);
//    defining_array[i]->setFixedSize(rescaled.size());

//    }





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


