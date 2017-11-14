#include "canvas.h"

canvas::canvas(QWidget *parent)
{

}

void canvas::setShape(myStd::vector<Shape::Shape*> source)
{
    shapes = source;
}

int canvas::getShapeCount()
{
    return shapes.size();
}

Shape::Shape* canvas::getShape(int index)
{
    return *(shapes.begin()+(index-1));
}

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