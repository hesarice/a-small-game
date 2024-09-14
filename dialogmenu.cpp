#include "dialogmenu.h"
#include "ui_dialogmenu.h"
#include "dialoglevel.h"
#include "dialogranking.h"
#include"dialogrule.h"
#include<QTimer>
#include<QFile>
#include<QScreen>
#include<QSoundEffect>
Dialogmenu::Dialogmenu(QWidget *parent)
    : //QDialog(parent)
     ui(new Ui::Dialogmenu)
{
    ui->setupUi(this);
    QPixmap pixmap4title("things\\grass-windowicon.png");
    QIcon icon4title(pixmap4title);
    setWindowIcon(icon4title);
    l=new Dialoglevel(this);
    l->playmainsong();
    setFixedSize(QSize(550, 324));
    setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);
    int frmX = this->width();
    int frmY = this->height();
    QScreen *w=QApplication::primaryScreen();
    int deskWidth = w->size().width();
    int deskHeight = w->size().height();
    QPoint movePoint(deskWidth/2-frmX/2,deskHeight/2-frmY/2-30);
    move(movePoint);
    // if(!level1)ui->pushButton2->setDisabled(true);
    // if(!level2)ui->pushButton3->setDisabled(true);
    // if(!level3)ui->pushButton4->setDisabled(true);
    // if(!level4)ui->pushButton5->setDisabled(true);
    // if(!level5)ui->pushButton6->setDisabled(true);
    // if(!level6)ui->pushButton7->setDisabled(true);
    // if(!level7)ui->pushButton8->setDisabled(true);
    // if(!level8)ui->pushButton9->setDisabled(true);
    // if(!level9)ui->pushButton10->setDisabled(true);
    // if(!level10)ui->btnendlessmode->setDisabled(true);     //无尽模式(挑战模式)
    asize.setHeight(100);
    asize.setWidth(130);
    changebg();
    atimer=new QTimer(this);
    connect(atimer,&QTimer::timeout,this,&Dialogmenu::changebg);
    atimer->start(200);
    ui->groupBox14->setStyleSheet("border:none");
    ui->groupBox58->setStyleSheet("border:none");
    ui->groupBox910->setStyleSheet("border:none");
    ui->btnback->setStyleSheet("border:none");
    QPixmap pixmap1("things/buttonanle3menu1.png");
    QPixmap pixmap2("things/buttonanle3menu2.png");
    QPixmap pixmap3("things/buttonanle3menu3.png");
    QPixmap pixmap4("things/buttonanle3menu4.png");
    QPixmap pixmap5("things/buttonanle3menu5.png");
    QPixmap pixmap6("things/buttonanle3menu6.png");
    QPixmap pixmap7("things/buttonanle3menu7.png");
    QPixmap pixmap8("things/buttonanle3menu8.png");
    QPixmap pixmap9("things/buttonanle3menu9.png");
    QPixmap pixmap10("things/buttonanle3menu10.png");
    QPixmap pixmaptitle("things/thetitle.png");
    QPixmap pixmapranking("things/ranking1.png");
    QPixmap pixmapendlessmode("things/endlessmode1.png");
    QPixmap scaled=pixmap1.scaled(130,100);
    QPixmap pixmapp("things/levelbtnback1.png");

    QSize asizeback;
    asizeback.setHeight(40);
    asizeback.setWidth(40);

    QIcon icon1(pixmap1);
    QIcon icon2(pixmap2);
    QIcon icon3(pixmap3);
    QIcon icon4(pixmap4);
    QIcon icon5(pixmap5);
    QIcon icon6(pixmap6);
    QIcon icon7(pixmap7);
    QIcon icon8(pixmap8);
    QIcon icon9(pixmap9);
    QIcon icon10(pixmap10);
    QIcon iconranking(pixmapranking);
    QIcon iconendlessmode(pixmapendlessmode);
    QIcon iconbtn(pixmapp);

    ui->pushButton1->setIcon(icon1);
    ui->pushButton2->setIcon(icon2);
    ui->pushButton3->setIcon(icon3);
    ui->pushButton4->setIcon(icon4);
    ui->pushButton5->setIcon(icon5);
    ui->pushButton6->setIcon(icon6);
    ui->pushButton7->setIcon(icon7);
    ui->pushButton8->setIcon(icon8);
    ui->pushButton9->setIcon(icon9);
    ui->pushButton10->setIcon(icon10);
    ui->labeltitle->setPixmap(pixmaptitle);
    ui->btnranking->setIcon(iconranking);
    ui->btnendlessmode->setIcon(iconendlessmode);
    ui->btnback->setIcon(iconbtn);

    ui->pushButton1->setIconSize(scaled.size());
    ui->pushButton2->setIconSize(scaled.size());
    ui->pushButton3->setIconSize(scaled.size());
    ui->pushButton4->setIconSize(scaled.size());
    ui->pushButton5->setIconSize(scaled.size());
    ui->pushButton6->setIconSize(scaled.size());
    ui->pushButton7->setIconSize(scaled.size());
    ui->pushButton8->setIconSize(scaled.size());
    ui->pushButton9->setIconSize(scaled.size());
    ui->pushButton10->setIconSize(scaled.size());
    ui->btnranking->setIconSize(asize);
    ui->btnendlessmode->setIconSize(asize);
    ui->btnback->setIconSize(asizeback);

   // if(!level10)ui->btnendlessmode->setHidden(true);

}

