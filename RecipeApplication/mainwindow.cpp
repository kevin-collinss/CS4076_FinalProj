#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>
#include <QVBoxLayout>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*QString picString = "C:/College/Year2_Sem2/CS4076/Final_Proj/pictures/egPic.jpg";
    QPixmap pix(picString);
    ui->label_pic->setPixmap(pix);*/

    QVBoxLayout *hLayout = new QVBoxLayout;
    hLayout ->addWidget(ui->checkBox);
    hLayout ->addWidget(ui->checkBox_2);
    hLayout ->addWidget(ui->checkBox_3);
    hLayout ->addWidget(ui->checkBox_4);
    hLayout ->addWidget(ui->checkBox_5);


    this->setLayout(hLayout);


    connect(ui->verticalSlider,SIGNAL(valueChanged(int)),ui->label_pic,SLOT(setValue(int)));
    ui->verticalSlider->setTickInterval(5);

    m_types.insert(1,"First Meal");
    m_types.insert(2,"Second Meal");


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_NoOfPpl_One_clicked()
{

}


void MainWindow::on_NoOfPpl_Two_clicked()
{

}


void MainWindow::on_NoOfPpl_Three_clicked()
{

}


void MainWindow::on_NoOfPpl_Four_clicked()
{

}

void MainWindow::on_verticalSlider_valueChanged(int value)
{
    QString picString1 = "C:/College/Year2_Sem2/CS4076/Final_Proj/RecipeApplication/pictures/egPic.jpg";
    QString picString2 = "C:/College/Year2_Sem2/CS4076/Final_Proj/RecipeApplication/pictures/egPic2.jpg";
    QString picString3 = "C:/College/Year2_Sem2/CS4076/Final_Proj/RecipeApplication/pictures/egPic3.jpg";
    QString picString4 = "C:/College/Year2_Sem2/CS4076/Final_Proj/RecipeApplication/pictures/egPic4.jpg";
    QString picString5 = "C:/College/Year2_Sem2/CS4076/Final_Proj/RecipeApplication/pictures/egPic5.jpg";
    QPixmap pix1(picString1);
    QPixmap pix2(picString2);
    QPixmap pix3(picString3);
    QPixmap pix4(picString4);
    QPixmap pix5(picString5);


    int recipeNo = floor(value / 20);
    if(recipeNo ==0){
    ui->recipeLabel->setPixmap(pix1);
    }else if(recipeNo==1){
    ui->recipeLabel->setPixmap(pix2);
    }else if(recipeNo==2){
    ui->recipeLabel->setPixmap(pix3);
    }else if(recipeNo==3){
    ui->recipeLabel->setPixmap(pix4);
    }else if(recipeNo==4){
    ui->recipeLabel->setPixmap(pix5);
    }
}

