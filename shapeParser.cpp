#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include "shape.h"
#include "vector.h"

using namespace std;
using namespace Shape;
using namespace myStd;

Shape::Shape* lineParse(myStd::vector<string>&,QPaintDevice*);
Shape::Shape* polyLineParse(myStd::vector<string>&,QPaintDevice*);
Shape::Shape* polygonParse(myStd::vector<string>&,QPaintDevice*);
Shape::Shape* rectangleParse(myStd::vector<string>&,QPaintDevice*);
Shape::Shape* squareParse(myStd::vector<string>&,QPaintDevice*);
Shape::Shape* ellipseParse(myStd::vector<string>&,QPaintDevice*);
Shape::Shape* circleParse(myStd::vector<string>&,QPaintDevice*);
Shape::Shape* textParse(myStd::vector<string>&,QPaintDevice*);

Qt::GlobalColor getColor(string &);
Qt::PenStyle    getPenStyle(string &);
Qt::PenCapStyle getPenCapStyle(string &);
Qt::PenJoinStyle getPenJoinStyle(string &);

Qt::BrushStyle  getBrushStyle(string &);
Qt::GlobalColor getBrushColor(string &);
/*
    ShapeId: 1
    ShapeType: Line
    ShapeDimensions: 20, 90, 100, 20
    PenColor: blue
    PenWidth: 2
    PenStyle: DashDotLine
    PenCapStyle: FlatCap
    PenJoinStyle: MiterJoin
    BrushColor: white
    BrushStyle: NoBrush
    TextFontStyle: FlatCap
    TextFontWeight: Normal
*/

 int SHAPE_ID       = 0;
 int SHAPE_TYPE     = 1;
 int SHAPE_DIMS     = 2;
 int PEN_COLOR      = 3;
 int PEN_WIDTH      = 4;
 int PEN_STYLE      = 5;
 int PEN_CAP_STYLE  = 6;
 int PEN_JOIN_STYLE = 7;

 int BRUSH_COLOR    = 8;
 int BRUSH_STYLE    = 9;

 int FONT_STYLE     = 8;
 int FONT_WEIGHT    = 9;

