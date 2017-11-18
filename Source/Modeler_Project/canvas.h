#ifndef CANVAS_H
#define CANVAS_H
#include <QWidget>
#include "vector.h"
#include "shape.h"

class canvas:public QWidget
{

    Q_OBJECT
public:
    canvas(QWidget* parent=0);
    void setShape(myStd::vector<Shape::Shape*> source);
    int getShapeCount();
    Shape::Shape* getShape(int);
    myStd::vector<Shape::Shape*>& getShapes();
    void paintEvent(QPaintEvent *e);
private:

    myStd::vector<Shape::Shape*> shapes;
    canvas *canvasArea;
};

#endif // CANVAS_H
