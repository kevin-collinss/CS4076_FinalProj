#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qboxlayout.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString printIng(int i);
    QVBoxLayout* checkBoxLayout;

private slots:
    void on_NoOfPpl_One_clicked();
    void on_NoOfPpl_Three_clicked();
    void on_NoOfPpl_Two_clicked();
    void on_NoOfPpl_Four_clicked();

    void on_verticalSlider_valueChanged(int value);

    void on_ounces_clicked();

    void on_grams_clicked();

    void updateCheckboxes(int recipeNo);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
