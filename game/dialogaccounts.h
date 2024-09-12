#ifndef DIALOGACCOUNTS_H
#define DIALOGACCOUNTS_H

#include <QDialog>

namespace Ui {
class Dialogaccounts;
}

class Dialogaccounts : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogaccounts(QWidget *parent = nullptr);
    ~Dialogaccounts();
    QString getname();
    void inidata();
    int getcount();
    int getnew();
    void dodisabled();
    void setcbcurrent(QString s);

private slots:
    void on_pushButton_2_released();

    void on_pushButton_released();

    void on_pushButton_pressed();

    void on_pushButton_2_pressed();

private:
    Ui::Dialogaccounts *ui;
    int anew=0;
    QString name;
};

#endif // DIALOGACCOUNTS_H
