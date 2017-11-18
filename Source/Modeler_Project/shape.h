#ifndef SHAPE_H
#define SHAPE_H
#include <QWidget>
#include "QPen"
#include "QBrush"
#include "QFont"
#include <qpainter.h>
#include "vector.h"
#include <math.h>
using namespace myStd;

namespace Shape //defined inside a namespace so it doesn't clash with other objects
{
class Shape
{
public:
    enum shape {Line, Polyline, Polygon, Rectangle, Square, Ellipse, Circle, Text}; //enum that determines shapes
    Shape(QPaintDevice *device=nullptr,int nid=-1,shape s=Shape::shape::Line, QPen npen=Qt::NoPen, QBrush nbrush=Qt::NoBrush): //enum shape s, int nid=-1 is the ID number. We're passing it in as -1 to know when we've made a mistake
        painter(device),id(nid),objShape(s),pen(npen),brush(nbrush){} //passing in QPen and QBrush
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
    QPen& getPen()
    {
        return pen;
    }
    QBrush& getBrush()
    {
        return brush;
    }

    virtual QPoint getStart(){}
    virtual QPoint getEnd(){}
    virtual vector<QPoint> &getPoints(){}
    virtual QPoint getUpperLeft(){}
    virtual int getWidth(){}
    virtual int getHeight(){}
    virtual QPoint getOrigin(){}
    virtual int getRx(){}
    virtual int getRy(){}
    virtual QString getText(){}
    virtual void setFont(QFont){}
    virtual void setText(QString){}

    virtual void draw(QPaintDevice* device) = 0;
    virtual void move(Shape* source){}
    virtual double calcPerimeter()=0;
    virtual double calcArea()=0;
    virtual ~Shape(){}
protected:
    QPainter& getPainter()
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
    Line(QPaintDevice* device=nullptr,int nid=-1, QPen npen=Qt::NoPen, QBrush nbrush=Qt::NoBrush,QPoint s=QPoint(0,0), QPoint e=QPoint(0,0)) //passing it first and last point in the coord
        :Shape(device,nid,Shape::shape::Line,npen,nbrush),start(s),end(e){}
    void draw(QPaintDevice* device)
    {
        QPainter& pnt = getPainter();
        pnt.begin(device);
        pnt.setPen(this->getPen());
        pnt.drawLine(start,end);
        pnt.end();
    }
    void move(Shape *source)
    {
        if(this != source)
        {
            this->start = source->getStart();
            this->end = source->getEnd();
        }
    }
    QPoint getStart()
    {
        return start;
    }
    QPoint getEnd()
    {
        return end;
    }

    double calcPerimeter(){return 0;}
    double calcArea(){return 0;}
private:
    QPoint start, end;
};

class Polyline : public Shape
{
public:
    Polyline(QPaintDevice* device=nullptr,int nid=-1,QPen npen=Qt::NoPen,QBrush nbrush=Qt::NoBrush,const vector<QPoint> &source=vector<QPoint>()):
        Shape(device,nid,Shape::shape::Polyline,npen,nbrush){p = source;}

    void draw(QPaintDevice* device)
    {
         QPainter& pnt = getPainter();
         pnt.begin(device);
         pnt.setPen(this->getPen());
         pnt.drawPolyline(p.begin(),p.size());
         pnt.end();
    }
    vector<QPoint> &getPoints()
    {
        return p;
    }

    void move(Shape* source)
    {
        this->p = source->getPoints();
    }
    double calcPerimeter(){return 0;}
    double calcArea(){return 0;}
private:
    vector<QPoint> p;
};

class Polygon : public Shape
{
public:
    Polygon(QPaintDevice* device,int nid=-1,QPen npen=Qt::NoPen,QBrush nbrush=Qt::NoBrush,const vector<QPoint> &source=vector<QPoint>()):
        Shape(device,nid,Shape::shape::Polygon,npen,nbrush){p = source;}

    void draw(QPaintDevice* device)
    {
        QPainter& pnt = getPainter();
        pnt.begin(device);
        pnt.setPen(this->getPen());
        pnt.setBrush(this->getBrush());
        pnt.drawPolygon(p.begin(),p.size());
        pnt.end();
    }

    vector<QPoint> &getPoints()
    {
        return p;
    }

