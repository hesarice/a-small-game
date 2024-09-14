#include "widget.h"
#include "dialoglogin.h"
#include "dialogaccounts.h"
#include <QApplication>
#include<QFile>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.inidata();

    if(w.name=="默认用户名"){
        Dialoglogin log;
        log.exec();
        w.setanum(0);
        w.setname(log.getname());
        w.ifempty();
        w.writeinname();
    }
    else{
        Dialogaccounts acc;
        acc.inidata();
        acc.dodisabled();
        acc.exec();
        w.setanum(acc.getcount());
        w.setname(acc.getname());
        if(acc.getnew())w.writeinname();
    }
    w.show();
    return a.exec();
}
