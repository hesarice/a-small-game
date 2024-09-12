#ifndef DIALOGRULE_H
#define DIALOGRULE_H

#include <QDialog>

namespace Ui {
class Dialogrule;
}

class Dialogrule : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogrule(QWidget *parent = nullptr);
    ~Dialogrule();

private:
    Ui::Dialogrule *ui;
};

#endif // DIALOGRULE_H
