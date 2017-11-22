#include <QTableWidget>
#include <QTableWidgetItem>
#include <QStringList>
#include <iostream>
#include "shape.h"
#include "vector.h"
using namespace std;

/***************************
 * perimeterTableGen
 *
 * Creates a table for the
 * QTableWidget passed to
 * it.
 *
 * Generates the table using
 * the vector of Shape*
 * passed to it.
 * ************************/

void perimeterTableGen(QTableWidget* destination, myStd::vector<Shape::Shape*> &source)
{
    //Establishes the size of the table by the number of shapes passed in
    destination->setRowCount(source.size());
    destination->setColumnCount(2);

    //Sets up the header for the table
    QStringList horizontalHeaders;
    const QString horizontalHeader_shapeId = "Id#";
    const QString horizontalHeader_perimeter = "Shape's Perimeter";
    horizontalHeaders.append(horizontalHeader_shapeId);
    horizontalHeaders.append(horizontalHeader_perimeter);
    destination->setHorizontalHeaderLabels(horizontalHeaders);

    //Creates a QTableWidgetItem for each shape and assigns it to the destination report
    QTableWidgetItem *newItem;
    for(int i = 0;i < source.size();++i)
    {
        newItem = new QTableWidgetItem(QString::number(source[i]->getId()));
        newItem->setTextAlignment(Qt::AlignRight);
        destination->setItem(i,0,newItem);
        newItem = nullptr;
        newItem = new QTableWidgetItem(QString::number(source[i]->calcPerimeter()));
        newItem->setTextAlignment(Qt::AlignRight);
        destination->setItem(i,1,newItem);
        newItem = nullptr;
    }

}