myStd::vector<Shape::Shape*> shapeParser(QPaintDevice* device)
{
    myStd::vector<Shape::Shape*> shapes;  //Create the primary vector to hold the shape object pointers.
    myStd::vector<std::string> tempShape;  // Create a temp string vector to hold each of the object blocks from the input file.
    //std::vector<string> tempShape;

    string   temp, sub;
    ifstream shapeFile;
    shapeFile.open("shapes.txt");
    int count = 0; //to take care of the 1st empty line
    //int count2 = 0;
    while(!shapeFile.eof())  //PRIMARY LOOP - Ends once the file reaches its .eof() flag.
    {
        //add another while that would iterate through all data points until empty line, than call the right shape, pass the vector into it, create the object, pass the object into the vector of objects, and empty the 1st string vector and go until eof()

        getline(shapeFile,temp);  //temp is filled with the each line from the text file.
        cout << "temp.length()" << temp.length() << endl;

        if(temp.length() > 1 && count > 0)//> 1)// it always counts as 1 - QT (works fine in eclipse)
        {
            count++;
            int i = 0;

            while(temp[i] != '\n' && i < temp.size()) //Continues till it hits an empty line, relfecting the end of a shapes information.
            {
                if(temp[i] == ':')
                {
                    size_t pos = temp.find(" ");      // position of in str
                    sub = temp.substr (pos); //grabs the rest of the line
                    //cout << sub << endl;
                    tempShape.push_back(sub); //adds it to vector tempShape

                }
                ++i;
            }

        }
        else if(temp.length() == 1 && count == 0)//takes care of the 1st empty line
        {
            count++;
            cout << "1st empty line" << endl;
        }
        else
        {//error checking
            //count2++;
            cout << "ELSE!" << endl;

            tempShape[SHAPE_TYPE].erase(tempShape[SHAPE_TYPE].end()-1, tempShape[SHAPE_TYPE].end());

            cout << tempShape[SHAPE_TYPE] << endl;

            if(tempShape[SHAPE_TYPE] == " Line")
            {                        //   vector to the relevant parser function, which will create the shape object and return a pointer,
                //cout << "IM A HAPPY RUNTIME ERROR" << endl;
                //cout << "LINE!!!!" << endl;
                shapes.push_back(lineParse(tempShape,device));  //adding it to the shape vector.
            }
            else if(tempShape[SHAPE_TYPE] == " Polyline") //has to have a space in front of the type like this: " type"
            {
                //cout << "POLY POLY LINE!!!!" << endl;
                //shapes.push_back(polyLineParse(tempShape,device));
            }
            else if(tempShape[SHAPE_TYPE] == " Polygon")
            {
                //cout << "POLYGON!!!!" << endl;
                //shapes.push_back(polygonParse(tempShape,device));
            }
            else if(tempShape[SHAPE_TYPE] == " Rectangle")
            {
                //cout << "RECTANGLE!!!!" << endl;
                shapes.push_back(rectangleParse(tempShape,device));
            }
            else if(tempShape[SHAPE_TYPE] == " Square")
            {
                //cout << "SQUARE!!!!" << endl;
                shapes.push_back(squareParse(tempShape,device));
            }
            else if(tempShape[SHAPE_TYPE] == " Ellipse")
            {
                //cout << "ELLIPSE!!!!" << endl;
                shapes.push_back(ellipseParse(tempShape,device));
            }
            else if(tempShape[SHAPE_TYPE] == " Circle")
            {
                //cout << "CIRCLE!!!!" << endl;
                shapes.push_back(circleParse(tempShape,device));
            }
            else if(tempShape[SHAPE_TYPE] == " Text")
            {
                //cout << "TEXT!!!!" << endl;
                //shapes.push_back(textParse(tempShape,device));
            }
            else
            {
                cout << "\n\n**ERROR---\"PARSER\"---ERROR**\n\n";
            }
            //add emptying the vector
            //tempShape.clear(); is not a part of the vector, so will use erase

            cout << "tempShape.size() " << tempShape.size() << endl;
            for(int i =0; i < tempShape.size();++i)
            {
                cout << tempShape[i] << endl;
            }

            //deletes
            int vecSize = tempShape.size();
            for(int i = 0; i < vecSize; ++i)
            {
                tempShape.erase(tempShape.begin());
            }//empties the vector to create a new shape
        }//end the IF-THEN-ELSE-IF
    }//end while(!eof())

    /*cout << "Count: " << count << endl;
    cout << "Count ELSE: " << count2 << endl;*/
    shapeFile.close();
return shapes;
}

//all will have the same parameters
Shape::Shape* lineParse(myStd::vector<string> &source,QPaintDevice* device)
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
    cout << "HEY IM HERE INSIDE LINE PARSE" << endl;
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
    qreal width = stoi(source[PEN_WIDTH].substr(0,source[PEN_WIDTH].length()));  //Creats a qreal object, which is Qt special double, used for QPen object.

    //after width
    source[PEN_COLOR].erase(source[PEN_COLOR].end()-1, source[PEN_COLOR].end());
    source[PEN_STYLE].erase(source[PEN_STYLE].end()-1, source[PEN_STYLE].end());
    source[PEN_CAP_STYLE].erase(source[PEN_CAP_STYLE].end()-1, source[PEN_CAP_STYLE].end());
    source[PEN_JOIN_STYLE].erase(source[PEN_JOIN_STYLE].end()-1, source[PEN_JOIN_STYLE].end());

    /*Qt::PenStyle     newPenStyle     = getPenStyle(source[PEN_STYLE]);
    Qt::PenCapStyle  newPenCapStyle  = getPenCapStyle(source[PEN_CAP_STYLE]);
    Qt::PenJoinStyle newPenJoinStyle = getPenJoinStyle(source[PEN_JOIN_STYLE]);*/
    //QPen npen(Qt::NoBrush,width,newPenStyle,newPenCapStyle,newPenJoinStyle);
    QBrush *tempPenBrush = new QBrush(getColor(source[PEN_COLOR]));

    QPen npen(*tempPenBrush,width,getPenStyle(source[PEN_STYLE]),getPenCapStyle(source[PEN_CAP_STYLE]),getPenJoinStyle(source[PEN_JOIN_STYLE])); //Create the Qpen object using helper functions which determine its setting from the remaining strings.

    Line* nline = new Line(device,tempId,npen,Qt::NoBrush,start,end);  //Instantiates the new line object.

    return nline; //returns the pointer to the primary parser, where it will be put into the shape* vector.
}

