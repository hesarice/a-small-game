#ifndef DIALOGLOGIN_H
#define DIALOGLOGIN_H

#include <QDialog>

namespace Ui {
class Dialoglogin;
}

class Dialoglogin : public QDialog
{
    Q_OBJECT

public:
    explicit Dialoglogin(QWidget *parent = nullptr);
    ~Dialoglogin();
    QString getname();

private slots:
    void on_pushButton_pressed();

    void on_pushButton_released();

private:
    Ui::Dialoglogin *ui;
};

#endif // DIALOGLOGIN_H
