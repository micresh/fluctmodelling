#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QPainter>
#include <QtGui>
#include <QtCore>
#include <QTimer>

namespace Ui {
class MainWindow;

}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QGraphicsScene *scene;
    QGraphicsRectItem *Rect;
    QGraphicsLineItem *Line;
    QTimer *timer;
        int x = 5;
protected:
   // void paintEvent(QPaintEvent *e);
private slots:
    void timer_update();
    void on_stop_btn_clicked();
    void on_start_btn_clicked();
};

#endif // MAINWINDOW_H