Dialogmenu::~Dialogmenu()
{
    delete ui;
}

void Dialogmenu::setname(int a, QString s)
{
    allthing[a][0]=s;
    anum=a;
}

void Dialogmenu::updatelevelnum()
{
    allthing[anum][1]=QString::number(0);
    if(level10)allthing[anum][1]=QString::number(10);
    else if(level9)allthing[anum][1]=QString::number(9);
    else if(level8)allthing[anum][1]=QString::number(8);
    else if(level7)allthing[anum][1]=QString::number(7);
    else if(level6)allthing[anum][1]=QString::number(6);
    else if(level5)allthing[anum][1]=QString::number(5);
    else if(level4)allthing[anum][1]=QString::number(4);
    else if(level3)allthing[anum][1]=QString::number(3);
    else if(level2)allthing[anum][1]=QString::number(2);
    else if(level1)allthing[anum][1]=QString::number(1);
}

void Dialogmenu::updatetime()
{
    QTime atime=atime1.addMSecs(atime2.msec()+atime2.second()*1000+atime2.minute()*1000*1000+atime2.hour()*1000*1000*1000)
                      .addMSecs(atime3.msec()+atime3.second()*1000+atime3.minute()*1000*1000+atime3.hour()*1000*1000*1000)
                      .addMSecs(atime4.msec()+atime4.second()*1000+atime4.minute()*1000*1000+atime4.hour()*1000*1000*1000)
                      .addMSecs(atime5.msec()+atime5.second()*1000+atime5.minute()*1000*1000+atime5.hour()*1000*1000*1000)
                      .addMSecs(atime6.msec()+atime6.second()*1000+atime6.minute()*1000*1000+atime6.hour()*1000*1000*1000)
                      .addMSecs(atime7.msec()+atime7.second()*1000+atime7.minute()*1000*1000+atime7.hour()*1000*1000*1000)
                      .addMSecs(atime8.msec()+atime8.second()*1000+atime8.minute()*1000*1000+atime8.hour()*1000*1000*1000)
                      .addMSecs(atime9.msec()+atime9.second()*1000+atime9.minute()*1000*1000+atime9.hour()*1000*1000*1000)
                      .addMSecs(atime10.msec()+atime10.second()*1000+atime10.minute()*1000*1000+atime10.hour()*1000*1000*1000);

    allthing[anum][2]=atime.toString("hh:mm:ss:zzz");
}

void Dialogmenu::dosth(){
    writeindata();
}

void Dialogmenu::writeindata()
{
    QFile afile("files/data.txt");
    if(!afile.open(QIODevice::WriteOnly|QIODevice::Text))qDebug()<<"打开文件失败!";
    QTextStream astream(&afile);
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            astream<<allthing[i][j];
            astream<<" ";
        }
        astream<<"\n";
    }
    afile.close();
}

void Dialogmenu::inidata()
{
    QFile afile("files/data.txt");
    if(!afile.open(QIODevice::ReadWrite|QIODevice::Text))qDebug()<<"打开文件失败!";
    QStringList totallist;
    QTextStream astream(&afile);
    while(!astream.atEnd()){
        QString str=astream.readLine();
        totallist<<str;
    }
        for(int i=0;i<5;i++){
            QString linetext=totallist.at(i);
            QStringList templist=linetext.split(QRegularExpression(R"(\s+)"),Qt::SkipEmptyParts);
        for(int j=0;j<4;j++){
            allthing[i][j]=templist.at(j);
        }
        }
}

