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
    Shape(QPainterDevice *device=nullptr,nid=-1,Shape::shape s=Line):painter(device),id(nid),objShape(s){}
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
    QPainter& getPainter()
    {

    }
    virtual void draw() = 0;
    virtual void move() = 0;
    virtual double calcPerimeter() = 0;
    virtual double calcArea() = 0;
    virtual ~Shape();
protected:
    QPainter& getPointer()
    {
        return painter;
    }

private:
    QPainter painter;
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
        QPainter pnt = getPainter();
        pnt.setPen(this->getPen());
        pnt.drawLine(start,end);
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
         QPainter pnt = getPainter();
         pnt.setPen(this->getPen());
         pnt.drawPolyline(p.begin(),p.size());
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
        QPainter pnt = getPainter();
        pnt.setPen(this->getPen());
        pnt.setBrush(this->getBrush());
        pnt.drawPolygon(p.begin(),p.size());
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
            perimeter += sqrt((pow((i->x()-((i+1)->x())),2)+pow((i->y()-(i+1)->y()),2)));
        }
        return perimeter;
    }
    double calcArea()
    {
        vector::iterator i=p.begin();
        double area = ((this->calcPerimeter())*((sqrt((pow((i->x()-((i+1)->x())),2)+pow((i->y()-(i+1)->y()),2))))/(2*tan(180/p->size()))))/2;
        return area;
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