Shape::Shape* polyLineParse( myStd::vector<string> &source,QPaintDevice* device)
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
    cout << "IM INSIDE THE POLYLINE PARSE" <<endl;

    int tempId = stoi(source[SHAPE_ID].substr(0,source[SHAPE_ID].length())); //Creates a temp int to hold the shape id#.
    string tempString = source[SHAPE_DIMS];                             //Uses stoi() function to convert its contents strings to ints
    int i = 0, x=0, y=0;                                       //   into an integer.

    myStd::vector<QPoint> vecOfPoints; //creates a vector to store Qpoints to than pass back at the end of the method
    //https://stackoverflow.com/questions/15129633/c-function-is-ambiguous-when-passing-pointers-to-vectors //might fix the issue

    cout << "IM RIGHT BEFORE THE WHILE LOOP" << endl;
    cout << "tempString: " << tempString << endl;
    cout << "tempString.size(): " << tempString.size() << endl;//real size should be 35
    //while(tempString != "\n")//parses the tempString var one by one until it hits the end of line character
    while(tempString.size() != 1)//parses the tempString var one by one until it hits the end of line character
    {
        cout << "IM INSIDE THE 1ST WHILE LOOP" << endl;
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
        cout << "tempString.size(): " << tempString.size() << endl;//real size should be 35
    }
    cout << "OUTSIDE THE WHILE LOOPS" << endl;
    //QPoint end = QPoint(x,y);  //Creates the end point as type QPoint.
    qreal width = stoi(source[PEN_WIDTH].substr(0,source[PEN_WIDTH].length()));  //Creats a qreal object, which is Qt special double, used for QPen object.

    source[PEN_COLOR].erase(source[PEN_COLOR].end()-1, source[PEN_COLOR].end());
    source[PEN_STYLE].erase(source[PEN_STYLE].end()-1, source[PEN_STYLE].end());
    source[PEN_CAP_STYLE].erase(source[PEN_CAP_STYLE].end()-1, source[PEN_CAP_STYLE].end());
    source[PEN_JOIN_STYLE].erase(source[PEN_JOIN_STYLE].end()-1, source[PEN_JOIN_STYLE].end());

    /*Qt::PenStyle     newPenStyle     = getPenStyle(source[PEN_STYLE]);
    Qt::PenCapStyle  newPenCapStyle  = getPenCapStyle(source[PEN_CAP_STYLE]);
    Qt::PenJoinStyle newPenJoinStyle = getPenJoinStyle(source[PEN_JOIN_STYLE]);*/
    //QPen npen(Qt::NoBrush,width,newPenStyle,newPenCapStyle,newPenJoinStyle);
    QBrush *tempPenBrush = new QBrush(getColor(source[PEN_COLOR]));

    //QPen npen(*tempPenBrush,width,getPenStyle(source[PEN_STYLE]),getPenCapStyle(source[PEN_CAP_STYLE]),getPenJoinStyle(source[PEN_JOIN_STYLE])); //Create the Qpen object using helper functions which determine its setting from the remaining strings.


    QPen npen(*tempPenBrush,width,getPenStyle(source[PEN_STYLE]),getPenCapStyle(source[PEN_CAP_STYLE]),getPenJoinStyle(source[PEN_JOIN_STYLE])); //Create the Qpen object using helper functions which determine its setting from the remaining strings.

    //Line(QPaintDevice* device=nullptr,int nid=-1, QPen npen=Qt::NoPen, QBrush nbrush=Qt::NoBrush,QPoint s=QPoint(0,0), QPoint e=QPoint(0,0))
    //Line*    nline = new Line    (device,tempId,npen,Qt::NoBrush,start,end);    //Instantiates the new line object.
    Polyline* nPline = new Polyline(device,tempId,npen,Qt::NoBrush,vecOfPoints);  //Instantiates the new line object.

    return nPline; //returns the pointer to the primary parser, where it will be put into the shape* vector.
}




