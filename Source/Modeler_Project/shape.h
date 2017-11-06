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
    Shape(QPaintDevice* device=nullptr,int nid=-1,shape s=Line, QPen npen, QBrush nbrush):
        painter(device),id(nid),objShape(s),pen(npen),brush(nbrush){}
    void setId(int nid)
    {
       id = nid;
    }
    void setShape(shape nshape)
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
    Line(QPainterDevice* device=nullptr,int nid=-1, QPen npen, QBrush nbrush,QPoint s=(QPoint(0,0)), QPoint e=(QPoint(0,0)))
        :Shape(device,nid,Shape::shape::Line,npen,nbrush),start(s),end(e){}
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
    Polyline(QPaintDevice* device=nullptr,int nid=-1,QPen npen,QBrush nbrush,const vector<QPoint> &source):
        Shape(device,nid,Shape::shape::Polyline,npen,nbrush){p = source;}

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
    Polygon(QPainterDevice* device,int nid=-1,QPen npen,QBrush nbrush,const vector<QPoint> &source):
        Shape(device,nid,Shape::shape::Polygon,npen,nbrush){p = source;}

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
    Rectangle(QPaintDevice* device,int nid=-1,Shape::shape s=Rectangle,QPen npen,QBrush nbrush,QPoint nUL,int nw,int nh):
        Shape(device,nid,s,npen,nbrush),upperLeft(nUL),width(nw),height(nh){}
    void draw()
    {
        QPainter pnt = getPainter();
        pnt.setPen(this->getPen());
        pnt.setBrush(this->getbrush());
        pnt.drawRect((getUpperLeft()).x(),(getUpperLeft()).y(),getWidth(),getHeight());
    }
    void move(QPoint nUL,int nw,int nh)
    {
        setUpperLeft(nUL);
        setWidth(nw);
        setHeight(nh);
    }
    double calcPerimeter()
    {
        return ((getWidth()*2)+(getHeight()*2));
    }
    double calcArea()
    {
        return (getWidth()*getHeight());
    }
    void setUpperLeft(QPoint nUL)
    {
        upperLeft = nUL;
    }
    void setWidth(int nw)
    {
        width = nw;
    }
    void setHeight(int nh)
    {
        height = nh;
    }
    QPoint& getUpperLeft()const
    {
        return upperLeft;
    }
    int getWidth()const
    {
        return width;
    }
    int getHeight()const
    {
        return height;
    }
private:
    QPoint upperLeft;
    int width, height;
};

class Square : public Rectangle
{
public:
    Square(QPaintDevice* device,int nid=-1,QPen npen,QBrush nbrush,QPoint nUL,int nside):
        Rectangle(device,nid,Shape::shape::Square,npen,nbrush,nUL,nside,nside){}
    void draw()
    {
        this->Rectangle::draw();
    }
    void move(QPoint np,int ns)
    {
        this->Rectangle::move(np,ns,ns);
    }
    double calcPerimeter()
    {
        this->Rectangle::calcPerimeter();
    }
    double calcArea()
    {
        this->Rectangle::calcArea();
    }
private:
};

class Ellipse : public Shape
{
public:
    Ellipse(QPaintDevice* device,int nid=-1,Shape::shape s=Ellipse,QPen npen,QBrush nbrush,QPoint norigin,int nrx,int nry):
        Shape(device,nid,s,npen,nbrush),origin(norigin),rx(nrx),ry(nry){}
    void draw()
    {
        QPainter pnt = getPainter();
        pnt.setPen(this->getPen());
        pnt.setBrush(this->getBrush());
        pnt.drawEllipse((getOrigin().x(),(getOrigin()).y(),rx,ry);
    }
    void move(QPoint norigin,int nrx,int nry)
    {
        setOrigin(norigin);
        setRx(nrx);
        setRy(nry);
    }
    double calcPerimeter()
    {

    }
    double calcArea()
    {

    }
    void setOrigin(QPoint norigin)
    {
        origin = norigin;
    }
    void setRx(int nrx)
    {
        rx = nrx;
    }
    void setRy(int nry)
    {
        ry = nry;
    }
    QPoint getOrigin()const
    {
        return origin;
    }
    int getRx()const
    {
        return rx;
    }
    int getRy()const
    {
        return ry;
    }

private:
    QPoint origin;
    int rx, ry;
};

class Circle : public Ellipse
{
public:
    Circle(QPaintDevice* device,int nid=-1,QPen npen,QBrush nbrush,QPoint norigin,int nr):
        Ellipse(device,nid,Shape::shape::Circle,npen,nbrush,norigin,nr,nr){}
    void draw()
    {
        this->Ellipse::draw();
    }
    void move(QPoint norigin,int nr)
    {
        this->Ellipse::move(norigin,nr,nr);
    }
    double calcPerimeter()
    {

    }
    double calcArea()
    {

    }
private:
};

class Text : public Shape
{
public:

private:

};
}
#endif // RENDERAREA_H
