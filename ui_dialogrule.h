/********************************************************************************
** Form generated from reading UI file 'dialogrule.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGRULE_H
#define UI_DIALOGRULE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialogrule
{
public:
    QLabel *label6n6;

    void setupUi(QDialog *Dialogrule)
    {
        if (Dialogrule->objectName().isEmpty())
            Dialogrule->setObjectName(QString::fromUtf8("Dialogrule"));
        Dialogrule->resize(500, 500);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build-cpp_shixun-Desktop_Qt_6_2_4_MinGW_64_bit-Debug/things/grass-windowicon..png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialogrule->setWindowIcon(icon);
        label6n6 = new QLabel(Dialogrule);
        label6n6->setObjectName(QString::fromUtf8("label6n6"));
        label6n6->setGeometry(QRect(0, 0, 500, 500));
        label6n6->setMinimumSize(QSize(500, 500));
        label6n6->setScaledContents(true);

        retranslateUi(Dialogrule);

        QMetaObject::connectSlotsByName(Dialogrule);
    } // setupUi

    void retranslateUi(QDialog *Dialogrule)
    {
        Dialogrule->setWindowTitle(QCoreApplication::translate("Dialogrule", "\346\244\215\346\255\244\351\235\222\347\273\277\345\260\217\346\270\270\346\210\217", nullptr));
        label6n6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialogrule: public Ui_Dialogrule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGRULE_H
