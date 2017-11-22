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

/*************************
 * Shape - namespace
 * Contains our SHAPE
 * class.
 * **********************/

namespace Shape //defined inside a namespace so it doesn't clash with other objects
{


/*************************
 * Shape - Class Family
 * ***********************
 * A class hierarchy used
 * to create 2d shapes
 * which are drawn to a
 * canvas.
**************************/


 /*************************
  * Shape
 * A base abstract class
 * is used to provide a
 * common interface for
 * all inherited shapes.
 *
 * Uses enum shape to differentiate
 * between different derived shape
 * classes.
 *
 * Common interface is:
 * draw()
 * move()
 * calcArea()
 * calcPerimeter()
 * ***********************/

class Shape
{
public:
    enum shape {Line, Polyline, Polygon, Rectangle, Square, Ellipse, Circle, Text};
    //enum that determines shapes

    Shape(QPaintDevice *device=nullptr,int nid=-1,shape s=Shape::shape::Line, QPen npen=Qt::NoPen, QBrush nbrush=Qt::NoBrush):
        painter(device),id(nid),objShape(s),pen(npen),brush(nbrush){}
    //Base class constructor

    void setId(int nid)
    {
       id = nid;
    }
    //Mutator: sets shape ID#

    void setShape(shape nshape)
    {
       objShape = nshape;
    }
    //Mutator: sets shape type via enum

    void setPen(const QPen &npen)
    {
       pen = npen;
    }
    //Mutator: sets shape pen

    void setBrush(const QBrush &nbrush)
    {
       brush = nbrush;
    }
    //Mutator: set shape brush

    int getId()const
    {
        return id;
    }
    //Accessor: gets shape's ID#

    shape getShape()const
    {
        return objShape;
    }
    //Accessor: gets shape's type via enum

    QPen& getPen()
    {
        return pen;
    }
    //Accessor: gets shape's pen

    QBrush& getBrush()
    {
        return brush;
    }
    //Accessor: gets shape's brush

    //Virtual functions to facilitate polymorphism
    virtual QPoint getStart(){}
    //From Line
    virtual QPoint getEnd(){}
    //From Line
    virtual vector<QPoint> &getPoints(){}
    //From Polyling and Polygon
    virtual QPoint getUpperLeft(){}
    //From Rectangle
    virtual int getWidth(){}
    //From Rectacgle
    virtual int getHeight(){}
    //From Rectangle
    virtual QPoint getOrigin(){}
    //From Ellipse
    virtual int getRx(){}
    //From Ellipse
    virtual int getRy(){}
    //From Ellipse
    virtual QString getText(){}
    //From Text
    virtual void setFont(QFont&){}
    //From Text
    virtual void setText(QString){}
    //From Text

    //Common Interface
    virtual void draw(QPaintDevice* device) = 0;
    //Draws each shape based on its type; called by paintevent in canvas

    virtual void move(Shape* source){}
    //Updates shape's attributes

    virtual double calcPerimeter()=0;
    //Returns shape's calculated perimeter

    virtual double calcArea()=0;
    //Returns shape' calculated area

    virtual ~Shape(){}
    //Default Destructor - Virtual to facilitate polymorphism

protected:
    QPainter& getPainter()
    {
        return painter;
    }
    //Returns the shape's painter object

private:
    QPainter painter;
    //QPainter object used to draw shape to canvas

    int id;
    //Shape id#

    shape objShape;
    //Shape's type via enum

    QPen pen;
    //Shapes current pen object

    QBrush brush;
    //Shape's current brush object
};

//LINE - Simple point to point

class Line : public Shape
{
public:
    Line(QPaintDevice* device=nullptr,int nid=-1, QPen npen=Qt::NoPen, QBrush nbrush=Qt::NoBrush,QPoint s=QPoint(0,0), QPoint e=QPoint(0,0)) //passing it first and last point in the coord
        :Shape(device,nid,Shape::shape::Line,npen,nbrush),start(s),end(e){}
    //Line Constructor

