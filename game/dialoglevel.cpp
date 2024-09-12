#include "dialoglevel.h"
#include "ui_dialoglevel.h"
#include"dialogwin.h"
#include<QFileDialog>
#include<QStandardItemModel>
#include <QHeaderView>
#include<QPixmap>
#include<QIcon>
#include<QTime>
#include<QDropEvent>
#include<QMimeData>
#include<QDrag>
#include<QTableWidgetSelectionRange>
#include<QMessageBox>
#include<QTimer>
#include<QScreen>
#include<QSoundEffect>
#include<QAudioOutput>
Dialoglevel::Dialoglevel(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialoglevel)
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
    // QPoint point= this->pos();
    // this->move(point);
    setFixedSize(QSize(631, 334));

    //connect(ui->tabletotal,ui->tabletotal->doubleClicked,this,Dialoglevel::do_doubleClick);
   // connect(ui->tabletotal,&mytabletotal::double_clicked,this,&Dialoglevel::do_doubleClick);
    //connect(ui->tabletotal,&Tmytabletotal::doubleClicked,this,&Dialoglevel::do_doubleClick);
    //connect(ui->label4,&TMyLabel::droped,this,&Dialoglevel::do_droped);
    //connect(ui->label,&TmyLabel::doubleClicked,this,&Dialoglevel::do_doubleClick);
    atime=new QTime(00,00,00,000);
    atimer=new QTimer(this);
    atimer->setInterval(3);
    connect(atimer,&QTimer::timeout,this,&Dialoglevel::do_timeout);
    srand(QTime(0,0,0).secsTo(QTime::currentTime()));
    int top = 0, left = 0, bottom = 1, right =1;
    range2  = QTableWidgetSelectionRange(top, left, bottom, right);
    top = 0, left = 0, bottom = 2, right =2;
    range3  = QTableWidgetSelectionRange(top, left, bottom, right);
    top = 0, left = 0, bottom = 3, right =3;
    range4  = QTableWidgetSelectionRange(top, left, bottom, right);
    //ui->tabletotal->installEventFilter(this);
    ui->tabletotal->setAcceptDrops(false);setAcceptDrops(true);
    ui->tabletotal->setRowCount(6);
    ui->tabletotal->setColumnCount(6);
    ui->tableword->setRowCount(6);
    ui->tableword->setColumnCount(6);
    ui->tableword->setStyleSheet("background:transparent");
    ui->tabletotal->setEditTriggers(QTableWidget::NoEditTriggers);
    ui->tableword->setEditTriggers(QTableWidget::NoEditTriggers);
    QPixmap origin1("things/shape_wrongicon.png");
    QPixmap origin2("things/shape_triangle.png");
    QPixmap origin3("things/shape_circle.png");
    QPixmap origin4("things/shape_square2n2.png");
    QPixmap origin5("things/tree1.png");
    QPixmap origin6("things/tree2.png");
    QPixmap origin7("things/tree3.png");
    QPixmap origin8("things/tree4.png");
    QPixmap pixmapbg("things/levelbg.png");
    QPixmap pixmapgboxbg("things/groupboxbg.png");
    oridrag1=QPixmap("things/treedrag1.png");
    oridrag2=QPixmap("things/treedrag2.png");
    oridrag3=QPixmap("things/treedrag3.png");
    oridrag4=QPixmap("things/treedrag4.png");
    scaledtotal=origin1.scaled(QSize(52,47));
    scaled1=origin5.scaled(QSize(30,30));
    scaled2=origin6.scaled(QSize(60,60));
    scaled3=origin7.scaled(QSize(80,80));
    scaled4=origin8.scaled(QSize(100,100));
    h1=scaled1.height();
    h2=scaled2.height();
    h3=scaled3.height();
    h4=scaled4.height();
    icon1=new QIcon(origin1);
    icon2=new QIcon(origin2);
    icon3=new QIcon(origin3);
    icon4=new QIcon(origin4);
    icon5=new QIcon(origin5);
    ui->label11->setPixmap(scaled1);
    ui->label21->setPixmap(scaled2);
    ui->label31->setPixmap(scaled3);
    ui->label4->setPixmap(scaled4);
    ui->label11->setScaledContents(true);
    ui->label21->setScaledContents(true);
    ui->label31->setScaledContents(true);
    ui->label4->setScaledContents(true);
    ui->labelbg->setPixmap(pixmapbg);
    ui->labelgboxbg->setPixmap(pixmapgboxbg);
    //amodel=new QStandardItemModel(6,6,this);
    //model4=new QStandardItemModel(4,4,this);
    //ui->tabletotal->setModel(amodel);
    //ui->table4->setModel(model4);
    QHeaderView *horview=ui->tabletotal->horizontalHeader();
    horview->setHidden(true);
    QHeaderView *verview=ui->tabletotal->verticalHeader();
    verview->setHidden(true);
    horview=ui->tableword->horizontalHeader();
    horview->setHidden(true);
    verview=ui->tableword->verticalHeader();
    verview->setHidden(true);
    ui->tableword->setGridStyle(Qt::NoPen);
    ui->tableword->setFrameStyle(QFrame::NoFrame);
    ui->tabletotal->setDragDropMode(QAbstractItemView::NoDragDrop);
    ui->tableword->setDragDropMode(QAbstractItemView::NoDragDrop);
    ui->tabletotal->setSelectionMode(QAbstractItemView::NoSelection);
    ui->tableword->setSelectionMode(QAbstractItemView::NoSelection);
    ui->btnrewind->setDisabled(true);
    QFont timefont("High Pixel-7",13,13);
    ui->labelTime->setFont(timefont);
    QPixmap pixmaprw("things/levelbtnrewind1.png");
    QIcon iconrw(pixmaprw);
    QSize asizerw;
    asizerw.setHeight(80);
    asizerw.setWidth(111);
    ui->btnrewind->setIcon(iconrw);
    ui->btnrewind->setIconSize(asizerw);
    QPixmap pixmaps("things/levelbtnsubmit1.png");
    QIcon iconsubmit(pixmaps);
    QSize asizes;
    asizes.setHeight(95);
    asizes.setWidth(131);
    ui->btnsubmit->setIcon(iconsubmit);
    ui->btnsubmit->setIconSize(asizes);
    QPixmap pixmapp("things/levelbtnback1.png");
    QIcon icon(pixmapp);
    QSize asizeback;
    asizeback.setHeight(40);
    asizeback.setWidth(40);
    ui->btnback->setIcon(icon);
    ui->btnback->setIconSize(asizeback);

    QPalette palette;
    palette.setColor(QPalette::WindowText, Qt::darkCyan); // 使用QPalette::WindowText设置前景色
    ui->labeltitle->setPalette(palette);

    mainsongs.setSource(QUrl::fromLocalFile("music/mainsongspr.mp3"));
    mainsongs.setLoops(QSoundEffect::Infinite);
    aoutputmain=new QAudioOutput(this);
    aoutputmain->setVolume(0.17f);
    mainsongs.setAudioOutput(aoutputmain);
    winsong.setSource(QUrl::fromLocalFile("music/colorfulvoiceguitar.mp3"));
    aoutputwin=new QAudioOutput(this);
    aoutputwin->setVolume(0.15f);
    winsong.setAudioOutput(aoutputwin);
}

