#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "recipe.h"
#include "unitconversion.h"
#include "fooditem.h"
#include <QPixmap>
#include <QVBoxLayout>
#include <QCheckBox>
#include <QDebug>
#include <QCheckBox>
#include <QStatusBar>
#include <QMessageBox>


using namespace std; //NAMESPACE


Recipe* recipeBookPtr[7]; //GLOBAL VARIABLES
int servings = 1;
bool useOunces = false; // Add this global variable

MainWindow::MainWindow(QWidget *parent) //OBJECT CONSTRUCTION SEQUENCE
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->verticalSlider,SIGNAL(valueChanged(int)),ui->label_pic,SLOT(setValue(int)));
    ui->verticalSlider->setTickInterval(5);

    QVBoxLayout *checkboxLayout = new QVBoxLayout(ui->checkBoxesWidget);
    ui->checkBoxesWidget->setLayout(checkboxLayout);
    checkboxLayout->setAlignment(Qt::AlignTop);

    FoodItem* foodItemA = new FoodItemWithQuantity("Spaghetti", Quantity(5.2, false));
    FoodItem* foodItemB = new FoodItemWithQuantity("Chicken", Quantity(6, false));
    FoodItem* foodItemC = new FoodItemWithQuantity("Rice", Quantity(7.0, false));
    FoodItem* foodItemD = new FoodItem("Oyster Sauce");
    FoodItem* foodItemE = new FoodItemWithQuantity("Peppers", Quantity(12.0, false));
    FoodItem* foodItemF = new FoodItemWithQuantity("Egg", Quantity(6.0, false));
    FoodItem* foodItemG = new FoodItemWithQuantity("Chips", Quantity(8.5, false));
    FoodItem* foodItemH = new FoodItemWithQuantity("Stir Fry Veg", Quantity(5.5, false));
    FoodItem* foodItemI = new FoodItemWithQuantity("Mince", Quantity(5.5, false));

    Recipe* recipeA = new Recipe("Spaghetti", "Italian", {foodItemA, foodItemI}); // ARRAY AND POINTER
    Recipe* recipeB= new Recipe("Chow Mein", "Oriental Delicacy",{foodItemC, foodItemD});
    Recipe* recipeC= new Recipe("Fajita", "Mexican Special",{foodItemB, foodItemD, foodItemH, foodItemE});
    Recipe* recipeD= new Recipe("Chicken Wings", "This won't burn",{foodItemB, foodItemH});
    Recipe* recipeE= new Recipe("Chili Soup", "This will burn", {foodItemE});

    Recipe copiedRecipe(*recipeE); // Using the copy constructor
    Recipe* recipeF = new Recipe(*recipeE); // Allocate memory for recipeG and use the copy constructor
    FoodItem* extraIngredient = new FoodItemWithQuantity("Ghost Peppers", Quantity(2.5, false));
    recipeF->addIngredient(extraIngredient); // Adding an additional ingredient

    recipeBookPtr[0]= recipeA;
    recipeBookPtr[1]= recipeB;
    recipeBookPtr[2]= recipeC;
    recipeBookPtr[3]= recipeD;
    recipeBookPtr[4]= recipeE;
    recipeBookPtr[5]= recipeF;

    QPixmap defaultPic("C:/College/Year2_Sem2/CS4076/Final_Proj/RecipeApplication/pictures/Pic1.jpg");
    ui->recipeLabel->setText(printIng(0));
    ui->label_nameDescription->setText(getNameDescription(0));
    ui->label_pic->setPixmap(defaultPic);

    updateCheckboxes(0);

    setStyleSheet("background-color: #ff8f34;");
}

MainWindow::~MainWindow()
{
    delete ui;

    // Clean up the recipes and food items
    for (int i = 0; i < 6; ++i) {
        delete recipeBookPtr[i];
    }
}