    void draw(QPaintDevice* device)
    {
        QPainter& pnt = getPainter();
        pnt.begin(device);
        pnt.setPen(this->getPen());
        pnt.drawLine(start,end);
        pnt.setPen(QPen());
        pnt.drawText(start.x()-5,start.y()-5,QString::number(this->getId()));
        pnt.end();
    }
    //Overridden draw() from base shape

    void move(Shape *source)
    {
        if(this != source)
        {
            this->start = source->getStart();
            this->end = source->getEnd();
        }
    }
    //Overridden move() from base shape;

    QPoint getStart()
    {
        return start;
    }
    //Accessor: returns line's start cooridnate

    QPoint getEnd()
    {
        return end;
    }
    //Accessor: returns line's end coordinate

    double calcPerimeter(){return 0;}
    //Returns line's perimeter; always zero

    double calcArea(){return 0;}
    //Returns line's area; always zero

private:
    QPoint start, end;
    //Line's start and end coordinate
};

//Polyline - line with n number of points

class Polyline : public Shape
{
public:
    Polyline(QPaintDevice* device=nullptr,int nid=-1,QPen npen=Qt::NoPen,QBrush nbrush=Qt::NoBrush,const vector<QPoint> &source=vector<QPoint>()):
        Shape(device,nid,Shape::shape::Polyline,npen,nbrush){p = source;}
    //Polyline constructor

    void draw(QPaintDevice* device)
    {
         QPainter& pnt = getPainter();
         pnt.begin(device);
         pnt.setPen(this->getPen());
         pnt.drawPolyline(p.begin(),p.size());
         pnt.setPen(QPen());
         pnt.drawText(p.begin()->x()-5,p.begin()->y()-5,QString::number(this->getId()));
         pnt.end();
    }
    //Overloaded draw() from base shape

    vector<QPoint> &getPoints()
    {
        return p;
    }
    //Accessor: returns the polyline's points stored in a vector

    void move(Shape* source)
    {
        this->p = source->getPoints();
    }
    //Overloaded move() from base shape

    double calcPerimeter(){return 0;}
    //Overloaded calcPerimeter(); always returns zero

    double calcArea(){return 0;}
    //Overloaded calcArea(): always returns zero

private:
    vector<QPoint> p;
    //Contains the points of the polyline
};

//Polygon - Similar to polyline but is a closed shape with a fill

class Polygon : public Shape
{
public:
    Polygon(QPaintDevice* device,int nid=-1,QPen npen=Qt::NoPen,QBrush nbrush=Qt::NoBrush,const vector<QPoint> &source=vector<QPoint>()):
        Shape(device,nid,Shape::shape::Polygon,npen,nbrush){p = source;}
    //Polygon constructor

    void draw(QPaintDevice* device)
    {
        QPainter& pnt = getPainter();
        pnt.begin(device);
        pnt.setPen(this->getPen());
        pnt.setBrush(this->getBrush());
        pnt.drawPolygon(p.begin(),p.size());
        pnt.setPen(QPen());
        pnt.drawText(p.begin()->x()-5,p.begin()->y()-5,QString::number(this->getId()));
        pnt.end();
    }
    //Overloaded draw() from base shape

    vector<QPoint> &getPoints()
    {
        return p;
    }
    //Accessor: returns polygon's points stored in a vector

    void move(Shape* source)
    {
        this->p = source->getPoints();
    }
    //Overloaded move() from base shape

