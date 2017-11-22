#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QStringList>
#include <iostream>
#include "shape.h"
#include "vector.h"
using namespace std;

/*************************
 * shapeTreeGen
 *
 * Creates a tree hierarchy
 * report for the QTreeWidget
 * passed to it.
 *
 * Uses a vector of Shape*
 * passed to it to generate
 * the report.
 * ************************/

void shapeTreeGen(QTreeWidget* destination,myStd::vector<Shape::Shape*> &source)
{
    //Sets up the initial format for the tree hierarchy
    destination->setColumnCount(1);


    QTreeWidgetItem *tempItem1, *tempItem2, *tempItem3, *tempItem4, *tempItem5, *tempItem6, *tempItem7, *tempItem8, *tempItem9, *tempItem10;
    myStd::vector<QString> itemList;
    myStd::vector<QString> pointList;

    //Creates a set of strings containing the pertinent shape attributes for each shape in the received vector
    for(int i = 0; i < source.size();++i)
    {

        //Cleans out the string vectors for each iteration
        int itemSize= itemList.size();
        int pointSize = pointList.size();
        for(int i = 0; i < itemSize; ++i)
        {
            itemList.erase(itemList.begin());
        }
        for(int i = 0; i < pointSize; ++i)
        {
            pointList.erase(pointList.begin());
        }

        //The process for creating the tree hierarchy report is the same
        //for all shapes, with some exceptions. Line will be documented
        //to show the process' flow.
        //
        //Polygon and polyline have a unique point system which is also
        //documented;see below.


        //Determines which type of shape is being used for the report
        switch(source[i]->getShape())
        {
        case 0:

            //Creates a string for each attribute of the current type of shape.
            itemList.push_back("Id#");
            itemList[0].append(QString::number(source[i]->getId()));
            itemList.push_back("ShapeType: Line");
            itemList.push_back("ShapeDimensions: ");
            pointList.push_back("start(");

            //Appends the dimensional information to the ShapeDimension string
            pointList[0].append(QString::number(source[i]->getStart().x()));
            pointList[0].append(",");
            pointList[0].append(QString::number(source[i]->getStart().y()));
            pointList[0].append(")");
            pointList.push_back(" end(");
            pointList[1].append(QString::number(source[i]->getEnd().x()));
            pointList[1].append(",");
            pointList[1].append(QString::number(source[i]->getEnd().y()));
            pointList[1].append(")");
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
                        case 255:itemList[3].append("white");break;
                        case 0:itemList[3].append("black");break;
                        case 128:itemList[3].append("darkGray");break;
                        case 192:itemList[3].append("lightGray");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("red");break;
                        case 128:itemList[3].append("darkRed");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("green");break;
                        case 128:itemList[3].append("darkGreen");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("blue");break;
                        case 164:itemList[3].append("gray");break;
                        case 128:itemList[3].append("darkBlue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("cyan");break;
                        case 128:itemList[3].append("darkCyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("magenta");break;
                        case 128:itemList[3].append("darkMagenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("yellow");break;
                        case 128:itemList[3].append("darkYellow");break;
                    }
                    break;
            default:itemList[3].append("NONE");break;
            }
            itemList.push_back("PenWidth: ");
            itemList[4].append(QString::number(source[i]->getPen().width()));
            itemList.push_back("PenStyle: ");

            //For Pen style, capstyle, and canpJoinStyle, a simple switch
            //statement is used to check its relevant enum and deterimine
            //which type applies.
            switch(source[i]->getPen().style())
            {
            case 0:itemList[5].append("NoPen");break;
            case 1:itemList[5].append("SolidLine");break;
            case 2:itemList[5].append("DashLine");break;
            case 3:itemList[5].append("DotLine");break;
            case 4:itemList[5].append("DashDotLine");break;
            case 5:itemList[5].append("DashDotDotLine");break;
            }
            itemList.push_back("PenCapStyle: ");
            switch(source[i]->getPen().capStyle())
            {
            case 0:itemList[6].append("FlatCap");break;
            case 16:itemList[6].append("SquareCap");break;
            case 32:itemList[6].append("RoundCap");break;
            }
            itemList.push_back("PenCapJoinStyle: ");
            switch(source[i]->getPen().joinStyle())
            {
            case 0:itemList[7].append("MiterJoin");break;
            case 64:itemList[7].append("BevelJoin");break;
            case 128:itemList[7].append("RoundJoin");break;
            }

            //Creates a entry representing the id of each shape, assigned to the report QTreeWidget destination
            //and subsequently assigns each attribute string to the id QTreeWidgetItem.
            tempItem1 = new QTreeWidgetItem(destination);
            tempItem1->setText(0,itemList[0]);
            tempItem2 = new QTreeWidgetItem(tempItem1);
            tempItem2->setText(0,itemList[1]);
            tempItem3 = new QTreeWidgetItem(tempItem1);
            tempItem3->setText(0,itemList[2]);

            //Dimensions are assigned to the dimensions QTreeWidgetItem
            tempItem9 = new QTreeWidgetItem(tempItem3);
            tempItem9->setText(0,pointList[0]);
            tempItem10 = new QTreeWidgetItem(tempItem3);
            tempItem10->setText(0,pointList[1]);

            //The rest of the objects are assigned to the main ID# item
            tempItem4 = new QTreeWidgetItem(tempItem1);
            tempItem4->setText(0,itemList[3]);
            tempItem5 = new QTreeWidgetItem(tempItem1);
            tempItem5->setText(0,itemList[4]);
            tempItem6 = new QTreeWidgetItem(tempItem1);
            tempItem6->setText(0,itemList[5]);
            tempItem7 = new QTreeWidgetItem(tempItem1);
            tempItem7->setText(0,itemList[6]);
            tempItem8 = new QTreeWidgetItem(tempItem1);
            tempItem8->setText(0,itemList[7]);

            //Reassign all pointers to nullptr
            tempItem1 = nullptr;
            tempItem2 = nullptr;
            tempItem3 = nullptr;
            tempItem4 = nullptr;
            tempItem5 = nullptr;
            tempItem6 = nullptr;
            tempItem7 = nullptr;
            tempItem8 = nullptr;
            tempItem9 = nullptr;
            tempItem10 = nullptr;
            break;

        //Polyline and polygon have a unique dimensional system;see below
        case 1:
        {
            itemList.push_back("Id#");
            itemList[0].append(QString::number(source[i]->getId()));
            itemList.push_back("ShapeType: PolyLine");
            itemList.push_back("ShapeDimensions: ");

            //Same process as for all other shapes, but have to loop and acquire j number of points
            //Later they are all assigned to the dimensions QTreeWidgetItem; see below
            int j = 0;
            for(myStd::vector<QPoint>::iterator p = source[i]->getPoints().begin();p < source[i]->getPoints().end();++p)
            {
                pointList.push_back("p");
                pointList[j].append(QString::number(j+1));
                pointList[j].append("(");
                pointList[j].append(QString::number(source[i]->getPoints()[j].x()));
                pointList[j].append(",");
                pointList[j].append(QString::number(source[i]->getPoints()[j].y()));
                pointList[j].append(")");
                ++j;
            }
            itemList.push_back("PenColor: ");
            switch(source[i]->getPen().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("white");break;
                        case 0:itemList[3].append("black");break;
                        case 128:itemList[3].append("darkGray");break;
                        case 192:itemList[3].append("lightGray");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("red");break;
                        case 128:itemList[3].append("darkRed");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("green");break;
                        case 128:itemList[3].append("darkGreen");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("blue");break;
                        case 164:itemList[3].append("gray");break;
                        case 128:itemList[3].append("darkBlue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("cyan");break;
                        case 128:itemList[3].append("darkCyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("magenta");break;
                        case 128:itemList[3].append("darkMagenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("yellow");break;
                        case 128:itemList[3].append("darkYellow");break;
                    }
                    break;
            default:itemList[3].append("NONE");break;
            }
            itemList.push_back("PenWidth: ");
            itemList[4].append(QString::number(source[i]->getPen().width()));
            itemList.push_back("PenStyle: ");
            switch(source[i]->getPen().style())
            {
            case 0:itemList[5].append("NoPen");break;
            case 1:itemList[5].append("SolidLine");break;
            case 2:itemList[5].append("DashLine");break;
            case 3:itemList[5].append("DotLine");break;
            case 4:itemList[5].append("DashDotLine");break;
            case 5:itemList[5].append("DashDotDotLine");break;
            }
            itemList.push_back("PenCapStyle: ");
            switch(source[i]->getPen().capStyle())
            {
            case 0:itemList[6].append("FlatCap");break;
            case 16:itemList[6].append("SquareCap");break;
            case 32:itemList[6].append("RoundCap");break;
            }
            itemList.push_back("PenCapJoinStyle: ");
            switch(source[i]->getPen().joinStyle())
            {
            case 0:itemList[7].append("MiterJoin");break;
            case 64:itemList[7].append("BevelJoin");break;
            case 128:itemList[7].append("RoundJoin");break;
            }
            tempItem1 = new QTreeWidgetItem(destination);
            tempItem1->setText(0,itemList[0]);
            tempItem2 = new QTreeWidgetItem(tempItem1);
            tempItem2->setText(0,itemList[1]);
            tempItem3 = new QTreeWidgetItem(tempItem1);
            tempItem3->setText(0,itemList[2]);

            //All of the points are assigned to the dimensions QTreeWidgetItem
            for(myStd::vector<QString>::iterator p = pointList.begin();p < pointList.end();++p)
            {
                tempItem9 = new QTreeWidgetItem(tempItem3);
                tempItem9->setText(0,*p);
                tempItem9 = nullptr;
            }
            tempItem4 = new QTreeWidgetItem(tempItem1);
            tempItem4->setText(0,itemList[3]);
            tempItem5 = new QTreeWidgetItem(tempItem1);
            tempItem5->setText(0,itemList[4]);
            tempItem6 = new QTreeWidgetItem(tempItem1);
            tempItem6->setText(0,itemList[5]);
            tempItem7 = new QTreeWidgetItem(tempItem1);
            tempItem7->setText(0,itemList[6]);
            tempItem8 = new QTreeWidgetItem(tempItem1);
            tempItem8->setText(0,itemList[7]);
            tempItem1 = nullptr;
            tempItem2 = nullptr;
            tempItem3 = nullptr;
            tempItem4 = nullptr;
            tempItem5 = nullptr;
            tempItem6 = nullptr;
            tempItem7 = nullptr;
            tempItem8 = nullptr;
            tempItem9 = nullptr;
            tempItem10 = nullptr;
            break;
        }
        case 2:
        {
            itemList.push_back("Id#");
            itemList[0].append(QString::number(source[i]->getId()));
            itemList.push_back("ShapeType: Polygon");
            itemList.push_back("ShapeDimensions: ");
            int j = 0;
            for(myStd::vector<QPoint>::iterator p = source[i]->getPoints().begin();p < source[i]->getPoints().end();++p)
            {
                pointList.push_back("p");
                pointList[j].append(QString::number(j+1));
                pointList[j].append("(");
                pointList[j].append(QString::number(source[i]->getPoints()[j].x()));
                pointList[j].append(",");
                pointList[j].append(QString::number(source[i]->getPoints()[j].y()));
                pointList[j].append(")");
                ++j;
            }
            itemList.push_back("PenColor: ");
            switch(source[i]->getPen().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("white");break;
                        case 0:itemList[3].append("black");break;
                        case 128:itemList[3].append("darkGray");break;
                        case 192:itemList[3].append("lightGray");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("red");break;
                        case 128:itemList[3].append("darkRed");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("green");break;
                        case 128:itemList[3].append("darkGreen");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("blue");break;
                        case 164:itemList[3].append("gray");break;
                        case 128:itemList[3].append("darkBlue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("cyan");break;
                        case 128:itemList[3].append("darkCyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("magenta");break;
                        case 128:itemList[3].append("darkMagenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("yellow");break;
                        case 128:itemList[3].append("darkYellow");break;
                    }
                    break;
            default:itemList[3].append("NONE");break;
            }
            itemList.push_back("PenWidth: ");
            itemList[4].append(QString::number(source[i]->getPen().width()));
            itemList.push_back("PenStyle: ");
            switch(source[i]->getPen().style())
            {
            case 0:itemList[5].append("NoPen");break;
            case 1:itemList[5].append("SolidLine");break;
            case 2:itemList[5].append("DashLine");break;
            case 3:itemList[5].append("DotLine");break;
            case 4:itemList[5].append("DashDotLine");break;
            case 5:itemList[5].append("DashDotDotLine");break;
            }
            itemList.push_back("PenCapStyle: ");
            switch(source[i]->getPen().capStyle())
            {
            case 0:itemList[6].append("FlatCap");break;
            case 16:itemList[6].append("SquareCap");break;
            case 32:itemList[6].append("RoundCap");break;
            }
            itemList.push_back("PenCapJoinStyle: ");
            switch(source[i]->getPen().joinStyle())
            {
            case 0:itemList[7].append("MiterJoin");break;
            case 64:itemList[7].append("BevelJoin");break;
            case 128:itemList[7].append("RoundJoin");break;
            }
            itemList.push_back("BrushColor: ");
            switch(source[i]->getBrush().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("white");break;
                        case 0:itemList[8].append("black");break;
                        case 128:itemList[8].append("darkGray");break;
                        case 192:itemList[8].append("lightGray");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("red");break;
                        case 128:itemList[8].append("darkRed");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("green");break;
                        case 128:itemList[8].append("darkGreen");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("blue");break;
                        case 164:itemList[8].append("gray");break;
                        case 128:itemList[8].append("darkBlue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("cyan");break;
                        case 128:itemList[8].append("darkCyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("magenta");break;
                        case 128:itemList[8].append("darkMagenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("yellow");break;
                        case 128:itemList[8].append("darkYellow");break;
                    }
                    break;
            default:itemList[8].append("NONE");break;
            }
            itemList.push_back("BrushStyle: ");
            switch(source[i]->getBrush().style())
            {
            case 0:itemList[9].append("NoBrush");break;
            case 1:itemList[9].append("SolidPattern");break;
            case 2:itemList[9].append("Dense1Pattern");break;
            case 3:itemList[9].append("Dense2Pattern");break;
            case 4:itemList[9].append("Dense3Pattern");break;
            case 5:itemList[9].append("Dense4Pattern");break;
            case 6:itemList[9].append("Dense5Pattern");break;
            case 7:itemList[9].append("Dense6Pattern");break;
            case 8:itemList[9].append("Dense7Pattern");break;
            case 9:itemList[9].append("HorPattern");break;
            case 10:itemList[9].append("VerPattern");break;
            case 11:itemList[9].append("CrossPattern");break;
            case 12:itemList[9].append("BDiagPattern");break;
            case 13:itemList[9].append("FDiagPattern");break;
            case 14:itemList[9].append("DiagCrossPattern");;break;
            }
            tempItem1 = new QTreeWidgetItem(destination);
            tempItem1->setText(0,itemList[0]);
            tempItem2 = new QTreeWidgetItem(tempItem1);
            tempItem2->setText(0,itemList[1]);
            tempItem3 = new QTreeWidgetItem(tempItem1);
            tempItem3->setText(0,itemList[2]);
            for(myStd::vector<QString>::iterator p = pointList.begin();p < pointList.end();++p)
            {
                tempItem9 = new QTreeWidgetItem(tempItem3);
                tempItem9->setText(0,*p);
                tempItem9 = nullptr;
            }
            tempItem4 = new QTreeWidgetItem(tempItem1);
            tempItem4->setText(0,itemList[3]);
            tempItem5 = new QTreeWidgetItem(tempItem1);
            tempItem5->setText(0,itemList[4]);
            tempItem6 = new QTreeWidgetItem(tempItem1);
            tempItem6->setText(0,itemList[5]);
            tempItem7 = new QTreeWidgetItem(tempItem1);
            tempItem7->setText(0,itemList[6]);
            tempItem8 = new QTreeWidgetItem(tempItem1);
            tempItem8->setText(0,itemList[7]);
            tempItem9 = new QTreeWidgetItem(tempItem1);
            tempItem9->setText(0,itemList[8]);
            tempItem10 = new QTreeWidgetItem(tempItem1);
            tempItem10->setText(0,itemList[9]);
            tempItem1 = nullptr;
            tempItem2 = nullptr;
            tempItem3 = nullptr;
            tempItem4 = nullptr;
            tempItem5 = nullptr;
            tempItem6 = nullptr;
            tempItem7 = nullptr;
            tempItem8 = nullptr;
            tempItem9 = nullptr;
            tempItem10 = nullptr;
            break;
        }
        case 3:
            itemList.push_back("Id#");
            itemList[0].append(QString::number(source[i]->getId()));
            itemList.push_back("ShapeType: Rectangle");
            itemList.push_back("ShapeDimensions: ");
            pointList.push_back("upperLeft(");
            pointList[0].append(QString::number(source[i]->getUpperLeft().x()));
            pointList[0].append(",");
            pointList[0].append(QString::number(source[i]->getUpperLeft().y()));
            pointList[0].append(")");
            pointList.push_back("width: ");
            pointList[1].append(QString::number(source[i]->getWidth()));
            pointList.push_back("height: ");
            pointList[2].append(QString::number(source[i]->getHeight()));
            itemList.push_back("PenColor: ");
            switch(source[i]->getPen().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("white");break;
                        case 0:itemList[3].append("black");break;
                        case 128:itemList[3].append("darkGray");break;
                        case 192:itemList[3].append("lightGray");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("red");break;
                        case 128:itemList[3].append("darkRed");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("green");break;
                        case 128:itemList[3].append("darkGreen");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("blue");break;
                        case 164:itemList[3].append("gray");break;
                        case 128:itemList[3].append("darkBlue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("cyan");break;
                        case 128:itemList[3].append("darkCyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("magenta");break;
                        case 128:itemList[3].append("darkMagenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("yellow");break;
                        case 128:itemList[3].append("darkYellow");break;
                    }
                    break;
            default:itemList[3].append("NONE");break;
            }
            itemList.push_back("PenWidth: ");
            itemList[4].append(QString::number(source[i]->getPen().width()));
            itemList.push_back("PenStyle: ");
            switch(source[i]->getPen().style())
            {
            case 0:itemList[5].append("NoPen");break;
            case 1:itemList[5].append("SolidLine");break;
            case 2:itemList[5].append("DashLine");break;
            case 3:itemList[5].append("DotLine");break;
            case 4:itemList[5].append("DashDotLine");break;
            case 5:itemList[5].append("DashDotDotLine");break;
            }
            itemList.push_back("PenCapStyle: ");
            switch(source[i]->getPen().capStyle())
            {
            case 0:itemList[6].append("FlatCap");break;
            case 16:itemList[6].append("SquareCap");break;
            case 32:itemList[6].append("RoundCap");break;
            }
            itemList.push_back("PenCapJoinStyle: ");
            switch(source[i]->getPen().joinStyle())
            {
            case 0:itemList[7].append("MiterJoin");break;
            case 64:itemList[7].append("BevelJoin");break;
            case 128:itemList[7].append("RoundJoin");break;
            }
            itemList.push_back("BrushColor: ");
            switch(source[i]->getBrush().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("white");break;
                        case 0:itemList[8].append("black");break;
                        case 128:itemList[8].append("darkGray");break;
                        case 192:itemList[8].append("lightGray");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("red");break;
                        case 128:itemList[8].append("darkRed");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("green");break;
                        case 128:itemList[8].append("darkGreen");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("blue");break;
                        case 164:itemList[8].append("gray");break;
                        case 128:itemList[8].append("darkBlue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("cyan");break;
                        case 128:itemList[8].append("darkCyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("magenta");break;
                        case 128:itemList[8].append("darkMagenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("yellow");break;
                        case 128:itemList[8].append("darkYellow");break;
                    }
                    break;
            default:itemList[8].append("NONE");break;
            }
            itemList.push_back("BrushStyle: ");
            switch(source[i]->getBrush().style())
            {
            case 0:itemList[9].append("NoBrush");break;
            case 1:itemList[9].append("SolidPattern");break;
            case 2:itemList[9].append("Dense1Pattern");break;
            case 3:itemList[9].append("Dense2Pattern");break;
            case 4:itemList[9].append("Dense3Pattern");break;
            case 5:itemList[9].append("Dense4Pattern");break;
            case 6:itemList[9].append("Dense5Pattern");break;
            case 7:itemList[9].append("Dense6Pattern");break;
            case 8:itemList[9].append("Dense7Pattern");break;
            case 9:itemList[9].append("HorPattern");break;
            case 10:itemList[9].append("VerPattern");break;
            case 11:itemList[9].append("CrossPattern");break;
            case 12:itemList[9].append("BDiagPattern");break;
            case 13:itemList[9].append("FDiagPattern");break;
            case 14:itemList[9].append("DiagCrossPattern");;break;
            }
            tempItem1 = new QTreeWidgetItem(destination);
            tempItem1->setText(0,itemList[0]);
            tempItem2 = new QTreeWidgetItem(tempItem1);
            tempItem2->setText(0,itemList[1]);
            tempItem3 = new QTreeWidgetItem(tempItem1);
            tempItem3->setText(0,itemList[2]);
            tempItem9 = new QTreeWidgetItem(tempItem3);
            tempItem9->setText(0,pointList[0]);
            tempItem10 = new QTreeWidgetItem(tempItem3);
            tempItem10->setText(0,pointList[1]);
            tempItem10 = nullptr;
            tempItem10 = new QTreeWidgetItem(tempItem3);
            tempItem10->setText(0,pointList[2]);
            tempItem4 = new QTreeWidgetItem(tempItem1);
            tempItem4->setText(0,itemList[3]);
            tempItem5 = new QTreeWidgetItem(tempItem1);
            tempItem5->setText(0,itemList[4]);
            tempItem6 = new QTreeWidgetItem(tempItem1);
            tempItem6->setText(0,itemList[5]);
            tempItem7 = new QTreeWidgetItem(tempItem1);
            tempItem7->setText(0,itemList[6]);
            tempItem8 = new QTreeWidgetItem(tempItem1);
            tempItem8->setText(0,itemList[7]);
            tempItem9 = new QTreeWidgetItem(tempItem1);
            tempItem9->setText(0,itemList[8]);
            tempItem10 = new QTreeWidgetItem(tempItem1);
            tempItem10->setText(0,itemList[9]);
            tempItem1 = nullptr;
            tempItem2 = nullptr;
            tempItem3 = nullptr;
            tempItem4 = nullptr;
            tempItem5 = nullptr;
            tempItem6 = nullptr;
            tempItem7 = nullptr;
            tempItem8 = nullptr;
            tempItem9 = nullptr;
            tempItem10 = nullptr;
            break;
        case 4:
            itemList.push_back("Id#");
            itemList[0].append(QString::number(source[i]->getId()));
            itemList.push_back("ShapeType: Square");
            itemList.push_back("ShapeDimensions: ");
            pointList.push_back("upperLeft(");
            pointList[0].append(QString::number(source[i]->getUpperLeft().x()));
            pointList[0].append(",");
            pointList[0].append(QString::number(source[i]->getUpperLeft().y()));
            pointList[0].append(")");
            pointList.push_back("sideLength: ");
            pointList[1].append(QString::number(source[i]->getWidth()));
            itemList.push_back("PenColor: ");
            switch(source[i]->getPen().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("white");break;
                        case 0:itemList[3].append("black");break;
                        case 128:itemList[3].append("darkGray");break;
                        case 192:itemList[3].append("lightGray");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("red");break;
                        case 128:itemList[3].append("darkRed");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("green");break;
                        case 128:itemList[3].append("darkGreen");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("blue");break;
                        case 164:itemList[3].append("gray");break;
                        case 128:itemList[3].append("darkBlue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("cyan");break;
                        case 128:itemList[3].append("darkCyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("magenta");break;
                        case 128:itemList[3].append("darkMagenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("yellow");break;
                        case 128:itemList[3].append("darkYellow");break;
                    }
                    break;
            default:itemList[3].append("NONE");break;
            }
            itemList.push_back("PenWidth: ");
            itemList[4].append(QString::number(source[i]->getPen().width()));
            itemList.push_back("PenStyle: ");
            switch(source[i]->getPen().style())
            {
            case 0:itemList[5].append("NoPen");break;
            case 1:itemList[5].append("SolidLine");break;
            case 2:itemList[5].append("DashLine");break;
            case 3:itemList[5].append("DotLine");break;
            case 4:itemList[5].append("DashDotLine");break;
            case 5:itemList[5].append("DashDotDotLine");break;
            }
            itemList.push_back("PenCapStyle: ");
            switch(source[i]->getPen().capStyle())
            {
            case 0:itemList[6].append("FlatCap");break;
            case 16:itemList[6].append("SquareCap");break;
            case 32:itemList[6].append("RoundCap");break;
            }
            itemList.push_back("PenCapJoinStyle: ");
            switch(source[i]->getPen().joinStyle())
            {
            case 0:itemList[7].append("MiterJoin");break;
            case 64:itemList[7].append("BevelJoin");break;
            case 128:itemList[7].append("RoundJoin");break;
            }
            itemList.push_back("BrushColor: ");
            switch(source[i]->getBrush().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("white");break;
                        case 0:itemList[8].append("black");break;
                        case 128:itemList[8].append("darkGray");break;
                        case 192:itemList[8].append("lightGray");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("red");break;
                        case 128:itemList[8].append("darkRed");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("green");break;
                        case 128:itemList[8].append("darkGreen");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("blue");break;
                        case 164:itemList[8].append("gray");break;
                        case 128:itemList[8].append("darkBlue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("cyan");break;
                        case 128:itemList[8].append("darkCyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("magenta");break;
                        case 128:itemList[8].append("darkMagenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("yellow");break;
                        case 128:itemList[8].append("darkYellow");break;
                    }
                    break;
            default:itemList[8].append("NONE");break;
            }
            itemList.push_back("BrushStyle: ");
            switch(source[i]->getBrush().style())
            {
            case 0:itemList[9].append("NoBrush");break;
            case 1:itemList[9].append("SolidPattern");break;
            case 2:itemList[9].append("Dense1Pattern");break;
            case 3:itemList[9].append("Dense2Pattern");break;
            case 4:itemList[9].append("Dense3Pattern");break;
            case 5:itemList[9].append("Dense4Pattern");break;
            case 6:itemList[9].append("Dense5Pattern");break;
            case 7:itemList[9].append("Dense6Pattern");break;
            case 8:itemList[9].append("Dense7Pattern");break;
            case 9:itemList[9].append("HorPattern");break;
            case 10:itemList[9].append("VerPattern");break;
            case 11:itemList[9].append("CrossPattern");break;
            case 12:itemList[9].append("BDiagPattern");break;
            case 13:itemList[9].append("FDiagPattern");break;
            case 14:itemList[9].append("DiagCrossPattern");;break;
            }
            tempItem1 = new QTreeWidgetItem(destination);
            tempItem1->setText(0,itemList[0]);
            tempItem2 = new QTreeWidgetItem(tempItem1);
            tempItem2->setText(0,itemList[1]);
            tempItem3 = new QTreeWidgetItem(tempItem1);
            tempItem3->setText(0,itemList[2]);
            tempItem9 = new QTreeWidgetItem(tempItem3);
            tempItem9->setText(0,pointList[0]);
            tempItem10 = new QTreeWidgetItem(tempItem3);
            tempItem10->setText(0,pointList[1]);
            tempItem10 = nullptr;
            tempItem4 = new QTreeWidgetItem(tempItem1);
            tempItem4->setText(0,itemList[3]);
            tempItem5 = new QTreeWidgetItem(tempItem1);
            tempItem5->setText(0,itemList[4]);
            tempItem6 = new QTreeWidgetItem(tempItem1);
            tempItem6->setText(0,itemList[5]);
            tempItem7 = new QTreeWidgetItem(tempItem1);
            tempItem7->setText(0,itemList[6]);
            tempItem8 = new QTreeWidgetItem(tempItem1);
            tempItem8->setText(0,itemList[7]);
            tempItem9 = new QTreeWidgetItem(tempItem1);
            tempItem9->setText(0,itemList[8]);
            tempItem10 = new QTreeWidgetItem(tempItem1);
            tempItem10->setText(0,itemList[9]);
            tempItem1 = nullptr;
            tempItem2 = nullptr;
            tempItem3 = nullptr;
            tempItem4 = nullptr;
            tempItem5 = nullptr;
            tempItem6 = nullptr;
            tempItem7 = nullptr;
            tempItem8 = nullptr;
            tempItem9 = nullptr;
            tempItem10 = nullptr;
            break;
        case 5:
            itemList.push_back("Id#");
            itemList[0].append(QString::number(source[i]->getId()));
            itemList.push_back("ShapeType: Ellipse");
            itemList.push_back("ShapeDimensions: ");
            pointList.push_back("origin(");
            pointList[0].append(QString::number(source[i]->getOrigin().x()));
            pointList[0].append(",");
            pointList[0].append(QString::number(source[i]->getOrigin().y()));
            pointList[0].append(")");
            pointList.push_back("rx: ");
            pointList[1].append(QString::number(source[i]->getRx()));
            pointList.push_back("ry: ");
            pointList[2].append(QString::number(source[i]->getRy()));
            itemList.push_back("PenColor: ");
            switch(source[i]->getPen().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("white");break;
                        case 0:itemList[3].append("black");break;
                        case 128:itemList[3].append("darkGray");break;
                        case 192:itemList[3].append("lightGray");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("red");break;
                        case 128:itemList[3].append("darkRed");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("green");break;
                        case 128:itemList[3].append("darkGreen");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("blue");break;
                        case 164:itemList[3].append("gray");break;
                        case 128:itemList[3].append("darkBlue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("cyan");break;
                        case 128:itemList[3].append("darkCyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("magenta");break;
                        case 128:itemList[3].append("darkMagenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("yellow");break;
                        case 128:itemList[3].append("darkYellow");break;
                    }
                    break;
            default:itemList[3].append("NONE");break;
            }
            itemList.push_back("PenWidth: ");
            itemList[4].append(QString::number(source[i]->getPen().width()));
            itemList.push_back("PenStyle: ");
            switch(source[i]->getPen().style())
            {
            case 0:itemList[5].append("NoPen");break;
            case 1:itemList[5].append("SolidLine");break;
            case 2:itemList[5].append("DashLine");break;
            case 3:itemList[5].append("DotLine");break;
            case 4:itemList[5].append("DashDotLine");break;
            case 5:itemList[5].append("DashDotDotLine");break;
            }
            itemList.push_back("PenCapStyle: ");
            switch(source[i]->getPen().capStyle())
            {
            case 0:itemList[6].append("FlatCap");break;
            case 16:itemList[6].append("SquareCap");break;
            case 32:itemList[6].append("RoundCap");break;
            }
            itemList.push_back("PenCapJoinStyle: ");
            switch(source[i]->getPen().joinStyle())
            {
            case 0:itemList[7].append("MiterJoin");break;
            case 64:itemList[7].append("BevelJoin");break;
            case 128:itemList[7].append("RoundJoin");break;
            }
            itemList.push_back("BrushColor: ");
            switch(source[i]->getBrush().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("white");break;
                        case 0:itemList[8].append("black");break;
                        case 128:itemList[8].append("darkGray");break;
                        case 192:itemList[8].append("lightGray");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("red");break;
                        case 128:itemList[8].append("darkRed");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("green");break;
                        case 128:itemList[8].append("darkGreen");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("blue");break;
                        case 164:itemList[8].append("gray");break;
                        case 128:itemList[8].append("darkBlue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("cyan");break;
                        case 128:itemList[8].append("darkCyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("magenta");break;
                        case 128:itemList[8].append("darkMagenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("yellow");break;
                        case 128:itemList[8].append("darkYellow");break;
                    }
                    break;
            default:itemList[8].append("NONE");break;
            }
            itemList.push_back("BrushStyle: ");
            switch(source[i]->getBrush().style())
            {
            case 0:itemList[9].append("NoBrush");break;
            case 1:itemList[9].append("SolidPattern");break;
            case 2:itemList[9].append("Dense1Pattern");break;
            case 3:itemList[9].append("Dense2Pattern");break;
            case 4:itemList[9].append("Dense3Pattern");break;
            case 5:itemList[9].append("Dense4Pattern");break;
            case 6:itemList[9].append("Dense5Pattern");break;
            case 7:itemList[9].append("Dense6Pattern");break;
            case 8:itemList[9].append("Dense7Pattern");break;
            case 9:itemList[9].append("HorPattern");break;
            case 10:itemList[9].append("VerPattern");break;
            case 11:itemList[9].append("CrossPattern");break;
            case 12:itemList[9].append("BDiagPattern");break;
            case 13:itemList[9].append("FDiagPattern");break;
            case 14:itemList[9].append("DiagCrossPattern");;break;
            }
            tempItem1 = new QTreeWidgetItem(destination);
            tempItem1->setText(0,itemList[0]);
            tempItem2 = new QTreeWidgetItem(tempItem1);
            tempItem2->setText(0,itemList[1]);
            tempItem3 = new QTreeWidgetItem(tempItem1);
            tempItem3->setText(0,itemList[2]);
            tempItem9 = new QTreeWidgetItem(tempItem3);
            tempItem9->setText(0,pointList[0]);
            tempItem10 = new QTreeWidgetItem(tempItem3);
            tempItem10->setText(0,pointList[1]);
            tempItem10 = nullptr;
            tempItem10 = new QTreeWidgetItem(tempItem3);
            tempItem10->setText(0,pointList[2]);
            tempItem10 = nullptr;
            tempItem4 = new QTreeWidgetItem(tempItem1);
            tempItem4->setText(0,itemList[3]);
            tempItem5 = new QTreeWidgetItem(tempItem1);
            tempItem5->setText(0,itemList[4]);
            tempItem6 = new QTreeWidgetItem(tempItem1);
            tempItem6->setText(0,itemList[5]);
            tempItem7 = new QTreeWidgetItem(tempItem1);
            tempItem7->setText(0,itemList[6]);
            tempItem8 = new QTreeWidgetItem(tempItem1);
            tempItem8->setText(0,itemList[7]);
            tempItem9 = new QTreeWidgetItem(tempItem1);
            tempItem9->setText(0,itemList[8]);
            tempItem10 = new QTreeWidgetItem(tempItem1);
            tempItem10->setText(0,itemList[9]);
            tempItem1 = nullptr;
            tempItem2 = nullptr;
            tempItem3 = nullptr;
            tempItem4 = nullptr;
            tempItem5 = nullptr;
            tempItem6 = nullptr;
            tempItem7 = nullptr;
            tempItem8 = nullptr;
            tempItem9 = nullptr;
            tempItem10 = nullptr;
            break;
        case 6:
            itemList.push_back("Id#");
            itemList[0].append(QString::number(source[i]->getId()));
            itemList.push_back("ShapeType: Circle");
            itemList.push_back("ShapeDimensions: ");
            pointList.push_back("origin(");
            pointList[0].append(QString::number(source[i]->getOrigin().x()));
            pointList[0].append(",");
            pointList[0].append(QString::number(source[i]->getOrigin().y()));
            pointList[0].append(")");
            pointList.push_back("radius: ");
            pointList[1].append(QString::number(source[i]->getRx()));
            itemList.push_back("PenColor: ");
            switch(source[i]->getPen().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("white");break;
                        case 0:itemList[3].append("black");break;
                        case 128:itemList[3].append("darkGray");break;
                        case 192:itemList[3].append("lightGray");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("red");break;
                        case 128:itemList[3].append("darkRed");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("green");break;
                        case 128:itemList[3].append("darkGreen");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("blue");break;
                        case 164:itemList[3].append("gray");break;
                        case 128:itemList[3].append("darkBlue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("cyan");break;
                        case 128:itemList[3].append("darkCyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("magenta");break;
                        case 128:itemList[3].append("darkMagenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[3].append("yellow");break;
                        case 128:itemList[3].append("darkYellow");break;
                    }
                    break;
            default:itemList[3].append("NONE");break;
            }
            itemList.push_back("PenWidth: ");
            itemList[4].append(QString::number(source[i]->getPen().width()));
            itemList.push_back("PenStyle: ");
            switch(source[i]->getPen().style())
            {
            case 0:itemList[5].append("NoPen");break;
            case 1:itemList[5].append("SolidLine");break;
            case 2:itemList[5].append("DashLine");break;
            case 3:itemList[5].append("DotLine");break;
            case 4:itemList[5].append("DashDotLine");break;
            case 5:itemList[5].append("DashDotDotLine");break;
            }
            itemList.push_back("PenCapStyle: ");
            switch(source[i]->getPen().capStyle())
            {
            case 0:itemList[6].append("FlatCap");break;
            case 16:itemList[6].append("SquareCap");break;
            case 32:itemList[6].append("RoundCap");break;
            }
            itemList.push_back("PenCapJoinStyle: ");
            switch(source[i]->getPen().joinStyle())
            {
            case 0:itemList[7].append("MiterJoin");break;
            case 64:itemList[7].append("BevelJoin");break;
            case 128:itemList[7].append("RoundJoin");break;
            }
            itemList.push_back("BrushColor: ");
            switch(source[i]->getBrush().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("white");break;
                        case 0:itemList[8].append("black");break;
                        case 128:itemList[8].append("darkGray");break;
                        case 192:itemList[8].append("lightGray");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("red");break;
                        case 128:itemList[8].append("darkRed");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("green");break;
                        case 128:itemList[8].append("darkGreen");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("blue");break;
                        case 164:itemList[8].append("gray");break;
                        case 128:itemList[8].append("darkBlue");break;
                    }
                    break;
            case 180:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("cyan");break;
                        case 128:itemList[8].append("darkCyan");break;
                    }
                    break;
            case 300:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("magenta");break;
                        case 128:itemList[8].append("darkMagenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[8].append("yellow");break;
                        case 128:itemList[8].append("darkYellow");break;
                    }
                    break;
            default:itemList[8].append("NONE");break;
            }
            itemList.push_back("BrushStyle: ");
            switch(source[i]->getBrush().style())
            {
            case 0:itemList[9].append("NoBrush");break;
            case 1:itemList[9].append("SolidPattern");break;
            case 2:itemList[9].append("Dense1Pattern");break;
            case 3:itemList[9].append("Dense2Pattern");break;
            case 4:itemList[9].append("Dense3Pattern");break;
            case 5:itemList[9].append("Dense4Pattern");break;
            case 6:itemList[9].append("Dense5Pattern");break;
            case 7:itemList[9].append("Dense6Pattern");break;
            case 8:itemList[9].append("Dense7Pattern");break;
            case 9:itemList[9].append("HorPattern");break;
            case 10:itemList[9].append("VerPattern");break;
            case 11:itemList[9].append("CrossPattern");break;
            case 12:itemList[9].append("BDiagPattern");break;
            case 13:itemList[9].append("FDiagPattern");break;
            case 14:itemList[9].append("DiagCrossPattern");;break;
            }
            tempItem1 = new QTreeWidgetItem(destination);
            tempItem1->setText(0,itemList[0]);
            tempItem2 = new QTreeWidgetItem(tempItem1);
            tempItem2->setText(0,itemList[1]);
            tempItem3 = new QTreeWidgetItem(tempItem1);
            tempItem3->setText(0,itemList[2]);
            tempItem9 = new QTreeWidgetItem(tempItem3);
            tempItem9->setText(0,pointList[0]);
            tempItem10 = new QTreeWidgetItem(tempItem3);
            tempItem10->setText(0,pointList[1]);
            tempItem10 = nullptr;
            tempItem4 = new QTreeWidgetItem(tempItem1);
            tempItem4->setText(0,itemList[3]);
            tempItem5 = new QTreeWidgetItem(tempItem1);
            tempItem5->setText(0,itemList[4]);
            tempItem6 = new QTreeWidgetItem(tempItem1);
            tempItem6->setText(0,itemList[5]);
            tempItem7 = new QTreeWidgetItem(tempItem1);
            tempItem7->setText(0,itemList[6]);
            tempItem8 = new QTreeWidgetItem(tempItem1);
            tempItem8->setText(0,itemList[7]);
            tempItem9 = new QTreeWidgetItem(tempItem1);
            tempItem9->setText(0,itemList[8]);
            tempItem10 = new QTreeWidgetItem(tempItem1);
            tempItem10->setText(0,itemList[9]);
            tempItem1 = nullptr;
            tempItem2 = nullptr;
            tempItem3 = nullptr;
            tempItem4 = nullptr;
            tempItem5 = nullptr;
            tempItem6 = nullptr;
            tempItem7 = nullptr;
            tempItem8 = nullptr;
            tempItem9 = nullptr;
            tempItem10 = nullptr;
            break;
        case 7: itemList.push_back("Id#");
            itemList[0].append(QString::number(source[i]->getId()));
            itemList.push_back("ShapeType: Text");
            itemList.push_back("ShapeDimensions: ");
            pointList.push_back("upperLeft(");
            pointList[0].append(QString::number(source[i]->getUpperLeft().x()));
            pointList[0].append(",");
            pointList[0].append(QString::number(source[i]->getUpperLeft().y()));
            pointList[0].append(")");
            pointList.push_back("width: ");
            pointList[1].append(QString::number(source[i]->getWidth()));
            pointList.push_back("height: ");
            pointList[2].append(QString::number(source[i]->getHeight()));
            itemList.push_back("Text: ");
            itemList[3].append(source[i]->getText());
            itemList.push_back("TextColor: ");
            switch(source[i]->getPen().color().hue())
            {
            case -1: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[4].append("white");break;
                        case 0:itemList[4].append("black");break;
                        case 128:itemList[4].append("darkGray");break;
                        case 192:itemList[4].append("lightGray");break;
                    }
                    break;
            case 0: switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[4].append("red");break;
                        case 128:itemList[4].append("darkRed");break;
                    }
                    break;
            case 120:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[4].append("green");break;
                        case 128:itemList[4].append("darkGreen");break;
                    }
                    break;
            case 240:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[4].append("blue");break;
                        case 164:itemList[4].append("gray");break;
                        case 128:itemList[4].append("darkBlue");break;
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
                        case 255:itemList[4].append("magenta");break;
                        case 128:itemList[4].append("darkMagenta");break;
                    }
                    break;
            case 60:switch(source[i]->getPen().color().value())
                    {
                        case 255:itemList[4].append("yellow");break;
                        case 128:itemList[4].append("darkYellow");break;
                    }
                    break;
            default:itemList[4].append("NONE");break;
            }
            tempItem1 = new QTreeWidgetItem(destination);
            tempItem1->setText(0,itemList[0]);
            tempItem2 = new QTreeWidgetItem(tempItem1);
            tempItem2->setText(0,itemList[1]);
            tempItem3 = new QTreeWidgetItem(tempItem1);
            tempItem3->setText(0,itemList[2]);
            tempItem9 = new QTreeWidgetItem(tempItem3);
            tempItem9->setText(0,pointList[0]);
            tempItem10 = new QTreeWidgetItem(tempItem3);
            tempItem10->setText(0,pointList[1]);
            tempItem10 = nullptr;
            tempItem10 = new QTreeWidgetItem(tempItem3);
            tempItem10->setText(0,pointList[2]);
            tempItem4 = new QTreeWidgetItem(tempItem1);
            tempItem4->setText(0,itemList[3]);
            tempItem5 = new QTreeWidgetItem(tempItem1);
            tempItem5->setText(0,itemList[4]);
            tempItem1 = nullptr;
            tempItem2 = nullptr;
            tempItem3 = nullptr;
            tempItem4 = nullptr;
            tempItem5 = nullptr;
            tempItem6 = nullptr;
            tempItem7 = nullptr;
            tempItem8 = nullptr;
            tempItem9 = nullptr;
            tempItem10 = nullptr;
            break;
        }
    }
}