Shape::Shape* polygonParse( myStd::vector<string> &source,QPaintDevice* device)
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
    qreal width = stoi(source[PEN_WIDTH].substr(0,source[PEN_WIDTH].length()));  //Creats a qreal object, which is Qt special double, used for QPen object.
    QPen npen(Qt::NoBrush,width,getPenStyle(source[PEN_STYLE]),getPenCapStyle(source[PEN_CAP_STYLE]),getPenJoinStyle(source[PEN_JOIN_STYLE])); //Create the Qpen object using helper functions which determine its setting from the remaining strings.


    //    Shape(device,nid,Shape::shape::Polygon,npen,nbrush){p = source;}

    //Line*    nline = new Line    (device,tempId,npen,Qt::NoBrush,start,end);    //Instantiates the new line object.

    //    Polygon                  (QPaintDevice* device,       int nid=-1,  QPen npen=Qt::NoPen, QBrush nbrush=Qt::NoBrush, vector<QPoint> &source=vector<QPoint>()):

    Polygon* nPoly = new Polygon(device,tempId,npen,Qt::NoBrush,vecOfPoints);  //Instantiates the new line object.

    return nPoly; //returns the pointer to the primary parser, where it will be put into the shape* vector.
}

Shape::Shape* rectangleParse( myStd::vector<string> &source,QPaintDevice* device)
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
    qreal width = stoi(source[PEN_WIDTH].substr(0,source[PEN_WIDTH].length()));  //Creats a qreal object, which is Qt special double, used for QPen object.

    //after width
    source[PEN_COLOR].erase(source[PEN_COLOR].end()-1, source[PEN_COLOR].end());
    source[PEN_STYLE].erase(source[PEN_STYLE].end()-1, source[PEN_STYLE].end());
    source[PEN_CAP_STYLE].erase(source[PEN_CAP_STYLE].end()-1, source[PEN_CAP_STYLE].end());
    source[PEN_JOIN_STYLE].erase(source[PEN_JOIN_STYLE].end()-1, source[PEN_JOIN_STYLE].end());

    source[BRUSH_COLOR].erase(source[BRUSH_COLOR].end()-1, source[BRUSH_COLOR].end());
    source[BRUSH_STYLE].erase(source[BRUSH_STYLE].end()-1, source[BRUSH_STYLE].end());
    /*Qt::PenStyle     newPenStyle     = getPenStyle(source[PEN_STYLE]);
    Qt::PenCapStyle  newPenCapStyle  = getPenCapStyle(source[PEN_CAP_STYLE]);
    Qt::PenJoinStyle newPenJoinStyle = getPenJoinStyle(source[PEN_JOIN_STYLE]);*/
    //QPen npen(Qt::NoBrush,width,newPenStyle,newPenCapStyle,newPenJoinStyle);

    //copy
    QBrush *tempPenBrush = new QBrush(getColor(source[PEN_COLOR]));

    QBrush *tempBrush = new QBrush(getBrushColor(source[BRUSH_COLOR])); //sets Brush Color
    tempBrush->setStyle(getBrushStyle(source[BRUSH_STYLE])); //sets Brush Style

    QPen npen(*tempPenBrush,width,getPenStyle(source[PEN_STYLE]),getPenCapStyle(source[PEN_CAP_STYLE]),getPenJoinStyle(source[PEN_JOIN_STYLE])); //Create the Qpen object using helper functions which determine its setting from the remaining strings.

    //copy
    Shape::Shape::shape s = Shape::Shape::shape::Rectangle;

    Rectangle* nRect = new Rectangle(device,tempId, s, npen, *tempBrush, nUL, nw, nh);  //need to dereference tempBrush!!!!!!!!!
    //Rectangle* nRect = new Rectangle(device,tempId, s, npen, Qt::NoBrush, nUL, nw, nh);  //Instantiates the new line object.

    return nRect; //returns the pointer to the primary parser, where it will be put into the shape* vector.

}

