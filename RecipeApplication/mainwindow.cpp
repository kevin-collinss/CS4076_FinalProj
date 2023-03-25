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
int servings = 1;
bool useOunces = false; // Add this global variable

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->verticalSlider,SIGNAL(valueChanged(int)),ui->label_pic,SLOT(setValue(int)));
    ui->verticalSlider->setTickInterval(5);

    QVBoxLayout *checkboxLayout = new QVBoxLayout(ui->checkBoxesWidget);
    ui->checkBoxesWidget->setLayout(checkboxLayout);
    checkboxLayout->setAlignment(Qt::AlignTop);

    FoodItem* foodItemA = new FoodItemWithQuantity("Noodles", Quantity(5.2, false));
    FoodItem* foodItemB = new FoodItemWithQuantity("Chicken", Quantity(6, false));
    FoodItem* foodItemC = new FoodItemWithQuantity("Potato", Quantity(7.0, false));
    FoodItem* foodItemD = new FoodItem("Oyster Sauce");
    FoodItem* foodItemE = new FoodItemWithQuantity("Steak", Quantity(12.0, false));



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

    updateCheckboxes(recipeNo); // Add this line to call the function
}

void MainWindow::on_NoOfPpl_One_clicked()
{
    servings = 1;
    int value = ui->verticalSlider->value();
    int recipeNo = floor(value / 20);
    ui->recipeLabel->setText(printIng(recipeNo));
}

void MainWindow::on_NoOfPpl_Two_clicked()
{
    servings = 2;
    int value = ui->verticalSlider->value();
    int recipeNo = floor(value / 20);
    ui->recipeLabel->setText(printIng(recipeNo));
}

void MainWindow::on_NoOfPpl_Three_clicked()
{
    servings = 3;
    int value = ui->verticalSlider->value();
    int recipeNo = floor(value / 20);
    ui->recipeLabel->setText(printIng(recipeNo));
}

void MainWindow::on_NoOfPpl_Four_clicked()
{
    servings = 4;
    int value = ui->verticalSlider->value();
    int recipeNo = floor(value / 20);
    ui->recipeLabel->setText(printIng(recipeNo));
}


void MainWindow::on_ounces_clicked()
{
    useOunces = true; // Set the global variable
    int value = ui->verticalSlider->value();
    int recipeNo = floor(value / 20);
    ui->recipeLabel->setText(printIng(recipeNo));
}

void MainWindow::on_grams_clicked()
{
    useOunces = false; // Set the global variable
    int value = ui->verticalSlider->value();
    int recipeNo = floor(value / 20);
    ui->recipeLabel->setText(printIng(recipeNo));
}

void MainWindow::updateCheckboxes(int recipeNo) {
    QVBoxLayout *checkboxLayout = qobject_cast<QVBoxLayout*>(ui->checkBoxesWidget->layout());

    // Clear the existing checkboxes
    QLayoutItem *item;
    while ((item = checkboxLayout->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item;
    }

    // Create a new checkbox for each food item in the current displayed recipe
    for (int j = 0; j < recipeBookPtr[recipeNo]->getIngredients().size(); j++) {
        FoodItem* item = recipeBookPtr[recipeNo]->getIngredients().at(j);
        QCheckBox *checkBox = new QCheckBox(item->getName(), ui->checkBoxesWidget);
        checkboxLayout->addWidget(checkBox);
    }
}



QString MainWindow::printIng(int i) {
    QString list = "";

    for (int j = 0; j < recipeBookPtr[i]->getIngredients().size(); j++) {
        FoodItem* item = recipeBookPtr[i]->getIngredients().at(j);
        list.append(item->getName());

        // Check if the item is also an instance of FoodItemWithQuantity
        if (FoodItemWithQuantity* itemWithQuantity = dynamic_cast<FoodItemWithQuantity*>(item)) {
            if (useOunces) { // Modify this condition
                list.append(" (" + QString::number(servings * itemWithQuantity->getQuantity().ounces) + " oz)");
            } else {
                list.append(" (" + QString::number(round((28.3495 * servings * itemWithQuantity->getQuantity().grams) * 100) / 100) + " g)");
            }
        }

        list.append("\n");
    }


    QString output = recipeBookPtr[i]->getName() + "\n" + recipeBookPtr[i]->getDescription() + "\n" + list;

    return output;
}

