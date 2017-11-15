#include <iostream>
#include <fstream>
#include <string>
#include "shape.h"
#include "vector.h"

using namespace std;
using namespace Shape;
using namespace myStd;

Shape::Shape* lineParse(const myStd::vector<string>&,QPaintDevice*);
Shape::Shape* polyLineParse(const myStd::vector<string>&,QPaintDevice*);
Shape::Shape* polygonParse(const myStd::vector<string>&,QPaintDevice*);
Shape::Shape* rectangleParse(const myStd::vector<string>&,QPaintDevice*);
Shape::Shape* squareParse(const myStd::vector<string>&,QPaintDevice*);
Shape::Shape* ellipseParse(const myStd::vector<string>&,QPaintDevice*);
Shape::Shape* circleParse(const myStd::vector<string>&,QPaintDevice*);
Shape::Shape* textParse(const myStd::vector<string>&,QPaintDevice*);

Qt::GlobalColor getColor(const string &);
Qt::PenStyle    getPenStyle(const string &);
Qt::PenCapStyle getPenCapStyle(const string &);
Qt::PenJoinStyle getPenJoinStyle(const string &);

const int SHAPE_ID = 0;
const int SHAPE_TYPE = 1;
const int SHAPE_DIMS = 2;

myStd::vector<Shape::Shape*> shapeParser(QPaintDevice* device)
{
    myStd::vector<Shape::Shape*> shapes;  //Create the primary vector to hold the shape object pointers.
    myStd::vector<std::string> tempShape;  // Create a temp string vector to hold each of the object blocks from the input file.
    string temp, sub;
    string testString = "ShapeId: 1\nShapeType: Line\nShapeDimensions: 20, 90, 100, 20\nPenColor: blue\nPenWidth: 2\nPenStyle: DashDotLine\nPenCapStyle: FlatCap\nPenJoinStyle: MiterJoin";
    istream test;
    test >> testString;
    //ifstream shapeFile;
    //shapeFile.open("shapes.txt");
    while(!test.eof())  //PRIMARY LOOP - Ends once the file reaches its .eof() flag.
    {
        getline(test,temp);  //temp is filled with the each line from the text file.
        cerr << temp << endl;
        while(temp != " " || temp != "\n") //Continues till it hits an empty line, relfecting the end of a shapes information.
        {
            unsigned int i = 0;
            while(temp[i] != ' ' && i < temp.length())  //Parses through the string until it hits white space; end of title for each entry.
            {
                ++i;
            }
            cerr << i;
            cerr << temp.length();
            sub = temp.substr(i,temp.size()-1);  //Creates a new substring truncating the title, and keeping the meaningful information.
            tempShape.push_back(sub); //adds the new substring to the temporary string vector.
            getline(shapeFile,temp);  //grabs the next line and repeats the loop.....
        }
        myStd::vector<string>::iterator ptemp;  //Creates an iterator of vector<string>
        ptemp = (tempShape.begin());  //Gets the iterator to the first element, ie the first string contaning shapeId.
        if(*(ptemp+1) == "Line") //Checks the second string in the vector to determine the type of the shape, and subsequently passes the
        {                        //   vector to the relevant parser function, which will create the shape object and return a pointer,
            shapes.push_back(lineParse(tempShape,device));  //adding it to the shape vector.
        }
        else if(*(ptemp+1) == "Polyline")
        {
            shapes.push_back(polyLineParse(tempShape,device));
        }
        else if(*(ptemp+1) == "Polygon")
        {
            shapes.push_back(polygonParse(tempShape,device));
        }
        else if(*(ptemp+1) == "Rectangle")
        {
            shapes.push_back(rectangleParse(tempShape,device));
        }
        else if(*(ptemp+1) == "Square")
        {
            shapes.push_back(squareParse(tempShape,device));
        }
        else if(*(ptemp+1) == "Ellipse")
        {
            shapes.push_back(ellipseParse(tempShape,device));
        }
        else if(*(ptemp+1) == "Circle")
        {
            shapes.push_back(circleParse(tempShape,device));
        }
        else if(*(ptemp+1) == "Text")
        {
            shapes.push_back(textParse(tempShape,device));
        }
        else
        {
            cout << "\n\n**ERROR---\"PARSER\"---ERROR**\n\n";
        }
    }
    //shapeFile.close();
return shapes;
}

