#include "widget.h"
#include "ui_widget.h"
#include"dialogmenu.h"
#include"dialogrule.h"
#include"dialogaccounts.h"
#include<QTimer>
#include<QFile>
#include<QRegularExpression>
#include<QSoundEffect>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    ui->setupUi(this);
    setFixedSize(QSize(550, 324));
    atimer=new QTimer(this);
    atimer->start(200);
    connect(atimer,&QTimer::timeout,this,&Widget::changebg);
    QPixmap pixmap1("things/buttonanle3thegreen.png");
    QPixmap pixmap2("things/ruleanle3thegreen.png");
    QPixmap pixmap4title("things\\grass-windowicon.png");
    QIcon icon4title(pixmap4title);
    setWindowIcon(icon4title);
    QIcon icon1(pixmap1);
    QIcon icon2(pixmap2);
    QSize size1;
    QSize size2;
    size1.setHeight(140);
    size1.setWidth(200);
    size2.setHeight(130);
    size2.setWidth(180);
    ui->groupBox->setStyleSheet("border:none");
    ui->btnstart->setStyleSheet("background:transparent");
    ui->btnrule->setStyleSheet("background:transparent");
    ui->pushButton->setStyleSheet("background:transparent");
    ui->btnstart->setIcon(icon1);
    ui->btnstart->setIconSize(size1);
    ui->btnrule->setIcon(icon2);
    ui->btnrule->setIconSize(size2);
    menu=new Dialogmenu(this);
    ifempty();

    menu->inidata();
    QPixmap pixmapbtn2("things/acc1.png");
    QIcon icon(pixmapbtn2);
    ui->pushButton->setIcon(icon);
    QSize asize;
    asize.setHeight(80);
    asize.setWidth(110);
    ui->pushButton->setIconSize(asize);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setname(QString s)
{
    name=s;
}

void Widget::setanum(int a)
{
    anum=a;
}

void Widget::inidata()
{
        QFile afile("files/data.txt");
        if(!afile.open(QIODevice::ReadOnly|QIODevice::Text))qDebug()<<"打开文件失败!";
        QStringList totallist;
        QTextStream astream(&afile);
        while(!astream.atEnd()){
            QString str=astream.readLine();
            totallist<<str;
        }
            QString linetext=totallist.at(0);
            QStringList templist=linetext.split(QRegularExpression(R"(\s+)"),Qt::SkipEmptyParts);
            name=templist.at(0);
}

void Widget::writeinname()
{
    if(name=="")name="默认用户名";
    menu->setname(anum,name);
    menu->writeindata();
}

void Widget::ifempty()
{
        QFile afile("files/data.txt");
        if(!afile.open(QIODevice::ReadOnly|QIODevice::Text))qDebug()<<"打开文件失败!";
        QStringList totallist;
        QTextStream astream(&afile);
        while(!astream.atEnd()){
            QString str=astream.readLine();
            totallist<<str;
        }
        QString linetext=totallist.at(0);
        if(linetext.at(0)==' ' || name==""){
            afile.close();
            if(!afile.open(QIODevice::WriteOnly|QIODevice::Text))qDebug()<<"打开文件失败!";
            QTextStream astream1(&afile);
            for(int i=0;i<5;i++){
                astream1<<"默认用户名 ";
                astream1<<"0 ";
                astream1<<"未完成任何关卡 ";
                astream1<<"0 ";
                astream1<<"\n";
                qDebug()<<"i write reset";
            }
            afile.close();
        }
}

