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
Qt::PenStyle getPenStyle(const string &);
Qt::PenCapStyle getPenCapStyle(const string &);
Qt::PenJoinStyle getPenJoinStyle(const string &);

myStd::vector<Shape::Shape*> shapeParser(QPaintDevice* device)
{
    myStd::vector<Shape::Shape*> shapes;  //Create the primary vector to hold the shape object pointers.
    myStd::vector<std::string> tempShape;  // Create a temp string vector to hold each of the object blocks from the input file.
    string temp, sub;
    ifstream shapeFile;
    shapeFile.open("shapes.txt");
    while(!shapeFile.eof())  //PRIMARY LOOP - Ends once the file reaches its .eof() flag.
    {
        getline(shapeFile,temp);  //temp is filled with the each line from the text file.
        while(temp != " " || temp != "\n") //Continues till it hits an empty line, relfecting the end of a shapes information.
        {
            unsigned int i = 0;
            while(temp[i] != ' ' || i < temp.size())  //Parses through the string until it hits white space; end of title for each entry.
            {
                ++i;
            }
            sub = temp.substr(i+1,temp.size());  //Creates a new substring truncating the title, and keeping the meaningful information.
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
return shapes;
}

Shape::Shape* lineParse(const myStd::vector<string> &source,QPaintDevice* device)
//Takes in a temporary vector of strings representing the data of the shape to be instantiated.
//Each string is a line from the input file.
{
    int tempId = stoi(source[0].substr(0,source[0].length())); //Creates a timp int to hold the shape id#.
    string tempString = source[3];                             //Uses stoi() function to convert its contents
    int i = 0, x=0, y=0;                                       //   into an integer.
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
    qreal width = stoi(source[5].substr(0,source[5].length()));  //Creats a qreal object, which is Qt special double, used for QPen object.
    QPen npen(Qt::NoBrush,width,getPenStyle(source[6]),getPenCapStyle(source[7]),getPenJoinStyle(source[8])); //Create the Qpen object using helper functions which determine its setting from the remaining strings.
    Line* nline = new Line(device,tempId,npen,Qt::NoBrush,start,end);  //Instantiates the new line object.
    return nline; //returns the pointer to the primary parser, where it will be put into the shape* vector.
}

Shape::Shape* polyLineParse(const myStd::vector<string> &source,QPaintDevice* device)
{

}

Shape::Shape* polygonParse(const myStd::vector<string> &source,QPaintDevice* device)
{

}

Shape::Shape* rectangleParse(const myStd::vector<string> &source,QPaintDevice* device)
{

}

Shape::Shape* squareParse(const myStd::vector<string> &source,QPaintDevice* device)
{

}

Shape::Shape* ellipseParse(const myStd::vector<string> &source,QPaintDevice* device)
{

}

Shape::Shape* circleParse(const myStd::vector<string> &source,QPaintDevice* device)
{

}

Shape::Shape* textParse(const myStd::vector<string> &source,QPaintDevice* device)
{

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

