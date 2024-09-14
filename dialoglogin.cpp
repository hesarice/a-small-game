#include "dialoglogin.h"
#include "ui_dialoglogin.h"
#include<QMessageBox>
#include<QScreen>
Dialoglogin::Dialoglogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialoglogin)
{
    ui->setupUi(this);
    QPixmap pixmap4title("things\\grass-windowicon.png");
    QIcon icon4title(pixmap4title);
    setWindowIcon(icon4title);
    setFixedSize(QSize(338, 145));
    setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);
    int frmX = this->width();
    int frmY = this->height();
    QScreen *w=QApplication::primaryScreen();
    int deskWidth = w->size().width();
    int deskHeight = w->size().height();
    QPoint movePoint(deskWidth/2-frmX/2,deskHeight/2-frmY/2-30);
    move(movePoint);
    QPixmap pixmaptitle("things/logintitle.png");
    ui->labeltitle->setPixmap(pixmaptitle);
    QPixmap pixmapbg("things/backgrounds.png");
    ui->labelbg->setPixmap(pixmapbg);
    ui->pushButton->setStyleSheet("border:none");
    QPixmap pixmapbtn2("things/btnnew1.png");
    QIcon icon(pixmapbtn2);
    ui->pushButton->setIcon(icon);
    QSize asize;
    asize.setHeight(80);
    asize.setWidth(110);
    ui->pushButton->setIconSize(asize);
}

Dialoglogin::~Dialoglogin()
{
    delete ui;
}

QString Dialoglogin::getname()
{
    return ui->lineEdit->text();
}

void Dialoglogin::on_pushButton_pressed()
{
    QPixmap pixmapbtn1("things/btnnew2.png");
    QIcon icon(pixmapbtn1);
    ui->pushButton->setIcon(icon);
    QSize asize;
    asize.setHeight(80);
    asize.setWidth(110);
    ui->pushButton->setIconSize(asize);
}


void Dialoglogin::on_pushButton_released()
{
    QPixmap pixmapbtn2("things/btnnew1.png");
    QIcon icon(pixmapbtn2);
    ui->pushButton->setIcon(icon);
    QSize asize;
    asize.setHeight(80);
    asize.setWidth(110);
    ui->pushButton->setIconSize(asize);
    QString name=ui->lineEdit->text();
    if(name==""){
        QMessageBox::warning(this,"错误","请输入名称！!");
        return;
    }
    this->close();
}