Shape::Shape* squareParse( myStd::vector<string> &source,QPaintDevice* device)
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
    qreal width = stoi(source[PEN_WIDTH].substr(0,source[PEN_WIDTH].length()));  //Creats a qreal object, which is Qt special double, used for QPen object.

    //after width
    source[PEN_COLOR].erase(source[PEN_COLOR].end()-1, source[PEN_COLOR].end());
    source[PEN_STYLE].erase(source[PEN_STYLE].end()-1, source[PEN_STYLE].end());
    source[PEN_CAP_STYLE].erase(source[PEN_CAP_STYLE].end()-1, source[PEN_CAP_STYLE].end());
    source[PEN_JOIN_STYLE].erase(source[PEN_JOIN_STYLE].end()-1, source[PEN_JOIN_STYLE].end());
    source[BRUSH_COLOR].erase(source[BRUSH_COLOR].end()-1, source[BRUSH_COLOR].end());
    source[BRUSH_STYLE].erase(source[BRUSH_STYLE].end()-1, source[BRUSH_STYLE].end());

    /*Qt::PenStyle     newPenStyle     = getPenStyle(source[PEN_STYLE]);
    Qt::PenCapStyle  newPenCapStyle  = getPenCapStyle(source[PEN_CAP_STYLE]);
    Qt::PenJoinStyle newPenJoinStyle = getPenJoinStyle(source[PEN_JOIN_STYLE]);*/
    //QPen npen(Qt::NoBrush,width,newPenStyle,newPenCapStyle,newPenJoinStyle);

    //copy
    QBrush *tempPenBrush = new QBrush(getColor(source[PEN_COLOR]));

    QBrush *tempBrush = new QBrush(getBrushColor(source[BRUSH_COLOR])); //sets Brush Color
    tempBrush->setStyle(getBrushStyle(source[BRUSH_STYLE])); //sets Brush Style

    QPen npen(*tempPenBrush,width,getPenStyle(source[PEN_STYLE]),getPenCapStyle(source[PEN_CAP_STYLE]),getPenJoinStyle(source[PEN_JOIN_STYLE])); //Create the Qpen object using helper functions which determine its setting from the remaining strings.
    //copy

    Square* nSquare = new Square(device,tempId, npen, *tempBrush, nUL, side);  //Instantiates the new line object.
    //Square* nSquare = new Square(device,tempId, npen, Qt::NoBrush, nUL, side);  //Instantiates the new line object.
    //new version of Square

    return nSquare; //returns the pointer to the primary parser, where it will be put into the shape* vector.
}

Shape::Shape* ellipseParse( myStd::vector<string> &source,QPaintDevice* device)
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
    qreal width = stoi(source[PEN_WIDTH].substr(0,source[PEN_WIDTH].length()));  //Creats a qreal object, which is Qt special double, used for QPen object.

    //after width
    source[PEN_COLOR].erase(source[PEN_COLOR].end()-1, source[PEN_COLOR].end());
    source[PEN_STYLE].erase(source[PEN_STYLE].end()-1, source[PEN_STYLE].end());
    source[PEN_CAP_STYLE].erase(source[PEN_CAP_STYLE].end()-1, source[PEN_CAP_STYLE].end());
    source[PEN_JOIN_STYLE].erase(source[PEN_JOIN_STYLE].end()-1, source[PEN_JOIN_STYLE].end());
    source[BRUSH_COLOR].erase(source[BRUSH_COLOR].end()-1, source[BRUSH_COLOR].end());
    source[BRUSH_STYLE].erase(source[BRUSH_STYLE].end()-1, source[BRUSH_STYLE].end());

    /*Qt::PenStyle     newPenStyle     = getPenStyle(source[PEN_STYLE]);
    Qt::PenCapStyle  newPenCapStyle  = getPenCapStyle(source[PEN_CAP_STYLE]);
    Qt::PenJoinStyle newPenJoinStyle = getPenJoinStyle(source[PEN_JOIN_STYLE]);*/
    //QPen npen(Qt::NoBrush,width,newPenStyle,newPenCapStyle,newPenJoinStyle);


    Qt::BrushStyle newBrush = getBrushStyle(source[BRUSH_STYLE]);
    Qt::GlobalColor newBrushColor = getBrushColor(source[BRUSH_COLOR]);

    Shape::Shape::shape s = Shape::Shape::shape::Ellipse;
    QBrush *tempPenBrush = new QBrush(getColor(source[PEN_COLOR]));

    QBrush *tempBrush = new QBrush(getBrushColor(source[BRUSH_COLOR])); //sets Brush Color
    tempBrush->setStyle(getBrushStyle(source[BRUSH_STYLE])); //sets Brush Style

    QPen npen(*tempPenBrush,width,getPenStyle(source[PEN_STYLE]),getPenCapStyle(source[PEN_CAP_STYLE]),getPenJoinStyle(source[PEN_JOIN_STYLE])); //Create the Qpen object using helper functions which determine its setting from the remaining strings.
    //copy

    Ellipse* nEllipse = new Ellipse(device,tempId, s, npen, *tempBrush, nUL, nrx, nry);  //Instantiates the new line object.

    return nEllipse; //returns the pointer to the primary parser, where it will be put into the shape* vector.




}

