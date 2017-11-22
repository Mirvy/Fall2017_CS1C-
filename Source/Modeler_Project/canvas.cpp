#include "canvas.h"

//Canvas Constructor
canvas::canvas(QWidget *parent)
{

}

//setShape(): assigns the passed vector of Shape* to canvas' Shape* vector
void canvas::setShape(myStd::vector<Shape::Shape*> source)
{
    shapes = source;
}

//getShapeCount(): returns the number of shapes currently in the canvas' Shape* vector
int canvas::getShapeCount()
{
    return shapes.size();
}

//getShape(): returns a specific shape from canvas's current shapes
Shape::Shape* canvas::getShape(int index)
{
    if(shapes.size() != 0)
    {
    return *(shapes.begin()+(index-1));
    }
}

//getShapes(): returns the canvas's shape* vector
myStd::vector<Shape::Shape*>& canvas::getShapes()
{
    return shapes;
}

//paintEven():Overloaded paintEvent function to draw each shape to canvas
void canvas::paintEvent(QPaintEvent *e)
{
    myStd::vector<Shape::Shape*>::iterator i = shapes.begin();
    QPaintDevice* device = this;
        while(i < shapes.end())
        {
           (*i)->draw(device);
            ++i;
        }
}
