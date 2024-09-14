/********************************************************************************
** Form generated from reading UI file 'dialoglevel.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLEVEL_H
#define UI_DIALOGLEVEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialoglevel
{
public:
    QGroupBox *groupBox;
    QTableWidget *tabletotal;
    QTableWidget *tableword;
    QLabel *labeltitle;
    QGroupBox *groupBox_2;
    QLabel *label11;
    QLabel *label21;
    QLabel *label31;
    QLabel *label4;
    QPushButton *btnback;
    QLabel *labelgboxbg;
    QGroupBox *groupBox_3;
    QPushButton *btnsubmit;
    QPushButton *btnrewind;
    QLabel *labelTime;
    QLabel *labelbg;

    void setupUi(QDialog *Dialoglevel)
    {
        if (Dialoglevel->objectName().isEmpty())
            Dialoglevel->setObjectName(QString::fromUtf8("Dialoglevel"));
        Dialoglevel->resize(631, 334);
        Dialoglevel->setMouseTracking(true);
        groupBox = new QGroupBox(Dialoglevel);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 331, 321));
        groupBox->setStyleSheet(QString::fromUtf8("border:none"));
        groupBox->setFlat(true);
        tabletotal = new QTableWidget(groupBox);
        tabletotal->setObjectName(QString::fromUtf8("tabletotal"));
        tabletotal->setGeometry(QRect(10, 30, 314, 284));
        tabletotal->setFrameShadow(QFrame::Sunken);
        tabletotal->setDragDropOverwriteMode(true);
        tabletotal->setSelectionMode(QAbstractItemView::NoSelection);
        tableword = new QTableWidget(groupBox);
        tableword->setObjectName(QString::fromUtf8("tableword"));
        tableword->setGeometry(QRect(49, 47, 301, 284));
        QFont font;
        font.setFamilies({QString::fromUtf8("HarmonyOS Sans SC Black")});
        font.setPointSize(11);
        font.setBold(false);
        font.setKerning(false);
        tableword->setFont(font);
        tableword->setLineWidth(0);
        tableword->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableword->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableword->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableword->setAutoScroll(false);
        tableword->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableword->setDragDropOverwriteMode(true);
        tableword->setTextElideMode(Qt::ElideRight);
        tableword->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableword->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableword->horizontalHeader()->setMinimumSectionSize(0);
        tableword->horizontalHeader()->setDefaultSectionSize(0);
        tableword->verticalHeader()->setMinimumSectionSize(0);
        tableword->verticalHeader()->setDefaultSectionSize(20);
        labeltitle = new QLabel(groupBox);
        labeltitle->setObjectName(QString::fromUtf8("labeltitle"));
        labeltitle->setGeometry(QRect(0, 2, 331, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("GenSenRounded TW B")});
        font1.setPointSize(15);
        font1.setBold(true);
        labeltitle->setFont(font1);
        labeltitle->setAlignment(Qt::AlignCenter);
        groupBox_2 = new QGroupBox(Dialoglevel);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(330, 0, 301, 231));
        groupBox_2->setAutoFillBackground(false);
        groupBox_2->setStyleSheet(QString::fromUtf8("border:none"));
        groupBox_2->setFlat(true);
        label11 = new QLabel(groupBox_2);
        label11->setObjectName(QString::fromUtf8("label11"));
        label11->setGeometry(QRect(40, 30, 81, 81));
        label11->setScaledContents(true);
        label21 = new QLabel(groupBox_2);
        label21->setObjectName(QString::fromUtf8("label21"));
        label21->setGeometry(QRect(170, 30, 81, 81));
        label21->setScaledContents(true);
        label31 = new QLabel(groupBox_2);
        label31->setObjectName(QString::fromUtf8("label31"));
        label31->setGeometry(QRect(38, 128, 81, 81));
        label31->setScaledContents(true);
        label4 = new QLabel(groupBox_2);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(165, 120, 91, 91));
        label4->setScaledContents(true);
        btnback = new QPushButton(groupBox_2);
        btnback->setObjectName(QString::fromUtf8("btnback"));
        btnback->setGeometry(QRect(260, 0, 40, 40));
        btnback->setStyleSheet(QString::fromUtf8(""));
        labelgboxbg = new QLabel(groupBox_2);
        labelgboxbg->setObjectName(QString::fromUtf8("labelgboxbg"));
        labelgboxbg->setGeometry(QRect(20, 26, 261, 188));
        labelgboxbg->setScaledContents(true);
        labelgboxbg->raise();
        label11->raise();
        label21->raise();
        label31->raise();
        label4->raise();
        btnback->raise();
        groupBox_3 = new QGroupBox(Dialoglevel);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(330, 230, 301, 101));
        btnsubmit = new QPushButton(groupBox_3);
        btnsubmit->setObjectName(QString::fromUtf8("btnsubmit"));
        btnsubmit->setGeometry(QRect(160, 20, 121, 71));
        btnsubmit->setStyleSheet(QString::fromUtf8("border:none"));
        btnrewind = new QPushButton(groupBox_3);
        btnrewind->setObjectName(QString::fromUtf8("btnrewind"));
        btnrewind->setGeometry(QRect(30, 2, 111, 61));
        btnrewind->setStyleSheet(QString::fromUtf8("border:none"));
        labelTime = new QLabel(groupBox_3);
        labelTime->setObjectName(QString::fromUtf8("labelTime"));
        labelTime->setGeometry(QRect(32, 70, 111, 21));
        labelTime->setScaledContents(false);
        labelbg = new QLabel(Dialoglevel);
        labelbg->setObjectName(QString::fromUtf8("labelbg"));
        labelbg->setGeometry(QRect(0, 0, 631, 334));
        labelbg->raise();
        groupBox->raise();
        groupBox_2->raise();
        groupBox_3->raise();

        retranslateUi(Dialoglevel);

        QMetaObject::connectSlotsByName(Dialoglevel);
    } // setupUi

    void retranslateUi(QDialog *Dialoglevel)
    {
        Dialoglevel->setWindowTitle(QCoreApplication::translate("Dialoglevel", "\346\244\215\346\255\244\351\235\222\347\273\277\345\260\217\346\270\270\346\210\217", nullptr));
        groupBox->setTitle(QString());
        labeltitle->setText(QCoreApplication::translate("Dialoglevel", "\346\227\240\345\260\275\346\250\241\345\274\217", nullptr));
        groupBox_2->setTitle(QString());
        label11->setText(QCoreApplication::translate("Dialoglevel", "11", nullptr));
        label21->setText(QCoreApplication::translate("Dialoglevel", "21", nullptr));
        label31->setText(QCoreApplication::translate("Dialoglevel", "31", nullptr));
        label4->setText(QCoreApplication::translate("Dialoglevel", "4", nullptr));
        btnback->setText(QString());
        labelgboxbg->setText(QString());
        groupBox_3->setTitle(QString());
        btnsubmit->setText(QString());
        btnrewind->setText(QString());
        labelTime->setText(QCoreApplication::translate("Dialoglevel", "1", nullptr));
        labelbg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialoglevel: public Ui_Dialoglevel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLEVEL_H
