#ifndef DIALOGWIN_H
#define DIALOGWIN_H

#include <QDialog>
#include<QSoundEffect>
namespace Ui {
class Dialogwin;
}

class Dialogwin : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogwin(QWidget *parent = nullptr);
    ~Dialogwin();
    int getnext();
    void setnexthidden();

private slots:
    void on_btnselect_clicked();

    void on_btnnext_clicked();

private:
    Ui::Dialogwin *ui;
    int next=0,level;

};

#endif // DIALOGWIN_H