Dialoglevel::~Dialoglevel()
{
    delete ui;
}

void Dialoglevel::settable(QString filename)
{
    win=0;
    listnx.clear();
    listny.clear();
    listavalue.clear();
    acount=0;
        ui->btnrewind->setDisabled(true);
    QFile afile(filename);
    if(!afile.open(QIODevice::ReadOnly|QIODevice::Text))qDebug()<<"打开文件失败!";
    QStringList totallist;
    QTextStream astream(&afile);
    while(!astream.atEnd()){
        QString str=astream.readLine();
        totallist<<str;
    }
    for(int i=0;i<6;i++){

        QString linetext=totallist.at(i);
        QStringList templist=linetext.split(QRegularExpression(R"(\s+)"),Qt::SkipEmptyParts);
        for(int j=0;j<6;j++){
            QTableWidgetItem *aitem=new QTableWidgetItem();
            QTableWidgetItem *aitemword=new QTableWidgetItem();
            if(QString(templist.at(j))=="-1"){aitem->setIcon(*icon1);}
            else if(QString(templist.at(j))=="0"){aitem->setIcon(*icon3);}
            else if(QString(templist.at(j))=="1"){aitem->setIcon(*icon2);aitem->setText("1");}
            else if(QString(templist.at(j))=="2"){aitem->setIcon(*icon3);aitem->setText("2");}
            else if(QString(templist.at(j))=="3"){aitem->setIcon(*icon2);aitem->setText("3");}
            else if(QString(templist.at(j))=="4"){aitem->setIcon(*icon4);aitem->setText("4");}
            ui->tabletotal->setItem(i,j,aitem);
            aitemword->setText("0");
            aitemword->setFlags(Qt::NoItemFlags);
            ui->tableword->setItem(i,j,aitemword);
        }

    }
    ui->tabletotal->setIconSize(scaledtotal.size());
    for (int column = 0; column < 6; ++column) {
        ui->tabletotal->setColumnWidth(column, 52);
        ui->tableword->setColumnWidth(column, 52);
    }
    for (int row = 0; row < 6; ++row) {
        ui->tabletotal->setRowHeight(row, 47);
        ui->tableword->setRowHeight(row, 47);
    }
    //以上是对tabletotal的初始化
    ui->label11->setDisabled(false);
    ui->label21->setDisabled(false);
    ui->label31->setDisabled(false);
    ui->label4->setDisabled(false);
    va1=2;va2=2;va3=2;va4=1;
}