void Dialogmenu::inilevels()
{
    switch(allthing[anum][1].toInt()){
    case 0:level1=0;level2=0;level3=0;level4=0;level5=0;level6=0;level7=0;level8=0;level9=0;level10=0;break;
    case 1:level1=1;level2=0;level3=0;level4=0;level5=0;level6=0;level7=0;level8=0;level9=0;level10=0;break;
    case 2:level1=1;level2=1;level3=0;level4=0;level5=0;level6=0;level7=0;level8=0;level9=0;level10=0;break;
    case 3:level1=1;level2=1;level3=1;level4=0;level5=0;level6=0;level7=0;level8=0;level9=0;level10=0;break;
    case 4:level1=1;level2=1;level3=1;level4=1;level5=0;level6=0;level7=0;level8=0;level9=0;level10=0;break;
    case 5:level1=1;level2=1;level3=1;level4=1;level5=1;level6=0;level7=0;level8=0;level9=0;level10=0;break;
    case 6:level1=1;level2=1;level3=1;level4=1;level5=1;level6=1;level7=0;level8=0;level9=0;level10=0;break;
    case 7:level1=1;level2=1;level3=1;level4=1;level5=1;level6=1;level7=1;level8=0;level9=0;level10=0;break;
    case 8:level1=1;level2=1;level3=1;level4=1;level5=1;level6=1;level7=1;level8=1;level9=0;level10=0;break;
    case 9:level1=1;level2=1;level3=1;level4=1;level5=1;level6=1;level7=1;level8=1;level9=1;level10=0;break;
    case 10:level1=1;level2=1;level3=1;level4=1;level5=1;level6=1;level7=1;level8=1;level9=1;level10=1;break;
    default:break;
    }
    if(level1)ui->pushButton2->setDisabled(false);
    else ui->pushButton2->setDisabled(true);
    if(level2)ui->pushButton3->setDisabled(false);
    else ui->pushButton3->setDisabled(true);
    if(level3)ui->pushButton4->setDisabled(false);
    else ui->pushButton4->setDisabled(true);
    if(level4)ui->pushButton5->setDisabled(false);
    else ui->pushButton5->setDisabled(true);
    if(level5)ui->pushButton6->setDisabled(false);
    else ui->pushButton6->setDisabled(true);
    if(level6)ui->pushButton7->setDisabled(false);
    else ui->pushButton7->setDisabled(true);
    if(level7)ui->pushButton8->setDisabled(false);
    else ui->pushButton8->setDisabled(true);
    if(level8)ui->pushButton9->setDisabled(false);
    else ui->pushButton9->setDisabled(true);
    if(level9)ui->pushButton10->setDisabled(false);
    else ui->pushButton10->setDisabled(true);
    if(level10)ui->btnendlessmode->setHidden(false);
    else ui->btnendlessmode->setHidden(true);
}


void Dialogmenu::dogoldenhand()
{
    ui->pushButton1->setDisabled(false);
    ui->pushButton2->setDisabled(false);
    ui->pushButton3->setDisabled(false);
    ui->pushButton4->setDisabled(false);
    ui->pushButton5->setDisabled(false);
    ui->pushButton6->setDisabled(false);
    ui->pushButton7->setDisabled(false);
    ui->pushButton8->setDisabled(false);
    ui->pushButton9->setDisabled(false);
    ui->pushButton10->setDisabled(false);
}

void Dialogmenu::resetghand()
{
    goldhandcount=0;
}


