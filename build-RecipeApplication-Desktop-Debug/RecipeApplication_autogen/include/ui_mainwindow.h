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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHome;
    QAction *actionAbout;
    QWidget *centralwidget;
    QLabel *label_pic;
    QSlider *verticalSlider_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *NoOfPpl_Three;
    QRadioButton *NoOfPpl_One;
    QRadioButton *NoOfPpl_Two;
    QRadioButton *NoOfPpl_Four;
    QMenuBar *menubar;
    QMenu *menuHome;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionHome = new QAction(MainWindow);
        actionHome->setObjectName("actionHome");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName("label_pic");
        label_pic->setGeometry(QRect(90, 180, 571, 301));
        verticalSlider_2 = new QSlider(centralwidget);
        verticalSlider_2->setObjectName("verticalSlider_2");
        verticalSlider_2->setGeometry(QRect(730, 60, 20, 461));
        verticalSlider_2->setOrientation(Qt::Vertical);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 371, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        NoOfPpl_Three = new QRadioButton(gridLayoutWidget);
        NoOfPpl_Three->setObjectName("NoOfPpl_Three");

        gridLayout->addWidget(NoOfPpl_Three, 0, 2, 1, 1);

        NoOfPpl_One = new QRadioButton(gridLayoutWidget);
        NoOfPpl_One->setObjectName("NoOfPpl_One");

        gridLayout->addWidget(NoOfPpl_One, 0, 0, 1, 1);

        NoOfPpl_Two = new QRadioButton(gridLayoutWidget);
        NoOfPpl_Two->setObjectName("NoOfPpl_Two");

        gridLayout->addWidget(NoOfPpl_Two, 0, 1, 1, 1);

        NoOfPpl_Four = new QRadioButton(gridLayoutWidget);
        NoOfPpl_Four->setObjectName("NoOfPpl_Four");

        gridLayout->addWidget(NoOfPpl_Four, 0, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
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
        NoOfPpl_Three->setText(QCoreApplication::translate("MainWindow", "3 People", nullptr));
        NoOfPpl_One->setText(QCoreApplication::translate("MainWindow", "1 People", nullptr));
        NoOfPpl_Two->setText(QCoreApplication::translate("MainWindow", "2 People", nullptr));
        NoOfPpl_Four->setText(QCoreApplication::translate("MainWindow", "4 People", nullptr));
        menuHome->setTitle(QCoreApplication::translate("MainWindow", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