//all will have the same parameters
Shape::Shape* lineParse(const myStd::vector<string> &source,QPaintDevice* device)
//Takes in a temporary vector of strings representing the data of the shape to be instantiated.
//Each string is a line from the input file.
{
    /*
        ShapeId: 1
        ShapeType: Line
        ShapeDimensions: 20, 90, 100, 20
        PenColor: blue
        PenWidth: 2
        PenStyle: DashDotLine
        PenCapStyle: FlatCap
        PenJoinStyle: MiterJoin
    */
    //the 2nd line is taken care of in the switch statement earlier

    int tempId = stoi(source[SHAPE_ID].substr(0,source[SHAPE_ID].length())); //Creates a temp int to hold the shape id#.
    string tempString = source[SHAPE_DIMS];                             //Uses stoi() function to convert its contents
    int i = 0, x=0, y=0;                                       //   into an integer.
    while(tempString[i] != ',')  //Parses through the third string (Shape Dimensions: 20, 90, 100, 20) to build the x coordinate of the starting point.
    {
        ++i;
    }
    x = stoi(tempString.substr(0,i)); //Assigns the value by converting the substring found with stoi().
    tempString = tempString.substr(i+1,tempString.length()); //truncates the previously parsed portion of the string and continues.
    i = 0;
    while(tempString[i] != ',')
    {
        ++i;
    }
    y = stoi(tempString.substr(0,i));  //repeats the same steps for the y coordinate.
    tempString = tempString.substr(i=1,tempString.length());
    QPoint start = QPoint(x,y); //Creates the start point as type Qpoint.
    i = 0;
    x = 0;  //resets the variables for the end point; repeats the same steps for the start point.
    y = 0;
    while(tempString[i] != ',')
    {
        ++i;
    }
    x = stoi(tempString.substr(0,i));
    tempString = tempString.substr(i+1,tempString.length());
    i = 0;
    while(tempString[i] != '\n')
    {
        ++i;
    }
    y = stoi(tempString.substr(0,i));

    QPoint end = QPoint(x,y);  //Creates the end point as type QPoint.
    qreal width = stoi(source[4].substr(0,source[4].length()));  //Creats a qreal object, which is Qt special double, used for QPen object.
    QPen npen(Qt::NoBrush,width,getPenStyle(source[5]),getPenCapStyle(source[6]),getPenJoinStyle(source[7])); //Create the Qpen object using helper functions which determine its setting from the remaining strings.

    Line* nline = new Line(device,tempId,npen,Qt::NoBrush,start,end);  //Instantiates the new line object.

    return nline; //returns the pointer to the primary parser, where it will be put into the shape* vector.
}

