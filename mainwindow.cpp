#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QElapsedTimer>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::render()
{
    QElapsedTimer t;
    QImage i(ui->label->width(),
             ui->label->height(),
             QImage::RGBA);
    t.start();
    ContinuousBuffer a;




}

MainWindow::~MainWindow()
{
    delete ui;
}
