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
#include <QtWidgets/QHBoxLayout>
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
    QSlider *verticalSlider;
    QLabel *recipeLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *grams;
    QRadioButton *ounces;
    QWidget *checkBoxesWidget;
    QLabel *nameplate;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuHome;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(860, 544);
        MainWindow->setAutoFillBackground(false);
        actionHome = new QAction(MainWindow);
        actionHome->setObjectName("actionHome");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName("label_pic");
        label_pic->setGeometry(QRect(540, 99, 191, 311));
        label_pic->setAutoFillBackground(true);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(11, 466, 471, 28));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        NoOfPpl_Two = new QRadioButton(gridLayoutWidget);
        NoOfPpl_Two->setObjectName("NoOfPpl_Two");
        QFont font;
        font.setFamilies({QString::fromUtf8("Stencil")});
        NoOfPpl_Two->setFont(font);

        gridLayout->addWidget(NoOfPpl_Two, 0, 1, 1, 1);

        NoOfPpl_Three = new QRadioButton(gridLayoutWidget);
        NoOfPpl_Three->setObjectName("NoOfPpl_Three");
        NoOfPpl_Three->setFont(font);

        gridLayout->addWidget(NoOfPpl_Three, 0, 2, 1, 1);

        NoOfPpl_Four = new QRadioButton(gridLayoutWidget);
        NoOfPpl_Four->setObjectName("NoOfPpl_Four");
        NoOfPpl_Four->setFont(font);

        gridLayout->addWidget(NoOfPpl_Four, 0, 3, 1, 1);

        NoOfPpl_One = new QRadioButton(gridLayoutWidget);
        NoOfPpl_One->setObjectName("NoOfPpl_One");
        NoOfPpl_One->setFont(font);

        gridLayout->addWidget(NoOfPpl_One, 0, 0, 1, 1);

        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName("verticalSlider");
        verticalSlider->setGeometry(QRect(770, 30, 25, 451));
        verticalSlider->setMaximum(100);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setInvertedControls(false);
        verticalSlider->setTickPosition(QSlider::NoTicks);
        verticalSlider->setTickInterval(20);
        recipeLabel = new QLabel(centralwidget);
        recipeLabel->setObjectName("recipeLabel");
        recipeLabel->setGeometry(QRect(140, 80, 371, 211));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(recipeLabel->sizePolicy().hasHeightForWidth());
        recipeLabel->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Stencil")});
        font1.setPointSize(20);
        recipeLabel->setFont(font1);
        recipeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 430, 142, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        grams = new QRadioButton(layoutWidget);
        grams->setObjectName("grams");
        grams->setFont(font);

        horizontalLayout->addWidget(grams);

        ounces = new QRadioButton(layoutWidget);
        ounces->setObjectName("ounces");
        ounces->setFont(font);

        horizontalLayout->addWidget(ounces);

        checkBoxesWidget = new QWidget(centralwidget);
        checkBoxesWidget->setObjectName("checkBoxesWidget");
        checkBoxesWidget->setGeometry(QRect(100, 150, 31, 121));
        nameplate = new QLabel(centralwidget);
        nameplate->setObjectName("nameplate");
        nameplate->setGeometry(QRect(60, 20, 531, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Stencil")});
        font2.setPointSize(24);
        font2.setUnderline(true);
        nameplate->setFont(font2);
        nameplate->setAlignment(Qt::AlignCenter);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(800, 20, 41, 451));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Stencil")});
        font3.setPointSize(11);
        label_5->setFont(font3);

        verticalLayout->addWidget(label_5);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");
        label_4->setFont(font3);

        verticalLayout->addWidget(label_4);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");
        label_3->setFont(font3);

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        label_2->setFont(font3);

        verticalLayout->addWidget(label_2);

        label = new QLabel(layoutWidget1);
        label->setObjectName("label");
        label->setFont(font3);

        verticalLayout->addWidget(label);

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
        recipeLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        grams->setText(QCoreApplication::translate("MainWindow", "Grams", nullptr));
        ounces->setText(QCoreApplication::translate("MainWindow", "Ounces", nullptr));
        nameplate->setText(QCoreApplication::translate("MainWindow", "EL FUEGO  THE HOUSE OF SPICE", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "GO!", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "YOU", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "CAN", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "HOT", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "HOW", nullptr));
        menuHome->setTitle(QCoreApplication::translate("MainWindow", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
