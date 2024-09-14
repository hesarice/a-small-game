/********************************************************************************
** Form generated from reading UI file 'dialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialoglogin
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *labelbg;
    QLabel *labeltitle;

    void setupUi(QDialog *Dialoglogin)
    {
        if (Dialoglogin->objectName().isEmpty())
            Dialoglogin->setObjectName(QString::fromUtf8("Dialoglogin"));
        Dialoglogin->resize(338, 145);
        lineEdit = new QLineEdit(Dialoglogin);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 80, 131, 41));
        pushButton = new QPushButton(Dialoglogin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 67, 111, 71));
        labelbg = new QLabel(Dialoglogin);
        labelbg->setObjectName(QString::fromUtf8("labelbg"));
        labelbg->setGeometry(QRect(0, 0, 338, 145));
        labeltitle = new QLabel(Dialoglogin);
        labeltitle->setObjectName(QString::fromUtf8("labeltitle"));
        labeltitle->setGeometry(QRect(-1, -1, 341, 81));
        labelbg->raise();
        lineEdit->raise();
        pushButton->raise();
        labeltitle->raise();

        retranslateUi(Dialoglogin);

        QMetaObject::connectSlotsByName(Dialoglogin);
    } // setupUi

    void retranslateUi(QDialog *Dialoglogin)
    {
        Dialoglogin->setWindowTitle(QCoreApplication::translate("Dialoglogin", "\346\244\215\346\255\244\351\235\222\347\273\277\345\260\217\346\270\270\346\210\217", nullptr));
        pushButton->setText(QString());
        labelbg->setText(QString());
        labeltitle->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialoglogin: public Ui_Dialoglogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H
