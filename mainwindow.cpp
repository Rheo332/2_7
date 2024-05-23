#include "mainwindow.h"

#include <QGraphicsScene>
#include <QGraphicsView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(400, 400);
    setWindowTitle("Mein erstes Fenster");
    QGraphicsScene *scene = new QGraphicsScene();

    QPen *myPen = new QPen(Qt::white, 2);
    QBrush *myBrush = new QBrush(Qt::red);

    scene->addRect(30.0, 30.0, 70.0, 110.0, *myPen, *myBrush);
    scene->addEllipse(150, 50, 2, 2, *myPen);
    scene->addEllipse(160, 100, 30, 30, *myPen, *myBrush);
    scene->addLine(200, 50, 300, 100, *myPen);
    QPolygonF polygonTriangle;
    polygonTriangle << QPointF(250, 200) << QPointF(300, 300) << QPointF(200, 300);
    scene->addPolygon(polygonTriangle, *myPen, *myBrush);

    QPolygonF polygonH;
    polygonH << QPointF(50, 200) << QPointF(50, 300) << QPointF(70, 300) << QPointF(70, 260)
             << QPointF(120, 260) << QPointF(120, 300) << QPointF(140, 300) << QPointF(140, 200)
             << QPointF(120, 200) << QPointF(120, 240) << QPointF(70, 240) << QPointF(70, 200)
             << QPointF(50, 200);
    scene->addPolygon(polygonH, *myPen);

    QGraphicsView *view = new QGraphicsView(scene);
    setCentralWidget(view);
}

MainWindow::~MainWindow() {}