Shape::Shape* polyLineParse(const myStd::vector<string> &source,QPaintDevice* device)
{
/*
    ShapeId: 2
    ShapeType: Polyline
    ShapeDimensions: 460, 90, 470, 20, 530, 40, 540, 80
    PenColor: green
    PenWidth: 6
    PenStyle: SolidLine
    PenCapStyle: FlatCap
    PenJoinStyle: MiterJoin
*/

    int tempId = stoi(source[SHAPE_ID].substr(0,source[SHAPE_ID].length())); //Creates a temp int to hold the shape id#.
    string tempString = source[SHAPE_DIMS];                             //Uses stoi() function to convert its contents strings to ints
    int i = 0, x=0, y=0;                                       //   into an integer.

    myStd::vector<QPoint> vecOfPoints; //creates a vector to store Qpoints to than pass back at the end of the method
    //https://stackoverflow.com/questions/15129633/c-function-is-ambiguous-when-passing-pointers-to-vectors //might fix the issue

    while(tempString != "\n")//parses the tempString var one by one until it hits the end of line character
    {
        while(tempString[i] != ',')  //Parses through the third string to build the x coordinate of the starting point.
        {
            ++i;
        }
        x = stoi(tempString.substr(0,i)); //Assigns the value by converting the substring found with stoi().
        tempString = tempString.substr(i+1,tempString.length()); //truncates the previously parsed portion of the string and continues.

        i = 0;

        while(tempString[i] != ',')
        {
            ++i;
        }
        //repeats the same steps for the y coordinate.
        y = stoi(tempString.substr(0,i));
        tempString = tempString.substr(i=1,tempString.length());

        vecOfPoints.push_back(QPoint(x,y)); //adds the newly created point of type QPoint to the vector.

        i = 0;
        x = 0;  //resets the variables for the end point; repeats the same steps for the start point.
        y = 0;
    }

    //QPoint end = QPoint(x,y);  //Creates the end point as type QPoint.
    qreal width = stoi(source[4].substr(0,source[4].length()));  //Creats a qreal object, which is Qt special double, used for QPen object.
    QPen npen(Qt::NoBrush,width,getPenStyle(source[5]),getPenCapStyle(source[6]),getPenJoinStyle(source[7])); //Create the Qpen object using helper functions which determine its setting from the remaining strings.

    //Line(QPaintDevice* device=nullptr,int nid=-1, QPen npen=Qt::NoPen, QBrush nbrush=Qt::NoBrush,QPoint s=QPoint(0,0), QPoint e=QPoint(0,0))
    //Line*    nline = new Line    (device,tempId,npen,Qt::NoBrush,start,end);    //Instantiates the new line object.
    Polyline* nPline = new Polyline(device,tempId,npen,Qt::NoBrush,vecOfPoints);  //Instantiates the new line object.

    return nPline; //returns the pointer to the primary parser, where it will be put into the shape* vector.

}




Shape::Shape* polygonParse(const myStd::vector<string> &source,QPaintDevice* device)
{
/*
    ShapeId: 3
    ShapeType: Polygon
    ShapeDimensions: 900, 90, 910, 20, 970, 40, 980, 80
    PenColor: cyan
    PenWidth: 6
    PenStyle: DashDotDotLine
    PenCapStyle: FlatCap
    PenJoinStyle: MiterJoin

    BrushColor: yellow
    BrushStyle: SolidPattern
*/

    int tempId = stoi(source[SHAPE_ID].substr(0,source[SHAPE_ID].length())); //Creates a temp int to hold the shape id#.
    string tempString = source[SHAPE_DIMS];                             //Uses stoi() function to convert its contents strings to ints
    int i = 0, x=0, y=0;                                       //   into an integer.

    myStd::vector<QPoint> vecOfPoints; //creates a vector to store Qpoints to than pass back at the end of the method

    while(tempString != "\n")//parses the tempString var one by one until it hits the end of line character
    {
        while(tempString[i] != ',')  //Parses through the third string to build the x coordinate of the starting point.
        {
            ++i;
        }
        x = stoi(tempString.substr(0,i)); //Assigns the value by converting the substring found with stoi().
        tempString = tempString.substr(i+1,tempString.length()); //truncates the previously parsed portion of the string and continues.

        i = 0;

        while(tempString[i] != ',')
        {
            ++i;
        }

        //repeats the same steps for the y coordinate.
        y = stoi(tempString.substr(0,i));
        tempString = tempString.substr(i=1,tempString.length());

        vecOfPoints.push_back(QPoint(x,y)); //adds the newly created point of type QPoint to the vector.

        i = 0;
        x = 0;  //resets the variables for the end point; repeats the same steps for the start point.
        y = 0;
    }

    //QPoint end = QPoint(x,y);  //Creates the end point as type QPoint.
    qreal width = stoi(source[4].substr(0,source[4].length()));  //Creats a qreal object, which is Qt special double, used for QPen object.
    QPen npen(Qt::NoBrush,width,getPenStyle(source[5]),getPenCapStyle(source[6]),getPenJoinStyle(source[7])); //Create the Qpen object using helper functions which determine its setting from the remaining strings.


    //    Shape(device,nid,Shape::shape::Polygon,npen,nbrush){p = source;}

    //Line*    nline = new Line    (device,tempId,npen,Qt::NoBrush,start,end);    //Instantiates the new line object.

    //    Polygon                  (QPaintDevice* device,       int nid=-1,  QPen npen=Qt::NoPen, QBrush nbrush=Qt::NoBrush,const vector<QPoint> &source=vector<QPoint>()):

    Polygon* nPoly = new Polygon(device,tempId,npen,Qt::NoBrush,vecOfPoints);  //Instantiates the new line object.

    return nPoly; //returns the pointer to the primary parser, where it will be put into the shape* vector.
}

