#ifndef DIALOGLEVEL_H
#define DIALOGLEVEL_H

#include <QDialog>
#include<QTableWidgetSelectionRange>
#include<QTime>
#include<QSoundEffect>
#include<QMediaPlayer>
class QIcon;
class QStandardItemModel;
class QPixmap;

namespace Ui {
class Dialoglevel;
}

class Dialoglevel : public QDialog
{
    Q_OBJECT

public:

    explicit Dialoglevel(QWidget *parent = nullptr);
    ~Dialoglevel();
    void settable(QString filename);
    void do_dropchange(int col,int row);
    void do_backchange(int col,int row);
    int gety(int a);
    void setpath(QString s);
    void setlabeltitle(int a);
    int getwin();
    int getnext();
    int getendless();
    void setendless();
    QString gettime();
    void setsoundvalue(int a);
    void playmainsong();
    void playwinsong();
    void starttime();

private slots:

    void do_timeout();

    void on_btnrewind_pressed();

    void on_btnsubmit_pressed();

    void on_btnrewind_released();

    void on_btnsubmit_released();

    void on_btnback_pressed();

    void on_btnback_released();

private:
    QTime *atime;
    QTimer *atimer;
    QMediaPlayer mainsongs,winsong;
    QAudioOutput *aoutputmain,*aoutputwin;
    QList<int> listnx,listny,listavalue;
    QString path,totallist;
    Ui::Dialoglevel *ui;
    int endless=0,next=0,acount=0,avalue=100,va1=2,va2=2,va3=2,va4=1,win=0;
    int edls[6][6]={0},tempsquare[6][6];
    int nx,ny=114;
    int h1,h2,h3,h4,pixh;
    QStandardItemModel *amodel;
    QStandardItemModel *model1;
    QStandardItemModel *model2;
    QStandardItemModel *model3;
    QStandardItemModel *model4;
    QPixmap scaledtotal;
    QPixmap scaled1;
    QPixmap scaled2;
    QPixmap scaled3;
    QPixmap scaled4;
    QPixmap oridrag1,oridrag2,oridrag3,oridrag4;
    QPixmap origin5;
    QPixmap pixmap;
    QIcon *icon1;
    QIcon *icon2;
    QIcon *icon3;
    QIcon *icon4;
    QIcon *icon5;
    int m_row,m_col;
    QTableWidgetSelectionRange range2;
    QTableWidgetSelectionRange range3;
    QTableWidgetSelectionRange range4;
protected:


    // QObject interface
public:


    // QWidget interface


    // QObject interface
public:
    //virtual bool eventFilter(QObject *watched, QEvent *event) override;

    // QWidget interface

    // QWidget interface
protected:
    virtual void mousePressEvent(QMouseEvent *event) override;

    // QWidget interface
protected:
    virtual void dragEnterEvent(QDragEnterEvent *event) override;
    virtual void dropEvent(QDropEvent *event) override;
};





#endif // DIALOGLEVEL_H