    double calcPerimeter()
    {

        double perimeter = 0;
        for(vector<QPoint>::iterator i=p.begin();i<p.end()-1;++i)
        {
            perimeter += sqrt((pow((i->x()-((i+1)->x())),2)+pow((i->y()-(i+1)->y()),2)));
        }
        return perimeter;
    }
    //Overloaded calcPerimeter(); calculates the distance from point to point and returns the sum

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
    //Overloaded calcArea(); calculates the area and returns
private:
    vector<QPoint> p;
    //Holds the points of the polygon
};

class Rectangle : public Shape
{
public:
    Rectangle(QPaintDevice* device,int nid=-1,shape s=shape::Rectangle,QPen npen=Qt::NoPen,QBrush nbrush=Qt::NoBrush,QPoint nUL=QPoint(0,0),int nw=0,int nh=0):
        Shape(device,nid,s,npen,nbrush),upperLeft(nUL),width(nw),height(nh){}
    //Polygon Constructor

    void draw(QPaintDevice* device)
    {
        QPainter& pnt = getPainter();
        pnt.begin(device);
        pnt.setPen(this->getPen());
        pnt.setBrush(this->getBrush());
        pnt.drawRect((getUpperLeft()).x(),(getUpperLeft()).y(),getWidth(),getHeight());
        pnt.setPen(QPen());
        pnt.drawText(getUpperLeft().x()-5,getUpperLeft().y()-5,QString::number(this->getId()));
        pnt.end();
    }
    //Overloaded draw() from base shape

    void move(Shape* source)
    {
        this->setUpperLeft(source->getUpperLeft());
        this->setWidth(source->getWidth());
        this->setHeight(source->getHeight());
    }
    //Overloaded move() from base shape

    double calcPerimeter()
    {
        return ((getWidth()*2)+(getHeight()*2));
    }
    //Overloaded calcPerimeter(); returns calculated perimeter

    double calcArea()
    {
        return (getWidth()*getHeight());
    }
    //Overloaded calcArea from base shape; returns calculated area

    void setUpperLeft(QPoint nUL)
    {
        upperLeft = nUL;
    }
    //Mutator: sets the upperleft coordinate

    void setWidth(int nw)
    {
        width = nw;
    }
    //Mutator: sets the width of the rectangle

    void setHeight(int nh)
    {
        height = nh;
    }
    //Mutator: sets the height of the rectangle

    QPoint getUpperLeft()
    {
        return upperLeft;
    }
    //Accessor: reutrns the upper left coordinate

    int getWidth()
    {
        return width;
    }
    //Accessor: returns the rectangle's width

    int getHeight()
    {
        return height;
    }
    //Accessor: returns the rectangl's height

private:
    QPoint upperLeft;
    //Holds the rectangle's upper left coordinate

    int width, height;
    //Holds the rectangle's width and height
};

class Square : public Rectangle
{
public:
    Square(QPaintDevice* device,int nid=-1,QPen npen=Qt::NoPen,QBrush nbrush=Qt::NoBrush,QPoint nUL=QPoint(0,0),int side=0):
        Rectangle(device,nid,Shape::shape::Square,npen,nbrush,nUL,side,side){}
    //Square Constructor

    void move(Shape* source)
    {
        this->Rectangle::move(source);
    }
    //Overloaded move() from base shape()
};

class Ellipse : public Shape
{
public:
    Ellipse(QPaintDevice* device,int nid=-1,Shape::shape s=shape::Ellipse,QPen npen=Qt::NoPen,QBrush nbrush=Qt::NoBrush,QPoint norigin=QPoint(0,0),int nrx=0,int nry=0):
        Shape(device,nid,s,npen,nbrush),origin(norigin),rx(nrx),ry(nry){}
    //Ellipse Constructor

    int getRx()
    {
        return rx;
    }
    //Accessor: returns Ellipse's xradius value

    int getRy()
    {
        return ry;
    }
    //Accessor: returns Ellipse's yradius value

    QPoint getOrigin()
    {
        return origin;
    }
    //Accessor: returns Ellipse's origin coordinate

    void setOrigin(QPoint norigin)
    {
        origin = norigin;
    }
    //Mutator: sets ellipse's origin coordinate

    void setRx(int nrx)
    {
        rx = nrx;
    }
    //Mutator: sets ellipse's xradius value

    void setRy(int nry)
    {
        ry = nry;
    }
    //Mutator: sets ellips's yradius value

