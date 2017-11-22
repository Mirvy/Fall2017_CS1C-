#include <QTableWidget>
#include <QTableWidgetItem>
#include <QStringList>
#include <iostream>
#include "shape.h"
#include "vector.h"
using namespace std;

/*******************************
 * areaTableGen()
 *
 * Creates a table for the
 * QTableWidget that is passed
 * to it.
 *
 * Pulles the information from
 * the vector of Shape* passed
 * to it.
 * ****************************/

void areaTableGen(QTableWidget* destination, myStd::vector<Shape::Shape*> &source)
{
    //Establishes the size of the table based on the size of shapes
    destination->setRowCount(source.size());
    destination->setColumnCount(2);

    //Sets up the tables header
    QStringList horizontalHeaders;
    const QString horizontalHeader_shapeId = "Id#";
    const QString horizontalHeader_area = "Shape's Area";
    horizontalHeaders.append(horizontalHeader_shapeId);
    horizontalHeaders.append(horizontalHeader_area);
    destination->setHorizontalHeaderLabels(horizontalHeaders);

    //Instantiates multiple QTableWidgetItems based on the number of shapes
    //Assigns the objects to the destination report
    QTableWidgetItem *newItem;
    for(int i = 0;i < source.size();++i)
    {
        newItem = new QTableWidgetItem(QString::number(source[i]->getId()));
        newItem->setTextAlignment(Qt::AlignRight);
        destination->setItem(i,0,newItem);
        newItem = nullptr;
        newItem = new QTableWidgetItem(QString::number(source[i]->calcArea()));
        newItem->setTextAlignment(Qt::AlignRight);
        destination->setItem(i,1,newItem);
        newItem = nullptr;
    }

}
