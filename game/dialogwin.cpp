#include "dialogwin.h"
#include "ui_dialogwin.h"
#include<QScreen>
#include<QSoundEffect>
Dialogwin::Dialogwin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialogwin)
{
    ui->setupUi(this);
    QPixmap pixmap4title("things\\grass-windowicon.png");
    QIcon icon4title(pixmap4title);
    setWindowIcon(icon4title);
    setFixedSize(QSize(300, 400));
    setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);
    int frmX = this->width();
    int frmY = this->height();
    QScreen *w=QApplication::primaryScreen();
    int deskWidth = w->size().width();
    int deskHeight = w->size().height();
    QPoint movePoint(deskWidth/2-frmX/2,deskHeight/2-frmY/2-30);
    move(movePoint);
    ui->btnnext->setStyleSheet("background:transparent");
    ui->btnselect->setStyleSheet("background:transparent");
    QSize asize;
    asize.setHeight(120);
    asize.setWidth(200);
    QPixmap pixmapbg("things/success.png");
    QPixmap pixmapnext("things/btntonext.png");
    QPixmap pixmapselect("things/btnforselect.png");


    QIcon iconnext(pixmapnext);
    QIcon iconselect(pixmapselect);
    ui->labelbg->setPixmap(pixmapbg);
    ui->btnnext->setIcon(iconnext);
    ui->btnselect->setIcon(iconselect);
    ui->btnnext->setIconSize(asize);
    ui->btnselect->setIconSize(asize);

}

Dialogwin::~Dialogwin()
{
    delete ui;
}

int Dialogwin::getnext()
{
    return next;
}

void Dialogwin::setnexthidden()
{
    ui->btnnext->setHidden(true);
}

void Dialogwin::on_btnselect_clicked()
{
    next=0;
    this->close();
}


void Dialogwin::on_btnnext_clicked()
{
    next=1;
    this->close();
}