Shape::Shape* rectangleParse(const myStd::vector<string> &source,QPaintDevice* device)
{
/*
    ShapeId: 4
    ShapeType: Rectangle
    ShapeDimensions: 20, 200, 170, 100
    PenColor: blue
    PenWidth: 0
    PenStyle: DashLine
    PenCapStyle: RoundCap
    PenJoinStyle: RoundJoin

    BrushColor: red
    BrushStyle: VerPattern
*/


    int tempId = stoi(source[SHAPE_ID].substr(0,source[SHAPE_ID].length())); //Creates a temp int to hold the shape id#.
    string tempString = source[SHAPE_DIMS];                             //Uses stoi() function to convert its contents
    int i = 0, x=0, y=0;                                       //   into an integer.
    while(tempString[i] != ',')  //Parses through the third string (Shape Dimensions: 20, 90, 100, 20) to build the x coordinate of the starting point.
    {
        ++i;
    }
    x = stoi(tempString.substr(0,i)); //Assigns the value by converting the substring found with stoi().
    tempString = tempString.substr(i+1,tempString.length()); //truncates the previously parsed portion of the string and continues.
    i = 0;
    while(tempString[i] != ',')
    {
        ++i;
    }
    y = stoi(tempString.substr(0,i));  //repeats the same steps for the y coordinate.
    tempString = tempString.substr(i=1,tempString.length());
    QPoint nUL = QPoint(x,y); //Creates the start point as type Qpoint.

    i = 0;      //resets i

    int nw = 0;  //declares height and width vars
    int nh = 0;

    while(tempString[i] != ',')
    {
        ++i;
    }
    nw = stoi(tempString.substr(0,i));
    tempString = tempString.substr(i+1,tempString.length());

    i = 0; //resets i
    while(tempString[i] != '\n')
    {
        ++i;
    }
    nh = stoi(tempString.substr(0,i));

    //QPoint end = QPoint(x,y);  //Creates the end point as type QPoint.
    qreal width = stoi(source[4].substr(0,source[4].length()));  //Creats a qreal object, which is Qt special double, used for QPen object.
    QPen npen(Qt::NoBrush,width,getPenStyle(source[5]),getPenCapStyle(source[6]),getPenJoinStyle(source[7])); //Create the Qpen object using helper functions which determine its setting from the remaining strings.

    Shape::Shape::shape s = Shape::Shape::shape::Rectangle;
    //Line(QPaintDevice* device=nullptr,int nid=-1, QPen npen=Qt::NoPen, QBrush nbrush=Qt::NoBrush,QPoint s=QPoint(0,0), QPoint e=QPoint(0,0))
    //Line*    nline = new Line    (device,tempId,npen,Qt::NoBrush,start,end);    //Instantiates the new line object.

     //Line                  (QPaintDevice* device=nullptr,int nid=-1, QPen npen=Qt::NoPen,      QBrush nbrush=Qt::NoBrush, QPoint s=QPoint(0,0), QPoint e=QPoint(0,0))
    //Rectangle              (QPaintDevice* device        ,int nid=-1, shape s=shape::Rectangle, QPen   npen=  Qt::NoPen,   QBrush nbrush=Qt::NoBrush, QPoint nUL=QPoint(0,0),int nw=0,int nh=0):

    //Line*      nline = new Line     (device,tempId,npen,Qt::NoBrush,start,end);
    Rectangle* nRect = new Rectangle(device,tempId, s, npen, Qt::NoBrush, nUL, nw, nh);  //Instantiates the new line object.

    return nRect; //returns the pointer to the primary parser, where it will be put into the shape* vector.

}

