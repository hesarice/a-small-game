/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QPushButton *btnstart;
    QPushButton *btnrule;
    QLabel *title;
    QLabel *labelbackground;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(550, 324);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(165, 6, 220, 312));
        groupBox->setMinimumSize(QSize(220, 300));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        btnstart = new QPushButton(groupBox);
        btnstart->setObjectName(QString::fromUtf8("btnstart"));
        btnstart->setGeometry(QRect(9, 77, 220, 140));
        btnstart->setMinimumSize(QSize(220, 140));
        btnstart->setMaximumSize(QSize(220, 140));
        btnstart->setStyleSheet(QString::fromUtf8("background:transparent;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build-cpp_shixun-Desktop_Qt_6_2_4_MinGW_64_bit-Debug/things/buttonanle3.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/build-cpp_shixun-Desktop_Qt_6_2_4_MinGW_64_bit-Debug/things/buttonanle6.png"), QSize(), QIcon::Selected, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/build-cpp_shixun-Desktop_Qt_6_2_4_MinGW_64_bit-Debug/things/buttonanle6.png"), QSize(), QIcon::Selected, QIcon::On);
        btnstart->setIcon(icon);
        btnstart->setIconSize(QSize(200, 140));
        btnrule = new QPushButton(groupBox);
        btnrule->setObjectName(QString::fromUtf8("btnrule"));
        btnrule->setGeometry(QRect(15, 180, 200, 130));
        btnrule->setMinimumSize(QSize(200, 130));
        btnrule->setMaximumSize(QSize(200, 130));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../build-cpp_shixun-Desktop_Qt_6_2_4_MinGW_64_bit-Debug/things/ruleanle3.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnrule->setIcon(icon1);
        btnrule->setIconSize(QSize(100, 100));
        title = new QLabel(groupBox);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(-170, 20, 561, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Silver")});
        font.setPointSize(40);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        title->setFont(font);
        title->setAlignment(Qt::AlignCenter);
        labelbackground = new QLabel(Widget);
        labelbackground->setObjectName(QString::fromUtf8("labelbackground"));
        labelbackground->setGeometry(QRect(0, 0, 550, 324));
        labelbackground->setMinimumSize(QSize(550, 324));
        labelbackground->setMaximumSize(QSize(550, 324));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 260, 111, 81));
        labelbackground->raise();
        groupBox->raise();
        pushButton->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\346\244\215\346\255\244\351\235\222\347\273\277\345\260\217\346\270\270\346\210\217", nullptr));
        groupBox->setTitle(QString());
        btnstart->setText(QString());
        btnrule->setText(QString());
        title->setText(QCoreApplication::translate("Widget", "\346\244\215\346\255\244\351\235\222\347\273\277", nullptr));
        labelbackground->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
