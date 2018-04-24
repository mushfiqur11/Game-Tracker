#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qtlinking.h"
#include<QDebug>

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
    //qtlinking *n = new qtlinking();
   // qDebug()<<"main window ran";
    //n->show();
    //this->hide();
}