Shape::Shape* squareParse(const myStd::vector<string> &source,QPaintDevice* device)
{
/*
    ShapeId: 5
    ShapeType: Square
    ShapeDimensions: 250, 150, 200
    PenColor: red
    PenWidth: 0
    PenStyle: SolidLine
    PenCapStyle: RoundCap
    PenJoinStyle: RoundJoin
    BrushColor: blue
    BrushStyle: HorPattern
*/

    int tempId = stoi(source[SHAPE_ID].substr(0,source[SHAPE_ID].length())); //Creates a temp int to hold the shape id#.
    string tempString = source[SHAPE_DIMS];                             //Uses stoi() function to convert its contents
    int i = 0, x=0, y=0;                                       //   into an integer.
    while(tempString[i] != ',')  //Parses through the third string (Shape Dimensions: 20, 90, 100, 20) to build the x coordinate of the starting point.
    {
        ++i;
    }
    x = stoi(tempString.substr(0,i)); //Assigns the value by converting the substring found with stoi().
    tempString = tempString.substr(i+1,tempString.length()); //truncates the previously parsed portion of the string and continues.
    i = 0;
    while(tempString[i] != ',')
    {
        ++i;
    }
    y = stoi(tempString.substr(0,i));  //repeats the same steps for the y coordinate.
    tempString = tempString.substr(i=1,tempString.length());

    QPoint nUL = QPoint(x,y); //Creates the start point as type Qpoint.

    i = 0;      //resets i

    int side = 0;  //declares height and width vars

    while(tempString[i] != ',')
    {
        ++i;
    }
    side = stoi(tempString.substr(0,i));
    tempString = tempString.substr(i+1,tempString.length());

    //QPoint end = QPoint(x,y);  //Creates the end point as type QPoint.
    qreal width = stoi(source[4].substr(0,source[4].length()));  //Creats a qreal object, which is Qt special double, used for QPen object.
    QPen npen(Qt::NoBrush,width,getPenStyle(source[5]),getPenCapStyle(source[6]),getPenJoinStyle(source[7])); //Create the Qpen object using helper functions which determine its setting from the remaining strings.

    //Shape::Shape::shape s = Shape::Shape::shape::Square;
    Square* nSquare = new Square(device,tempId, npen, Qt::NoBrush, nUL, side);  //Instantiates the new line object.
    //new version of Square

    return nSquare; //returns the pointer to the primary parser, where it will be put into the shape* vector.
}

