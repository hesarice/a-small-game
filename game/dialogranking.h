#ifndef DIALOGRANKING_H
#define DIALOGRANKING_H

#include <QDialog>

namespace Ui {
class Dialogranking;
}

class Dialogranking : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogranking(QWidget *parent = nullptr);
    ~Dialogranking();
    void iniranking();

private:
    Ui::Dialogranking *ui;
    QString allthing[6][4];
};

#endif // DIALOGRANKING_H