void Dialoglevel::setendless()
{
    ui->labeltitle->setText("无尽模式");
    QFile afile("levels/temp.txt");
    if(!afile.open(QIODevice::WriteOnly|QIODevice::Text))qDebug()<<"打开文件失败!";
    QTextStream astream(&afile);
    int n=0,can=0;
    for(int i=0;i<6;i++)
        for(int j=0;j<6;j++)
        {
            tempsquare[i][j]=0;
                edls[i][j]=0;
        }
    while(n<7){
        if(can==0)for(int i=0;i<6;i++)for(int j=0;j<6;j++)tempsquare[i][j]=edls[i][j];
        int a=rand()%6;
        int b=rand()%6;
        can=1;
        if(n==0 || n==1){
            if(tempsquare[a][b]<=4)tempsquare[a][b]++;
        }
        else if(n==2 || n==3){
            if(a+2<=6 && b+2<=6){
                for(int i=a;i<a+2;i++)for(int j=b;j<b+2;j++){
                        if(tempsquare[i][j]<4)tempsquare[i][j]++;
                        else can=0;
                    }
        }
            else can=0;
        }
        else if(n==4 || n==5){
            if(a+3<=6 && b+3<=6){
                for(int i=a;i<a+3;i++)for(int j=b;j<b+3;j++){
                        if(tempsquare[i][j]<4)tempsquare[i][j]++;
                        else can=0;
                    }
            }
            else can=0;
        }
        else if(n==6){
            if(a+4<=6 && b+4<=6){
                for(int i=a;i<a+4;i++)for(int j=b;j<b+4;j++){
                        if(tempsquare[i][j]<4)tempsquare[i][j]++;
                        else can=0;
                    }
            }
            else can=0;
        }
    if(can==1){
        n++;
        for(int i=0;i<6;i++)for(int j=0;j<6;j++)edls[i][j]=tempsquare[i][j];
    }
}
    for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
            astream<<tempsquare[i][j];
        astream<<" ";
        }
    astream<<"\n";
    }
    afile.close();
    settable("levels/temp.txt");
}

QString Dialoglevel::gettime()
{
    return ui->labelTime->text();
}


void Dialoglevel::playmainsong()
{

    winsong.stop();
    mainsongs.play();

}

void Dialoglevel::playwinsong()
{

    mainsongs.pause();
    winsong.play();

}

void Dialoglevel::starttime()
{
    atime->setHMS(00,00,00,000);
    atimer->start();
}


void Dialoglevel::do_dropchange(int col,int row)
{
    QTableWidgetItem *aitem=ui->tableword->item(row,col);
    int aint;
    QString atext=aitem->text();
    aint=atext.toInt();
    aint++;
    atext=QString::number(aint);
    aitem->setText(atext);
}

void Dialoglevel::do_backchange(int col, int row)
{
    QTableWidgetItem *aitem=ui->tableword->item(row,col);
    int aint;
    QString atext=aitem->text();
    aint=atext.toInt();
    aint--;
    atext=QString::number(aint);
    aitem->setText(atext);
}

int Dialoglevel::gety(int a)
{
    if(a>=15 && a<=62)return 0;
    else if(a>=62 && a<=109)return 1;
    else if(a>=109 && a<=156)return 2;
    else if(a>=156 && a<=203)return 3;
    else if(a>=203 && a<=250)return 4;
    else if(a>=250 && a<=297)return 5;
}