Shape::Shape* ellipseParse(const myStd::vector<string> &source,QPaintDevice* device)
{
/*
    ShapeId: 6
    ShapeType: Ellipse
    ShapeDimensions: 520, 200, 170, 100
    PenColor: black
    PenWidth: 12
    PenStyle: SolidLine
    PenCapStyle: FlatCap
    PenJoinStyle: MiterJoin

    BrushColor: white
    BrushStyle: NoBrush
*/

    int tempId = stoi(source[SHAPE_ID].substr(0,source[SHAPE_ID].length())); //Creates a temp int to hold the shape id#.
    string tempString = source[SHAPE_DIMS];                             //Uses stoi() function to convert its contents
    int i = 0, x=0, y=0;                                       //   into an integer.
    while(tempString[i] != ',')  //Parses through the third string (Shape Dimensions: 20, 90, 100, 20) to build the x coordinate of the starting point.
    {
        ++i;
    }
    x = stoi(tempString.substr(0,i)); //Assigns the value by converting the substring found with stoi().
    tempString = tempString.substr(i+1,tempString.length()); //truncates the previously parsed portion of the string and continues.
    i = 0;
    while(tempString[i] != ',')
    {
        ++i;
    }
    y = stoi(tempString.substr(0,i));  //repeats the same steps for the y coordinate.
    tempString = tempString.substr(i=1,tempString.length());
    QPoint nUL = QPoint(x,y); //Creates the start point as type Qpoint.

    i = 0;      //resets i

    int nrx = 0;  //declares height and width vars
    int nry = 0;

    while(tempString[i] != ',')
    {
        ++i;
    }
    nrx = stoi(tempString.substr(0,i));
    tempString = tempString.substr(i+1,tempString.length());

    i = 0; //resets i
    while(tempString[i] != '\n')
    {
        ++i;
    }
    nry = stoi(tempString.substr(0,i));

    //QPoint end = QPoint(x,y);  //Creates the end point as type QPoint.
    qreal width = stoi(source[4].substr(0,source[4].length()));  //Creats a qreal object, which is Qt special double, used for QPen object.
    QPen npen(Qt::NoBrush,width,getPenStyle(source[5]),getPenCapStyle(source[6]),getPenJoinStyle(source[7])); //Create the Qpen object using helper functions which determine its setting from the remaining strings.

    Shape::Shape::shape s = Shape::Shape::shape::Ellipse;
    //Line    (QPaintDevice* device=nullptr,int nid=-1, QPen npen=Qt::NoPen,        QBrush nbrush=Qt::NoBrush,QPoint s=QPoint(0,0), QPoint e=QPoint(0,0))

    //Ellipse (QPaintDevice* device,        int nid=-1, Shape::shape s=shape::Ellipse, QPen npen=Qt::NoPen,QBrush nbrush=Qt::NoBrush,QPoint norigin=QPoint(0,0),int nrx=0,int nrx=0):

     //Line                  (QPaintDevice* device=nullptr,int nid=-1, QPen npen=Qt::NoPen,      QBrush nbrush=Qt::NoBrush, QPoint s=QPoint(0,0), QPoint e=QPoint(0,0))


    //Line*      nline = new Line     (device,tempId,npen,Qt::NoBrush,start,end);

    Ellipse* nEllipse = new Ellipse(device,tempId, s, npen, Qt::NoBrush, nUL, nrx, nry);  //Instantiates the new line object.

    return nEllipse; //returns the pointer to the primary parser, where it will be put into the shape* vector.




}

Shape::Shape* circleParse(const myStd::vector<string> &source,QPaintDevice* device)
{
/*
    ShapeId: 7
    ShapeType: Circle
    ShapeDimensions: 750, 150, 200
    PenColor: black
    PenWidth: 12
    PenStyle: SolidLine
    PenCapStyle: FlatCap
    PenJoinStyle: MiterJoin

    BrushColor: magenta
    BrushStyle: SolidPattern
*/

    int tempId = stoi(source[SHAPE_ID].substr(0,source[SHAPE_ID].length())); //Creates a temp int to hold the shape id#.
    string tempString = source[SHAPE_DIMS];                             //Uses stoi() function to convert its contents
    int i = 0, x=0, y=0;                                       //   into an integer.
    while(tempString[i] != ',')  //Parses through the third string (Shape Dimensions: 20, 90, 100, 20) to build the x coordinate of the starting point.
    {
        ++i;
    }
    x = stoi(tempString.substr(0,i)); //Assigns the value by converting the substring found with stoi().
    tempString = tempString.substr(i+1,tempString.length()); //truncates the previously parsed portion of the string and continues.
    i = 0;
    while(tempString[i] != ',')
    {
        ++i;
    }
    y = stoi(tempString.substr(0,i));  //repeats the same steps for the y coordinate.
    tempString = tempString.substr(i=1,tempString.length());

    QPoint nUL = QPoint(x,y); //Creates the start point as type Qpoint.

    i = 0;      //resets i
    int nr = 0;  //declares height and width vars

    while(tempString[i] != ',')
    {
        ++i;
    }
    nr = stoi(tempString.substr(0,i));
    tempString = tempString.substr(i+1,tempString.length());

    qreal width = stoi(source[4].substr(0,source[4].length()));  //Creats a qreal object, which is Qt special double, used for QPen object.
    QPen npen(Qt::NoBrush,width,getPenStyle(source[5]),getPenCapStyle(source[6]),getPenJoinStyle(source[7])); //Create the Qpen object using helper functions which determine its setting from the remaining strings.

    //Shape::Shape::shape s = Shape::Shape::shape::Circle; //may not need this for circle constructor - YD

    Circle* nCircle = new Circle(device,tempId, npen, Qt::NoBrush, nUL, nr);  //Instantiates the new line object.

    return nCircle; //returns the pointer to the primary parser, where it will be put into the shape* vector.

}