void MainWindow::on_verticalSlider_valueChanged(int value )
{
    QString picString1 = "C:/College/Year2_Sem2/CS4076/Final_Proj/RecipeApplication/pictures/Pic1.jpg";
    QString picString2 = "C:/College/Year2_Sem2/CS4076/Final_Proj/RecipeApplication/pictures/Pic2.jpg";
    QString picString3 = "C:/College/Year2_Sem2/CS4076/Final_Proj/RecipeApplication/pictures/Pic3.jpg";
    QString picString4 = "C:/College/Year2_Sem2/CS4076/Final_Proj/RecipeApplication/pictures/Pic4.jpg";
    QString picString5 = "C:/College/Year2_Sem2/CS4076/Final_Proj/RecipeApplication/pictures/Pic5.jpg";
    QString picString6 = "C:/College/Year2_Sem2/CS4076/Final_Proj/RecipeApplication/pictures/Pic5.jpg";
    QPixmap pix1(picString1);
    QPixmap pix2(picString2);
    QPixmap pix3(picString3);
    QPixmap pix4(picString4);
    QPixmap pix5(picString5);
    QPixmap pix6(picString6);

    int recipeNo = floor(value / 20);
    ui->recipeLabel->setText(printIng(recipeNo));
    ui->label_nameDescription->setText(getNameDescription(recipeNo));
    if(recipeNo ==0){
    ui->label_pic->setPixmap(pix1);
    }else if(recipeNo==1){
    ui->label_pic->setPixmap(pix2);
    }else if(recipeNo==2){
    ui->label_pic->setPixmap(pix3);
    }else if(recipeNo==3){
    ui->label_pic->setPixmap(pix4);
    }else if(recipeNo==4){
    ui->label_pic->setPixmap(pix5);}
    else if(recipeNo==5){
        ui->label_pic->setPixmap(pix6);
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
    checkboxLayout->setSpacing(22);

    // Clear the existing checkboxes
    QLayoutItem *item;
    while ((item = checkboxLayout->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item;
    }

    // Create a new checkbox for each food item in the current displayed recipe
    for (int j = 0; j < recipeBookPtr[recipeNo]->getIngredients().size(); j++) {
        FoodItem* item = recipeBookPtr[recipeNo]->getIngredients().at(j);
        QCheckBox *checkBox = new QCheckBox("", ui->checkBoxesWidget);
        checkboxLayout->addWidget(checkBox);

        // Connect the signal to the slotS
        connect(checkBox, &QCheckBox::stateChanged, this, &MainWindow::on_checkBox_stateChanged);
    }
}



void MainWindow::on_checkBox_stateChanged(int state) {
    QVBoxLayout *checkboxLayout = qobject_cast<QVBoxLayout*>(ui->checkBoxesWidget->layout());
    int totalCheckboxes = checkboxLayout->count();
    int checkedCount = 0;

    for (int i = 0; i < totalCheckboxes; i++) {
        QCheckBox *checkBox = qobject_cast<QCheckBox*>(checkboxLayout->itemAt(i)->widget());
        if (checkBox->isChecked()) {
            checkedCount++;
        }
    }

    if (checkedCount == totalCheckboxes) {
        ui->statusbar->showMessage("You've got all the ingredients!", 6000);
    } else {
        ui->statusbar->clearMessage();
    }
}

QString MainWindow::getNameDescription(int i) {
    QString output = QString("<u>%1</u><br><u>%2</u>")
                     .arg(recipeBookPtr[i]->getName())
                     .arg(recipeBookPtr[i]->getDescription());

    return output;
}

QString MainWindow::printIng(int i) {
    QString list = "";

    for (const auto &item : recipeBookPtr[i]->getIngredients()) {
        list.append(item->getName());

        if (FoodItemWithQuantity* itemWithQuantity = dynamic_cast<FoodItemWithQuantity*>(item)) {
            if (useOunces) {
                list.append(" (" + QString::number(servings * itemWithQuantity->m_quantity.ounces) + " oz)");
            } else {
                list.append(" (" + QString::number(round(servings * (convertUnit(itemWithQuantity->m_quantity.grams,true) * 100) / 100)) + " g)");
            }
        }

        list.append("<br>");
    }

    return list;
}



void MainWindow::on_actionAbout_triggered()
{
    QMessageBox aboutBox;
    aboutBox.setWindowTitle("About");
    aboutBox.setText("El Fuego\n\nVersion 1.0\n\nDeveloped by Kevin Collins");
    aboutBox.setStandardButtons(QMessageBox::Ok);
    aboutBox.setDefaultButton(QMessageBox::Ok);
    aboutBox.setIcon(QMessageBox::Information);
    aboutBox.exec();
}

