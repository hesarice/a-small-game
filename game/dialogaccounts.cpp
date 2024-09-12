#include "dialogaccounts.h"
#include "ui_dialogaccounts.h"
#include<QFile>
#include<QMessageBox>
#include<QScreen>
Dialogaccounts::Dialogaccounts(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialogaccounts)
{
    ui->setupUi(this);
    QPixmap pixmap4title("things\\grass-windowicon.png");
    QIcon icon4title(pixmap4title);
    setWindowIcon(icon4title);
    setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);
    int frmX = this->width();
    int frmY = this->height();
    QScreen *w=QApplication::primaryScreen();
    int deskWidth = w->size().width();
    int deskHeight = w->size().height();
    QPoint movePoint(deskWidth/2-frmX/2,deskHeight/2-frmY/2-30);
    move(movePoint);
    setFixedSize(QSize(336, 226));
    QPixmap pixmaptitle("things/acctitle.png");
    ui->labeltitle->setPixmap(pixmaptitle);
    QPixmap pixmapbg("things/backgrounds.png");
    ui->labelbg->setPixmap(pixmapbg);
    QSize asize;
    asize.setHeight(80);
    asize.setWidth(110);
    QPixmap pixmapbtnnew1("things/btnnew1.png");
    QIcon icon1(pixmapbtnnew1);
    ui->pushButton_2->setIcon(icon1);
    ui->pushButton_2->setIconSize(asize);
    QPixmap pixmapbtnsel("things/btnselect1.png");
    QIcon icon2(pixmapbtnsel);
    ui->pushButton->setIcon(icon2);
    ui->pushButton->setIconSize(asize);
    ui->pushButton->setStyleSheet("border:none");
    ui->pushButton_2->setStyleSheet("border:none");

}
Dialogaccounts::~Dialogaccounts()
{
    delete ui;
}

QString Dialogaccounts::getname()
{
    return name;
}

void Dialogaccounts::inidata()
{
    QFile afile("files/data.txt");
    if(!afile.open(QIODevice::ReadOnly|QIODevice::Text))qDebug()<<"打开文件失败!";
    QStringList totallist;
    QTextStream astream(&afile);
    while(!astream.atEnd()){
        QString str=astream.readLine();
        totallist<<str;
    }
    QStringList namelist;
    for(int i=0;i<5;i++){
        QString linetext=totallist.at(i);
        QStringList templist=linetext.split(QRegularExpression(R"(\s+)"),Qt::SkipEmptyParts);
        if(templist.at(0)!="默认用户名")namelist<<templist.at(0);
    }
    ui->comboBox->clear();
    if(namelist.isEmpty()){
        namelist.clear();
        namelist<<"你没设置名字，所以作者在这里占了个位";
        ui->comboBox->clear();ui->comboBox->setPlaceholderText("请新建名字！！！");ui->pushButton->setDisabled(true);
    }
    else ui->comboBox->addItems(namelist);
}

int Dialogaccounts::getcount()
{
    if(anew==1){
        int a=ui->comboBox->count();
        return a;
    }
    else if(anew==0){
        return ui->comboBox->currentIndex();
    }
}

int Dialogaccounts::getnew()
{
    return anew;
}

void Dialogaccounts::dodisabled()
{
    if(ui->comboBox->count()>=5)ui->pushButton_2->setDisabled(true);
}

void Dialogaccounts::setcbcurrent(QString s)
{
    QFile afile("files/data.txt");
    if(!afile.open(QIODevice::ReadOnly|QIODevice::Text))qDebug()<<"打开文件失败!";
    QStringList totallist;
    QTextStream astream(&afile);
    while(!astream.atEnd()){
        QString str=astream.readLine();
        totallist<<str;
    }
    QStringList namelist;
    for(int i=0;i<5;i++){
        QString linetext=totallist.at(i);
        QStringList templist=linetext.split(QRegularExpression(R"(\s+)"),Qt::SkipEmptyParts);
        if(templist.at(0)==s)ui->comboBox->setCurrentIndex(i);
    }
}

void Dialogaccounts::on_pushButton_2_released()
{
    QPixmap pixmapbtnnew1("things/btnnew1.png");
    QIcon icon1(pixmapbtnnew1);
    ui->pushButton_2->setIcon(icon1);
    name=ui->lineEdit->text();
    if(name==""){
        QMessageBox::warning(this,"错误","请输入名称！!");
        return;
    }
    anew=1;

    this->close();
}


void Dialogaccounts::on_pushButton_released()
{
    QPixmap pixmapbtnsel("things/btnselect1.png");
    QIcon icon2(pixmapbtnsel);
    ui->pushButton->setIcon(icon2);
    name=ui->comboBox->currentText();
    int aindex=ui->comboBox->currentIndex();;
    this->close();
}


void Dialogaccounts::on_pushButton_pressed()
{
    QPixmap pixmapbtnsel("things/btnselect2.png");
    QIcon icon2(pixmapbtnsel);
    ui->pushButton->setIcon(icon2);
}

void Dialogaccounts::on_pushButton_2_pressed()
{
    QPixmap pixmapbtnnew1("things/btnnew2.png");
    QIcon icon1(pixmapbtnnew1);
    ui->pushButton_2->setIcon(icon1);
}

