#include "MainWindow.h"
#include "canvas.h"
#include <QApplication>
#include "vector.h"
#include "shape.h"

using namespace myStd;
using namespace Shape;

//myStd::vector<Shape::Shape*> shapeParser(QPaintDevice*);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    vector<Shape::Shape*> shapes;

    Shape::Shape *testShape1, *testShape2, *testShape3;
    MainWindow w;
    //shapes = shapeParser(&w);
    QBrush brush(Qt::yellow,Qt::SolidPattern);
    QPen pen(QBrush(Qt::blue,Qt::SolidPattern),qreal(3),Qt::DashLine,Qt::SquareCap,Qt::BevelJoin);
    vector<QPoint> points1;
    points1.push_back(QPoint(30,50));
    points1.push_back(QPoint(80,60));
    points1.push_back(QPoint(80, 145));
    points1.push_back(QPoint(30, 120));
    points1.push_back(QPoint(30,50));
    vector<QPoint> points2;
    points2.push_back(QPoint(30,150));
    points2.push_back(QPoint(80,150));
    points2.push_back(QPoint(80, 200));
    points2.push_back(QPoint(30, 200));
    testShape1 = new Shape::Line(&w,1,pen,brush,QPoint(50,50),QPoint(150,10));
    testShape2 = new Shape::Polyline(&w,2,pen,brush,points1);
    testShape3 = new Shape::Polygon(&w,3,pen,brush,points2);
    shapes.push_back(testShape1);
    shapes.push_back(testShape2);
    shapes.push_back(testShape3);
    w.setShape(shapes);
    w.show();
    w.refreshIds();
    return a.exec();
}