void Dialogmenu::changebg()
{
    QPixmap pixmap0("things/hailangs1.png");
    QPixmap pixmap1("things/hailangs2.png");
    QPixmap pixmap2("things/hailangs3.png");
    QPixmap pixmap3("things/hailangs4.png");
    QPixmap pixmap4("things/hailangs5.png");
    QPixmap pixmap5("things/hailangs6.png");
    QPixmap pixmap6("things/hailangs7.png");
    QPixmap pixmap7("things/hailangs8.png");
    QPixmap pixmap8("things/hailangs9.png");
    QPixmap pixmap9("things/hailangs10.png");
    QPixmap pixmap10("things/hailangs11.png");
    QPixmap pixmap11("things/hailangs12.png");
    switch(count){
    case 0:ui->labelbackground->setPixmap(pixmap11);count++;break;
    case 1:ui->labelbackground->setPixmap(pixmap0);count++;break;
    case 2:ui->labelbackground->setPixmap(pixmap1);count++;break;
    case 3:ui->labelbackground->setPixmap(pixmap2);count++;break;
    case 4:ui->labelbackground->setPixmap(pixmap3);count++;break;
    case 5:ui->labelbackground->setPixmap(pixmap4);count++;break;
    case 6:ui->labelbackground->setPixmap(pixmap5);count++;break;
    case 7:ui->labelbackground->setPixmap(pixmap6);count++;break;
    case 8:ui->labelbackground->setPixmap(pixmap7);count++;break;
    case 9:ui->labelbackground->setPixmap(pixmap8);count++;break;
    case 10:ui->labelbackground->setPixmap(pixmap9);count++;break;
    case 11:ui->labelbackground->setPixmap(pixmap10);count++;break;
    case 12:ui->labelbackground->setPixmap(pixmap11);count++;break;
    case 13:ui->labelbackground->setPixmap(pixmap11);count=0;break;
}
}


void Dialogmenu::on_pushButton1_pressed()
{
    QPixmap pixmapp("things/buttonanle6menu1.png");
    QIcon icon1(pixmapp);
    ui->pushButton1->setIcon(icon1);
    ui->pushButton1->setIconSize(asize);
}



void Dialogmenu::on_pushButton2_pressed()
{
    QPixmap pixmapp("things/buttonanle6menu2.png");
    QIcon icon1(pixmapp);
    ui->pushButton2->setIcon(icon1);
    ui->pushButton2->setIconSize(asize);
}


void Dialogmenu::on_pushButton3_pressed()
{
    QPixmap pixmapp("things/buttonanle6menu3.png");
    QIcon icon1(pixmapp);
    ui->pushButton3->setIcon(icon1);
    ui->pushButton3->setIconSize(asize);
}


void Dialogmenu::on_pushButton4_pressed()
{
    QPixmap pixmapp("things/buttonanle6menu4.png");
    QIcon icon1(pixmapp);
    ui->pushButton4->setIcon(icon1);
    ui->pushButton4->setIconSize(asize);
}


void Dialogmenu::on_pushButton5_pressed()
{
    QPixmap pixmapp("things/buttonanle6menu5.png");
    QIcon icon1(pixmapp);
    ui->pushButton5->setIcon(icon1);
    ui->pushButton5->setIconSize(asize);
}


void Dialogmenu::on_pushButton6_pressed()
{
    QPixmap pixmapp("things/buttonanle6menu6.png");
    QIcon icon1(pixmapp);
    ui->pushButton6->setIcon(icon1);
    ui->pushButton6->setIconSize(asize);
}


void Dialogmenu::on_pushButton7_pressed()
{
    QPixmap pixmapp("things/buttonanle6menu7.png");
    QIcon icon1(pixmapp);
    ui->pushButton7->setIcon(icon1);
    ui->pushButton7->setIconSize(asize);
}


void Dialogmenu::on_pushButton8_pressed()
{
    QPixmap pixmapp("things/buttonanle6menu8.png");
    QIcon icon1(pixmapp);
    ui->pushButton8->setIcon(icon1);
    ui->pushButton8->setIconSize(asize);
}


void Dialogmenu::on_pushButton9_pressed()
{
    QPixmap pixmapp("things/buttonanle6menu9.png");
    QIcon icon1(pixmapp);
    ui->pushButton9->setIcon(icon1);
    ui->pushButton9->setIconSize(asize);
}


void Dialogmenu::on_pushButton10_pressed()
{
    QPixmap pixmapp("things/buttonanle6menu10.png");
    QIcon icon1(pixmapp);
    ui->pushButton10->setIcon(icon1);
    ui->pushButton10->setIconSize(asize);
}


