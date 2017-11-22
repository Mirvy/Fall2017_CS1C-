#include "MainWindow.h"
#include <fstream>
#include <iostream>

using namespace std;

//saveFile(): saves the current shapes to a savefile for future retrieval
void saveFile(myStd::vector<Shape::Shape*> &source)
{
    //Creates a vector of strings; one for each attribut of the shape
    myStd::vector<QString> itemList;
    QString pointList;
    ofstream outFile;
    outFile.open("shapes.txt");

    //Runs for every i number of shapes
    for(int i = 0; i < source.size();++i)
    {
        //Cleans the strings for each new shape
        int itemSize= itemList.size();
        for(int i = 0; i < itemSize; ++i)
        {
            itemList.erase(itemList.begin());
        }
        pointList.clear();

        //Determines which shape is being saved to file
        switch(source[i]->getShape())
        {

        //The save operation is the same for each shape barring minor
        //alterations such as the shape type string and dimensions.
        //Steps will be outlines for line as a reference to how the
        //operations are performed.

        //In addition, polyline and polygons handling of multiple
        //points are unique therefor their process will be defined
        //as well.

        //Line
        case 0:

            //Creates a string for each attribute which will be written to file
            itemList.push_back("");
            itemList.push_back("ShapeId: ");
            itemList[1].append(QString::number(source[i]->getId()));
            itemList.push_back("ShapeType: Line");
            itemList.push_back("ShapeDimensions: ");

            //For most shapes, except polygon and polyline, the following
            //represents how points are stored:
            //
            //Each value or point is appended to a string which is appened
            //to the dimension string
            pointList = QString::number(source[i]->getStart().x());
            pointList.append(", ");
            pointList.append(QString::number(source[i]->getStart().y()));
            pointList.append(", ");
            pointList.append(QString::number(source[i]->getEnd().x()));
            pointList.append(", ");
            pointList.append(QString::number(source[i]->getEnd().y()));
            itemList[3].append(pointList);
            itemList.push_back("PenColor: ");

            //To determine the pen color, a nested switch statement is used:
            //
            //First the hue is checked to determine which groups of colors
            //the color might be and subsequently uses its value to differentiate
            //between the colors in each subgroup.
            //
            //This was necessary since Qt::globalColor is not recoverable
            //from a QColor object
            //
            //This same switch statment structure is used for other shapes with
            //fill color, as well as text shape's pen color.
            switch(source[i]->getPen().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {
                        case 0:itemList[4].append("black");break;
                        case 128:itemList[4].append("darkGray");break;
                        case 192:itemList[4].append("lightGray");break;
                        case 255:itemList[4].append("white");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkRed");break;
                        case 255:itemList[4].append("red");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkGreen");break;
                        case 255:itemList[4].append("green");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkBlue");break;
                        case 164:itemList[4].append("gray");break;
                        case 255:itemList[4].append("blue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkCyan");break;
                        case 255:itemList[4].append("cyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkMagenta");break;
                        case 255:itemList[4].append("magenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkYellow");break;
                        case 255:itemList[4].append("yellow");break;
                    }
                    break;
            }
            itemList.push_back("PenWidth: ");
            itemList[5].append(QString::number(source[i]->getPen().width()));
            itemList.push_back("PenStyle: ");

            //For Pen style, capstyle, and canpJoinStyle, a simple switch
            //statement is used to check its relevant enum and deterimine
            //which type applies.
            switch(source[i]->getPen().style())
            {
            case 0:itemList[6].append("NoPen");break;
            case 1:itemList[6].append("SolidLine");break;
            case 2:itemList[6].append("DashLine");break;
            case 3:itemList[6].append("DotLine");break;
            case 4:itemList[6].append("DashDotLine");break;
            case 5:itemList[6].append("DashDotDotLine");break;
            }
            itemList.push_back("PenCapStyle: ");
            switch(source[i]->getPen().capStyle())
            {
            case 0:itemList[7].append("FlatCap");break;
            case 16:itemList[7].append("SquareCap");break;
            case 32:itemList[7].append("RoundCap");break;
            }
            itemList.push_back("PenCapJoinStyle: ");
            switch(source[i]->getPen().joinStyle())
            {
            case 0:itemList[8].append("MiterJoin");break;
            case 64:itemList[8].append("BevelJoin");break;
            case 128:itemList[8].append("RoundJoin");break;
            }

            //The accumalated string vector is cycled through, and
            //written to the output file.
            for(int i = 0;i < itemList.size();++i)
            {
                outFile << itemList[i].toStdString() << " \n";
            }
            break;

        //Polygon and polyline have a unique point system which requires
        //additional documenting, see below.
        case 1:
        {
            itemList.push_back("");
            itemList.push_back("ShapeId: ");
            itemList[1].append(QString::number(source[i]->getId()));
            itemList.push_back("ShapeType: Polyline");
            itemList.push_back("ShapeDimensions: ");

            //For polyline and polygon, for each point in its point vector a substring
            //is appended to the dimension string.
            for(myStd::vector<QPoint>::iterator p = source[i]->getPoints().begin();p < source[i]->getPoints().end();++p)
            {
                pointList = (QString::number(p->x()));
                pointList.append(", ");
                pointList.append(QString::number(p->y()));
                if(p != source[i]->getPoints().end()-1)
                {
                    pointList.append(", ");
                }
                itemList[3].append(pointList);
                pointList.clear();
            }
            itemList.push_back("PenColor: ");
            switch(source[i]->getPen().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {
                        case 0:itemList[4].append("black");break;
                        case 128:itemList[4].append("darkGray");break;
                        case 192:itemList[4].append("lightGray");break;
                        case 255:itemList[4].append("white");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkRed");break;
                        case 255:itemList[4].append("red");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkGreen");break;
                        case 255:itemList[4].append("green");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 164:itemList[4].append("gray");break;
                        case 128:itemList[4].append("darkBlue");break;
                        case 255:itemList[4].append("blue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkCyan");break;
                        case 255:itemList[4].append("cyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkMagenta");break;
                        case 255:itemList[4].append("magenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkYellow");break;
                        case 255:itemList[4].append("yellow");break;
                    }
                    break;
            }
            itemList.push_back("PenWidth: ");
            itemList[5].append(QString::number(source[i]->getPen().width()));
            itemList.push_back("PenStyle: ");
            switch(source[i]->getPen().style())
            {
            case 0:itemList[6].append("NoPen");break;
            case 1:itemList[6].append("SolidLine");break;
            case 2:itemList[6].append("DashLine");break;
            case 3:itemList[6].append("DotLine");break;
            case 4:itemList[6].append("DashDotLine");break;
            case 5:itemList[6].append("DashDotDotLine");break;
            }
            itemList.push_back("PenCapStyle: ");
            switch(source[i]->getPen().capStyle())
            {
            case 0:itemList[7].append("FlatCap");break;
            case 16:itemList[7].append("SquareCap");break;
            case 32:itemList[7].append("RoundCap");break;
            }
            itemList.push_back("PenCapJoinStyle: ");
            switch(source[i]->getPen().joinStyle())
            {
            case 0:itemList[8].append("MiterJoin");break;
            case 64:itemList[8].append("BevelJoin");break;
            case 128:itemList[8].append("RoundJoin");break;
            }
            for(int i = 0;i < itemList.size();++i)
            {
                std::cout << itemList[i].toStdString() << " \n";
                outFile << itemList[i].toStdString() << " \n";
            }
            break;
        }
        case 2:
        {
            itemList.push_back("");
            itemList.push_back("ShapeId: ");
            itemList[1].append(QString::number(source[i]->getId()));
            itemList.push_back("ShapeType: Polygon");
            itemList.push_back("ShapeDimensions: ");
            for(myStd::vector<QPoint>::iterator p = source[i]->getPoints().begin();p < source[i]->getPoints().end();++p)
            {
                pointList = (QString::number(p->x()));
                pointList.append(", ");
                pointList.append(QString::number(p->y()));
                if(p != source[i]->getPoints().end()-1)
                {
                    pointList.append(", ");
                }
                itemList[3].append(pointList);
                pointList.clear();
            }
            itemList.push_back("PenColor: ");
            switch(source[i]->getPen().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {                       
                        case 0:itemList[4].append("black");break;
                        case 128:itemList[4].append("darkGray");break;
                        case 192:itemList[4].append("lightGray");break;
                        case 255:itemList[4].append("white");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkRed");break;
                        case 255:itemList[4].append("red");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkGreen");break;
                        case 255:itemList[4].append("green");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 164:itemList[4].append("gray");break;
                        case 128:itemList[4].append("darkBlue");break;
                        case 255:itemList[4].append("blue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkCyan");break;
                        case 255:itemList[4].append("cyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkMagenta");break;
                        case 255:itemList[4].append("magenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkYellow");break;
                        case 255:itemList[4].append("yellow");break;
                    }
                    break;
            }
            itemList.push_back("PenWidth: ");
            itemList[5].append(QString::number(source[i]->getPen().width()));
            itemList.push_back("PenStyle: ");
            switch(source[i]->getPen().style())
            {
            case 0:itemList[6].append("NoPen");break;
            case 1:itemList[6].append("SolidLine");break;
            case 2:itemList[6].append("DashLine");break;
            case 3:itemList[6].append("DotLine");break;
            case 4:itemList[6].append("DashDotLine");break;
            case 5:itemList[6].append("DashDotDotLine");break;
            }
            itemList.push_back("PenCapStyle: ");
            switch(source[i]->getPen().capStyle())
            {
            case 0:itemList[7].append("FlatCap");break;
            case 16:itemList[7].append("SquareCap");break;
            case 32:itemList[7].append("RoundCap");break;
            }
            itemList.push_back("PenCapJoinStyle: ");
            switch(source[i]->getPen().joinStyle())
            {
            case 0:itemList[8].append("MiterJoin");break;
            case 64:itemList[8].append("BevelJoin");break;
            case 128:itemList[8].append("RoundJoin");break;
            }
            itemList.push_back("BrushColor: ");
            switch(source[i]->getBrush().color().hue())
            {
            case -1: switch(source[i]->getBrush().color().value())
                    {
                        case 0:itemList[9].append("black");break;
                        case 128:itemList[9].append("darkGray");break;
                        case 192:itemList[9].append("lightGray");break;
                        case 255:itemList[9].append("white");break;
                    }
                    break;
            case 0: switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkRed");break;
                        case 255:itemList[9].append("red");break;
                    }
                    break;
            case 120:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkGreen");break;
                        case 255:itemList[9].append("green");break;
                    }
                    break;
            case 240:switch(source[i]->getBrush().color().value())
                    {
                        case 164:itemList[9].append("gray");break;
                        case 128:itemList[9].append("darkBlue");break;
                        case 255:itemList[9].append("blue");break;
                    }
                    break;
            case 180:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkCyan");break;
                        case 255:itemList[9].append("cyan");break;
                    }
                    break;
            case 300:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkMagenta");break;
                        case 255:itemList[9].append("magenta");break;
                    }
                    break;
            case 60:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkYellow");break;
                        case 255:itemList[9].append("yellow");break;
                    }
                    break;
            }
            itemList.push_back("BrushStyle: ");
            switch(source[i]->getBrush().style())
            {
            case 0:itemList[10].append("NoBrush");break;
            case 1:itemList[10].append("SolidPattern");break;
            case 2:itemList[10].append("Dense1Pattern");break;
            case 3:itemList[10].append("Dense2Pattern");break;
            case 4:itemList[10].append("Dense3Pattern");break;
            case 5:itemList[10].append("Dense4Pattern");break;
            case 6:itemList[10].append("Dense5Pattern");break;
            case 7:itemList[10].append("Dense6Pattern");break;
            case 8:itemList[10].append("Dense7Pattern");break;
            case 9:itemList[10].append("HorPattern");break;
            case 10:itemList[10].append("VerPattern");break;
            case 11:itemList[10].append("CrossPattern");break;
            case 12:itemList[10].append("BDiagPattern");break;
            case 13:itemList[10].append("FDiagPattern");break;
            case 14:itemList[10].append("DiagCrossPattern");;break;
            }
            for(int i = 0;i < itemList.size();++i)
            {
                std::cout << itemList[i].toStdString() << " \n";
                outFile << itemList[i].toStdString() << " \n";
            }
            break;
        }
        case 3:
            itemList.push_back("");
            itemList.push_back("ItemId: ");
            itemList[1].append(QString::number(source[i]->getId()));
            itemList.push_back("ShapeType: Rectangle");
            itemList.push_back("ShapeDimensions: ");
            pointList = (QString::number(source[i]->getUpperLeft().x()));
            pointList.append(", ");
            pointList.append(QString::number(source[i]->getUpperLeft().y()));
            pointList.append(", ");
            pointList.append(QString::number(source[i]->getWidth()));
            pointList.append(", ");
            pointList.append(QString::number(source[i]->getHeight()));
            itemList[3].append(pointList);
            itemList.push_back("PenColor: ");
            switch(source[i]->getPen().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {
                        case 0:itemList[4].append("black");break;
                        case 128:itemList[4].append("darkGray");break;
                        case 192:itemList[4].append("lightGray");break;
                        case 255:itemList[4].append("white");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkRed");break;
                        case 255:itemList[4].append("red");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkGreen");break;
                        case 255:itemList[4].append("green");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 164:itemList[4].append("gray");break;
                        case 128:itemList[4].append("darkBlue");break;
                        case 255:itemList[4].append("blue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkCyan");break;
                        case 255:itemList[4].append("cyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkMagenta");break;
                        case 255:itemList[4].append("magenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkYellow");break;
                        case 255:itemList[4].append("yellow");break;
                    }
                    break;
            }
            itemList.push_back("PenWidth: ");
            itemList[5].append(QString::number(source[i]->getPen().width()));
            itemList.push_back("PenStyle: ");
            switch(source[i]->getPen().style())
            {
            case 0:itemList[6].append("NoPen");break;
            case 1:itemList[6].append("SolidLine");break;
            case 2:itemList[6].append("DashLine");break;
            case 3:itemList[6].append("DotLine");break;
            case 4:itemList[6].append("DashDotLine");break;
            case 5:itemList[6].append("DashDotDotLine");break;
            }
            itemList.push_back("PenCapStyle: ");
            switch(source[i]->getPen().capStyle())
            {
            case 0:itemList[7].append("FlatCap");break;
            case 16:itemList[7].append("SquareCap");break;
            case 32:itemList[7].append("RoundCap");break;
            }
            itemList.push_back("PenCapJoinStyle: ");
            switch(source[i]->getPen().joinStyle())
            {
            case 0:itemList[8].append("MiterJoin");break;
            case 64:itemList[8].append("BevelJoin");break;
            case 128:itemList[8].append("RoundJoin");break;
            }
            itemList.push_back("BrushColor: ");
            switch(source[i]->getBrush().color().hue())
            {
            case -1: switch(source[i]->getBrush().color().value())
                    {
                        case 0:itemList[9].append("black");break;
                        case 128:itemList[9].append("darkGray");break;
                        case 192:itemList[9].append("lightGray");break;
                        case 255:itemList[9].append("white");break;
                    }
                    break;
            case 0: switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkRed");break;
                        case 255:itemList[9].append("red");break;
                    }
                    break;
            case 120:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkGreen");break;
                        case 255:itemList[9].append("green");break;
                    }
                    break;
            case 240:switch(source[i]->getBrush().color().value())
                    {
                        case 164:itemList[9].append("gray");break;
                        case 128:itemList[9].append("darkBlue");break;
                        case 255:itemList[9].append("blue");break;
                    }
                    break;
            case 180:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkCyan");break;
                        case 255:itemList[9].append("cyan");break;
                    }
                    break;
            case 300:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkMagenta");break;
                        case 255:itemList[9].append("magenta");break;
                    }
                    break;
            case 60:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkYellow");break;
                        case 255:itemList[9].append("yellow");break;
                    }
                    break;
            }
            itemList.push_back("BrushStyle: ");
            switch(source[i]->getBrush().style())
            {
            case 0:itemList[10].append("NoBrush");break;
            case 1:itemList[10].append("SolidPattern");break;
            case 2:itemList[10].append("Dense1Pattern");break;
            case 3:itemList[10].append("Dense2Pattern");break;
            case 4:itemList[10].append("Dense3Pattern");break;
            case 5:itemList[10].append("Dense4Pattern");break;
            case 6:itemList[10].append("Dense5Pattern");break;
            case 7:itemList[10].append("Dense6Pattern");break;
            case 8:itemList[10].append("Dense7Pattern");break;
            case 9:itemList[10].append("HorPattern");break;
            case 10:itemList[10].append("VerPattern");break;
            case 11:itemList[10].append("CrossPattern");break;
            case 12:itemList[10].append("BDiagPattern");break;
            case 13:itemList[10].append("FDiagPattern");break;
            case 14:itemList[10].append("DiagCrossPattern");;break;
            }
            for(int i = 0;i < itemList.size();++i)
            {
                std::cout << itemList[i].toStdString() << " \n";
                outFile << itemList[i].toStdString() << " \n";
            }
            break;
        case 4:
            itemList.push_back("");
            itemList.push_back("ShapeId: ");
            itemList[1].append(QString::number(source[i]->getId()));
            itemList.push_back("ShapeType: Square");
            itemList.push_back("ShapeDimensions: ");
            pointList = (QString::number(source[i]->getUpperLeft().x()));
            pointList.append(", ");
            pointList.append(QString::number(source[i]->getUpperLeft().y()));
            pointList.append(", ");
            pointList.append(QString::number(source[i]->getWidth()));
            itemList[3].append(pointList);
            itemList.push_back("PenColor: ");
            switch(source[i]->getPen().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {
                        case 0:itemList[4].append("black");break;
                        case 128:itemList[4].append("darkGray");break;
                        case 192:itemList[4].append("lightGray");break;
                        case 255:itemList[4].append("white");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkRed");break;
                        case 255:itemList[4].append("red");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkGreen");break;
                        case 255:itemList[4].append("green");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 164:itemList[4].append("gray");break;
                        case 128:itemList[4].append("darkBlue");break;
                        case 255:itemList[4].append("blue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[4].append("cyan");break;
                        case 128:itemList[4].append("darkCyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkMagenta");break;
                        case 255:itemList[4].append("magenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkYellow");break;
                        case 255:itemList[4].append("yellow");break;
                    }
                    break;
            }
            itemList.push_back("PenWidth: ");
            itemList[5].append(QString::number(source[i]->getPen().width()));
            itemList.push_back("PenStyle: ");
            switch(source[i]->getPen().style())
            {
            case 0:itemList[6].append("NoPen");break;
            case 1:itemList[6].append("SolidLine");break;
            case 2:itemList[6].append("DashLine");break;
            case 3:itemList[6].append("DotLine");break;
            case 4:itemList[6].append("DashDotLine");break;
            case 5:itemList[6].append("DashDotDotLine");break;
            }
            itemList.push_back("PenCapStyle: ");
            switch(source[i]->getPen().capStyle())
            {
            case 0:itemList[7].append("FlatCap");break;
            case 16:itemList[7].append("SquareCap");break;
            case 32:itemList[7].append("RoundCap");break;
            }
            itemList.push_back("PenCapJoinStyle: ");
            switch(source[i]->getPen().joinStyle())
            {
            case 0:itemList[8].append("MiterJoin");break;
            case 64:itemList[8].append("BevelJoin");break;
            case 128:itemList[8].append("RoundJoin");break;
            }
            itemList.push_back("BrushColor: ");
            switch(source[i]->getBrush().color().hue())
            {
            case -1: switch(source[i]->getBrush().color().value())
                    {
                        case 0:itemList[9].append("black");break;
                        case 128:itemList[9].append("darkGray");break;
                        case 192:itemList[9].append("lightGray");break;
                        case 255:itemList[9].append("white");break;
                    }
                    break;
            case 0: switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkRed");break;
                        case 255:itemList[9].append("red");break;
                    }
                    break;
            case 120:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkGreen");break;
                        case 255:itemList[9].append("green");break;
                    }
                    break;
            case 240:switch(source[i]->getBrush().color().value())
                    {
                        case 164:itemList[9].append("gray");break;
                        case 128:itemList[9].append("darkBlue");break;
                        case 255:itemList[9].append("blue");break;
                    }
                    break;
            case 180:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkCyan");break;
                        case 255:itemList[9].append("cyan");break;
                    }
                    break;
            case 300:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkMagenta");break;
                        case 255:itemList[9].append("magenta");break;
                    }
                    break;
            case 60:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkYellow");break;
                        case 255:itemList[9].append("yellow");break;
                    }
                    break;
            }
            itemList.push_back("BrushStyle: ");
            switch(source[i]->getBrush().style())
            {
            case 0:itemList[10].append("NoBrush");break;
            case 1:itemList[10].append("SolidPattern");break;
            case 2:itemList[10].append("Dense1Pattern");break;
            case 3:itemList[10].append("Dense2Pattern");break;
            case 4:itemList[10].append("Dense3Pattern");break;
            case 5:itemList[10].append("Dense4Pattern");break;
            case 6:itemList[10].append("Dense5Pattern");break;
            case 7:itemList[10].append("Dense6Pattern");break;
            case 8:itemList[10].append("Dense7Pattern");break;
            case 9:itemList[10].append("HorPattern");break;
            case 10:itemList[10].append("VerPattern");break;
            case 11:itemList[10].append("CrossPattern");break;
            case 12:itemList[10].append("BDiagPattern");break;
            case 13:itemList[10].append("FDiagPattern");break;
            case 14:itemList[10].append("DiagCrossPattern");;break;
            }
            for(int i = 0;i < itemList.size();++i)
            {
                std::cout << itemList[i].toStdString() << " \n";
                outFile << itemList[i].toStdString() << " \n";
            }
            break;
        case 5:
            itemList.push_back("");
            itemList.push_back("ShapeId: ");
            itemList[1].append(QString::number(source[i]->getId()));
            itemList.push_back("ShapeType: Ellipse");
            itemList.push_back("ShapeDimensions: ");
            pointList = (QString::number(source[i]->getOrigin().x()));
            pointList.append(", ");
            pointList.append(QString::number(source[i]->getOrigin().y()));
            pointList.append(", ");
            pointList.append(QString::number(source[i]->getRx()));
            pointList.append(", ");
            pointList.append(QString::number(source[i]->getRy()));
            itemList[3].append(pointList);
            itemList.push_back("PenColor: ");
            switch(source[i]->getPen().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {
                        case 0:itemList[4].append("black");break;
                        case 128:itemList[4].append("darkGray");break;
                        case 192:itemList[4].append("lightGray");break;
                        case 255:itemList[4].append("white");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkRed");break;
                        case 255:itemList[4].append("red");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkGreen");break;
                        case 255:itemList[4].append("green");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkBlue");break;
                        case 164:itemList[4].append("gray");break;
                        case 255:itemList[4].append("blue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkCyan");break;
                        case 255:itemList[4].append("cyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkMagenta");break;
                        case 255:itemList[4].append("magenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkYellow");break;
                        case 255:itemList[4].append("yellow");break;
                    }
                    break;
            }
            itemList.push_back("PenWidth: ");
            itemList[5].append(QString::number(source[i]->getPen().width()));
            itemList.push_back("PenStyle: ");
            switch(source[i]->getPen().style())
            {
            case 0:itemList[6].append("NoPen");break;
            case 1:itemList[6].append("SolidLine");break;
            case 2:itemList[6].append("DashLine");break;
            case 3:itemList[6].append("DotLine");break;
            case 4:itemList[6].append("DashDotLine");break;
            case 5:itemList[6].append("DashDotDotLine");break;
            }
            itemList.push_back("PenCapStyle: ");
            switch(source[i]->getPen().capStyle())
            {
            case 0:itemList[7].append("FlatCap");break;
            case 16:itemList[7].append("SquareCap");break;
            case 32:itemList[7].append("RoundCap");break;
            }
            itemList.push_back("PenCapJoinStyle: ");
            switch(source[i]->getPen().joinStyle())
            {
            case 0:itemList[8].append("MiterJoin");break;
            case 64:itemList[8].append("BevelJoin");break;
            case 128:itemList[8].append("RoundJoin");break;
            }
            itemList.push_back("BrushColor: ");
            switch(source[i]->getBrush().color().hue())
            {
            case -1: switch(source[i]->getBrush().color().value())
                    {
                        case 0:itemList[9].append("black");break;
                        case 128:itemList[9].append("darkGray");break;
                        case 192:itemList[9].append("lightGray");break;
                        case 255:itemList[9].append("white");break;
                    }
                    break;
            case 0: switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkRed");break;
                        case 255:itemList[9].append("red");break;
                    }
                    break;
            case 120:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkGreen");break;
                        case 255:itemList[9].append("green");break;
                    }
                    break;
            case 240:switch(source[i]->getBrush().color().value())
                    {
                        case 164:itemList[9].append("gray");break;
                        case 128:itemList[9].append("darkBlue");break;
                        case 255:itemList[9].append("blue");break;
                    }
                    break;
            case 180:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkCyan");break;
                        case 255:itemList[9].append("cyan");break;
                    }
                    break;
            case 300:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkMagenta");break;
                        case 255:itemList[9].append("magenta");break;
                    }
                    break;
            case 60:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkYellow");break;
                        case 255:itemList[9].append("yellow");break;
                    }
                    break;
            }
            itemList.push_back("BrushStyle: ");
            switch(source[i]->getBrush().style())
            {
            case 0:itemList[10].append("NoBrush");break;
            case 1:itemList[10].append("SolidPattern");break;
            case 2:itemList[10].append("Dense1Pattern");break;
            case 3:itemList[10].append("Dense2Pattern");break;
            case 4:itemList[10].append("Dense3Pattern");break;
            case 5:itemList[10].append("Dense4Pattern");break;
            case 6:itemList[10].append("Dense5Pattern");break;
            case 7:itemList[10].append("Dense6Pattern");break;
            case 8:itemList[10].append("Dense7Pattern");break;
            case 9:itemList[10].append("HorPattern");break;
            case 10:itemList[10].append("VerPattern");break;
            case 11:itemList[10].append("CrossPattern");break;
            case 12:itemList[10].append("BDiagPattern");break;
            case 13:itemList[10].append("FDiagPattern");break;
            case 14:itemList[10].append("DiagCrossPattern");;break;
            }
            for(int i = 0;i < itemList.size();++i)
            {
                std::cout << itemList[i].toStdString() << " \n";
                outFile << itemList[i].toStdString() << " \n";
            }
            break;
        case 6:
            itemList.push_back("");
            itemList.push_back("ShapeId: ");
            itemList[1].append(QString::number(source[i]->getId()));
            itemList.push_back("ShapeType: Circle");
            itemList.push_back("ShapeDimensions: ");
            pointList = (QString::number(source[i]->getOrigin().x()));
            pointList.append(", ");
            pointList.append(QString::number(source[i]->getOrigin().y()));
            pointList.append(", ");
            pointList.append(QString::number(source[i]->getRx()));
            itemList[3].append(pointList);
            itemList.push_back("PenColor: ");
            switch(source[i]->getPen().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {
                        case 0:itemList[4].append("black");break;
                        case 128:itemList[4].append("darkGray");break;
                        case 192:itemList[4].append("lightGray");break;
                        case 255:itemList[4].append("white");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkRed");break;
                        case 255:itemList[4].append("red");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkGreen");break;
                        case 255:itemList[4].append("green");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkBlue");break;
                        case 164:itemList[4].append("gray");break;
                        case 255:itemList[4].append("blue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkCyan");break;
                        case 255:itemList[4].append("cyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkMagenta");break;
                        case 255:itemList[4].append("magenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[4].append("darkYellow");break;
                        case 255:itemList[4].append("yellow");break;
                    }
                    break;
            }
            itemList.push_back("PenWidth: ");
            itemList[5].append(QString::number(source[i]->getPen().width()));
            itemList.push_back("PenStyle: ");
            switch(source[i]->getPen().style())
            {
            case 0:itemList[6].append("NoPen");break;
            case 1:itemList[6].append("SolidLine");break;
            case 2:itemList[6].append("DashLine");break;
            case 3:itemList[6].append("DotLine");break;
            case 4:itemList[6].append("DashDotLine");break;
            case 5:itemList[6].append("DashDotDotLine");break;
            }
            itemList.push_back("PenCapStyle: ");
            switch(source[i]->getPen().capStyle())
            {
            case 0:itemList[7].append("FlatCap");break;
            case 16:itemList[7].append("SquareCap");break;
            case 32:itemList[7].append("RoundCap");break;
            }
            itemList.push_back("PenCapJoinStyle: ");
            switch(source[i]->getPen().joinStyle())
            {
            case 0:itemList[8].append("MiterJoin");break;
            case 64:itemList[8].append("BevelJoin");break;
            case 128:itemList[8].append("RoundJoin");break;
            }
            itemList.push_back("BrushColor: ");
            switch(source[i]->getBrush().color().hue())
            {
            case -1: switch(source[i]->getBrush().color().value())
                    {
                        case 0:itemList[9].append("black");break;
                        case 128:itemList[9].append("darkGray");break;
                        case 192:itemList[9].append("lightGray");break;
                        case 255:itemList[9].append("white");break;
                    }
                    break;
            case 0: switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkRed");break;
                        case 255:itemList[9].append("red");break;
                    }
                    break;
            case 120:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkGreen");break;
                        case 255:itemList[9].append("green");break;
                    }
                    break;
            case 240:switch(source[i]->getBrush().color().value())
                    {
                        case 164:itemList[9].append("gray");break;
                        case 128:itemList[9].append("darkBlue");break;
                        case 255:itemList[9].append("blue");break;
                    }
                    break;
            case 180:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkCyan");break;
                        case 255:itemList[9].append("cyan");break;
                    }
                    break;
            case 300:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkMagenta");break;
                        case 255:itemList[9].append("magenta");break;
                    }
                    break;
            case 60:switch(source[i]->getBrush().color().value())
                    {
                        case 128:itemList[9].append("darkYellow");break;
                        case 255:itemList[9].append("yellow");break;
                    }
                    break;
            }
            itemList.push_back("BrushStyle: ");
            switch(source[i]->getBrush().style())
            {
            case 0:itemList[10].append("NoBrush");break;
            case 1:itemList[10].append("SolidPattern");break;
            case 2:itemList[10].append("Dense1Pattern");break;
            case 3:itemList[10].append("Dense2Pattern");break;
            case 4:itemList[10].append("Dense3Pattern");break;
            case 5:itemList[10].append("Dense4Pattern");break;
            case 6:itemList[10].append("Dense5Pattern");break;
            case 7:itemList[10].append("Dense6Pattern");break;
            case 8:itemList[10].append("Dense7Pattern");break;
            case 9:itemList[10].append("HorPattern");break;
            case 10:itemList[10].append("VerPattern");break;
            case 11:itemList[10].append("CrossPattern");break;
            case 12:itemList[10].append("BDiagPattern");break;
            case 13:itemList[10].append("FDiagPattern");break;
            case 14:itemList[10].append("DiagCrossPattern");;break;
            }
            for(int i = 0;i < itemList.size();++i)
            {
                std::cout << itemList[i].toStdString() << " \n";
                outFile << itemList[i].toStdString() << " \n";
            }
            break;
        case 7:
            itemList.push_back("");
            itemList.push_back("ShapeId: ");
            itemList[1].append(QString::number(source[i]->getId()));
            itemList.push_back("ShapeType: Text");
            itemList.push_back("ShapeDimensions: ");
            pointList = (QString::number(source[i]->getUpperLeft().x()));
            pointList.append(", ");
            pointList.append(QString::number(source[i]->getUpperLeft().y()));
            pointList.append(", ");
            pointList.append(QString::number(source[i]->getWidth()));
            pointList.append(", ");
            pointList.append(QString::number(source[i]->getHeight()));
            itemList[3].append(pointList);
            itemList.push_back("Text:");
            itemList[4].append(source[i]->getText());
            itemList.push_back("TextColor: ");
            switch(source[i]->getPen().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {
                        case 0:itemList[5].append("black");break;
                        case 128:itemList[5].append("darkGray");break;
                        case 192:itemList[5].append("lightGray");break;
                        case 255:itemList[5].append("white");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[5].append("darkRed");break;
                        case 255:itemList[5].append("red");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[5].append("darkGreen");break;
                        case 255:itemList[5].append("green");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[5].append("darkBlue");break;
                        case 164:itemList[5].append("gray");break;
                        case 255:itemList[5].append("blue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[5].append("darkCyan");break;
                        case 255:itemList[5].append("cyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[5].append("darkMagenta");break;
                        case 255:itemList[5].append("magenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 128:itemList[5].append("darkYellow");break;
                        case 255:itemList[5].append("yellow");break;
                    }
                    break;
            }
            itemList.push_back("TextAlignment: ");
            itemList.push_back("TextPointSize: 0");
            itemList.push_back("TextFontFamily: ");
            itemList.push_back("TextFontStyle: ");
            itemList.push_back("TextFontWeight: ");
            for(int i = 0;i < itemList.size();++i)
            {
                std::cout << itemList[i].toStdString() << " \n";
                outFile << itemList[i].toStdString() << " \n";
            }
            break;
        }
    }
    outFile.close();
}
