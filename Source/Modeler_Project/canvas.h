#ifndef CANVAS_H
#define CANVAS_H
#include <QWidget>
#include "vector.h"
#include "shape.h"


/**********************************************
 * CANVAS
 *
 * Widget where all shapes will be rendered.
 * Also stores the shapes which will be drawn
 * and modified.
 * *******************************************/

class canvas:public QWidget
{

    Q_OBJECT
public:
    canvas(QWidget* parent=0);
    //Default Constructor: Takes a QWidget* to establish parent

    void setShape(myStd::vector<Shape::Shape*> source);
    //setShape(): Takes vector<Shape*> and sets it to shapes

    int getShapeCount();
    //getShapeCount(): retuns the count of shapes currently in the canvas' shapes vector

    Shape::Shape* getShape(int);
    //getShape(): returns a specific shape from the canvas' shape vector, based on index passed in

    myStd::vector<Shape::Shape*>& getShapes();
    //getShapes(): returns the entire canvas' shape vector

    void paintEvent(QPaintEvent *e);
    //paintEven(QPaintEvent *e):Overloaded QWidget paintEvent, implemented to handle the drawing of shapes
private:

    myStd::vector<Shape::Shape*> shapes;
    //vector<Shape::Shape*> shapes: holds the shapes that the modeler will draw and modify
    canvas *canvasArea;
    //canvas *canvasArea: holds the canvas object
};

#endif // CANVAS_H