void Dialoglevel::setpath(QString s)
{
    path=s;
}

void Dialoglevel::setlabeltitle(int a)
{
    QString atitle=QString("第 %1 关").arg(a);
    ui->labeltitle->setText(atitle);
}

int Dialoglevel::getwin()
{
    return win;
}

int Dialoglevel::getnext()
{
    return next;
}

int Dialoglevel::getendless()
{
    return endless;
}



void Dialoglevel::mousePressEvent(QMouseEvent *event)
{
    int x=event->pos().x();
    int y=event->pos().y();
    if(va1!=0&& x>=368 && x<=451 && y>=30 && y<=110 || va2!=0 &&x >=498 && x<=579 && y>=30 && y<=110   //限制拖拽区域以及使用次数
        || va3!=0 && x>=367 && x<=450 && y>=126 && y<=207 ||va4!=0 && x>=494&&x<=583 && y>=119 && y<=209){
    QLabel *child = static_cast<QLabel*>(childAt(event->pos()));
    if (!child){
        return;
    }
    //int childh=child->height();
    pixmap = child->pixmap(Qt::ReturnByValue);
    pixh=pixmap.height();
    QByteArray itemData;
    QDataStream dataStream(&itemData, QIODevice::WriteOnly);
    dataStream << pixmap << QPoint(event->pos());
    QMimeData *mimeData = new QMimeData;
    mimeData->setData("application/x-dnditemdata", itemData);
    QPixmap pixmaptoset;
    QDrag *drag = new QDrag(this);
    if(pixh==h1){qDebug()<<"h1";pixmaptoset=oridrag1.scaled(52,47);avalue=1;}
    else if(pixh==h2){qDebug()<<"h2";pixmaptoset=oridrag2.scaled(104,94);avalue=2;}
    else if(pixh==h3){qDebug()<<"h3";pixmaptoset=oridrag3.scaled(156,141);avalue=3;}
    else if(pixh==h4){qDebug()<<"h4";pixmaptoset=oridrag4.scaled(208,188);avalue=4;}
    QPoint hotspot;
    hotspot.setX(event->localPos().x()-event->pos().x());
    hotspot.setY(event->localPos().y()-event->pos().y());
    drag->setMimeData(mimeData);
    drag->setPixmap(pixmaptoset);
    drag->setHotSpot(hotspot);
    drag->exec();
    }
}

void Dialoglevel::dragEnterEvent(QDragEnterEvent *event)
{

    event->accept();
}

void Dialoglevel::dropEvent(QDropEvent *event)
{

    int x=event->pos().x();
    int y=event->pos().y();
    ny=114;nx=114;
    if(x>=-7&&x<=45){
        nx=0;
        ny=gety(y);
    }
    else if(x>=45&&x<=97){
        nx=1;
        ny=gety(y);
    }
    else if(x>=97&&x<=149){
        nx=2;
        ny=gety(y);
    }
    else if(x>=149&&x<=201){
        nx=3;
        ny=gety(y);
    }
    else if(x>=201&&x<=253){
        nx=4;
        ny=gety(y);
    }
    else if(x>=253&&x<=301){
        nx=5;
         ny=gety(y);
    }
    if(!(nx+avalue>0 &&nx+avalue<7))
    {
        //QMessageBox::warning(this,"错误","拖拽位置不在答题范围内!");
        return;
    }
    if(!(ny+avalue>0 &&ny+avalue<7))
    {
        //QMessageBox::warning(this,"错误","拖拽位置不在答题范围内!");
        return;
    }
    switch(avalue){
    case 1:va1--;if(va1==0)ui->label11->setDisabled(true);break;
    case 2:va2--;if(va2==0)ui->label21->setDisabled(true);break;
    case 3:va3--;if(va3==0)ui->label31->setDisabled(true);break;
    case 4:va4--;if(va4==0)ui->label4->setDisabled(true);break;
    default:break;
    }
    listavalue<<avalue;    //为回溯操作提供数据
    listnx<<nx;
    listny<<ny;
    acount++;
    ui->btnrewind->setDisabled(false);
    for(int i=nx;i<nx+avalue;i++){
        for(int j=ny;j<ny+avalue;j++){
            do_dropchange(i,j);
        }
    }

}

void Dialoglevel::do_timeout()
{
    *atime=atime->addMSecs(atimer->interval());
    ui->labelTime->setText(atime->toString("hh:mm:ss:zzz"));
}