Shape::Shape* circleParse( myStd::vector<string> &source,QPaintDevice* device)
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

    qreal width = stoi(source[PEN_WIDTH].substr(0,source[PEN_WIDTH].length()));  //Creats a qreal object, which is Qt special double, used for QPen object.
    //after width
    source[PEN_COLOR].erase(source[PEN_COLOR].end()-1, source[PEN_COLOR].end());
    source[PEN_STYLE].erase(source[PEN_STYLE].end()-1, source[PEN_STYLE].end());
    source[PEN_CAP_STYLE].erase(source[PEN_CAP_STYLE].end()-1, source[PEN_CAP_STYLE].end());
    source[PEN_JOIN_STYLE].erase(source[PEN_JOIN_STYLE].end()-1, source[PEN_JOIN_STYLE].end());
    source[BRUSH_COLOR].erase(source[BRUSH_COLOR].end()-1, source[BRUSH_COLOR].end());
    source[BRUSH_STYLE].erase(source[BRUSH_STYLE].end()-1, source[BRUSH_STYLE].end());

    /*Qt::PenStyle     newPenStyle     = getPenStyle(source[PEN_STYLE]);
    Qt::PenCapStyle  newPenCapStyle  = getPenCapStyle(source[PEN_CAP_STYLE]);
    Qt::PenJoinStyle newPenJoinStyle = getPenJoinStyle(source[PEN_JOIN_STYLE]);*/
    //QPen npen(Qt::NoBrush,width,newPenStyle,newPenCapStyle,newPenJoinStyle);
    Qt::BrushStyle newBrush = getBrushStyle(source[BRUSH_STYLE]);
    Qt::GlobalColor newBrushColor = getBrushColor(source[BRUSH_COLOR]);

    QBrush *tempPenBrush = new QBrush(getColor(source[PEN_COLOR]));

    QBrush *tempBrush = new QBrush(getBrushColor(source[BRUSH_COLOR])); //sets Brush Color
    tempBrush->setStyle(getBrushStyle(source[BRUSH_STYLE])); //sets Brush Style

    QPen npen(*tempPenBrush,width,getPenStyle(source[PEN_STYLE]),getPenCapStyle(source[PEN_CAP_STYLE]),getPenJoinStyle(source[PEN_JOIN_STYLE])); //Create the Qpen object using helper functions which determine its setting from the remaining strings.
    //copy

    Circle* nCircle = new Circle(device,tempId, npen, *tempBrush, nUL, nr);
    //Circle* nCircle = new Circle(device,tempId, npen, Qt::NoBrush, nUL, nr);  //Instantiates the new line object.

    return nCircle; //returns the pointer to the primary parser, where it will be put into the shape* vector.

}

