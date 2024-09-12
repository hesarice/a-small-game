#include "dialogranking.h"
#include "ui_dialogranking.h"
#include<QFile>
#include<QTime>
Dialogranking::Dialogranking(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialogranking)
{
    ui->setupUi(this);
    QPixmap pixmap4title("things\\grass-windowicon.png");
    QIcon icon4title(pixmap4title);
    setWindowIcon(icon4title);
    setFixedSize(QSize(525, 297));
    //setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);
    QHeaderView *verview=ui->tableWidget->verticalHeader();
    verview->setHidden(true);
    QHeaderView *horview=ui->tableWidget->horizontalHeader();
    horview->setHidden(true);
    ui->tableWidget->setColumnWidth(0, 40);
    ui->tableWidget->setColumnWidth(1, 100);
    ui->tableWidget->setColumnWidth(2, 90);
    ui->tableWidget->setColumnWidth(3, 150);
    ui->tableWidget->setColumnWidth(4, 125);
    ui->tableWidget->setEditTriggers(QTableWidget::NoEditTriggers);
    ui->tableWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
    ui->tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
    QPixmap pixmaptitle("things/rankingtitle.png");
    ui->labeltitle->setPixmap(pixmaptitle);
    QPixmap pixmapbg("things/ranking.png");
    ui->labelbg->setPixmap(pixmapbg);
}

Dialogranking::~Dialogranking()
{
    delete ui;
}

void Dialogranking::iniranking()
{
    QFile afile("files/data.txt");
    if(!afile.open(QIODevice::ReadOnly|QIODevice::Text))qDebug()<<"打开文件失败!";
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
    allthing[5][0]="rice";allthing[5][1]="10";allthing[5][2]="00:25:17:280";allthing[5][3]="12";
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            if(allthing[j][1].toInt()<allthing[j+1][1].toInt()){
                for(int n=0;n<4;n++){
                    QString s=allthing[j][n];
                    allthing[j][n]=allthing[j+1][n];
                    allthing[j+1][n]=s;
                }
            }
            }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            if(allthing[j][1].toInt()==allthing[j+1][1].toInt())
                if(allthing[j][2]!="未完成任何关卡"&&allthing[j+1][2]!="未完成任何关卡")
                if(QTime::fromString(allthing[j][2], "hh:mm:ss:zzz")>QTime::fromString(allthing[j+1][2], "hh:mm:ss:zzz"))
                    {
                for(int n=0;n<4;n++){
                    QString s=allthing[j][n];
                    allthing[j][n]=allthing[j+1][n];
                    allthing[j+1][n]=s;
                }
            }
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            if(allthing[j][1].toInt()==allthing[j+1][1].toInt())
                if(allthing[j][2]!="未完成任何关卡"&&allthing[j+1][2]!="未完成任何关卡")
                if(allthing[j][2]==allthing[j+1][2])
                        if(allthing[j][3].toInt()<allthing[j+1][3].toInt()){
                    for(int n=0;n<4;n++){
                        QString s=allthing[j][n];
                        allthing[j][n]=allthing[j+1][n];
                        allthing[j+1][n]=s;
                    }
                }
        }
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<4;j++){
            QTableWidgetItem *aitem=new QTableWidgetItem();
            aitem->setText(allthing[i][j]);
            aitem->setFlags(Qt::NoItemFlags);
            QFont afont("GenSenRounded TW B");
            afont.setPointSize(12);
            QBrush abrush1(QColor(128,128,128));
            QBrush abrush2(QColor(255,255,200));
            if((allthing)[i][0]=="默认用户名")break;//aitem->setForeground(abrush1);
            else aitem->setForeground(abrush2);
            aitem->setFont(afont);
            aitem->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
            ui->tableWidget->setItem(i+1,j+1,aitem);
        }
    }
}
