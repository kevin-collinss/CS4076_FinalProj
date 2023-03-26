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
#include <QtWidgets/QSpacerItem>
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
    QGridLayout *gridLayout_2;
    QLabel *label_pic;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_7;
    QSlider *verticalSlider;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_3;
    QLabel *nameplate;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QRadioButton *grams;
    QRadioButton *ounces;
    QGridLayout *gridLayout;
    QRadioButton *NoOfPpl_Two;
    QRadioButton *NoOfPpl_Three;
    QRadioButton *NoOfPpl_Four;
    QRadioButton *NoOfPpl_One;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QLabel *recipeLabel;
    QLabel *label_nameDescription;
    QWidget *checkBoxesWidget;
    QSpacerItem *verticalSpacer_4;
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
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName("label_pic");
        label_pic->setAutoFillBackground(true);

        gridLayout_2->addWidget(label_pic, 5, 8, 4, 2);

        verticalSpacer_8 = new QSpacerItem(20, 231, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_8, 5, 10, 4, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        QFont font;
        font.setFamilies({QString::fromUtf8("Stencil")});
        font.setPointSize(11);
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setFont(font);

        verticalLayout->addWidget(label);


        gridLayout_2->addLayout(verticalLayout, 1, 13, 11, 1);

        verticalSpacer_7 = new QSpacerItem(20, 140, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_7, 8, 3, 2, 2);

        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName("verticalSlider");
        verticalSlider->setMaximum(100);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setInvertedControls(false);
        verticalSlider->setTickPosition(QSlider::NoTicks);
        verticalSlider->setTickInterval(20);

        gridLayout_2->addWidget(verticalSlider, 2, 12, 10, 1);

        verticalSpacer_6 = new QSpacerItem(28, 200, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 8, 6, 4, 2);

        horizontalSpacer_3 = new QSpacerItem(666, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 1, 1, 8);

        nameplate = new QLabel(centralwidget);
        nameplate->setObjectName("nameplate");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Stencil")});
        font1.setPointSize(24);
        font1.setUnderline(true);
        nameplate->setFont(font1);
        nameplate->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(nameplate, 1, 1, 2, 8);

        horizontalSpacer_5 = new QSpacerItem(34, 88, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 9, 8, 4, 4);

        verticalSpacer = new QSpacerItem(58, 416, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 0, 10, 1);

        verticalSpacer_2 = new QSpacerItem(20, 341, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 1, 7, 1);

        horizontalSpacer_4 = new QSpacerItem(364, 158, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 8, 5, 3, 1);

        verticalSpacer_5 = new QSpacerItem(20, 165, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 5, 7, 3, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        grams = new QRadioButton(centralwidget);
        grams->setObjectName("grams");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Stencil")});
        grams->setFont(font2);

        horizontalLayout->addWidget(grams);

        ounces = new QRadioButton(centralwidget);
        ounces->setObjectName("ounces");
        ounces->setFont(font2);

        horizontalLayout->addWidget(ounces);


        gridLayout_2->addLayout(horizontalLayout, 10, 0, 1, 5);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        NoOfPpl_Two = new QRadioButton(centralwidget);
        NoOfPpl_Two->setObjectName("NoOfPpl_Two");
        NoOfPpl_Two->setFont(font2);

        gridLayout->addWidget(NoOfPpl_Two, 0, 1, 1, 1);

        NoOfPpl_Three = new QRadioButton(centralwidget);
        NoOfPpl_Three->setObjectName("NoOfPpl_Three");
        NoOfPpl_Three->setFont(font2);

        gridLayout->addWidget(NoOfPpl_Three, 0, 2, 1, 1);

        NoOfPpl_Four = new QRadioButton(centralwidget);
        NoOfPpl_Four->setObjectName("NoOfPpl_Four");
        NoOfPpl_Four->setFont(font2);

        gridLayout->addWidget(NoOfPpl_Four, 0, 3, 1, 1);

        NoOfPpl_One = new QRadioButton(centralwidget);
        NoOfPpl_One->setObjectName("NoOfPpl_One");
        NoOfPpl_One->setFont(font2);

        gridLayout->addWidget(NoOfPpl_One, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 11, 0, 1, 6);

        horizontalSpacer_2 = new QSpacerItem(12, 58, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 9, 3, 2);

        horizontalSpacer = new QSpacerItem(431, 92, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 5, 3, 6);

        verticalSpacer_3 = new QSpacerItem(28, 74, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 9, 2, 1, 1);

        recipeLabel = new QLabel(centralwidget);
        recipeLabel->setObjectName("recipeLabel");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(recipeLabel->sizePolicy().hasHeightForWidth());
        recipeLabel->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Stencil")});
        font3.setPointSize(20);
        recipeLabel->setFont(font3);
        recipeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_2->addWidget(recipeLabel, 6, 4, 1, 1);

        label_nameDescription = new QLabel(centralwidget);
        label_nameDescription->setObjectName("label_nameDescription");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Stencil")});
        font4.setPointSize(22);
        label_nameDescription->setFont(font4);

        gridLayout_2->addWidget(label_nameDescription, 5, 4, 1, 1);

        checkBoxesWidget = new QWidget(centralwidget);
        checkBoxesWidget->setObjectName("checkBoxesWidget");

        gridLayout_2->addWidget(checkBoxesWidget, 6, 2, 3, 1);

        verticalSpacer_4 = new QSpacerItem(28, 92, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 3, 2, 3, 1);

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
        label_5->setText(QCoreApplication::translate("MainWindow", "GO!", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "YOU", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "CAN", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "HOT", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "HOW", nullptr));
        nameplate->setText(QCoreApplication::translate("MainWindow", "EL FUEGO  THE HOUSE OF SPICE", nullptr));
        grams->setText(QCoreApplication::translate("MainWindow", "Grams", nullptr));
        ounces->setText(QCoreApplication::translate("MainWindow", "Ounces", nullptr));
        NoOfPpl_Two->setText(QCoreApplication::translate("MainWindow", "2 Serving", nullptr));
        NoOfPpl_Three->setText(QCoreApplication::translate("MainWindow", "3 Serving", nullptr));
        NoOfPpl_Four->setText(QCoreApplication::translate("MainWindow", "4 Serving", nullptr));
        NoOfPpl_One->setText(QCoreApplication::translate("MainWindow", "1 Serving", nullptr));
        recipeLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_nameDescription->setText(QCoreApplication::translate("MainWindow", "label_name", nullptr));
        menuHome->setTitle(QCoreApplication::translate("MainWindow", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