void Dialogmenu::on_pushButton1_released()
{
    QPixmap pixmapp("things/buttonanle3menu1.png");
    QIcon icon1(pixmapp);
    ui->pushButton1->setIcon(icon1);
    ui->pushButton1->setIconSize(asize);
    //Dialoglevel * l=new Dialoglevel(this);
    l->setpath("levels/1.txt");
    l->settable("levels/1.txt");
    l->setlabeltitle(1);
    if(allthing[anum][1].toInt()==0 && arule){
        Dialogrule * rulef=new Dialogrule(this);
        rulef->exec();
        delete rulef;
        arule=0;
    }
    l->starttime();
    l->exec();
    if(level1==0)level1=l->getwin();
    if(l->getwin()){
        QTime atime=QTime::fromString(l->gettime(), "hh:mm:ss:zzz");
        if(atime<atime1 || atime1==QTime::fromString("00:00:00:000", "hh:mm:ss:zzz"))
        {
            atime1=atime;
            updatetime();
        }
        updatelevelnum();//写一写
        qDebug()<<allthing[anum][0];
        qDebug()<<allthing[anum][1];
        qDebug()<<allthing[anum][2];
        writeindata();
    }
    if(level1){
        ui->pushButton2->setDisabled(false);
}
    if(l->getnext())on_pushButton2_released();
}


void Dialogmenu::on_pushButton2_released()
{
    QPixmap pixmapp("things/buttonanle3menu2.png");
    QIcon icon1(pixmapp);
    ui->pushButton2->setIcon(icon1);
    ui->pushButton2->setIconSize(asize);
    l->setpath("levels/2.txt");
    l->settable("levels/2.txt");
    l->setlabeltitle(2);
    l->starttime();
    l->exec();
    if(level2==0)level2=l->getwin();
    if(l->getwin()){
        QTime atime=QTime::fromString(l->gettime(), "hh:mm:ss:zzz");
        if(atime<atime2 || atime2==QTime::fromString("00:00:00:000", "hh:mm:ss:zzz"))
        {
            atime2=atime;
            updatetime();
        }
        updatelevelnum();//写一写
        qDebug()<<allthing[anum][0];
        qDebug()<<allthing[anum][1];
        qDebug()<<allthing[anum][2];
        writeindata();
    }
    if(level2)ui->pushButton3->setDisabled(false);
    if(l->getnext())on_pushButton3_released();
}


void Dialogmenu::on_pushButton3_released()
{
    QPixmap pixmapp("things/buttonanle3menu3.png");
    QIcon icon1(pixmapp);
    ui->pushButton3->setIcon(icon1);
    ui->pushButton3->setIconSize(asize);
    l->setpath("levels/3.txt");
    l->settable("levels/3.txt");
    l->setlabeltitle(3);
    l->starttime();
    l->exec();
    if(level3==0)level3=l->getwin();
    if(l->getwin()){
        QTime atime=QTime::fromString(l->gettime(), "hh:mm:ss:zzz");
        if(atime<atime3 || atime3==QTime::fromString("00:00:00:000", "hh:mm:ss:zzz"))
        {
            atime3=atime;
            updatetime();
        }
        updatelevelnum();//写一写
        qDebug()<<allthing[anum][0];
        qDebug()<<allthing[anum][1];
        qDebug()<<allthing[anum][2];
        writeindata();
    }
    if(level3)ui->pushButton4->setDisabled(false);
    if(l->getnext())on_pushButton4_released();
}


void Dialogmenu::on_pushButton4_released()
{
    QPixmap pixmapp("things/buttonanle3menu4.png");
    QIcon icon1(pixmapp);
    ui->pushButton4->setIcon(icon1);
    ui->pushButton4->setIconSize(asize);
    l->setpath("levels/4.txt");
    l->settable("levels/4.txt");
    l->setlabeltitle(4);
    l->starttime();
    l->exec();
    if(level4==0)level4=l->getwin();
    if(l->getwin()){
        QTime atime=QTime::fromString(l->gettime(), "hh:mm:ss:zzz");
        if(atime<atime4 || atime4==QTime::fromString("00:00:00:000", "hh:mm:ss:zzz"))
        {
            atime4=atime;
            updatetime();
        }
        updatelevelnum();//写一写
        qDebug()<<allthing[anum][0];
        qDebug()<<allthing[anum][1];
        qDebug()<<allthing[anum][2];
        writeindata();
    }
    if(level4)ui->pushButton5->setDisabled(false);
    if(l->getnext())on_pushButton5_released();
}


