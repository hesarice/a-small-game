#ifndef DIALOGSTART_H
#define DIALOGSTART_H

#include <QDialog>

namespace Ui {
class Dialogstart;
}

class Dialogstart : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogstart(QWidget *parent = nullptr);
    ~Dialogstart();

private:
    Ui::Dialogstart *ui;
};

#endif // DIALOGSTART_H