Shape::Shape* textParse(const myStd::vector<string> &source,QPaintDevice* device)
{
/*
    ShapeId: 8
    ShapeType: Text
    ShapeDimensions: 250, 425, 500, 50
    TextString: Class Project 2 - 2D Graphics Modeler
    TextColor: blue
    TextAlignment: AlignCenter
    TextPointSize: 10
    TextFontFamily: Comic Sans MS

    TextFontStyle: FlatCap
    TextFontWeight: Normal
*/



    int tempId = stoi(source[SHAPE_ID].substr(0,source[SHAPE_ID].length())); //Creates a temp int to hold the shape id#.
    string tempString = source[SHAPE_DIMS];                             //Uses stoi() function to convert its contents
    int i = 0, x=0, y=0;                                       //   into an integer.
    while(tempString[i] != ',')  //Parses through the third string (Shape Dimensions: 20, 90, 100, 20) to build the x coordinate of the starting point.
    {
        ++i;
    }
    x = stoi(tempString.substr(0,i)); //Assigns the value by converting the substring found with stoi().
    tempString = tempString.substr(i+1,tempString.length()); //truncates the previously parsed portion of the string and continues.
    i = 0;
    while(tempString[i] != ',')
    {
        ++i;
    }
    y = stoi(tempString.substr(0,i));  //repeats the same steps for the y coordinate.
    tempString = tempString.substr(i=1,tempString.length());
    QPoint nUL = QPoint(x,y); //Creates the start point as type Qpoint.

    i = 0;      //resets i

    int nw = 0;  //declares height and width vars
    int nh = 0;

    while(tempString[i] != ',')
    {
        ++i;
    }
    nw = stoi(tempString.substr(0,i));
    tempString = tempString.substr(i+1,tempString.length());

    i = 0; //resets i
    while(tempString[i] != '\n')
    {
        ++i;
    }
    nh = stoi(tempString.substr(0,i));

    //QPoint end = QPoint(x,y);  //Creates the end point as type QPoint.
    qreal width = stoi(source[4].substr(0,source[4].length()));  //Creats a qreal object, which is Qt special double, used for QPen object.
    QPen npen(Qt::NoBrush,width,getPenStyle(source[5]),getPenCapStyle(source[6]),getPenJoinStyle(source[7])); //Create the Qpen object using helper functions which determine its setting from the remaining strings.

    //Shape::Shape::shape s = Shape::Shape::shape::Text;
    //Line(QPaintDevice* device=nullptr,int nid=-1, QPen npen=Qt::NoPen, QBrush nbrush=Qt::NoBrush,QPoint s=QPoint(0,0), QPoint e=QPoint(0,0))
    //Line*    nline = new Line    (device,tempId,npen,Qt::NoBrush,start,end);    //Instantiates the new line object.

     //Line  (QPaintDevice* device=nullptr,int nid=-1, QPen npen=Qt::NoPen, QBrush nbrush=Qt::NoBrush, QPoint s=QPoint(0,0), QPoint e=QPoint(0,0))
    //Text   (QPaintDevice* device,        int nid=-1, QPen npen=Qt::NoPen, QBrush nbrush=Qt::NoBrush, QPoint nUL=QPoint(0,0),int nside=0, const QString & text="")

    //Line*      nline = new Line     (device,tempId,npen,Qt::NoBrush,start,end);
    tempString = source[3];
    Text* nText = new Text(device,tempId, npen, Qt::NoBrush, nUL, nw, nh, QString(""));  //Instantiates the new line object.

    return nText; //returns the pointer to the primary parser, where it will be put into the shape* vector.

}

