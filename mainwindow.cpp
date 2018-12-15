#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    double x = ui->lineEditX->text().toDouble();

    double ans{0};
    for (int i = 1; i <= 10; i++)
        ans += formula(x, i);

    ui->label_3->setText(QString::number(ans));
}

double MainWindow::formula(double x, double i)
{
    return pow(x, i)/(x + i);
}
