#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "recipe.h"
#include "fooditem.h"
#include <QPixmap>
#include <QVBoxLayout>
#include <QCheckBox>
#include <QDebug>

using namespace std;

//global variables
Recipe* recipeBookPtr[6];
//FoodItem* foodListPtr[5];
int servings = 1;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->verticalSlider,SIGNAL(valueChanged(int)),ui->label_pic,SLOT(setValue(int)));
    ui->verticalSlider->setTickInterval(5);

    FoodItem* foodItemA = new FoodItemWithGrams("Noodles",500);
    FoodItem* foodItemB = new FoodItemWithGrams("Chicken",30);
    FoodItem* foodItemC = new FoodItemWithGrams("Potato",500);
    FoodItem* foodItemD = new FoodItem("Oyster Sauce");
    FoodItem* foodItemE = new FoodItemWithGrams("Steak",600);


    Recipe* recipeA = new Recipe("Spaghetti", "Italian", {foodItemA, foodItemC});
    Recipe* recipeB= new Recipe("Chow Mein", "Oriental Delicacy",{foodItemA, foodItemE});
    Recipe* recipeC= new Recipe("Fajita", "Mexican Special",{foodItemA, foodItemB});
    Recipe* recipeD= new Recipe("Chili Children", "Fresh",{foodItemA, foodItemC, foodItemE});
    Recipe* recipeE= new Recipe("Coals", "Santa left them under the tree", {foodItemE});
    Recipe* recipeF= new Recipe("Lava", "Death?", {foodItemD, foodItemC});
    recipeBookPtr[0]= recipeA;
    recipeBookPtr[1]= recipeB;
    recipeBookPtr[2]= recipeC;
    recipeBookPtr[3]= recipeD;
    recipeBookPtr[4]= recipeE;
    recipeBookPtr[5]= recipeF;



    QPixmap defaultPic("C:/College/Year2_Sem2/CS4076/Final_Proj/RecipeApplication/pictures/egPic.jpg");
    ui->recipeLabel->setText(printIng(0));
    ui->label_pic->setPixmap(defaultPic);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_NoOfPpl_One_clicked()
{
    servings = 1;

}

void MainWindow::on_NoOfPpl_Two_clicked()
{
   servings = 2;

}

void MainWindow::on_NoOfPpl_Three_clicked()
{
    servings = 3;

}

void MainWindow::on_NoOfPpl_Four_clicked()
{
    servings = 4;

}

void MainWindow::on_verticalSlider_valueChanged(int value )
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
    ui->recipeLabel->setText(printIng(0));
    ui->label_pic->setPixmap(pix1);
    }else if(recipeNo==1){
    ui->recipeLabel->setText(printIng(1));
    ui->label_pic->setPixmap(pix2);
    }else if(recipeNo==2){
    ui->recipeLabel->setText(printIng(2));
    ui->label_pic->setPixmap(pix3);
    }else if(recipeNo==3){
    ui->recipeLabel->setText(printIng(3));
    ui->label_pic->setPixmap(pix4);
    }else if(recipeNo==4){
    ui->recipeLabel->setText(printIng(4));
    ui->label_pic->setPixmap(pix5);
    }
}

QString MainWindow::printIng(int i) {
    QString list = "";

    for (int j = 0; j < recipeBookPtr[i]->getIngredients().size(); j++) {
        FoodItem* item = recipeBookPtr[i]->getIngredients().at(j);
        list.append(item->getName());

        // Check if the item is also an instance of FoodItemWithGrams
        if (FoodItemWithGrams* itemWithGrams = dynamic_cast<FoodItemWithGrams*>(item)) {
            list.append(" (" + QString::number(servings * itemWithGrams->getGrams()) + " Grams)");
        }

        list.append("\n");
    }

    QString output = recipeBookPtr[i]->getName() + "\n" + recipeBookPtr[i]->getDescription() + "\n" + list;

    return output;
}

void MainWindow::on_grams_clicked()
{

}


void MainWindow::on_ounces_clicked()
{

}