void Widget::changebg()
{
    QPixmap pixmap0("things/yellowntrees1.png");
    QPixmap pixmap1("things/yellowntrees2.png");
    QPixmap pixmap2("things/yellowntrees3.png");
    QPixmap pixmap3("things/yellowntrees4.png");
    QPixmap pixmap4("things/yellowntrees5.png");
    QPixmap pixmap5("things/yellowntrees6.png");
    QPixmap pixmap6("things/yellowntrees7.png");
    QPixmap pixmap7("things/yellowntrees8.png");
    QPixmap pixmap8("things/yellowntrees9.png");
    QPixmap pixmap9("things/yellowntrees10.png");
    QPixmap pixmap10("things/yellowntrees11.png");
    QPixmap pixmap11("things/yellowntrees12.png");
    QPixmap pixmap12("things/yellowntrees13.png");
    QPixmap pixmap13("things/yellowntrees14.png");
    QPixmap pixmap14("things/yellowntrees15.png");
    QPixmap pixmap15("things/yellowntrees16.png");
    QPixmap pixmap16("things/yellowntrees17.png");
    QPixmap pixmap17("things/yellowntrees18.png");
    QPixmap pixmap18("things/yellowntrees19.png");
    QPixmap pixmap19("things/yellowntrees20.png");
    QPixmap pixmap20("things/yellowntrees21.png");
    QPixmap pixmap21("things/yellowntrees22.png");
    QPixmap pixmap22("things/yellowntrees23.png");
    QPixmap pixmap23("things/yellowntrees24.png");
    QPixmap pixmap24("things/yellowntrees25.png");
    QPixmap pixmap25("things/yellowntrees26.png");
    QPixmap pixmap26("things/yellowntrees27.png");
    QPixmap pixmap27("things/yellowntrees28.png");
    QPixmap pixmap28("things/yellowntrees29.png");
    switch(count){
    case 0:ui->labelbackground->setPixmap(pixmap0);count++;break;
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
    case 13:ui->labelbackground->setPixmap(pixmap12);count++;break;
    case 14:ui->labelbackground->setPixmap(pixmap13);count++;break;
    case 15:ui->labelbackground->setPixmap(pixmap14);count++;break;
    case 16:ui->labelbackground->setPixmap(pixmap15);count++;break;
    case 17:ui->labelbackground->setPixmap(pixmap16);count++;break;
    case 18:ui->labelbackground->setPixmap(pixmap17);count++;break;
    case 19:ui->labelbackground->setPixmap(pixmap18);count++;break;
    case 20:ui->labelbackground->setPixmap(pixmap19);count++;break;
    case 21:ui->labelbackground->setPixmap(pixmap20);count++;break;
    case 22:ui->labelbackground->setPixmap(pixmap21);count++;break;
    case 23:ui->labelbackground->setPixmap(pixmap22);count++;break;
    case 24:ui->labelbackground->setPixmap(pixmap23);count++;break;
    case 25:ui->labelbackground->setPixmap(pixmap24);count++;break;
    case 26:ui->labelbackground->setPixmap(pixmap25);count++;break;
    case 27:ui->labelbackground->setPixmap(pixmap26);count++;break;
    case 28:ui->labelbackground->setPixmap(pixmap27);count=0;break;
    default: break;
    }
}

void Widget::on_btnstart_pressed()
{
    QPixmap pixmapp("things/buttonanle6thegreen.png");
    QIcon icon1(pixmapp);
    QSize asize;
    asize.setHeight(140);
    asize.setWidth(200);
    ui->btnstart->setIcon(icon1);
    ui->btnstart->setIconSize(asize);
}


void Widget::on_btnstart_released()
{
    QPixmap pixmapp("things/buttonanle3thegreen.png");
    QIcon icon1(pixmapp);
    QSize asize;
    asize.setHeight(140);
    asize.setWidth(200);
    ui->btnstart->setIcon(icon1);
    ui->btnstart->setIconSize(asize);
    writeinname();
    //menu->setname(anum,name);
    this->setHidden(true);
    //menu->dosth();
    menu->resetghand();
    menu->inilevels();
    menu->exec();
    this->setHidden(false);
    //this->close();
}


void Widget::on_btnrule_pressed()
{
    QPixmap pixmapp("things/ruleanle6thegreen.png");
    QIcon icon1(pixmapp);
    QSize asize;
    asize.setHeight(130);
    asize.setWidth(180);
    ui->btnrule->setIcon(icon1);
    ui->btnrule->setIconSize(asize);
}


void Widget::on_btnrule_released()
{
    QPixmap pixmapp("things/ruleanle3thegreen.png");
    QIcon icon1(pixmapp);
    QSize asize;
    asize.setHeight(130);
    asize.setWidth(180);
    ui->btnrule->setIcon(icon1);
    ui->btnrule->setIconSize(asize);
    Dialogrule * rulef=new Dialogrule(this);
    rulef->exec();
}


void Widget::on_pushButton_released()
{
    QPixmap pixmapbtn2("things/acc1.png");
    QIcon icon(pixmapbtn2);
    ui->pushButton->setIcon(icon);
    Dialogaccounts * acc=new Dialogaccounts(this);
    acc->inidata();
    acc->dodisabled();
    acc->setcbcurrent(name);
    acc->exec();
    name=acc->getname();
    anum=acc->getcount();
    menu->setname(anum,name);
    if(acc->getnew()){
        writeinname();
    }
    delete acc;
}


void Widget::on_pushButton_pressed()
{
    QPixmap pixmapbtn2("things/acc2.png");
    QIcon icon(pixmapbtn2);
    ui->pushButton->setIcon(icon);
}