Shape::Shape* textParse( myStd::vector<string> &source,QPaintDevice* device)
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
    qreal width = stoi(source[PEN_WIDTH].substr(0,source[PEN_WIDTH].length()));  //Creats a qreal object, which is Qt special double, used for QPen object.
    //after width
    source[PEN_COLOR].erase(source[PEN_COLOR].end()-1, source[PEN_COLOR].end());
    source[PEN_STYLE].erase(source[PEN_STYLE].end()-1, source[PEN_STYLE].end());
    source[PEN_CAP_STYLE].erase(source[PEN_CAP_STYLE].end()-1, source[PEN_CAP_STYLE].end());
    source[PEN_JOIN_STYLE].erase(source[PEN_JOIN_STYLE].end()-1, source[PEN_JOIN_STYLE].end());
    source[BRUSH_COLOR].erase(source[BRUSH_COLOR].end()-1, source[BRUSH_COLOR].end());
    source[BRUSH_STYLE].erase(source[BRUSH_STYLE].end()-1, source[BRUSH_STYLE].end());

    /*Qt::PenStyle     newPenStyle     = getPenStyle(source[PEN_STYLE]);
    Qt::PenCapStyle  newPenCapStyle  = getPenCapStyle(source[PEN_CAP_STYLE]);
    Qt::PenJoinStyle newPenJoinStyle = getPenJoinStyle(source[PEN_JOIN_STYLE]);*/
    //QPen npen(Qt::NoBrush,width,newPenStyle,newPenCapStyle,newPenJoinStyle);
    QBrush *tempPenBrush = new QBrush(getColor(source[PEN_COLOR]));

    QPen npen(*tempPenBrush,width,getPenStyle(source[PEN_STYLE]),getPenCapStyle(source[PEN_CAP_STYLE]),getPenJoinStyle(source[PEN_JOIN_STYLE])); //Create the Qpen object using helper functions which determine its setting from the remaining strings.


    //QPen npen(Qt::NoBrush,width,getPenStyle(source[PEN_STYLE]),getPenCapStyle(source[PEN_CAP_STYLE]),getPenJoinStyle(source[PEN_JOIN_STYLE])); //Create the Qpen object using helper functions which determine its setting from the remaining strings.

    //Shape::Shape::shape s = Shape::Shape::shape::Text;
    //Line(QPaintDevice* device=nullptr,int nid=-1, QPen npen=Qt::NoPen, QBrush nbrush=Qt::NoBrush,QPoint s=QPoint(0,0), QPoint e=QPoint(0,0))
    //Line*    nline = new Line    (device,tempId,npen,Qt::NoBrush,start,end);    //Instantiates the new line object.

     //Line  (QPaintDevice* device=nullptr,int nid=-1, QPen npen=Qt::NoPen, QBrush nbrush=Qt::NoBrush, QPoint s=QPoint(0,0), QPoint e=QPoint(0,0))
    //Text   (QPaintDevice* device,        int nid=-1, QPen npen=Qt::NoPen, QBrush nbrush=Qt::NoBrush, QPoint nUL=QPoint(0,0),int nside=0,  QString & text="")

    //Line*      nline = new Line     (device,tempId,npen,Qt::NoBrush,start,end);
    tempString = source[3];

    Qt::BrushStyle newBrush = getBrushStyle(source[BRUSH_STYLE]);
    Qt::GlobalColor newBrushColor = getBrushColor(source[BRUSH_COLOR]);

    Text* nText = new Text(device,tempId, npen, newBrush, nUL, nw, nh, QString(""));

    //Text* nText = new Text(device,tempId, npen, Qt::NoBrush, nUL, nw, nh, QString(""));  //Instantiates the new line object.

    return nText; //returns the pointer to the primary parser, where it will be put into the shape* vector.

}

Qt::GlobalColor getColor(string& source) //myStd::vector<string> &source
{
   /* cout << "GET COLOR" << endl;
    cout << source << endl;
    cout << source.size() << endl;*/

        if(source == " white") //white
        {
            return Qt::GlobalColor::white;
        }
        else if(source == " black")
        {
            return Qt::GlobalColor::black;
        }
        else if(source == " cyan")
        {
            return Qt::GlobalColor::cyan;
        }
        else if(source == " darkCyan")
        {
            return Qt::GlobalColor::darkCyan;
        }
        else if(source == " red")
        {
            return Qt::GlobalColor::red;
        }
        else if(source == " darkRed")
        {
            return Qt::GlobalColor::darkRed;
        }
        else if(source == " magenta")
        {
            return Qt::GlobalColor::magenta;
        }
        else if(source == " darkMagenta")
        {
            return Qt::GlobalColor::darkMagenta;
        }
        else if(source == " green")
        {
            return Qt::GlobalColor::green;
        }
        else if(source == " darkGreen")
        {
            return Qt::GlobalColor::darkGreen;
        }
        else if(source == " yellow")
        {
            return Qt::GlobalColor::yellow;
        }
        else if(source == " darkYellow")
        {
            return Qt::GlobalColor::darkYellow;
        }
        else if(source == " blue")
        {
            //cout << "YES IT IS BLUE" << endl;
            return Qt::GlobalColor::blue;
        }
        else if(source == " darkBlue")
        {
            return Qt::GlobalColor::darkBlue;
        }
        else if(source == " gray")
        {
            return Qt::GlobalColor::gray;
        }
        else if(source == " darkGray")
        {
            return Qt::GlobalColor::darkGray;
        }
        else if(source == " lightGray")
        {
            return Qt::GlobalColor::lightGray;
        }
}

