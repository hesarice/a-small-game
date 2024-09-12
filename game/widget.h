#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QSoundEffect>
#include"dialogmenu.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void setname(QString s);
    QString name=",..";
    void setanum(int a);
    void inidata();
    void writeinname();
    void ifempty();

private slots:
    void changebg();

    void on_btnstart_pressed();

    void on_btnstart_released();

    void on_btnrule_pressed();

    void on_btnrule_released();

    void on_pushButton_released();

    void on_pushButton_pressed();

private:
    Dialogmenu * menu;
    int count=0,anum=0;
    Ui::Widget *ui;
    QTimer *atimer;
};
#endif // WIDGET_H
