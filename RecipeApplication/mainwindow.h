#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMap>
#include "qslider.h"
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



private slots:


    //int CheckSliderVal(QSlider verticalSlider);

    void on_NoOfPpl_One_clicked();

    void on_NoOfPpl_Three_clicked();

    void on_NoOfPpl_Two_clicked();

    void on_NoOfPpl_Four_clicked();

    void on_verticalSlider_valueChanged(int value);


private:
    Ui::MainWindow *ui;
    QMap<int,QString> m_types;

};
#endif // MAINWINDOW_H
