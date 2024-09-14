#ifndef DIALOGMENU_H
#define DIALOGMENU_H

#include <QDialog>
#include<QTime>
#include<QSoundEffect>
#include<dialoglevel.h>
class QIcon;
namespace Ui {
class Dialogmenu;
}

class Dialogmenu : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogmenu(QWidget *parent = nullptr);
    ~Dialogmenu();

    Dialoglevel *l;

    void setname(int a,QString s);
    void updatelevelnum();
    void updatetime();
    void updateelnum();
    void dosth();
    void writeindata();
    void inidata();
    void inilevels();
    void getplayer(QSoundEffect &a);
    void dogoldenhand();
    void resetghand();

private slots:

    void changebg();

    void on_pushButton1_pressed();

    void on_pushButton1_released();

    void on_pushButton2_pressed();

    void on_pushButton3_pressed();

    void on_pushButton4_pressed();

    void on_pushButton5_pressed();

    void on_pushButton6_pressed();

    void on_pushButton7_pressed();

    void on_pushButton8_pressed();

    void on_pushButton9_pressed();

    void on_pushButton10_pressed();

    void on_pushButton2_released();

    void on_pushButton3_released();

    void on_pushButton4_released();

    void on_pushButton5_released();

    void on_pushButton6_released();

    void on_pushButton7_released();

    void on_pushButton8_released();

    void on_pushButton9_released();

    void on_pushButton10_released();

    void on_btnranking_pressed();

    void on_btnendlessmode_pressed();

    void on_btnranking_released();

    void on_btnendlessmode_released();

    void on_btnback_pressed();

    void on_btnback_released();

    void on_btntitle_clicked();

private:
    Ui::Dialogmenu *ui;
    QTimer * atimer;
    int count=0,levelavailable=1,anum=0,goldhandcount=0;
    QSize asize;
    bool level1=0,level2=0,level3=0,level4=0,level5=0,level6=0,level7=0,level8=0,level9=0,level10=0,arule=1;
    QTime atime1=QTime::fromString("00:00:00:000", "hh:mm:ss:zzz"),atime2=QTime::fromString("00:00:00:000", "hh:mm:ss:zzz"),
          atime3=QTime::fromString("00:00:00:000", "hh:mm:ss:zzz"),atime4=QTime::fromString("00:00:00:000", "hh:mm:ss:zzz"),
          atime5=QTime::fromString("00:00:00:000", "hh:mm:ss:zzz"),atime6=QTime::fromString("00:00:00:000", "hh:mm:ss:zzz"),
          atime7=QTime::fromString("00:00:00:000", "hh:mm:ss:zzz"),atime8=QTime::fromString("00:00:00:000", "hh:mm:ss:zzz"),
        atime9=QTime::fromString("00:00:00:000", "hh:mm:ss:zzz"),atime10=QTime::fromString("00:00:00:000", "hh:mm:ss:zzz");
    QString allthing[5][4];/*={"rice","10","00:00:00:000","666",""   用文件origindata来赋值，从而完成与widget.cpp中相应数组的匹配
                           ,"0","未完成任何关卡","0","","0","未完成任何关卡","0","","0","未完成任何关卡","0","","0","未完成任何关卡","0"};*/

};

#endif // DIALOGMENU_H
