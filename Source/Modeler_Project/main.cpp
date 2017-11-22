#include "MainWindow.h"
#include "canvas.h"
#include <QApplication>
#include "vector.h"
#include "shape.h"

using namespace myStd;
using namespace Shape;

myStd::vector<Shape::Shape*> shapeParser(QPaintDevice*);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    vector<Shape::Shape*> shapes;
    MainWindow w;
    shapes = shapeParser(&w);
    w.setShape(shapes);
    w.show();
    w.refreshIds();
    return a.exec();
}
