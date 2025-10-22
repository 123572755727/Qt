/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *btndengyu;
    QPushButton *btnNum8;
    QPushButton *btnNum6;
    QPushButton *btngenhao;
    QPushButton *btnCE;
    QPushButton *btnNum5;
    QPushButton *btnNum1_18;
    QPushButton *btnNum7;
    QPushButton *btnchen;
    QPushButton *btnjian;
    QPushButton *btnqingchu;
    QPushButton *btnpinfang;
    QPushButton *btnNum0;
    QPushButton *btnNum9;
    QPushButton *btnPercentage;
    QPushButton *btnPlus;
    QPushButton *btnNum2;
    QPushButton *btnchuyu;
    QPushButton *btnNum3;
    QPushButton *btnPeriod;
    QPushButton *btnNum4;
    QPushButton *btninverse;
    QPushButton *btnshanchu;
    QPushButton *btnjiajian;
    QLineEdit *display;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(437, 417);
        MainWindow->setAcceptDrops(false);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color: rgba(50, 50, 50, 100); \n"
"    font-size: 36pt; \n"
"    color: white;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color: lightgreen;\n"
"    color: black;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: red;\n"
"    color: black;\n"
"}\n"
"\n"
"\n"
"QLineEdit {\n"
"    font-size: 48pt; \n"
"    color: black; \n"
"    background-color: white; \n"
"    padding: 5px; \n"
"    border: 1px solid #ccc; \n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        btndengyu = new QPushButton(centralwidget);
        btndengyu->setObjectName("btndengyu");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btndengyu->sizePolicy().hasHeightForWidth());
        btndengyu->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btndengyu, 6, 3, 1, 1);

        btnNum8 = new QPushButton(centralwidget);
        btnNum8->setObjectName("btnNum8");
        sizePolicy.setHeightForWidth(btnNum8->sizePolicy().hasHeightForWidth());
        btnNum8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum8, 3, 1, 1, 1);

        btnNum6 = new QPushButton(centralwidget);
        btnNum6->setObjectName("btnNum6");
        sizePolicy.setHeightForWidth(btnNum6->sizePolicy().hasHeightForWidth());
        btnNum6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum6, 4, 2, 1, 1);

        btngenhao = new QPushButton(centralwidget);
        btngenhao->setObjectName("btngenhao");
        sizePolicy.setHeightForWidth(btngenhao->sizePolicy().hasHeightForWidth());
        btngenhao->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btngenhao, 2, 2, 1, 1);

        btnCE = new QPushButton(centralwidget);
        btnCE->setObjectName("btnCE");
        sizePolicy.setHeightForWidth(btnCE->sizePolicy().hasHeightForWidth());
        btnCE->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnCE, 1, 1, 1, 1);

        btnNum5 = new QPushButton(centralwidget);
        btnNum5->setObjectName("btnNum5");
        sizePolicy.setHeightForWidth(btnNum5->sizePolicy().hasHeightForWidth());
        btnNum5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum5, 4, 1, 1, 1);

        btnNum1_18 = new QPushButton(centralwidget);
        btnNum1_18->setObjectName("btnNum1_18");
        sizePolicy.setHeightForWidth(btnNum1_18->sizePolicy().hasHeightForWidth());
        btnNum1_18->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum1_18, 5, 0, 1, 1);

        btnNum7 = new QPushButton(centralwidget);
        btnNum7->setObjectName("btnNum7");
        sizePolicy.setHeightForWidth(btnNum7->sizePolicy().hasHeightForWidth());
        btnNum7->setSizePolicy(sizePolicy);
        btnNum7->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btnNum7, 3, 0, 1, 1);

        btnchen = new QPushButton(centralwidget);
        btnchen->setObjectName("btnchen");
        sizePolicy.setHeightForWidth(btnchen->sizePolicy().hasHeightForWidth());
        btnchen->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnchen, 3, 3, 1, 1);

        btnjian = new QPushButton(centralwidget);
        btnjian->setObjectName("btnjian");
        sizePolicy.setHeightForWidth(btnjian->sizePolicy().hasHeightForWidth());
        btnjian->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnjian, 4, 3, 1, 1);

        btnqingchu = new QPushButton(centralwidget);
        btnqingchu->setObjectName("btnqingchu");
        sizePolicy.setHeightForWidth(btnqingchu->sizePolicy().hasHeightForWidth());
        btnqingchu->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnqingchu, 1, 2, 1, 1);

        btnpinfang = new QPushButton(centralwidget);
        btnpinfang->setObjectName("btnpinfang");
        sizePolicy.setHeightForWidth(btnpinfang->sizePolicy().hasHeightForWidth());
        btnpinfang->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnpinfang, 2, 1, 1, 1);

        btnNum0 = new QPushButton(centralwidget);
        btnNum0->setObjectName("btnNum0");
        sizePolicy.setHeightForWidth(btnNum0->sizePolicy().hasHeightForWidth());
        btnNum0->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum0, 6, 1, 1, 1);

        btnNum9 = new QPushButton(centralwidget);
        btnNum9->setObjectName("btnNum9");
        sizePolicy.setHeightForWidth(btnNum9->sizePolicy().hasHeightForWidth());
        btnNum9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum9, 3, 2, 1, 1);

        btnPercentage = new QPushButton(centralwidget);
        btnPercentage->setObjectName("btnPercentage");
        sizePolicy.setHeightForWidth(btnPercentage->sizePolicy().hasHeightForWidth());
        btnPercentage->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnPercentage, 1, 0, 1, 1);

        btnPlus = new QPushButton(centralwidget);
        btnPlus->setObjectName("btnPlus");
        sizePolicy.setHeightForWidth(btnPlus->sizePolicy().hasHeightForWidth());
        btnPlus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnPlus, 5, 3, 1, 1);

        btnNum2 = new QPushButton(centralwidget);
        btnNum2->setObjectName("btnNum2");
        sizePolicy.setHeightForWidth(btnNum2->sizePolicy().hasHeightForWidth());
        btnNum2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum2, 5, 1, 1, 1);

        btnchuyu = new QPushButton(centralwidget);
        btnchuyu->setObjectName("btnchuyu");
        sizePolicy.setHeightForWidth(btnchuyu->sizePolicy().hasHeightForWidth());
        btnchuyu->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnchuyu, 2, 3, 1, 1);

        btnNum3 = new QPushButton(centralwidget);
        btnNum3->setObjectName("btnNum3");
        sizePolicy.setHeightForWidth(btnNum3->sizePolicy().hasHeightForWidth());
        btnNum3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum3, 5, 2, 1, 1);

        btnPeriod = new QPushButton(centralwidget);
        btnPeriod->setObjectName("btnPeriod");
        sizePolicy.setHeightForWidth(btnPeriod->sizePolicy().hasHeightForWidth());
        btnPeriod->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnPeriod, 6, 2, 1, 1);

        btnNum4 = new QPushButton(centralwidget);
        btnNum4->setObjectName("btnNum4");
        sizePolicy.setHeightForWidth(btnNum4->sizePolicy().hasHeightForWidth());
        btnNum4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum4, 4, 0, 1, 1);

        btninverse = new QPushButton(centralwidget);
        btninverse->setObjectName("btninverse");
        sizePolicy.setHeightForWidth(btninverse->sizePolicy().hasHeightForWidth());
        btninverse->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btninverse, 2, 0, 1, 1);

        btnshanchu = new QPushButton(centralwidget);
        btnshanchu->setObjectName("btnshanchu");
        sizePolicy.setHeightForWidth(btnshanchu->sizePolicy().hasHeightForWidth());
        btnshanchu->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnshanchu, 1, 3, 1, 1);

        btnjiajian = new QPushButton(centralwidget);
        btnjiajian->setObjectName("btnjiajian");
        sizePolicy.setHeightForWidth(btnjiajian->sizePolicy().hasHeightForWidth());
        btnjiajian->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnjiajian, 6, 0, 1, 1);

        display = new QLineEdit(centralwidget);
        display->setObjectName("display");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy1);
        display->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(display, 0, 0, 1, 4);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 437, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\345\231\250-\346\236\227\344\275\263\346\200\241-2023414290419", nullptr));
        btndengyu->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btnNum8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btnNum6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btngenhao->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        btnCE->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        btnNum5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btnNum1_18->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btnNum7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btnchen->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        btnjian->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnqingchu->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btnpinfang->setText(QCoreApplication::translate("MainWindow", "x^2", nullptr));
        btnNum0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnNum9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btnPercentage->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        btnPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnNum2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btnchuyu->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btnNum3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btnPeriod->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btnNum4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btninverse->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
        btnshanchu->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        btnjiajian->setText(QCoreApplication::translate("MainWindow", "\302\261", nullptr));
        display->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
