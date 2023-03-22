/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHome;
    QAction *actionAbout;
    QWidget *centralwidget;
    QLabel *label_pic;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *NoOfPpl_Two;
    QRadioButton *NoOfPpl_Three;
    QRadioButton *NoOfPpl_Four;
    QRadioButton *NoOfPpl_One;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_5;
    QSlider *verticalSlider;
    QLabel *recipeLabel;
    QMenuBar *menubar;
    QMenu *menuHome;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(860, 544);
        actionHome = new QAction(MainWindow);
        actionHome->setObjectName("actionHome");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName("label_pic");
        label_pic->setGeometry(QRect(540, 99, 161, 311));
        label_pic->setAutoFillBackground(true);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(11, 466, 471, 24));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        NoOfPpl_Two = new QRadioButton(gridLayoutWidget);
        NoOfPpl_Two->setObjectName("NoOfPpl_Two");

        gridLayout->addWidget(NoOfPpl_Two, 0, 1, 1, 1);

        NoOfPpl_Three = new QRadioButton(gridLayoutWidget);
        NoOfPpl_Three->setObjectName("NoOfPpl_Three");

        gridLayout->addWidget(NoOfPpl_Three, 0, 2, 1, 1);

        NoOfPpl_Four = new QRadioButton(gridLayoutWidget);
        NoOfPpl_Four->setObjectName("NoOfPpl_Four");

        gridLayout->addWidget(NoOfPpl_Four, 0, 3, 1, 1);

        NoOfPpl_One = new QRadioButton(gridLayoutWidget);
        NoOfPpl_One->setObjectName("NoOfPpl_One");

        gridLayout->addWidget(NoOfPpl_One, 0, 0, 1, 1);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(11, 99, 90, 311));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName("checkBox");

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(layoutWidget);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setTristate(false);

        verticalLayout->addWidget(checkBox_2);

        checkBox_4 = new QCheckBox(layoutWidget);
        checkBox_4->setObjectName("checkBox_4");

        verticalLayout->addWidget(checkBox_4);

        checkBox_3 = new QCheckBox(layoutWidget);
        checkBox_3->setObjectName("checkBox_3");

        verticalLayout->addWidget(checkBox_3);

        checkBox_5 = new QCheckBox(layoutWidget);
        checkBox_5->setObjectName("checkBox_5");

        verticalLayout->addWidget(checkBox_5);

        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName("verticalSlider");
        verticalSlider->setGeometry(QRect(770, 30, 25, 451));
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setInvertedControls(false);
        verticalSlider->setTickPosition(QSlider::TicksBothSides);
        verticalSlider->setTickInterval(20);
        recipeLabel = new QLabel(centralwidget);
        recipeLabel->setObjectName("recipeLabel");
        recipeLabel->setGeometry(QRect(170, 80, 201, 81));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 860, 21));
        menuHome = new QMenu(menubar);
        menuHome->setObjectName("menuHome");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuHome->menuAction());
        menuHome->addAction(actionHome);
        menuHome->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionHome->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        label_pic->setText(QString());
        NoOfPpl_Two->setText(QCoreApplication::translate("MainWindow", "2 Serving", nullptr));
        NoOfPpl_Three->setText(QCoreApplication::translate("MainWindow", "3 Serving", nullptr));
        NoOfPpl_Four->setText(QCoreApplication::translate("MainWindow", "4 Serving", nullptr));
        NoOfPpl_One->setText(QCoreApplication::translate("MainWindow", "1 Serving", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Ingredient 1", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "Ingredient 2", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "Ingredient 3", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "Ingredient 4", nullptr));
        checkBox_5->setText(QCoreApplication::translate("MainWindow", "Ingredient 5", nullptr));
        recipeLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menuHome->setTitle(QCoreApplication::translate("MainWindow", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
