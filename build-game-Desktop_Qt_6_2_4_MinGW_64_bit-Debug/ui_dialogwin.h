/********************************************************************************
** Form generated from reading UI file 'dialogwin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGWIN_H
#define UI_DIALOGWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialogwin
{
public:
    QLabel *labelbg;
    QPushButton *btnselect;
    QPushButton *btnnext;

    void setupUi(QDialog *Dialogwin)
    {
        if (Dialogwin->objectName().isEmpty())
            Dialogwin->setObjectName(QString::fromUtf8("Dialogwin"));
        Dialogwin->resize(300, 400);
        labelbg = new QLabel(Dialogwin);
        labelbg->setObjectName(QString::fromUtf8("labelbg"));
        labelbg->setGeometry(QRect(0, 0, 300, 400));
        btnselect = new QPushButton(Dialogwin);
        btnselect->setObjectName(QString::fromUtf8("btnselect"));
        btnselect->setGeometry(QRect(60, 170, 200, 120));
        btnnext = new QPushButton(Dialogwin);
        btnnext->setObjectName(QString::fromUtf8("btnnext"));
        btnnext->setGeometry(QRect(60, 269, 200, 111));

        retranslateUi(Dialogwin);

        QMetaObject::connectSlotsByName(Dialogwin);
    } // setupUi

    void retranslateUi(QDialog *Dialogwin)
    {
        Dialogwin->setWindowTitle(QCoreApplication::translate("Dialogwin", "\346\244\215\346\255\244\351\235\222\347\273\277\345\260\217\346\270\270\346\210\217", nullptr));
        labelbg->setText(QString());
        btnselect->setText(QString());
        btnnext->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialogwin: public Ui_Dialogwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGWIN_H