Qt::PenStyle getPenStyle(string& source)
{
    /*cout << "GET PEN STYLE" << endl;
    cout << source << endl;
    cout << source.size() << endl;*/

    if(source == " SolidLine")
    {
        return Qt::SolidLine;
    }
    else if(source == " DashLine")
    {
        return Qt::DashLine;
    }
    else if(source == " DotLine")
    {
        return Qt::DotLine;
    }
    else if(source == " DashDotLine")
    {
        //cout << "DASH DOT LINE COMPARISON WORKS!" << endl;
        return Qt::DashDotLine;
    }
    else if(source == " DashDotDotLine")
    {
        return Qt::DashDotDotLine;
    }
    else if(source == " CustomDashLine")
    {
        return Qt::CustomDashLine;
    }
    else
    {
        return Qt::SolidLine;
    }
}

Qt::PenCapStyle getPenCapStyle( string& source)
{
    /*cout << "PEN CAP STYLE" << endl;
    cout << source << endl;
    cout << source.size() << endl;*/
    if(source == " SquareCap")
    {
        return Qt::SquareCap;
    }
    else if(source == " FlatCap")
    {
        //cout << "FLATCAP COMPARISON WORKS" << endl;
        return Qt::FlatCap;
    }
    else if(source == " RoundCap")
    {
        return Qt::RoundCap;
    }
    else
    {
        return Qt::SquareCap;
    }
}

Qt::PenJoinStyle getPenJoinStyle( string& source)
{
    /*cout << "PEN JOIN STYLE" << endl;
    cout << source << endl;
    cout << source.size() << endl;*/

    if(source == " BevelJoin")
    {
        return Qt::BevelJoin;
    }
    else if(source == " MiterJoin") //"MITERJOIN"
    {
        //cout << "PEN JOIN STYLE COMPARISON WORKS" << endl;
        return Qt::MiterJoin;
    }
    else if(source == " RoundJoin") //"ROUNDJOIN"
    {
        return Qt::RoundJoin;
    }
    else
    {
        return Qt::BevelJoin;
    }

}


Qt::BrushStyle getBrushStyle(string &source)
{
    cout << "GET BRUSH STYLE" << endl;
    cout << source << endl;
    cout << source.size() << endl;

    /*
SolidPattern
VerPattern
HorPattern
NoBrush
*/

    if(source == " SolidPattern")
    {
        return Qt::SolidPattern;
    }
    else if(source == " VerPattern")
    {
        //cout << "PEN JOIN STYLE COMPARISON WORKS" << endl;
        return Qt::VerPattern;
    }
    else if(source == " HorPattern")
    {
        return Qt::HorPattern;
    }
    else
    {
        return Qt::NoBrush;
    }
}


Qt::GlobalColor getBrushColor(string &source)
{
    cout << "GET BRUSH COLOR" << endl;
    cout << source << endl;
    cout << source.size() << endl;

    if(source == " white") //white
    {
        return Qt::GlobalColor::white;
    }
    else if(source == " black")
    {
        return Qt::GlobalColor::black;
    }
    else if(source == " cyan")
    {
        return Qt::GlobalColor::cyan;
    }
    else if(source == " darkCyan")
    {
        return Qt::GlobalColor::darkCyan;
    }
    else if(source == " red")
    {
        return Qt::GlobalColor::red;
    }
    else if(source == " darkRed")
    {
        return Qt::GlobalColor::darkRed;
    }
    else if(source == " magenta")
    {
        return Qt::GlobalColor::magenta;
    }
    else if(source == " darkMagenta")
    {
        return Qt::GlobalColor::darkMagenta;
    }
    else if(source == " green")
    {
        return Qt::GlobalColor::green;
    }
    else if(source == " darkGreen")
    {
        return Qt::GlobalColor::darkGreen;
    }
    else if(source == " yellow")
    {
        return Qt::GlobalColor::yellow;
    }
    else if(source == " darkYellow")
    {
        return Qt::GlobalColor::darkYellow;
    }
    else if(source == " blue")
    {
        //cout << "YES IT IS BLUE" << endl;
        return Qt::GlobalColor::blue;
    }
    else if(source == " darkBlue")
    {
        return Qt::GlobalColor::darkBlue;
    }
    else if(source == " gray")
    {
        return Qt::GlobalColor::gray;
    }
    else if(source == " darkGray")
    {
        return Qt::GlobalColor::darkGray;
    }
    else if(source == " lightGray")
    {
        return Qt::GlobalColor::lightGray;
    }
}