void Dialogmenu::on_pushButton5_released()
{
    QPixmap pixmapp("things/buttonanle3menu5.png");
    QIcon icon1(pixmapp);
    ui->pushButton5->setIcon(icon1);
    ui->pushButton5->setIconSize(asize);
    l->setpath("levels/5.txt");
    l->settable("levels/5.txt");
    l->setlabeltitle(5);
    l->starttime();
    l->exec();
    if(level5==0)level5=l->getwin();
    if(l->getwin()){
        QTime atime=QTime::fromString(l->gettime(), "hh:mm:ss:zzz");
        if(atime<atime5 || atime5==QTime::fromString("00:00:00:000", "hh:mm:ss:zzz"))
        {
            atime5=atime;
            updatetime();
        }
        updatelevelnum();//写一写
        qDebug()<<allthing[anum][0];
        qDebug()<<allthing[anum][1];
        qDebug()<<allthing[anum][2];
        writeindata();
    }
    if(level5)ui->pushButton6->setDisabled(false);
    if(l->getnext())on_pushButton6_released();
}


void Dialogmenu::on_pushButton6_released()
{
    QPixmap pixmapp("things/buttonanle3menu6.png");
    QIcon icon1(pixmapp);
    ui->pushButton6->setIcon(icon1);
    ui->pushButton6->setIconSize(asize);
    l->setpath("levels/6.txt");
    l->settable("levels/6.txt");
    l->setlabeltitle(6);
    l->starttime();
    l->exec();
    if(level6==0)level6=l->getwin();
    if(l->getwin()){
        QTime atime=QTime::fromString(l->gettime(), "hh:mm:ss:zzz");
        if(atime<atime6 || atime6==QTime::fromString("00:00:00:000", "hh:mm:ss:zzz"))
        {
            atime6=atime;
            updatetime();
        }
        updatelevelnum();//写一写
        qDebug()<<allthing[anum][0];
        qDebug()<<allthing[anum][1];
        qDebug()<<allthing[anum][2];
        writeindata();
    }
    if(level6)ui->pushButton7->setDisabled(false);
    if(l->getnext())on_pushButton7_released();
}


void Dialogmenu::on_pushButton7_released()
{
    QPixmap pixmapp("things/buttonanle3menu7.png");
    QIcon icon1(pixmapp);
    ui->pushButton7->setIcon(icon1);
    ui->pushButton7->setIconSize(asize);
    l->setpath("levels/7.txt");
    l->settable("levels/7.txt");
    l->setlabeltitle(7);
    l->starttime();
    l->exec();
    if(level7==0)level7=l->getwin();
    if(l->getwin()){
        QTime atime=QTime::fromString(l->gettime(), "hh:mm:ss:zzz");
        if(atime<atime7 || atime7==QTime::fromString("00:00:00:000", "hh:mm:ss:zzz"))
        {
            atime7=atime;
            updatetime();
        }
        updatelevelnum();//写一写
        qDebug()<<allthing[anum][0];
        qDebug()<<allthing[anum][1];
        qDebug()<<allthing[anum][2];
        writeindata();
    }
    if(level7)ui->pushButton8->setDisabled(false);
    if(l->getnext())on_pushButton8_released();
}


void Dialogmenu::on_pushButton8_released()
{
    QPixmap pixmapp("things/buttonanle3menu8.png");
    QIcon icon1(pixmapp);
    ui->pushButton8->setIcon(icon1);
    ui->pushButton8->setIconSize(asize);
    l->setpath("levels/8.txt");
    l->settable("levels/8.txt");
    l->setlabeltitle(8);
    l->starttime();
    l->exec();
    if(!level8)level8=l->getwin();
    if(l->getwin()){
        QTime atime=QTime::fromString(l->gettime(), "hh:mm:ss:zzz");
        if(atime<atime8 || atime8==QTime::fromString("00:00:00:000", "hh:mm:ss:zzz"))
        {
            atime8=atime;
            updatetime();
        }
        updatelevelnum();//写一写
        qDebug()<<allthing[anum][0];
        qDebug()<<allthing[anum][1];
        qDebug()<<allthing[anum][2];
        writeindata();
    }
    if(level8)ui->pushButton9->setDisabled(false);
    if(l->getnext())on_pushButton9_released();
}


