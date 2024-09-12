#include "dialogstart.h"
#include "ui_dialogstart.h"

Dialogstart::Dialogstart(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialogstart)
{
    ui->setupUi(this);
}

Dialogstart::~Dialogstart()
{
    delete ui;
}