    void draw(QPaintDevice* device)
    {
        QPainter& pnt = getPainter();
        pnt.begin(device);
        pnt.setPen(this->getPen());
        pnt.setBrush(this->getBrush());
        pnt.drawEllipse(getOrigin(),rx,ry);
        pnt.setPen(QPen());
        pnt.drawText(getOrigin().x()-rx,getOrigin().y()-ry,QString::number(this->getId()));
        pnt.end();
    }
    //Overloaded draw() from base shape

    void move(Shape* source)
    {
        setOrigin(source->getOrigin());
        setRx(source->getRx());
        setRy(source->getRy());
    }
    //Overloaded move() from base shape

    double calcPerimeter()
    {
        //pow(base, power)
        //sqrt(x)
        int a = getRx();
        int b = getRy();

        return 2*M_PI*sqrt((pow(a,2) + pow(b,2))/2);
    }
    //Overloaded calcPerimeter from base shape; returns calculated perimeter

    double calcArea()
    {
        int a = getRx();
        int b = getRy();

        return a*b*M_PI;
    }
    //Overloaded calcArea() from base shape; returns calculated area

private:
    QPoint origin;
    //Holds the ellipse's origin coordinate

    int rx, ry;
    //Holds the ellipse's x and y radius value
};

class Circle : public Ellipse
{
public:
    Circle(QPaintDevice* device,int nid=-1,QPen npen=Qt::NoPen,QBrush nbrush=Qt::NoBrush,QPoint norigin=QPoint(0,0),int nr=0):
        Ellipse(device,nid,Shape::shape::Circle,npen,nbrush,norigin,nr,nr){}
    //Circle Constructor

    void move(Shape* source)
    {
        this->Ellipse::move(source);
    }
    //Overloaded move() from base shape

};

class Text : public Rectangle
{
public:
    Text(QPaintDevice* device,int nid=-1,QPen npen=Qt::NoPen,QBrush nbrush=Qt::NoBrush,QPoint nUL=QPoint(0,0),int nwidth=0,int nheight=0, QString text=""): //added const QString & text
        Rectangle(device,nid,Shape::shape::Text,npen,nbrush,nUL,nwidth,nheight),objText(text){}
    //Text Constructor

    void draw(QPaintDevice* device)
    {
        QPainter& pnt = getPainter();
        pnt.begin(device);
        pnt.setPen(this->getPen());
        pnt.setBrush(this->getBrush());
        pnt.drawText((getUpperLeft()).x(),getUpperLeft().y(),objText);
        pnt.setPen(QPen());
        pnt.drawText(getUpperLeft().x()-7,getUpperLeft().y()-7,QString::number(this->getId()));
        pnt.end();
    }
    //Overloaded draw() from base shape

    void move(Shape* source)
    {
        this->Rectangle::move(source);
    }
    //Overloaded move() from base shape

    QString getText()
    {
        return objText;
    }
    //Accessor: returns text's current text string

    void setFont(QFont &source)
    {
        QPainter &pnt = getPainter();
        pnt.setFont(source);
    }
    //Mutatotr: sets text's current font attributes - currently not working

    double calcArea(){return 0;}
    //Overloaded calcArea() from base shape

    double calcPerimeter(){return 0;}
    //Overloaded calcPerimeter() from base shape

    void setText(QString source)
    {
        objText = source;
    }
    //Mutator: Sets text's current text string

private:
    QString objText;
    //Holds text's current text string
};


bool operator >(const Shape::Shape &obj1,const Shape::Shape &obj2) //overloaded "greater than" operator
//http://en.cppreference.com/w/cpp/language/operator_comparison
{
    return obj1->getId() > obj2->getId() ? true : false;
}

bool operator <(Shape::Shape*& obj1, Shape::Shape*& obj2) //overloaded "less than" operator
{
    return obj1->getId() < obj2->getId() ? true : false;
}

}//end namespace Shape
#endif // RENDERAREA_H
