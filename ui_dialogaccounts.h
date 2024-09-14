/********************************************************************************
** Form generated from reading UI file 'dialogaccounts.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGACCOUNTS_H
#define UI_DIALOGACCOUNTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialogaccounts
{
public:
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *labeltitle;
    QPushButton *pushButton_2;
    QLabel *labelbg;

    void setupUi(QDialog *Dialogaccounts)
    {
        if (Dialogaccounts->objectName().isEmpty())
            Dialogaccounts->setObjectName(QString::fromUtf8("Dialogaccounts"));
        Dialogaccounts->resize(336, 226);
        comboBox = new QComboBox(Dialogaccounts);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 80, 201, 31));
        lineEdit = new QLineEdit(Dialogaccounts);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 150, 201, 31));
        pushButton = new QPushButton(Dialogaccounts);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(229, 60, 101, 71));
        labeltitle = new QLabel(Dialogaccounts);
        labeltitle->setObjectName(QString::fromUtf8("labeltitle"));
        labeltitle->setGeometry(QRect(0, 0, 336, 81));
        labeltitle->setScaledContents(false);
        pushButton_2 = new QPushButton(Dialogaccounts);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(229, 130, 101, 71));
        labelbg = new QLabel(Dialogaccounts);
        labelbg->setObjectName(QString::fromUtf8("labelbg"));
        labelbg->setGeometry(QRect(0, 0, 336, 226));
        labelbg->setScaledContents(false);
        labelbg->raise();
        comboBox->raise();
        lineEdit->raise();
        pushButton->raise();
        labeltitle->raise();
        pushButton_2->raise();

        retranslateUi(Dialogaccounts);

        QMetaObject::connectSlotsByName(Dialogaccounts);
    } // setupUi

    void retranslateUi(QDialog *Dialogaccounts)
    {
        Dialogaccounts->setWindowTitle(QCoreApplication::translate("Dialogaccounts", "\346\244\215\346\255\244\351\235\222\347\273\277\345\260\217\346\270\270\346\210\217", nullptr));
        pushButton->setText(QString());
        labeltitle->setText(QString());
        pushButton_2->setText(QString());
        labelbg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialogaccounts: public Ui_Dialogaccounts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGACCOUNTS_H