void Dialogmenu::on_pushButton9_released()
{
    QPixmap pixmapp("things/buttonanle3menu9.png");
    QIcon icon1(pixmapp);
    ui->pushButton9->setIcon(icon1);
    ui->pushButton9->setIconSize(asize);
    l->setpath("levels/9.txt");
    l->settable("levels/9.txt");
    l->setlabeltitle(9);
    l->starttime();
    l->exec();
    if(!level9)level9=l->getwin();
    if(l->getwin()){
        QTime atime=QTime::fromString(l->gettime(), "hh:mm:ss:zzz");
        if(atime<atime9 || atime9==QTime::fromString("00:00:00:000", "hh:mm:ss:zzz"))
        {
            atime9=atime;
            updatetime();
        }
        updatelevelnum();//写一写
        qDebug()<<allthing[anum][0];
        qDebug()<<allthing[anum][1];
        qDebug()<<allthing[anum][2];
        writeindata();
    }
    if(level9)ui->pushButton10->setDisabled(false);
    if(l->getnext())on_pushButton10_released();
}


void Dialogmenu::on_pushButton10_released()
{
    QPixmap pixmapp("things/buttonanle3menu10.png");
    QIcon icon1(pixmapp);
    ui->pushButton10->setIcon(icon1);
    ui->pushButton10->setIconSize(asize);
    l->setpath("levels/10.txt");
    l->settable("levels/10.txt");
    l->setlabeltitle(10);
    l->starttime();
    l->exec();
    if(!level10){
        level10=l->getwin();
        if(level10)ui->btnendlessmode->setHidden(false);
    }    //开启无尽模式
    if(l->getwin()){
        QTime atime=QTime::fromString(l->gettime(), "hh:mm:ss:zzz");
        if(atime<atime10 || atime10==QTime::fromString("00:00:00:000", "hh:mm:ss:zzz"))
        {
            atime10=atime;
            updatetime();
        }
        updatelevelnum();//写一写
        qDebug()<<allthing[anum][0];
        qDebug()<<allthing[anum][1];
        qDebug()<<allthing[anum][2];
        writeindata();
    }
}


void Dialogmenu::on_btnranking_pressed()
{
    QPixmap pixmapranking("things/ranking2.png");
    QIcon icon(pixmapranking);
    ui->btnranking->setIcon(icon);
}


void Dialogmenu::on_btnendlessmode_pressed()
{
    QPixmap pixmapendlessmode("things/endlessmode2.png");
    QIcon icon(pixmapendlessmode);
    ui->btnendlessmode->setIcon(icon);
}


void Dialogmenu::on_btnranking_released()
{
    QPixmap pixmapranking("things/ranking1.png");
    QIcon icon(pixmapranking);
    ui->btnranking->setIcon(icon);
    Dialogranking * rankview=new Dialogranking(this);
    rankview->iniranking();
    rankview->exec();
}


void Dialogmenu::on_btnendlessmode_released()
{
    QPixmap pixmapendlessmode("things/endlessmode1.png");
    QIcon icon(pixmapendlessmode);
    ui->btnendlessmode->setIcon(icon);

    //l=new Dialoglevel(this);
    l->setpath("levels/temp.txt");
    l->setendless();
    l->starttime();
    l->exec();
    if(l->getwin())
    {
        int a=allthing[anum][3].toInt();
        a++;
        allthing[anum][3]=QString::number(a);
        writeindata();
    }
    int ifnext=l->getnext();
    l->close();
    //if(l->getnext())on_btnendlessmode_released();
    while(ifnext){
        l->setpath("levels/temp.txt");
        l->setendless();
        l->starttime();
        l->exec();
        if(l->getwin())
        {
            int a=allthing[anum][3].toInt();
            a++;
            allthing[anum][3]=QString::number(a);
            writeindata();
        }
        ifnext=l->getnext();
    }
}


void Dialogmenu::on_btnback_pressed()
{
    QPixmap pixmapp("things/levelbtnback2.png");
    QIcon icon(pixmapp);
    QSize asizeback;
    asizeback.setHeight(40);
    asizeback.setWidth(40);
    ui->btnback->setIcon(icon);
    ui->btnback->setIconSize(asizeback);
}


void Dialogmenu::on_btnback_released()
{
    QPixmap pixmapp("things/levelbtnback1.png");
    QIcon icon(pixmapp);
    QSize asizeback;
    asizeback.setHeight(40);
    asizeback.setWidth(40);
    ui->btnback->setIcon(icon);
    ui->btnback->setIconSize(asizeback);
    this->close();
}


void Dialogmenu::on_btntitle_clicked()
{
    goldhandcount++;
    if(goldhandcount>=15)dogoldenhand();
}