void Dialoglevel::on_btnrewind_pressed()
{
    QPixmap pixmapp("things/levelbtnrewind2.png");
    QIcon iconrw(pixmapp);
    QSize asize;
    asize.setHeight(80);
    asize.setWidth(111);
    ui->btnrewind->setIcon(iconrw);
    ui->btnrewind->setIconSize(asize);
}


void Dialoglevel::on_btnsubmit_pressed()
{
    QPixmap pixmaps("things/levelbtnsubmit2.png");
    QIcon iconsubmit(pixmaps);
    QSize asizes;
    asizes.setHeight(95);
    asizes.setWidth(131);
    ui->btnsubmit->setIcon(iconsubmit);
    ui->btnsubmit->setIconSize(asizes);
}


void Dialoglevel::on_btnrewind_released()
{
    QPixmap pixmapp("things/levelbtnrewind1.png");
    QIcon iconrw(pixmapp);
    QSize asize;
    asize.setHeight(80);
    asize.setWidth(111);
    ui->btnrewind->setIcon(iconrw);
    ui->btnrewind->setIconSize(asize);
    if(acount>=1){
        int backx=listnx.at(acount-1);
        int backy=listny.at(acount-1);
        int backvalue=listavalue.at(acount-1);
        listnx.removeAt(acount-1);
        listny.removeAt(acount-1);
        listavalue.removeAt(acount-1);
        acount--;
        for(int i=backx;i<backx+backvalue;i++){
            for(int j=backy;j<backy+backvalue;j++){
                do_backchange(i,j);
            }
        }
        switch(backvalue){
        case 1:va1++;if(va1!=0)ui->label11->setDisabled(false);break;
        case 2:va2++;if(va2!=0)ui->label21->setDisabled(false);break;
        case 3:va3++;if(va3!=0)ui->label31->setDisabled(false);break;
        case 4:va4++;if(va4!=0)ui->label4->setDisabled(false);break;
        default:break;
        }
        if(acount==0){
            ui->btnrewind->setDisabled(true);
            //     listavalue.clear();
            //     listnx.clear();
            //     listny.clear();
        }
    }
    else
    {
        return;
    }
}


void Dialoglevel::on_btnsubmit_released()
{
    QPixmap pixmaps("things/levelbtnsubmit1.png");
    QIcon iconsubmit(pixmaps);
    QSize asizes;
    asizes.setHeight(95);
    asizes.setWidth(131);
    ui->btnsubmit->setIcon(iconsubmit);
    ui->btnsubmit->setIconSize(asizes);
    QFile afile(path);
    afile.open(QIODevice::ReadOnly|QIODevice::Text);
    QStringList totallist;
    QTextStream astream(&afile);
    while(!astream.atEnd()){
        QString str=astream.readLine();
        totallist<<str;
    }
    for(int i=0;i<6;i++){
        QString linetext=totallist.at(i);
        QStringList templist=linetext.split(QRegularExpression(R"(\s+)"),Qt::SkipEmptyParts);
        for(int j=0;j<6;j++){

            QTableWidgetItem *aitemword=new QTableWidgetItem();
            aitemword=ui->tableword->item(i,j);
            if(aitemword->text()=="0"&&templist.at(j)=="-1")continue;
            else if(!(aitemword->text()==templist.at(j)))
            {
                QMessageBox::critical(this,"111","答题错误！");
                return;
            }
        }
    }
    atimer->stop();
    win=1;
    playwinsong();
    Dialogwin * winning=new Dialogwin(this);
    if(path=="levels/10.txt")
    {
        winning->setnexthidden();
        endless=1;
    }
    winning->exec();
    winning->close();
    next=winning->getnext();
    delete winning;
    playmainsong();
    this->close();
}


void Dialoglevel::on_btnback_pressed()
{
    QPixmap pixmapp("things/levelbtnback2.png");
    QIcon icon(pixmapp);
    QSize asizeback;
    asizeback.setHeight(40);
    asizeback.setWidth(40);
    ui->btnback->setIcon(icon);
    ui->btnback->setIconSize(asizeback);
}


void Dialoglevel::on_btnback_released()
{
    QPixmap pixmapp("things/levelbtnback1.png");
    QIcon icon(pixmapp);
    QSize asizeback;
    asizeback.setHeight(40);
    asizeback.setWidth(40);
    ui->btnback->setIcon(icon);
    ui->btnback->setIconSize(asizeback);
    next=0;
    this->close();
}

