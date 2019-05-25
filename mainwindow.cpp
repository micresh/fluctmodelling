#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "lw1form.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
  /*  QBrush whiteBrush(Qt::white);
    QPen blackPen(Qt::black);
    scene = new QGraphicsScene(this);
    timer = new QTimer(this);
    ui->graphicsView->setScene(scene);
    connect(timer, SIGNAL(timeout()), this, SLOT(timer_update()));
    timer->setInterval(500);

    //Rect = scene->addRect(10, 10, 50, 70, blackPen, whiteBrush);
    Line = scene->addLine(10,10,10,80,blackPen);*/

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::timer_update()
{
    Line->setRotation(x);
    x += 5;
    //Line->setPos(Line->x()*sin(Line->x()+1), Line->y()*cos(Line->x()+1));
}

void MainWindow::on_stop_btn_clicked()
{
    timer->stop();
}

void MainWindow::on_start_btn_clicked()
{
   timer->start();
}

void MainWindow::on_actionLW1_triggered()
{

}