    void move(Shape* source)
    {
        this->p = source->getPoints();
    }
    double calcPerimeter()
    {

        double perimeter = 0;
        for(vector<QPoint>::iterator i=p.begin();i<p.end();++i)
        {
            perimeter += sqrt((pow((i->x()-((i+1)->x())),2)+pow((i->y()-(i+1)->y()),2)));
        }
        return perimeter;
    }
    double calcArea()
    {
        vector<QPoint>::iterator i=p.begin();
        double area = ((calcPerimeter())*
                       ((sqrt((pow((i->x()-((i+1)->x())),2)+
                               pow((i->y()-(i+1)->y()),2))))/
                        (2*tan(180/p.size()))))/
                         2;
        return area;
    }
private:
    vector<QPoint> p;
};

class Rectangle : public Shape
{
public:
    Rectangle(QPaintDevice* device,int nid=-1,shape s=shape::Rectangle,QPen npen=Qt::NoPen,QBrush nbrush=Qt::NoBrush,QPoint nUL=QPoint(0,0),int nw=0,int nh=0):
        Shape(device,nid,s,npen,nbrush),upperLeft(nUL),width(nw),height(nh){}
    void draw(QPaintDevice* device)
    {
        QPainter& pnt = getPainter();
        pnt.begin(device);
        pnt.setPen(this->getPen());
        pnt.setBrush(this->getBrush());
        pnt.drawRect((getUpperLeft()).x(),(getUpperLeft()).y(),getWidth(),getHeight());
        pnt.end();
    }
    void move(Shape* source)
    {
        this->setUpperLeft(source->getUpperLeft());
        this->setWidth(source->getWidth());
        this->setHeight(source->getHeight());
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
    QPoint getUpperLeft()
    {
        return upperLeft;
    }
    int getWidth()
    {
        return width;
    }
    int getHeight()
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
    Square(QPaintDevice* device,int nid=-1,QPen npen=Qt::NoPen,QBrush nbrush=Qt::NoBrush,QPoint nUL=QPoint(0,0),int side=0):
        Rectangle(device,nid,Shape::shape::Square,npen,nbrush,nUL,side,side){}

    void move(Shape* source)
    {
        this->Rectangle::move(source);
    }
/*
    void draw()
    {
        this->Rectangle::draw();
    }
    double calcPerimeter()
    {
        this->Rectangle::calcPerimeter();
    }
    double calcArea()
    {
        this->Rectangle::calcArea();
    }
*/ //should be able to use rectangle's functions

private: // N/A - will inherit everything it needs from Square
};

class Ellipse : public Shape
{
public:
    Ellipse(QPaintDevice* device,int nid=-1,Shape::shape s=shape::Ellipse,QPen npen=Qt::NoPen,QBrush nbrush=Qt::NoBrush,QPoint norigin=QPoint(0,0),int nrx=0,int nry=0):
        Shape(device,nid,s,npen,nbrush),origin(norigin),rx(nrx),ry(nry){}
    //accessors
    int getRx()
    {
        return rx;
    }
    int getRy()
    {
        return ry;
    }
    QPoint getOrigin()
    {
        return origin;
    }

    //mutators
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

    //methods
    void draw(QPaintDevice* device)
    {
        QPainter& pnt = getPainter();
        pnt.begin(device);
        pnt.setPen(this->getPen());
        pnt.setBrush(this->getBrush());
        pnt.drawEllipse(getOrigin(),rx,ry);
        pnt.end();
    }
    void move(Shape* source)
    {
        setOrigin(source->getOrigin());
        setRx(source->getRx());
        setRy(source->getRy());
    }
    double calcPerimeter()
    {
        //pow(base, power)
        //sqrt(x)
        int a = getRx();
        int b = getRy();

        return 2*M_PI*sqrt((pow(a,2) + pow(b,2))/2);
    }
    double calcArea()
    {
        int a = getRx();
        int b = getRy();

        return a*b*M_PI;
    }


private:
    QPoint origin;
    int rx, ry;
};

class Circle : public Ellipse
{
public:
    Circle(QPaintDevice* device,int nid=-1,QPen npen=Qt::NoPen,QBrush nbrush=Qt::NoBrush,QPoint norigin=QPoint(0,0),int nr=0):
        Ellipse(device,nid,Shape::shape::Circle,npen,nbrush,norigin,nr,nr){}
/*  void draw()
    {
        this->Ellipse::draw();
    }*/
    void move(Shape* source)
    {
        this->Ellipse::move(source);
    }
/*  double calcPerimeter() //Circumference
    {

    }
    double calcArea()
    {
        //A = π*r^2
    }*/ //don't need it. Will just be using ellipse's methods
private:
};

class Text : public Rectangle
{
public:
    //Rectangle(QPaintDevice* device,int nid=-1,Shape::shape s=Rectangle,QPen npen,QBrush nbrush,QPoint nUL,int nw,int nh):
    //    Shape(device,nid,s,npen,nbrush),upperLeft(nUL),width(nw),height(nh){}
    Text(QPaintDevice* device,int nid=-1,QPen npen=Qt::NoPen,QBrush nbrush=Qt::NoBrush,QPoint nUL=QPoint(0,0),int nwidth=0,int nheight=0, QString text=""): //added const QString & text
        Rectangle(device,nid,Shape::shape::Text,npen,nbrush,nUL,nwidth,nheight),objText(text){}
    void draw(QPaintDevice* device)
    {
        QPainter& pnt = getPainter();
        pnt.begin(device);
        pnt.setPen(this->getPen());
        pnt.setBrush(this->getBrush());
        pnt.drawText((getUpperLeft()).x(),getUpperLeft().y(),objText);
        pnt.end();
    }
    void move(Shape* source)
    {
        this->Rectangle::move(source);
    }

    QString getText()
    {
        return objText;
    }

    void setFont(QFont source)
    {
        QPainter &pnt = getPainter();
        pnt.setFont(source);
    }

    void setText(QString source)
    {
        objText = source;
    }

private:
    QString objText;
};


/*bool operator >(const Shape::Shape &obj1,const Shape::Shape &obj2) //overloaded "greater than" operator
//http://en.cppreference.com/w/cpp/language/operator_comparison
{
    return obj1->getId() > obj2->getId() ? true : false;
}

bool operator <(Shape::Shape*& obj1, Shape::Shape*& obj2) //overloaded "less than" operator
{
    return obj1->getId() < obj2->getId() ? true : false;
}
*/
}//end namespace Shape
#endif // RENDERAREA_H
