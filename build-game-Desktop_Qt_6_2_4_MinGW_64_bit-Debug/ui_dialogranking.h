/********************************************************************************
** Form generated from reading UI file 'dialogranking.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGRANKING_H
#define UI_DIALOGRANKING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialogranking
{
public:
    QTableWidget *tableWidget;
    QLabel *labeltitle;
    QLabel *labelbg;

    void setupUi(QDialog *Dialogranking)
    {
        if (Dialogranking->objectName().isEmpty())
            Dialogranking->setObjectName(QString::fromUtf8("Dialogranking"));
        Dialogranking->resize(525, 297);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build-cpp_shixun-Desktop_Qt_6_2_4_MinGW_64_bit-Debug/things/grass-windowicon..png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialogranking->setWindowIcon(icon);
        tableWidget = new QTableWidget(Dialogranking);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 7)
            tableWidget->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem11);
        QFont font;
        font.setFamilies({QString::fromUtf8("HarmonyOS Sans SC Medium")});
        font.setPointSize(11);
        font.setBold(false);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem12->setFont(font);
        tableWidget->setItem(0, 0, __qtablewidgetitem12);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("HarmonyOS Sans SC Medium")});
        font1.setPointSize(11);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem13->setFont(font1);
        tableWidget->setItem(0, 1, __qtablewidgetitem13);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem14->setFont(font);
        __qtablewidgetitem14->setBackground(brush);
        tableWidget->setItem(0, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem15->setFont(font1);
        tableWidget->setItem(0, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem16->setFont(font1);
        tableWidget->setItem(0, 4, __qtablewidgetitem16);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("GenSenRounded TW B")});
        font2.setPointSize(11);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem17->setFont(font2);
        tableWidget->setItem(1, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem18->setFont(font2);
        tableWidget->setItem(1, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem19->setFont(font2);
        tableWidget->setItem(1, 2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem20->setFont(font2);
        tableWidget->setItem(1, 3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem21->setFont(font2);
        tableWidget->setItem(1, 4, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem22->setFont(font2);
        tableWidget->setItem(2, 0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem23->setFont(font2);
        tableWidget->setItem(2, 1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem24->setFont(font2);
        tableWidget->setItem(2, 2, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem25->setFont(font2);
        tableWidget->setItem(2, 3, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem26->setFont(font2);
        tableWidget->setItem(2, 4, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem27->setFont(font2);
        tableWidget->setItem(3, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem28->setFont(font2);
        tableWidget->setItem(3, 1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem29->setFont(font2);
        tableWidget->setItem(3, 2, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem30->setFont(font2);
        tableWidget->setItem(3, 3, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem31->setFont(font2);
        tableWidget->setItem(3, 4, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem32->setFont(font2);
        tableWidget->setItem(4, 0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem33->setFont(font2);
        tableWidget->setItem(4, 1, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem34->setFont(font2);
        tableWidget->setItem(4, 2, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem35->setFont(font2);
        tableWidget->setItem(4, 3, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem36->setFont(font2);
        tableWidget->setItem(4, 4, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem37->setFont(font2);
        tableWidget->setItem(5, 0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem38->setFont(font2);
        tableWidget->setItem(5, 1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem39->setFont(font2);
        tableWidget->setItem(5, 2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem40->setFont(font2);
        tableWidget->setItem(5, 3, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem41->setFont(font2);
        tableWidget->setItem(5, 4, __qtablewidgetitem41);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("GenSenRounded TW B")});
        font3.setPointSize(11);
        font3.setBold(false);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem42->setFont(font3);
        tableWidget->setItem(6, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        __qtablewidgetitem43->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem43->setFont(font2);
        tableWidget->setItem(6, 1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        __qtablewidgetitem44->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem44->setFont(font2);
        tableWidget->setItem(6, 2, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        __qtablewidgetitem45->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem45->setFont(font2);
        tableWidget->setItem(6, 3, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        __qtablewidgetitem46->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem46->setFont(font2);
        tableWidget->setItem(6, 4, __qtablewidgetitem46);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 80, 501, 371));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("GenSenRounded TW M")});
        font4.setBold(false);
        tableWidget->setFont(font4);
        tableWidget->setStyleSheet(QString::fromUtf8("background:transparent;border:none"));
        tableWidget->setGridStyle(Qt::NoPen);
        labeltitle = new QLabel(Dialogranking);
        labeltitle->setObjectName(QString::fromUtf8("labeltitle"));
        labeltitle->setGeometry(QRect(0, 9, 525, 85));
        labelbg = new QLabel(Dialogranking);
        labelbg->setObjectName(QString::fromUtf8("labelbg"));
        labelbg->setGeometry(QRect(0, 0, 525, 297));
        labelbg->setScaledContents(true);
        labelbg->raise();
        tableWidget->raise();
        labeltitle->raise();

        retranslateUi(Dialogranking);

        QMetaObject::connectSlotsByName(Dialogranking);
    } // setupUi

    void retranslateUi(QDialog *Dialogranking)
    {
        Dialogranking->setWindowTitle(QCoreApplication::translate("Dialogranking", "\346\244\215\346\255\244\351\235\222\347\273\277\345\260\217\346\270\270\346\210\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Dialogranking", "\346\216\222\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Dialogranking", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Dialogranking", "\351\200\232\345\205\263\345\205\263\345\215\241\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Dialogranking", "\346\200\273\347\224\250\346\227\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Dialogranking", "\346\227\240\345\260\275\345\205\263\345\215\241\351\200\232\345\205\263\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Dialogranking", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Dialogranking", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Dialogranking", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Dialogranking", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Dialogranking", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Dialogranking", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Dialogranking", "\346\226\260\345\273\272\350\241\2142", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(0, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Dialogranking", "\346\216\222\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(0, 1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Dialogranking", "\347\224\250\346\210\267\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(0, 2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("Dialogranking", "\351\200\232\345\205\263\345\205\263\345\215\241\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(0, 3);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("Dialogranking", "\346\200\273\347\224\250\346\227\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(0, 4);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("Dialogranking", "\346\227\240\345\260\275\345\205\263\345\215\241\351\200\232\345\205\263\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(1, 0);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("Dialogranking", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(2, 0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("Dialogranking", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(3, 0);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("Dialogranking", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(4, 0);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("Dialogranking", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(5, 0);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("Dialogranking", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(6, 0);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("Dialogranking", "6", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        labeltitle->setText(QString());
        labelbg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialogranking: public Ui_Dialogranking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGRANKING_H
