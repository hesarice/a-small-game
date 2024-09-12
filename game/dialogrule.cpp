#include "dialogrule.h"
#include "ui_dialogrule.h"

Dialogrule::Dialogrule(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialogrule)
{
    ui->setupUi(this);
    QPixmap pixmap4title("things\\grass-windowicon.png");
    QIcon icon4title(pixmap4title);
    setWindowIcon(icon4title);
    setFixedSize(QSize(500, 500));
    //setWindowFlags(Qt::FramelessWindowHint);
    QPixmap pixmapall("things/rulebg");
    ui->label6n6->setPixmap(pixmapall);
}

Dialogrule::~Dialogrule()
{
    delete ui;
}
