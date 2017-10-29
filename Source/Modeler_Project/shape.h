#ifndef SHAPE_H
#define SHAPE_H
#include <qpainter.h>
#include <vector.h>
#include <math.h>

namespace Shape
{
class Shape
{
public:
    enum shape {Line, Polyline, Polygon, Rectangle, Square, Ellipse, Circle, Text};
    Shape();
    int setId(int nid)
    {
       id = nid;
    }
    void setShape(Shape nshape)
    {
       objShape = nshape;
    }
    void setPen(const QPen &npen)
    {
       pen = npen;
    }
    void setBrush(const QBrush &nbrush)
    {
       brush = nbrush;
    }
    int getId()const
    {
        return id;
    }
    shape getShape()const
    {
        return objShape;
    }
    QPen getPen()const
    {
        return pen;
    }
    QBrush getBrush()const
    {
        return brush;
    }
    virtual void draw() = 0;
    virtual void move() = 0;
    virtual double calcPerimeter() = 0;
    virtual double calcArea() = 0;
    virtual ~Shape();
protected:
    QPainter* painter;
private:
    int id;
    shape objShape;
    QPen pen;
    QBrush brush;
};

class Line : public Shape
{
public:
    Line():Shape(),start(QPoint(0,0)),end(QPoint(0,0)){}
    Line(QPoint s,QPoint e):Shape(),start(s),end(e){}
    void draw(QPaintDevice* device)
    {
        painter = new QPainter(device);
        painter->setpen(this->getPen());
        painter->drawLine(start,end);
        delete painter;
    }
    void move(QPoint nstart,QPoint nend)
    {
        start = nstart;
        end = nend;
    }
    double calcPerimeter(){return 0;}
    double calcArea(){return 0;}
private:
    QPoint start, end;
};

class Polyline : public Shape
{
public:
    Polyline():Shape(), p(p.push_back(QPoint(0,0))){}
    Polyline(vector<QPoint> &source):Shape()
    {
         p = source;
    }
    void draw(QPaintDevice *device)
    {
         painter = new QPainter(device);
         painter->setPen(this->getPen());
         painter->drawPolyline(p.begin(),p.size());
         delete painter;
    }
    void move(vector<QPoint> &source)
    {
        p = source;
    }
    double calcPerimeter(){return 0;}
    double calcArea(){return 0;}
private:
    vector<QPoint> p;
};

class Polygon : public Shape
{
public:
    Polygon():Shape(), p(p.push_back(QPoint(0,0))){}
    Polygon(vector<QPoint> &source):Shape()
    {
        p = source;
    }
    void draw(QPaintDevice *device)
    {
        painter = new QPainter(device);
        painter->setPen(this->getPen());
        painter->setBrush(this->getBrush());
        painter->drawPolygon(p.begin(),p.size());
        delete painter;
    }
    void move(vector<QPoint> &source)
    {
        p = source;
    }
    double calcPerimeter()
    {
        double perimeter = 0;
        for(vector::iterator i=p.begin();i<p.end();++i)
        {
            perimeter += sqrt();
        }
    }
    double calcArea()
    {

    }
private:
    vector<QPoint> p;
};

class Rectangle : public Shape
{
public:

private:

};

class Square : public Rectangle
{
public:

private:

};

class Ellipse : public Shape
{
public:

private:

};

class Circle : public Ellipse
{
public:

private:

};

class Text : public Shape
{
public:

private:

};
}
#endif // RENDERAREA_H