Qt::GlobalColor getColor(const string& source)
{
    string tempString;
    for(int i =0; i <source.length(); ++i)
    {
        tempString[i] = toupper(source[i]);

    }
    if(tempString == "WHITE")
    {
        return Qt::white;
    }
    else if(tempString  == "BLACK")
    {
        return Qt::black;
    }
    else if(tempString  == "CYAN")
    {
        return Qt::cyan;
    }
    else if(tempString == "DARKCYAN")
    {
        return Qt::darkCyan;
    }
    else if(tempString  == "RED")
    {
        return Qt::red;
    }
    else if(tempString  == "DARKRED")
    {
        return Qt::darkRed;
    }
    else if(tempString  == "MAGENTA")
    {
        return Qt::magenta;
    }
    else if(tempString  == "DARKMAGENTA")
    {
        return Qt::darkMagenta;
    }
    else if(tempString  == "GREEN")
    {
        return Qt::green;
    }
    else if(tempString  == "DARKGREEN")
    {
        return Qt::darkGreen;
    }
    else if(tempString  == "YELLOW")
    {
        return Qt::yellow;
    }
    else if(tempString  == "DARKYELLOW")
    {
        return Qt::darkYellow;
    }
    else if(tempString  == "BLUE")
    {
        return Qt::blue;
    }
    else if(tempString  == "DARKBLUE")
    {
        return Qt::darkBlue;
    }
    else if(tempString  == "GRAY")
    {
        return Qt::gray;
    }
    else if(tempString  == "DARKGRAY")
    {
        return Qt::darkGray;
    }
    else if(tempString  == "LIGHTGRAY")
    {
        return Qt::lightGray;
    }
    else
    {
        return Qt::black;
    }
}

Qt::PenStyle getPenStyle(const string& source)
{
    string tempString;
    for(int i =0; i <source.length(); ++i)
    {
        tempString[i] = toupper(source[i]);
    }
    if(tempString == "SOLIDLINE")
    {
        return Qt::SolidLine;
    }
    else if(tempString == "DASHLINE")
    {
        return Qt::DashLine;
    }
    else if(tempString == "DOTLINE")
    {
        return Qt::DotLine;
    }
    else if(tempString == "DASHDOTLINE")
    {
        return Qt::DashDotLine;
    }
    else if(tempString == "DASHDOTDOTLINE")
    {
        return Qt::DashDotDotLine;
    }
    else if(tempString == "CUSTOMDASHLINE")
    {
        return Qt::CustomDashLine;
    }
    else
    {
        return Qt::SolidLine;
    }
}

Qt::PenCapStyle getPenCapStyle(const string& source)
{
    string tempString;
    for(int i =0; i <source.length(); ++i)
    {
        tempString[i] = toupper(source[i]);
    }
    if(tempString == "SQUARECAP")
    {
        return Qt::SquareCap;
    }
    else if(tempString == "FLATCAP")
    {
        return Qt::FlatCap;
    }
    else if(tempString == "ROUNDCAP")
    {
        return Qt::RoundCap;
    }
    else
    {
        return Qt::SquareCap;
    }
}

Qt::PenJoinStyle getPenJoinStyle(const string& source)
{
    string tempString;
    for(int i =0; i <source.length(); ++i)
    {
        tempString[i] = toupper(source[i]);
    }
    if(tempString == "BEVELJOIN")
    {
        return Qt::BevelJoin;
    }
    else if(tempString == "MITERJOIN")
    {
        return Qt::MiterJoin;
    }
    else if(tempString == "ROUNDJOIN")
    {
        return Qt::RoundJoin;
    }
    else
    {
        return Qt::BevelJoin;
    }

}

