#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <iostream>
#include <QColor>
#include <QString>
#include <QFont>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->helpBrowser->hide();
    ui->helpDoneButton->hide();
    ui->loginMenu->hide();
    ui->userLogin_logoutButton->hide();
}

void MainWindow::setShape(myStd::vector<Shape::Shape*> source)
{
    ui->renderCanvas->setShape(source);
}

void MainWindow::paintEvent(QPaintEvent *e)
{
    ui->renderCanvas->paintEvent(e);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::refreshIds()
{

    if(ui->renderCanvas->getShapeCount() != 0 && adminPrivledge == true)
    {
        ui->shapeIdModSpinBox->setMinimum(1);
        ui->shapeIdModSpinBox->setMaximum(ui->renderCanvas->getShapeCount());
        ui->ModMenu_emptyScreen->hide();
    }
    else if(adminPrivledge == true)
    {
        ui->shapeIdModSpinBox->setRange(0,0);
        ui->ModMenu_deleteScreen->hide();
        ui->ModMenu_emptyScreen->show();
    }
    else
    {
        ui->addMenu_adminBlind->show();
        ui->modMenu_adminBlind->show();
        /*ui->lineModMenu->hide();
        ui->polylineModMenu->hide();
        ui->polygonModMenu->hide();
        ui->rectangleModMenu->hide();
        ui->squareModMenu->hide();
        ui->ellipseModMenu->hide();
        ui->circleModMenu->hide();
        ui->textModMenu->hide();
        ui->ModMenu_deleteScreen->hide();
        ui->ModMenu_emptyScreen->hide();*/
    }
}

void MainWindow::on_shapeIdModSpinBox_valueChanged(int arg1)
{
    if(tempShape.size() != 0)
    {
        myStd::vector<QPoint>::iterator i = tempShape.begin();
        while(tempShape.size() != 0)
        {
            tempShape.erase(i+(tempShape.size()-1));
        }
    }
    if(ui->renderCanvas->getShapeCount() != 0){
    Shape::Shape::shape temp = ui->renderCanvas->getShape(arg1)->getShape();
    refreshIds();
    switch(temp)
    {
    case 0:
        ui->shapeModType->setText("Line");
        ui->lineModMenu->show();
        ui->polylineModMenu->hide();
        ui->polyLineModMenu_dimensions_pointList->clear();
        ui->polygonModMenu->hide();
        ui->polygonModMenu_dimensions_pointList->clear();
        ui->rectangleModMenu->hide();
        ui->squareModMenu->hide();
        ui->ellipseModMenu->hide();
        ui->circleModMenu->hide();
        ui->textModMenu->hide();
        ui->ModMenu_deleteScreen->hide();
        ui->ModMenu_emptyScreen->hide();
        break;
    case 1:
    {
        ui->shapeModType->setText("Polyline");
        ui->lineModMenu->hide();
        ui->polylineModMenu->show();
        ui->polyLineModMenu_dimensions_pointList->clear();
        ui->polygonModMenu->hide();
        ui->polygonModMenu_dimensions_pointList->clear();
        ui->rectangleModMenu->hide();
        ui->squareModMenu->hide();
        ui->ellipseModMenu->hide();
        ui->circleModMenu->hide();
        ui->textModMenu->hide();
        ui->ModMenu_deleteScreen->hide();
        ui->ModMenu_emptyScreen->hide();
        myStd::vector<QPoint>::iterator i = ui->renderCanvas->getShape(arg1)->getPoints().begin();
        QString tempString;
        int counter = 1;
        while(i < ui->renderCanvas->getShape(arg1)->getPoints().end())
        {
            tempString = "p";
            tempString.append(QString::number(counter));
            tempString.append('(');
            tempString.append(QString::number(i->x()));
            tempString.append(',');
            tempString.append(QString::number(i->y()));
            tempString.append(')');
            new QListWidgetItem(tempString,ui->polyLineModMenu_dimensions_pointList);
            tempString.clear();
            ++i;
            ++counter;
        }
        this->tempShape = ui->renderCanvas->getShape(arg1)->getPoints();
        break;
    }
    case 2:
    {
        ui->shapeModType->setText("Polygon");
        ui->lineModMenu->hide();
        ui->polylineModMenu->hide();
        ui->polyLineModMenu_dimensions_pointList->clear();
        ui->polygonModMenu->show();
        ui->polygonModMenu_dimensions_pointList->clear();
        ui->rectangleModMenu->hide();
        ui->squareModMenu->hide();
        ui->ellipseModMenu->hide();
        ui->circleModMenu->hide();
        ui->textModMenu->hide();
        ui->ModMenu_deleteScreen->hide();
        ui->ModMenu_emptyScreen->hide();
        myStd::vector<QPoint>::iterator i = ui->renderCanvas->getShape(arg1)->getPoints().begin();
        QString tempString;
        int counter = 1;
        while(i < ui->renderCanvas->getShape(arg1)->getPoints().end())
        {
            tempString = "p";
            tempString.append(QString::number(counter));
            tempString.append('(');
            tempString.append(QString::number(i->x()));
            tempString.append(',');
            tempString.append(QString::number(i->y()));
            tempString.append(')');
            new QListWidgetItem(tempString,ui->polygonModMenu_dimensions_pointList);
            tempString.clear();
            ++i;
            ++counter;
        }
        this->tempShape = ui->renderCanvas->getShape(arg1)->getPoints();
        break;
    }
    case 3:
        ui->shapeModType->setText("Rectangle");
        ui->lineModMenu->hide();
        ui->polylineModMenu->hide();
        ui->polyLineModMenu_dimensions_pointList->clear();
        ui->polygonModMenu->hide();
        ui->polygonModMenu_dimensions_pointList->clear();
        ui->rectangleModMenu->show();
        ui->squareModMenu->hide();
        ui->ellipseModMenu->hide();
        ui->circleModMenu->hide();
        ui->textModMenu->hide();
        ui->ModMenu_deleteScreen->hide();
        ui->ModMenu_emptyScreen->hide();
        break;
    case 4:
        ui->shapeModType->setText("Square");
        ui->lineModMenu->hide();
        ui->polylineModMenu->hide();
        ui->polyLineModMenu_dimensions_pointList->clear();
        ui->polygonModMenu->hide();
        ui->polygonModMenu_dimensions_pointList->clear();
        ui->rectangleModMenu->hide();
        ui->squareModMenu->show();
        ui->ellipseModMenu->hide();
        ui->circleModMenu->hide();
        ui->textModMenu->hide();
        ui->ModMenu_deleteScreen->hide();
        ui->ModMenu_emptyScreen->hide();
        break;
    case 5:
        ui->shapeModType->setText("Ellipse");
        ui->lineModMenu->hide();
        ui->polylineModMenu->hide();
        ui->polyLineModMenu_dimensions_pointList->clear();
        ui->polygonModMenu->hide();
        ui->polygonModMenu_dimensions_pointList->clear();
        ui->rectangleModMenu->hide();
        ui->squareModMenu->hide();
        ui->ellipseModMenu->show();
        ui->circleModMenu->hide();
        ui->textModMenu->hide();
        ui->ModMenu_deleteScreen->hide();
        ui->ModMenu_emptyScreen->hide();
        break;
    case 6:
        ui->shapeModType->setText("Circle");
        ui->lineModMenu->hide();
        ui->polylineModMenu->hide();
        ui->polyLineModMenu_dimensions_pointList->clear();
        ui->polygonModMenu->hide();
        ui->polygonModMenu_dimensions_pointList->clear();
        ui->rectangleModMenu->hide();
        ui->squareModMenu->hide();
        ui->ellipseModMenu->hide();
        ui->circleModMenu->show();
        ui->textModMenu->hide();
        ui->ModMenu_deleteScreen->hide();
        ui->ModMenu_emptyScreen->hide();
        break;
    case 7:
        ui->shapeModType->setText("Text");
        ui->lineModMenu->hide();
        ui->polylineModMenu->hide();
        ui->polyLineModMenu_dimensions_pointList->clear();
        ui->polygonModMenu->hide();
        ui->polygonModMenu_dimensions_pointList->clear();
        ui->rectangleModMenu->hide();
        ui->squareModMenu->hide();
        ui->ellipseModMenu->hide();
        ui->circleModMenu->hide();
        ui->textModMenu->show();
        ui->ModMenu_deleteScreen->hide();
        ui->ModMenu_emptyScreen->hide();
        break;
    }
    }
}

void MainWindow::on_lineModMenu_updateButton_clicked()
{
    Shape::Shape* tempLine;
    QPoint tempStart, tempEnd;
    QBrush *tempPenBrush;
    QPen *tempPen;
    qreal tempPenWidth = ui->lineModMenu_penSettings_lineWidthSpinBox->value();
    Qt::PenStyle tempPenStyle;
    Qt::PenCapStyle tempPenCapStyle;
    Qt::PenJoinStyle tempPenJoinStyle;
    switch(ui->lineModMenu_penSettings_lineColorCombo->currentIndex())
    {
    case 0: tempPenBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempPenBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempPenBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempPenBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempPenBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempPenBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempPenBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempPenBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempPenBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempPenBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempPenBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempPenBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempPenBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempPenBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempPenBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempPenBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempPenBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->lineModMenu_penSettings_penStyleCombo->currentIndex())
    {
    case 0:tempPenStyle = Qt::SolidLine;break;
    case 1:tempPenStyle = Qt::DashLine;break;
    case 2:tempPenStyle = Qt::DotLine;break;
    case 3:tempPenStyle = Qt::DashDotLine;break;
    case 4:tempPenStyle = Qt::DashDotDotLine;break;
    }
    switch(ui->lineModMenu_penSettings_capStyleCombo->currentIndex())
    {
    case 0:tempPenCapStyle = Qt::SquareCap;break;
    case 1:tempPenCapStyle = Qt::FlatCap;break;
    case 2:tempPenCapStyle = Qt::RoundCap;break;
    }
    switch(ui->lineModMenu_penSettings_joinStyleCombo->currentIndex())
    {
    case 0:tempPenJoinStyle = Qt::BevelJoin;break;
    case 1:tempPenJoinStyle = Qt::MiterJoin;break;
    case 2:tempPenJoinStyle = Qt::RoundJoin;break;
    }
    tempPen = new QPen(*tempPenBrush,tempPenWidth,tempPenStyle,tempPenCapStyle,tempPenJoinStyle);
    ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->setPen(*tempPen);
    bool ok = false;
    tempStart = QPoint(ui->lineModMenu_dimensions_startPointX->text().toInt(&ok,10),ui->lineModMenu_dimensions_startPointY->text().toInt(&ok,10));
    tempEnd = QPoint(ui->lineModMenu_dimensions_endPointX->text().toInt(&ok,10),ui->lineModMenu_dimensions_endPointY->text().toInt(&ok,10));
    if(ok)
    {
        tempLine = new Shape::Line(ui->renderCanvas,1,Qt::NoPen,Qt::NoBrush,tempStart,tempEnd);
        ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->move(tempLine);
    }

    ui->renderCanvas->update();
}

void MainWindow::on_polyLineModMenu_dimensions_addPointButton_clicked()
{
    bool ok = false;
    QString tempString;
    QPoint tempPnt;
    tempPnt = QPoint(ui->polyLineModMenu_dimensions_startPointX->text().toInt(&ok,10),ui->polyLineModMenu_dimensions_startPointY->text().toInt(&ok,10));
    if(ok)
    {
        tempString = "p";
        tempString.append(QString::number(ui->polyLineModMenu_dimensions_pointList->count()+1));
        tempString.append('(');
        tempString.append(QString::number(tempPnt.x()));
        tempString.append(',');
        tempString.append(QString::number(tempPnt.y()));
        tempString.append(')');
        new QListWidgetItem(tempString,ui->polyLineModMenu_dimensions_pointList);
        tempShape.push_back(tempPnt);
    }
}

void MainWindow::on_polyLineModMenu_dimensions_movePointButton_clicked()
{
    bool ok = false;
    QString tempString;
    QPoint *tempPnt;
    tempPnt = new QPoint(ui->polyLineModMenu_dimensions_startPointX->text().toInt(&ok,10),ui->polyLineModMenu_dimensions_startPointY->text().toInt(&ok,10));
    if(ok)
    {
        tempString = "p";
        tempString.append(QString::number(ui->polyLineModMenu_dimensions_pointList->currentIndex().row()+1));
        tempString.append('(');
        tempString.append(QString::number(tempPnt->x()));
        tempString.append(',');
        tempString.append(QString::number(tempPnt->y()));
        tempString.append(')');
        myStd::vector<QPoint>::iterator i = tempShape.begin()+ui->polyLineModMenu_dimensions_pointList->currentRow();
        *(i) = *tempPnt;
        QListWidgetItem *old = ui->polyLineModMenu_dimensions_pointList->takeItem(ui->polyLineModMenu_dimensions_pointList->currentRow());
        delete old;
        new QListWidgetItem (tempString,ui->polyLineModMenu_dimensions_pointList);

        tempPnt = nullptr;
    }
}

void MainWindow::on_polyLineModMenu_dimensions_deletePointButton_clicked()
{
    tempShape.erase(tempShape.begin()+ui->polyLineModMenu_dimensions_pointList->currentRow());

    //QListWidgetItem *old = ui->polyLineModMenu_dimensions_pointList->takeItem(ui->polyLineModMenu_dimensions_pointList->currentRow());
    //delete old;
    ui->polyLineModMenu_dimensions_pointList->clear();
    QString tempString;
    int counter = 1;
    myStd::vector<QPoint>::iterator i = tempShape.begin();
    while(i < tempShape.end())
    {
        tempString = "p";
        tempString.append(QString::number(counter));
        tempString.append('(');
        tempString.append(QString::number(i->x()));
        tempString.append(',');
        tempString.append(QString::number(i->y()));
        tempString.append(')');
        new QListWidgetItem(tempString,ui->polyLineModMenu_dimensions_pointList);
        tempString.clear();
        ++i;
        ++counter;
    }
}

void MainWindow::on_polyLineModMenu_updateButton_clicked()
{
    Shape::Shape* tempPolyLine;
    QPoint tempStart, tempEnd;
    QBrush *tempPenBrush;
    QPen *tempPen;
    qreal tempPenWidth = ui->polyLineModMenu_penSettings_lineWidthSpinBox->value();
    Qt::PenStyle tempPenStyle;
    Qt::PenCapStyle tempPenCapStyle;
    Qt::PenJoinStyle tempPenJoinStyle;
    switch(ui->polyLineModMenu_penSettings_lineColorCombo->currentIndex())
    {
    case 0: tempPenBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempPenBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempPenBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempPenBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempPenBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempPenBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempPenBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempPenBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempPenBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempPenBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempPenBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempPenBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempPenBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempPenBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempPenBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempPenBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempPenBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->polyLineModMenu_penSettings_penStyleCombo->currentIndex())
    {
    case 0:tempPenStyle = Qt::SolidLine;break;
    case 1:tempPenStyle = Qt::DashLine;break;
    case 2:tempPenStyle = Qt::DotLine;break;
    case 3:tempPenStyle = Qt::DashDotLine;break;
    case 4:tempPenStyle = Qt::DashDotDotLine;break;
    }
    switch(ui->polyLineModMenu_penSettings_capStyleCombo->currentIndex())
    {
    case 0:tempPenCapStyle = Qt::SquareCap;break;
    case 1:tempPenCapStyle = Qt::FlatCap;break;
    case 2:tempPenCapStyle = Qt::RoundCap;break;
    }
    switch(ui->polyLineModMenu_penSettings_joinStyleCombo->currentIndex())
    {
    case 0:tempPenJoinStyle = Qt::BevelJoin;break;
    case 1:tempPenJoinStyle = Qt::MiterJoin;break;
    case 2:tempPenJoinStyle = Qt::RoundJoin;break;
    }
    tempPen = new QPen(*tempPenBrush,tempPenWidth,tempPenStyle,tempPenCapStyle,tempPenJoinStyle);
    ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->setPen(*tempPen);
    tempPolyLine = new Shape::Polyline(ui->renderCanvas,1,Qt::NoPen,Qt::NoBrush,tempShape);
    ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->move(tempPolyLine);
    ui->renderCanvas->update();
}

void MainWindow::on_polygonModMenu_dimensions_addPointButton_clicked()
{
    bool ok = false;
    QString tempString;
    QPoint tempPnt;
    tempPnt = QPoint(ui->polygonModMenu_dimensions_startPointX->text().toInt(&ok,10),ui->polygonModMenu_dimensions_startPointY->text().toInt(&ok,10));
    if(ok)
    {
        tempString = "p";
        tempString.append(QString::number(ui->polygonModMenu_dimensions_pointList->count()+1));
        tempString.append('(');
        tempString.append(QString::number(tempPnt.x()));
        tempString.append(',');
        tempString.append(QString::number(tempPnt.y()));
        tempString.append(')');
        new QListWidgetItem(tempString,ui->polygonModMenu_dimensions_pointList);
        tempShape.push_back(tempPnt);
    }
}

void MainWindow::on_polygonModMenu_dimensions_movePointButton_clicked()
{
    bool ok = false;
    QString tempString;
    QPoint *tempPnt;
    tempPnt = new QPoint(ui->polygonModMenu_dimensions_startPointX->text().toInt(&ok,10),ui->polygonModMenu_dimensions_startPointY->text().toInt(&ok,10));
    if(ok)
    {
        tempString = "p";
        tempString.append(QString::number(ui->polygonModMenu_dimensions_pointList->currentIndex().row()+1));
        tempString.append('(');
        tempString.append(QString::number(tempPnt->x()));
        tempString.append(',');
        tempString.append(QString::number(tempPnt->y()));
        tempString.append(')');
        myStd::vector<QPoint>::iterator i = tempShape.begin()+ui->polygonModMenu_dimensions_pointList->currentRow();
        *(i) = *tempPnt;
        QListWidgetItem *old = ui->polygonModMenu_dimensions_pointList->takeItem(ui->polygonModMenu_dimensions_pointList->currentRow());
        delete old;
        new QListWidgetItem (tempString,ui->polygonModMenu_dimensions_pointList);

        tempPnt = nullptr;
    }
}

void MainWindow::on_polygonModMenu_dimensions_deletePointButton_clicked()
{
    tempShape.erase(tempShape.begin()+ui->polygonModMenu_dimensions_pointList->currentRow());

    //QListWidgetItem *old = ui->polyLineModMenu_dimensions_pointList->takeItem(ui->polyLineModMenu_dimensions_pointList->currentRow());
    //delete old;
    ui->polygonModMenu_dimensions_pointList->clear();
    QString tempString;
    int counter = 1;
    myStd::vector<QPoint>::iterator i = tempShape.begin();
    while(i < tempShape.end())
    {
        tempString = "p";
        tempString.append(QString::number(counter));
        tempString.append('(');
        tempString.append(QString::number(i->x()));
        tempString.append(',');
        tempString.append(QString::number(i->y()));
        tempString.append(')');
        new QListWidgetItem(tempString,ui->polygonModMenu_dimensions_pointList);
        tempString.clear();
        ++i;
        ++counter;
    }
}

void MainWindow::on_polygonModMenu_updateButton_clicked()
{
    Shape::Shape* tempPolygon;
    QPoint tempStart, tempEnd;
    QBrush *tempPenBrush, *tempBrush;
    QPen *tempPen;
    qreal tempPenWidth = ui->polygonModMenu_penSettings_lineWidthSpinBox->value();
    Qt::PenStyle tempPenStyle;
    Qt::PenCapStyle tempPenCapStyle;
    Qt::PenJoinStyle tempPenJoinStyle;
    switch(ui->polygonModMenu_penSettings_lineColorCombo->currentIndex())
    {
    case 0: tempPenBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempPenBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempPenBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempPenBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempPenBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempPenBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempPenBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempPenBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempPenBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempPenBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempPenBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempPenBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempPenBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempPenBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempPenBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempPenBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempPenBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->polygonModMenu_penSettings_penStyleCombo->currentIndex())
    {
    case 0:tempPenStyle = Qt::SolidLine;break;
    case 1:tempPenStyle = Qt::DashLine;break;
    case 2:tempPenStyle = Qt::DotLine;break;
    case 3:tempPenStyle = Qt::DashDotLine;break;
    case 4:tempPenStyle = Qt::DashDotDotLine;break;
    }
    switch(ui->polygonModMenu_penSettings_capStyleCombo->currentIndex())
    {
    case 0:tempPenCapStyle = Qt::SquareCap;break;
    case 1:tempPenCapStyle = Qt::FlatCap;break;
    case 2:tempPenCapStyle = Qt::RoundCap;break;
    }
    switch(ui->polygonModMenu_penSettings_joinStyleCombo->currentIndex())
    {
    case 0:tempPenJoinStyle = Qt::BevelJoin;break;
    case 1:tempPenJoinStyle = Qt::MiterJoin;break;
    case 2:tempPenJoinStyle = Qt::RoundJoin;break;
    }
    switch(ui->polygonModMenu_penSettings_brushColorCombo->currentIndex())
    {
    case 0: tempBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->polygonModMenu_penSettings_brushStyleCombo->currentIndex())
    {
    case 0:tempBrush->setStyle(Qt::SolidPattern);break;
    case 1:tempBrush->setStyle(Qt::NoBrush);break;
    case 2:tempBrush->setStyle(Qt::Dense1Pattern);break;
    case 3:tempBrush->setStyle(Qt::Dense2Pattern);break;
    case 4:tempBrush->setStyle(Qt::Dense3Pattern);break;
    case 5:tempBrush->setStyle(Qt::Dense4Pattern);break;
    case 6:tempBrush->setStyle(Qt::Dense5Pattern);break;
    case 7:tempBrush->setStyle(Qt::Dense6Pattern);break;
    case 8:tempBrush->setStyle(Qt::Dense7Pattern);break;
    case 9:tempBrush->setStyle(Qt::HorPattern);break;
    case 10:tempBrush->setStyle(Qt::VerPattern);break;
    case 11:tempBrush->setStyle(Qt::CrossPattern);break;
    case 12:tempBrush->setStyle(Qt::BDiagPattern);break;
    case 13:tempBrush->setStyle(Qt::FDiagPattern);break;
    case 14:tempBrush->setStyle(Qt::DiagCrossPattern);break;
    }

    tempPen = new QPen(*tempPenBrush,tempPenWidth,tempPenStyle,tempPenCapStyle,tempPenJoinStyle);
    ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->setPen(*tempPen);
    ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->setBrush(*tempBrush);
    tempPolygon = new Shape::Polygon(ui->renderCanvas,1,Qt::NoPen,Qt::NoBrush,tempShape);
    ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->move(tempPolygon);
    ui->renderCanvas->update();
}

void MainWindow::on_rectangleModMenu_updateButton_clicked()
{
    Shape::Shape* tempRectangle;
    QPoint tempUpperLeft;
    int width, height;
    QBrush *tempPenBrush, *tempBrush;
    QPen *tempPen;
    qreal tempPenWidth = ui->rectangleModMenu_penSettings_lineWidthSpinBox->value();
    Qt::PenStyle tempPenStyle;
    Qt::PenCapStyle tempPenCapStyle;
    Qt::PenJoinStyle tempPenJoinStyle;
    switch(ui->rectangleModMenu_penSettings_lineColorCombo->currentIndex())
    {
    case 0: tempPenBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempPenBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempPenBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempPenBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempPenBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempPenBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempPenBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempPenBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempPenBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempPenBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempPenBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempPenBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempPenBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempPenBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempPenBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempPenBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempPenBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->rectangleModMenu_penSettings_penStyleCombo->currentIndex())
    {
    case 0:tempPenStyle = Qt::SolidLine;break;
    case 1:tempPenStyle = Qt::DashLine;break;
    case 2:tempPenStyle = Qt::DotLine;break;
    case 3:tempPenStyle = Qt::DashDotLine;break;
    case 4:tempPenStyle = Qt::DashDotDotLine;break;
    }
    switch(ui->rectangleModMenu_penSettings_capStyleCombo->currentIndex())
    {
    case 0:tempPenCapStyle = Qt::SquareCap;break;
    case 1:tempPenCapStyle = Qt::FlatCap;break;
    case 2:tempPenCapStyle = Qt::RoundCap;break;
    }
    switch(ui->rectangleModMenu_penSettings_joinStyleCombo->currentIndex())
    {
    case 0:tempPenJoinStyle = Qt::BevelJoin;break;
    case 1:tempPenJoinStyle = Qt::MiterJoin;break;
    case 2:tempPenJoinStyle = Qt::RoundJoin;break;
    }
    switch(ui->rectangleModMenu_penSettings_brushColorCombo->currentIndex())
    {
    case 0: tempBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->rectangleModMenu_penSettings_brushStyleCombo->currentIndex())
    {
    case 0:tempBrush->setStyle(Qt::SolidPattern);break;
    case 1:tempBrush->setStyle(Qt::NoBrush);break;
    case 2:tempBrush->setStyle(Qt::Dense1Pattern);break;
    case 3:tempBrush->setStyle(Qt::Dense2Pattern);break;
    case 4:tempBrush->setStyle(Qt::Dense3Pattern);break;
    case 5:tempBrush->setStyle(Qt::Dense4Pattern);break;
    case 6:tempBrush->setStyle(Qt::Dense5Pattern);break;
    case 7:tempBrush->setStyle(Qt::Dense6Pattern);break;
    case 8:tempBrush->setStyle(Qt::Dense7Pattern);break;
    case 9:tempBrush->setStyle(Qt::HorPattern);break;
    case 10:tempBrush->setStyle(Qt::VerPattern);break;
    case 11:tempBrush->setStyle(Qt::CrossPattern);break;
    case 12:tempBrush->setStyle(Qt::BDiagPattern);break;
    case 13:tempBrush->setStyle(Qt::FDiagPattern);break;
    case 14:tempBrush->setStyle(Qt::DiagCrossPattern);break;
    }
    tempPen = new QPen(*tempPenBrush,tempPenWidth,tempPenStyle,tempPenCapStyle,tempPenJoinStyle);
    ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->setPen(*tempPen);
    ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->setBrush(*tempBrush);
    bool ok = false;
    tempUpperLeft = QPoint(ui->rectangleModMenu_dimensions_upperLeftX->text().toInt(&ok,10),ui->rectangleModMenu_dimensions_upperLeftY->text().toInt(&ok,10));
    width = ui->rectangleModMenu_dimensions_width->text().toInt(&ok,10);
    height = ui->rectangleModMenu_dimensions_height->text().toInt(&ok,10);
    if(ok)
    {
        tempRectangle = new Shape::Rectangle(ui->renderCanvas,1,Shape::Shape::shape::Rectangle,Qt::NoPen,Qt::NoBrush,tempUpperLeft,width,height);
        ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->move(tempRectangle);
    }

    ui->renderCanvas->update();
}

void MainWindow::on_squareModMenu_updateButton_clicked()
{
    Shape::Shape* tempSquare;
    QPoint tempUpperLeft;
    int sideLength;
    QBrush *tempPenBrush, *tempBrush;
    QPen *tempPen;
    qreal tempPenWidth = ui->squareModMenu_penSettings_lineWidthSpinBox->value();
    Qt::PenStyle tempPenStyle;
    Qt::PenCapStyle tempPenCapStyle;
    Qt::PenJoinStyle tempPenJoinStyle;
    switch(ui->squareModMenu_penSettings_lineColorCombo->currentIndex())
    {
    case 0: tempPenBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempPenBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempPenBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempPenBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempPenBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempPenBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempPenBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempPenBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempPenBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempPenBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempPenBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempPenBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempPenBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempPenBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempPenBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempPenBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempPenBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->squareModMenu_penSettings_penStyleCombo->currentIndex())
    {
    case 0:tempPenStyle = Qt::SolidLine;break;
    case 1:tempPenStyle = Qt::DashLine;break;
    case 2:tempPenStyle = Qt::DotLine;break;
    case 3:tempPenStyle = Qt::DashDotLine;break;
    case 4:tempPenStyle = Qt::DashDotDotLine;break;
    }
    switch(ui->squareModMenu_penSettings_capStyleCombo->currentIndex())
    {
    case 0:tempPenCapStyle = Qt::SquareCap;break;
    case 1:tempPenCapStyle = Qt::FlatCap;break;
    case 2:tempPenCapStyle = Qt::RoundCap;break;
    }
    switch(ui->squareModMenu_penSettings_joinStyleCombo->currentIndex())
    {
    case 0:tempPenJoinStyle = Qt::BevelJoin;break;
    case 1:tempPenJoinStyle = Qt::MiterJoin;break;
    case 2:tempPenJoinStyle = Qt::RoundJoin;break;
    }
    switch(ui->squareModMenu_penSettings_brushColorCombo->currentIndex())
    {
    case 0: tempBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->squareModMenu_penSettings_brushStyleCombo->currentIndex())
    {
    case 0:tempBrush->setStyle(Qt::SolidPattern);break;
    case 1:tempBrush->setStyle(Qt::NoBrush);break;
    case 2:tempBrush->setStyle(Qt::Dense1Pattern);break;
    case 3:tempBrush->setStyle(Qt::Dense2Pattern);break;
    case 4:tempBrush->setStyle(Qt::Dense3Pattern);break;
    case 5:tempBrush->setStyle(Qt::Dense4Pattern);break;
    case 6:tempBrush->setStyle(Qt::Dense5Pattern);break;
    case 7:tempBrush->setStyle(Qt::Dense6Pattern);break;
    case 8:tempBrush->setStyle(Qt::Dense7Pattern);break;
    case 9:tempBrush->setStyle(Qt::HorPattern);break;
    case 10:tempBrush->setStyle(Qt::VerPattern);break;
    case 11:tempBrush->setStyle(Qt::CrossPattern);break;
    case 12:tempBrush->setStyle(Qt::BDiagPattern);break;
    case 13:tempBrush->setStyle(Qt::FDiagPattern);break;
    case 14:tempBrush->setStyle(Qt::DiagCrossPattern);break;
    }
    tempPen = new QPen(*tempPenBrush,tempPenWidth,tempPenStyle,tempPenCapStyle,tempPenJoinStyle);
    ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->setPen(*tempPen);
    ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->setBrush(*tempBrush);
    bool ok = false;
    tempUpperLeft = QPoint(ui->squareModMenu_dimensions_upperLeftX->text().toInt(&ok,10),ui->squareModMenu_dimensions_upperLeftY->text().toInt(&ok,10));
    sideLength = ui->squareModMenu_dimensions_sideLength->text().toInt(&ok,10);
    if(ok)
    {
        tempSquare = new Shape::Square(ui->renderCanvas,1,Qt::NoPen,Qt::NoBrush,tempUpperLeft,sideLength);
        ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->move(tempSquare);
    }
    ui->renderCanvas->update();
}

void MainWindow::on_ellipseModMenu_updateButton_clicked()
{
    Shape::Shape* tempEllipse;
    QPoint tempOrigin;
    int rx, ry;
    QBrush *tempPenBrush, *tempBrush;
    QPen *tempPen;
    qreal tempPenWidth = ui->ellipseModMenu_penSettings_lineWidthSpinBox->value();
    Qt::PenStyle tempPenStyle;
    Qt::PenCapStyle tempPenCapStyle;
    Qt::PenJoinStyle tempPenJoinStyle;
    switch(ui->ellipseModMenu_penSettings_lineColorCombo->currentIndex())
    {
    case 0: tempPenBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempPenBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempPenBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempPenBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempPenBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempPenBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempPenBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempPenBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempPenBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempPenBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempPenBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempPenBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempPenBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempPenBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempPenBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempPenBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempPenBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->ellipseModMenu_penSettings_penStyleCombo->currentIndex())
    {
    case 0:tempPenStyle = Qt::SolidLine;break;
    case 1:tempPenStyle = Qt::DashLine;break;
    case 2:tempPenStyle = Qt::DotLine;break;
    case 3:tempPenStyle = Qt::DashDotLine;break;
    case 4:tempPenStyle = Qt::DashDotDotLine;break;
    }
    switch(ui->ellipseModMenu_penSettings_capStyleCombo->currentIndex())
    {
    case 0:tempPenCapStyle = Qt::SquareCap;break;
    case 1:tempPenCapStyle = Qt::FlatCap;break;
    case 2:tempPenCapStyle = Qt::RoundCap;break;
    }
    switch(ui->ellipseModMenu_penSettings_joinStyleCombo->currentIndex())
    {
    case 0:tempPenJoinStyle = Qt::BevelJoin;break;
    case 1:tempPenJoinStyle = Qt::MiterJoin;break;
    case 2:tempPenJoinStyle = Qt::RoundJoin;break;
    }
    switch(ui->ellipseModMenu_penSettings_brushColorCombo->currentIndex())
    {
    case 0: tempBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->ellipseModMenu_penSettings_brushStyleCombo->currentIndex())
    {
    case 0:tempBrush->setStyle(Qt::SolidPattern);break;
    case 1:tempBrush->setStyle(Qt::NoBrush);break;
    case 2:tempBrush->setStyle(Qt::Dense1Pattern);break;
    case 3:tempBrush->setStyle(Qt::Dense2Pattern);break;
    case 4:tempBrush->setStyle(Qt::Dense3Pattern);break;
    case 5:tempBrush->setStyle(Qt::Dense4Pattern);break;
    case 6:tempBrush->setStyle(Qt::Dense5Pattern);break;
    case 7:tempBrush->setStyle(Qt::Dense6Pattern);break;
    case 8:tempBrush->setStyle(Qt::Dense7Pattern);break;
    case 9:tempBrush->setStyle(Qt::HorPattern);break;
    case 10:tempBrush->setStyle(Qt::VerPattern);break;
    case 11:tempBrush->setStyle(Qt::CrossPattern);break;
    case 12:tempBrush->setStyle(Qt::BDiagPattern);break;
    case 13:tempBrush->setStyle(Qt::FDiagPattern);break;
    case 14:tempBrush->setStyle(Qt::DiagCrossPattern);break;
    }
    tempPen = new QPen(*tempPenBrush,tempPenWidth,tempPenStyle,tempPenCapStyle,tempPenJoinStyle);
    ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->setPen(*tempPen);
    ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->setBrush(*tempBrush);
    bool ok = false;
    tempOrigin = QPoint(ui->ellipseModMenu_dimensions_originX->text().toInt(&ok,10),ui->ellipseModMenu_dimensions_originY->text().toInt(&ok,10));
    rx = ui->ellipseModMenu_dimensions_RX->text().toInt(&ok,10);
    ry = ui->ellipseModMenu_dimensions_RY->text().toInt(&ok,10);
    if(ok)
    {
        tempEllipse = new Shape::Ellipse(ui->renderCanvas,1,Shape::Shape::shape::Ellipse,Qt::NoPen,Qt::NoBrush,tempOrigin,rx,ry);
        ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->move(tempEllipse);
    }

    ui->renderCanvas->update();
}

void MainWindow::on_circleModMenu_updateButton_clicked()
{
    Shape::Shape* tempCircle;
    QPoint tempOrigin;
    int tempRadius;
    QBrush *tempPenBrush, *tempBrush;
    QPen *tempPen;
    qreal tempPenWidth = ui->circleModMenu_penSettings_lineWidthSpinBox->value();
    Qt::PenStyle tempPenStyle;
    Qt::PenCapStyle tempPenCapStyle;
    Qt::PenJoinStyle tempPenJoinStyle;
    switch(ui->circleModMenu_penSettings_lineColorCombo->currentIndex())
    {
    case 0: tempPenBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempPenBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempPenBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempPenBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempPenBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempPenBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempPenBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempPenBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempPenBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempPenBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempPenBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempPenBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempPenBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempPenBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempPenBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempPenBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempPenBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->circleModMenu_penSettings_penStyleCombo->currentIndex())
    {
    case 0:tempPenStyle = Qt::SolidLine;break;
    case 1:tempPenStyle = Qt::DashLine;break;
    case 2:tempPenStyle = Qt::DotLine;break;
    case 3:tempPenStyle = Qt::DashDotLine;break;
    case 4:tempPenStyle = Qt::DashDotDotLine;break;
    }
    switch(ui->circleModMenu_penSettings_capStyleCombo->currentIndex())
    {
    case 0:tempPenCapStyle = Qt::SquareCap;break;
    case 1:tempPenCapStyle = Qt::FlatCap;break;
    case 2:tempPenCapStyle = Qt::RoundCap;break;
    }
    switch(ui->circleModMenu_penSettings_joinStyleCombo->currentIndex())
    {
    case 0:tempPenJoinStyle = Qt::BevelJoin;break;
    case 1:tempPenJoinStyle = Qt::MiterJoin;break;
    case 2:tempPenJoinStyle = Qt::RoundJoin;break;
    }
    switch(ui->circleModMenu_penSettings_brushColorCombo->currentIndex())
    {
    case 0: tempBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->circleModMenu_penSettings_brushStyleCombo->currentIndex())
    {
    case 0:tempBrush->setStyle(Qt::SolidPattern);break;
    case 1:tempBrush->setStyle(Qt::NoBrush);break;
    case 2:tempBrush->setStyle(Qt::Dense1Pattern);break;
    case 3:tempBrush->setStyle(Qt::Dense2Pattern);break;
    case 4:tempBrush->setStyle(Qt::Dense3Pattern);break;
    case 5:tempBrush->setStyle(Qt::Dense4Pattern);break;
    case 6:tempBrush->setStyle(Qt::Dense5Pattern);break;
    case 7:tempBrush->setStyle(Qt::Dense6Pattern);break;
    case 8:tempBrush->setStyle(Qt::Dense7Pattern);break;
    case 9:tempBrush->setStyle(Qt::HorPattern);break;
    case 10:tempBrush->setStyle(Qt::VerPattern);break;
    case 11:tempBrush->setStyle(Qt::CrossPattern);break;
    case 12:tempBrush->setStyle(Qt::BDiagPattern);break;
    case 13:tempBrush->setStyle(Qt::FDiagPattern);break;
    case 14:tempBrush->setStyle(Qt::DiagCrossPattern);break;
    }
    tempPen = new QPen(*tempPenBrush,tempPenWidth,tempPenStyle,tempPenCapStyle,tempPenJoinStyle);
    ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->setPen(*tempPen);
    ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->setBrush(*tempBrush);
    bool ok = false;
    tempOrigin = QPoint(ui->circleModMenu_dimensions_originX->text().toInt(&ok,10),ui->circleModMenu_dimensions_originY->text().toInt(&ok,10));
    tempRadius = ui->circleModMenu_dimensions_Radius->text().toInt(&ok,10);

    if(ok)
    {
        tempCircle = new Shape::Circle(ui->renderCanvas,1,Qt::NoPen,Qt::NoBrush,tempOrigin,tempRadius);
        ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->move(tempCircle);
    }

    ui->renderCanvas->update();
}

void MainWindow::on_textModMenu_updateButton_clicked()
{
    const QString SANS_SERIF = "SansSerif";
    const QString HELVETICA = "Helvetica";
    const QString SERIF = "Serif";
    const QString TIMES = "Times";
    const QString TYPEWRITER = "TypeWriter";
    const QString COURIER = "Courier";
    const QString OLD_ENGLISH = "OldEnglish";
    const QString DECORATIVE = "Decorative";
    const QString MONOSPACE = "Monospace";
    const QString FANTASY = "Fantasy";
    const QString CURSIVE = "Cursive";
    const QString SYSTEM = "System";

    Shape::Shape* tempText;
    QPoint tempUpperLeft;
    QFont tempFont;
    QPen *tempPen;
    QBrush *tempPenBrush;
    QString tempString;

    tempFont.setPointSize(ui->textModMenu_textSettings_textPointSizeBox->value());
    switch(ui->textModMenu_textSettings_textColorCombo->currentIndex())
    {
    case 0:tempPenBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempPenBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempPenBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempPenBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempPenBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempPenBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempPenBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempPenBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempPenBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempPenBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempPenBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempPenBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempPenBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempPenBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempPenBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempPenBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempPenBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->textModMenu_textSettings_fontCombo->currentIndex())
    {
    case 0:tempFont.setFamily(SANS_SERIF);break;
    case 1:tempFont.setFamily(HELVETICA);break;
    case 2:tempFont.setFamily(SERIF);break;
    case 3:tempFont.setFamily(TIMES);break;
    case 4:tempFont.setFamily(TYPEWRITER);break;
    case 5:tempFont.setFamily(COURIER);break;
    case 6:tempFont.setFamily(OLD_ENGLISH);break;
    case 7:tempFont.setFamily(DECORATIVE);break;
    case 8:tempFont.setFamily(MONOSPACE);break;
    case 9:tempFont.setFamily(FANTASY);break;
    case 10:tempFont.setFamily(CURSIVE);break;
    case 11:tempFont.setFamily(SYSTEM);break;
    }
    switch(ui->textModMenu_textSettings_fontStyleCombo->currentIndex())
    {
    case 0:tempFont.setStyle(QFont::StyleNormal);break;
    case 1:tempFont.setStyle(QFont::StyleItalic);break;
    case 2:tempFont.setStyle(QFont::StyleOblique);break;
    }
    switch(ui->textModMenu_textSettings_fontWeightCombo->currentIndex())
    {
    case 0:tempFont.setWeight(QFont::Light);break;
    case 1:tempFont.setWeight(QFont::Normal);break;
    case 2:tempFont.setWeight(QFont::DemiBold);break;
    case 3:tempFont.setWeight(QFont::Bold);break;
    case 4:tempFont.setWeight(QFont::Black);break;
    }
    tempPen = new QPen(*tempPenBrush,0,Qt::SolidLine,Qt::SquareCap,Qt::MiterJoin);
    ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->setPen(*tempPen);
    bool ok = false;
    tempUpperLeft = QPoint(ui->textModMenu_dimensions_upperLeftX->text().toInt(&ok,10),ui->textModMenu_dimensions_upperLeftY->text().toInt(&ok,10));
    tempString = ui->textModMenu_textSettings_textEdit->toPlainText();
    if(ok)
    {
        tempText = new Shape::Text(ui->renderCanvas,1,Qt::NoPen,Qt::NoBrush,tempUpperLeft,10,10,"");
        ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->move(tempText);
        ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->setFont(tempFont);
        ui->renderCanvas->getShape(ui->shapeIdModSpinBox->value())->setText(tempString);
    }

    ui->renderCanvas->update();
}

void MainWindow::on_lineModMenu_deleteButton_clicked()
{
    myStd::vector<Shape::Shape*>::iterator i = ui->renderCanvas->getShapes().begin();
    ui->renderCanvas->getShapes().erase(i+(ui->shapeIdModSpinBox->value()-1));
    for(int i = (ui->shapeIdModSpinBox->value()-1); i < ui->renderCanvas->getShapeCount();++i)
    {
        ui->renderCanvas->getShapes()[i]->setId(i+1);
    }
    ui->renderCanvas->update();
    ui->lineModMenu->hide();
    ui->ModMenu_deleteScreen->show();
    if(ui->renderCanvas->getShapeCount() == 0)
    {refreshIds();}
}

void MainWindow::on_circleModMenu_deleteButton_clicked()
{
    myStd::vector<Shape::Shape*>::iterator i = ui->renderCanvas->getShapes().begin();
    ui->renderCanvas->getShapes().erase(i+(ui->shapeIdModSpinBox->value()-1));
    for(int i = (ui->shapeIdModSpinBox->value()-1); i < ui->renderCanvas->getShapeCount();++i)
    {
        ui->renderCanvas->getShapes()[i]->setId(i+1);
    }
    ui->renderCanvas->update();
    ui->circleModMenu->hide();
    ui->ModMenu_deleteScreen->show();
    if(ui->renderCanvas->getShapeCount() == 0)
    {refreshIds();}
}

void MainWindow::on_ellipseModMenu_deleteButton_clicked()
{
    myStd::vector<Shape::Shape*>::iterator i = ui->renderCanvas->getShapes().begin();
    ui->renderCanvas->getShapes().erase(i+(ui->shapeIdModSpinBox->value()-1));
    for(int i = (ui->shapeIdModSpinBox->value()-1); i < ui->renderCanvas->getShapeCount();++i)
    {
        ui->renderCanvas->getShapes()[i]->setId(i+1);
    }
    ui->renderCanvas->update();
    ui->ellipseModMenu->hide();
    ui->ModMenu_deleteScreen->show();
    if(ui->renderCanvas->getShapeCount() == 0)
    {refreshIds();}
}

void MainWindow::on_polygonModMenu_deleteButton_clicked()
{
    myStd::vector<Shape::Shape*>::iterator i = ui->renderCanvas->getShapes().begin();
    ui->renderCanvas->getShapes().erase(i+(ui->shapeIdModSpinBox->value()-1));
    for(int i = (ui->shapeIdModSpinBox->value()-1); i < ui->renderCanvas->getShapeCount();++i)
    {
        ui->renderCanvas->getShapes()[i]->setId(i+1);
    }
    ui->renderCanvas->update();
    ui->polygonModMenu->hide();
    ui->ModMenu_deleteScreen->show();
    if(ui->renderCanvas->getShapeCount() == 0)
    {refreshIds();}
}

void MainWindow::on_polyLineModMenu_deleteButton_clicked()
{
    myStd::vector<Shape::Shape*>::iterator i = ui->renderCanvas->getShapes().begin();
    ui->renderCanvas->getShapes().erase(i+(ui->shapeIdModSpinBox->value()-1));
    for(int i = (ui->shapeIdModSpinBox->value()-1); i < ui->renderCanvas->getShapeCount();++i)
    {
        ui->renderCanvas->getShapes()[i]->setId(i+1);
    }
    ui->renderCanvas->update();
    ui->polylineModMenu->hide();
    ui->ModMenu_deleteScreen->show();
    if(ui->renderCanvas->getShapeCount() == 0)
    {refreshIds();}
}

void MainWindow::on_rectangleModMenu_deleteButton_clicked()
{
    myStd::vector<Shape::Shape*>::iterator i = ui->renderCanvas->getShapes().begin();
    ui->renderCanvas->getShapes().erase(i+(ui->shapeIdModSpinBox->value()-1));
    for(int i = (ui->shapeIdModSpinBox->value()-1); i < ui->renderCanvas->getShapeCount();++i)
    {
        ui->renderCanvas->getShapes()[i]->setId(i+1);
    }
    ui->renderCanvas->update();
    ui->rectangleModMenu->hide();
    ui->ModMenu_deleteScreen->show();
    if(ui->renderCanvas->getShapeCount() == 0)
    {refreshIds();}
}

void MainWindow::on_squareModMenu_deleteButton_clicked()
{
    myStd::vector<Shape::Shape*>::iterator i = ui->renderCanvas->getShapes().begin();
    ui->renderCanvas->getShapes().erase(i+(ui->shapeIdModSpinBox->value()-1));
    for(int i = (ui->shapeIdModSpinBox->value()-1); i < ui->renderCanvas->getShapeCount();++i)
    {
        ui->renderCanvas->getShapes()[i]->setId(i+1);
    }
    ui->renderCanvas->update();
    ui->squareModMenu->hide();
    ui->ModMenu_deleteScreen->show();
    if(ui->renderCanvas->getShapeCount() == 0)
    {refreshIds();}
}

void MainWindow::on_textModMenu_deleteButton_clicked()
{
    myStd::vector<Shape::Shape*>::iterator i = ui->renderCanvas->getShapes().begin();
    ui->renderCanvas->getShapes().erase(i+(ui->shapeIdModSpinBox->value()-1));
    for(int i = (ui->shapeIdModSpinBox->value()-1); i < ui->renderCanvas->getShapeCount();++i)
    {
        ui->renderCanvas->getShapes()[i]->setId(i+1);
    }
    ui->renderCanvas->update();
    ui->textModMenu->hide();
    ui->ModMenu_deleteScreen->show();
    if(ui->renderCanvas->getShapeCount() == 0)
    {refreshIds();}
}

void MainWindow::on_shapeTypeAddCombo_currentIndexChanged(int index)
{
    if(tempShape.size() != 0)
    {
        myStd::vector<QPoint>::iterator i = tempShape.begin();
        while(tempShape.size() != 0)
        {
            tempShape.erase(i+(tempShape.size()-1));
        }
    }
    switch(index)
    {
    case 0:
        ui->lineAddMenu->show();
        ui->polylineAddMenu->hide();
        ui->polygonAddMenu->hide();
        ui->rectangleAddMenu->hide();
        ui->squareAddMenu->hide();
        ui->ellipseAddMenu->hide();
        ui->circleAddMenu->hide();
        ui->textAddMenu->hide();
        break;
    case 1:
        ui->lineAddMenu->hide();
        ui->polylineAddMenu->show();
        ui->polygonAddMenu->hide();
        ui->rectangleAddMenu->hide();
        ui->squareAddMenu->hide();
        ui->ellipseAddMenu->hide();
        ui->circleAddMenu->hide();
        ui->textAddMenu->hide();
        break;
    case 2:
        ui->lineAddMenu->hide();
        ui->polylineAddMenu->hide();
        ui->polygonAddMenu->show();
        ui->rectangleAddMenu->hide();
        ui->squareAddMenu->hide();
        ui->ellipseAddMenu->hide();
        ui->circleAddMenu->hide();
        ui->textAddMenu->hide();
        break;
    case 3:
        ui->lineAddMenu->hide();
        ui->polylineAddMenu->hide();
        ui->polygonAddMenu->hide();
        ui->rectangleAddMenu->show();
        ui->squareAddMenu->hide();
        ui->ellipseAddMenu->hide();
        ui->circleAddMenu->hide();
        ui->textAddMenu->hide();
        break;
    case 4:
        ui->lineAddMenu->hide();
        ui->polylineAddMenu->hide();
        ui->polygonAddMenu->hide();
        ui->rectangleAddMenu->hide();
        ui->squareAddMenu->show();
        ui->ellipseAddMenu->hide();
        ui->circleAddMenu->hide();
        ui->textAddMenu->hide();
        break;
    case 5:
        ui->lineAddMenu->hide();
        ui->polylineAddMenu->hide();
        ui->polygonAddMenu->hide();
        ui->rectangleAddMenu->hide();
        ui->squareAddMenu->hide();
        ui->ellipseAddMenu->show();
        ui->circleAddMenu->hide();
        ui->textAddMenu->hide();
        break;
    case 6:
        ui->lineAddMenu->hide();
        ui->polylineAddMenu->hide();
        ui->polygonAddMenu->hide();
        ui->rectangleAddMenu->hide();
        ui->squareAddMenu->hide();
        ui->ellipseAddMenu->hide();
        ui->circleAddMenu->show();
        ui->textAddMenu->hide();
        break;
    case 7:
        ui->lineAddMenu->hide();
        ui->polylineAddMenu->hide();
        ui->polygonAddMenu->hide();
        ui->rectangleAddMenu->hide();
        ui->squareAddMenu->hide();
        ui->ellipseAddMenu->hide();
        ui->circleAddMenu->hide();
        ui->textAddMenu->show();
        break;
    }
}

void MainWindow::on_lineAddMenu_createButton_clicked()
{
    Shape::Shape* tempLine;
    QPoint tempStart, tempEnd;
    QBrush *tempPenBrush;
    QPen *tempPen;
    qreal tempPenWidth = ui->lineAddMenu_penSettings_lineWidthSpinBox->value();
    Qt::PenStyle tempPenStyle;
    Qt::PenCapStyle tempPenCapStyle;
    Qt::PenJoinStyle tempPenJoinStyle;
    switch(ui->lineAddMenu_penSettings_lineColorCombo->currentIndex())
    {
    case 0: tempPenBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempPenBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempPenBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempPenBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempPenBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempPenBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempPenBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempPenBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempPenBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempPenBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempPenBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempPenBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempPenBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempPenBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempPenBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempPenBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempPenBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->lineAddMenu_penSettings_penStyleCombo->currentIndex())
    {
    case 0:tempPenStyle = Qt::SolidLine;break;
    case 1:tempPenStyle = Qt::DashLine;break;
    case 2:tempPenStyle = Qt::DotLine;break;
    case 3:tempPenStyle = Qt::DashDotLine;break;
    case 4:tempPenStyle = Qt::DashDotDotLine;break;
    }
    switch(ui->lineAddMenu_penSettings_capStyleCombo->currentIndex())
    {
    case 0:tempPenCapStyle = Qt::SquareCap;break;
    case 1:tempPenCapStyle = Qt::FlatCap;break;
    case 2:tempPenCapStyle = Qt::RoundCap;break;
    }
    switch(ui->lineAddMenu_penSettings_joinStyleCombo->currentIndex())
    {
    case 0:tempPenJoinStyle = Qt::BevelJoin;break;
    case 1:tempPenJoinStyle = Qt::MiterJoin;break;
    case 2:tempPenJoinStyle = Qt::RoundJoin;break;
    }
    tempPen = new QPen(*tempPenBrush,tempPenWidth,tempPenStyle,tempPenCapStyle,tempPenJoinStyle);
    int tempCount = ui->renderCanvas->getShapeCount()+1;
    bool ok = false;
    tempStart = QPoint(ui->lineAddMenu_dimensions_startPointX->text().toInt(&ok,10),ui->lineAddMenu_dimensions_startPointY->text().toInt(&ok,10));
    tempEnd = QPoint(ui->lineAddMenu_dimensions_endPointX->text().toInt(&ok,10),ui->lineAddMenu_dimensions_endPointY->text().toInt(&ok,10));
    if(ok)
    {
        tempLine = new Shape::Line(ui->renderCanvas,tempCount,*tempPen,Qt::NoBrush,tempStart,tempEnd);
        ui->renderCanvas->getShapes().push_back(tempLine);
    }
    refreshIds();
    ui->renderCanvas->update();
}

void MainWindow::on_polyLineAddMenu_dimensions_addPointButton_clicked()
{
    bool ok = false;
    QString tempString;
    QPoint tempPnt;
    tempPnt = QPoint(ui->polyLineAddMenu_dimensions_startPointX->text().toInt(&ok,10),ui->polyLineAddMenu_dimensions_startPointY->text().toInt(&ok,10));
    if(ok)
    {
        tempString = "p";
        tempString.append(QString::number(ui->polyLineAddMenu_dimensions_pointList->count()+1));
        tempString.append('(');
        tempString.append(QString::number(tempPnt.x()));
        tempString.append(',');
        tempString.append(QString::number(tempPnt.y()));
        tempString.append(')');
        new QListWidgetItem(tempString,ui->polyLineAddMenu_dimensions_pointList);
        tempShape.push_back(tempPnt);
    }
}

void MainWindow::on_polyLineAddMenu_dimensions_movePointButton_clicked()
{
    bool ok = false;
    QString tempString;
    QPoint *tempPnt;
    tempPnt = new QPoint(ui->polyLineAddMenu_dimensions_startPointX->text().toInt(&ok,10),ui->polyLineAddMenu_dimensions_startPointY->text().toInt(&ok,10));
    if(ok)
    {
        tempString = "p";
        tempString.append(QString::number(ui->polyLineAddMenu_dimensions_pointList->currentIndex().row()+1));
        tempString.append('(');
        tempString.append(QString::number(tempPnt->x()));
        tempString.append(',');
        tempString.append(QString::number(tempPnt->y()));
        tempString.append(')');
        myStd::vector<QPoint>::iterator i = tempShape.begin()+ui->polyLineAddMenu_dimensions_pointList->currentRow();
        *(i) = *tempPnt;
        QListWidgetItem *old = ui->polyLineAddMenu_dimensions_pointList->takeItem(ui->polyLineAddMenu_dimensions_pointList->currentRow());
        delete old;
        new QListWidgetItem (tempString,ui->polyLineAddMenu_dimensions_pointList);

        tempPnt = nullptr;
    }
}

void MainWindow::on_polyLineAddMenu_dimensions_deletePointButton_clicked()
{
    tempShape.erase(tempShape.begin()+ui->polyLineAddMenu_dimensions_pointList->currentRow());

    //QListWidgetItem *old = ui->polyLineModMenu_dimensions_pointList->takeItem(ui->polyLineModMenu_dimensions_pointList->currentRow());
    //delete old;
    ui->polyLineAddMenu_dimensions_pointList->clear();
    QString tempString;
    int counter = 1;
    myStd::vector<QPoint>::iterator i = tempShape.begin();
    while(i < tempShape.end())
    {
        tempString = "p";
        tempString.append(QString::number(counter));
        tempString.append('(');
        tempString.append(QString::number(i->x()));
        tempString.append(',');
        tempString.append(QString::number(i->y()));
        tempString.append(')');
        new QListWidgetItem(tempString,ui->polyLineAddMenu_dimensions_pointList);
        tempString.clear();
        ++i;
        ++counter;
    }
}

void MainWindow::on_polyLineAddMenu_createButton_clicked()
{
    Shape::Shape* tempPolyLine;
    QPoint tempStart, tempEnd;
    QBrush *tempPenBrush;
    QPen *tempPen;
    qreal tempPenWidth = ui->polyLineAddMenu_penSettings_lineWidthSpinBox->value();
    Qt::PenStyle tempPenStyle;
    Qt::PenCapStyle tempPenCapStyle;
    Qt::PenJoinStyle tempPenJoinStyle;
    switch(ui->polyLineAddMenu_penSettings_lineColorCombo->currentIndex())
    {
    case 0: tempPenBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempPenBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempPenBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempPenBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempPenBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempPenBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempPenBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempPenBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempPenBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempPenBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempPenBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempPenBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempPenBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempPenBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempPenBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempPenBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempPenBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->polyLineAddMenu_penSettings_penStyleCombo->currentIndex())
    {
    case 0:tempPenStyle = Qt::SolidLine;break;
    case 1:tempPenStyle = Qt::DashLine;break;
    case 2:tempPenStyle = Qt::DotLine;break;
    case 3:tempPenStyle = Qt::DashDotLine;break;
    case 4:tempPenStyle = Qt::DashDotDotLine;break;
    }
    switch(ui->polyLineAddMenu_penSettings_capStyleCombo->currentIndex())
    {
    case 0:tempPenCapStyle = Qt::SquareCap;break;
    case 1:tempPenCapStyle = Qt::FlatCap;break;
    case 2:tempPenCapStyle = Qt::RoundCap;break;
    }
    switch(ui->polyLineAddMenu_penSettings_joinStyleCombo->currentIndex())
    {
    case 0:tempPenJoinStyle = Qt::BevelJoin;break;
    case 1:tempPenJoinStyle = Qt::MiterJoin;break;
    case 2:tempPenJoinStyle = Qt::RoundJoin;break;
    }
    int tempCount = ui->renderCanvas->getShapeCount()+1;
    tempPen = new QPen(*tempPenBrush,tempPenWidth,tempPenStyle,tempPenCapStyle,tempPenJoinStyle);
    tempPolyLine = new Shape::Polyline(ui->renderCanvas,tempCount,*tempPen,Qt::NoBrush,tempShape);
    ui->renderCanvas->getShapes().push_back(tempPolyLine);
    refreshIds();
    ui->renderCanvas->update();
}

void MainWindow::on_polygonAddMenu_dimensions_addPointButton_clicked()
{
    bool ok = false;
    QString tempString;
    QPoint tempPnt;
    tempPnt = QPoint(ui->polygonAddMenu_dimensions_startPointX->text().toInt(&ok,10),ui->polygonAddMenu_dimensions_startPointY->text().toInt(&ok,10));
    if(ok)
    {
        tempString = "p";
        tempString.append(QString::number(ui->polygonAddMenu_dimensions_pointList->count()+1));
        tempString.append('(');
        tempString.append(QString::number(tempPnt.x()));
        tempString.append(',');
        tempString.append(QString::number(tempPnt.y()));
        tempString.append(')');
        new QListWidgetItem(tempString,ui->polygonAddMenu_dimensions_pointList);
        tempShape.push_back(tempPnt);
    }
}

void MainWindow::on_polygonAddMenu_dimensions_movePointButton_clicked()
{
    bool ok = false;
    QString tempString;
    QPoint *tempPnt;
    tempPnt = new QPoint(ui->polygonAddMenu_dimensions_startPointX->text().toInt(&ok,10),ui->polygonAddMenu_dimensions_startPointY->text().toInt(&ok,10));
    if(ok)
    {
        tempString = "p";
        tempString.append(QString::number(ui->polygonAddMenu_dimensions_pointList->currentIndex().row()+1));
        tempString.append('(');
        tempString.append(QString::number(tempPnt->x()));
        tempString.append(',');
        tempString.append(QString::number(tempPnt->y()));
        tempString.append(')');
        myStd::vector<QPoint>::iterator i = tempShape.begin()+ui->polygonAddMenu_dimensions_pointList->currentRow();
        *(i) = *tempPnt;
        QListWidgetItem *old = ui->polygonAddMenu_dimensions_pointList->takeItem(ui->polygonAddMenu_dimensions_pointList->currentRow());
        delete old;
        new QListWidgetItem (tempString,ui->polygonAddMenu_dimensions_pointList);

        tempPnt = nullptr;
    }
}

void MainWindow::on_polygonAddMenu_dimensions_deletePointButton_clicked()
{
    tempShape.erase(tempShape.begin()+ui->polygonAddMenu_dimensions_pointList->currentRow());

    //QListWidgetItem *old = ui->polyLineModMenu_dimensions_pointList->takeItem(ui->polyLineModMenu_dimensions_pointList->currentRow());
    //delete old;
    ui->polygonAddMenu_dimensions_pointList->clear();
    QString tempString;
    int counter = 1;
    myStd::vector<QPoint>::iterator i = tempShape.begin();
    while(i < tempShape.end())
    {
        tempString = "p";
        tempString.append(QString::number(counter));
        tempString.append('(');
        tempString.append(QString::number(i->x()));
        tempString.append(',');
        tempString.append(QString::number(i->y()));
        tempString.append(')');
        new QListWidgetItem(tempString,ui->polygonAddMenu_dimensions_pointList);
        tempString.clear();
        ++i;
        ++counter;
    }
}

void MainWindow::on_polygonAddMenu_createButton_clicked()
{
    Shape::Shape* tempPolygon;
    QPoint tempStart, tempEnd;
    QBrush *tempPenBrush, *tempBrush;
    QPen *tempPen;
    qreal tempPenWidth = ui->polygonAddMenu_penSettings_lineWidthSpinBox->value();
    Qt::PenStyle tempPenStyle;
    Qt::PenCapStyle tempPenCapStyle;
    Qt::PenJoinStyle tempPenJoinStyle;
    switch(ui->polygonAddMenu_penSettings_lineColorCombo->currentIndex())
    {
    case 0: tempPenBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempPenBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempPenBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempPenBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempPenBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempPenBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempPenBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempPenBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempPenBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempPenBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempPenBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempPenBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempPenBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempPenBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempPenBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempPenBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempPenBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->polygonAddMenu_penSettings_penStyleCombo->currentIndex())
    {
    case 0:tempPenStyle = Qt::SolidLine;break;
    case 1:tempPenStyle = Qt::DashLine;break;
    case 2:tempPenStyle = Qt::DotLine;break;
    case 3:tempPenStyle = Qt::DashDotLine;break;
    case 4:tempPenStyle = Qt::DashDotDotLine;break;
    }
    switch(ui->polygonAddMenu_penSettings_capStyleCombo->currentIndex())
    {
    case 0:tempPenCapStyle = Qt::SquareCap;break;
    case 1:tempPenCapStyle = Qt::FlatCap;break;
    case 2:tempPenCapStyle = Qt::RoundCap;break;
    }
    switch(ui->polygonAddMenu_penSettings_joinStyleCombo->currentIndex())
    {
    case 0:tempPenJoinStyle = Qt::BevelJoin;break;
    case 1:tempPenJoinStyle = Qt::MiterJoin;break;
    case 2:tempPenJoinStyle = Qt::RoundJoin;break;
    }
    switch(ui->polygonAddMenu_penSettings_brushColorCombo->currentIndex())
    {
    case 0: tempBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->polygonAddMenu_penSettings_brushStyleCombo->currentIndex())
    {
    case 0:tempBrush->setStyle(Qt::SolidPattern);break;
    case 1:tempBrush->setStyle(Qt::NoBrush);break;
    case 2:tempBrush->setStyle(Qt::Dense1Pattern);break;
    case 3:tempBrush->setStyle(Qt::Dense2Pattern);break;
    case 4:tempBrush->setStyle(Qt::Dense3Pattern);break;
    case 5:tempBrush->setStyle(Qt::Dense4Pattern);break;
    case 6:tempBrush->setStyle(Qt::Dense5Pattern);break;
    case 7:tempBrush->setStyle(Qt::Dense6Pattern);break;
    case 8:tempBrush->setStyle(Qt::Dense7Pattern);break;
    case 9:tempBrush->setStyle(Qt::HorPattern);break;
    case 10:tempBrush->setStyle(Qt::VerPattern);break;
    case 11:tempBrush->setStyle(Qt::CrossPattern);break;
    case 12:tempBrush->setStyle(Qt::BDiagPattern);break;
    case 13:tempBrush->setStyle(Qt::FDiagPattern);break;
    case 14:tempBrush->setStyle(Qt::DiagCrossPattern);break;
    }
    int tempCount = ui->renderCanvas->getShapeCount()+1;
    tempPen = new QPen(*tempPenBrush,tempPenWidth,tempPenStyle,tempPenCapStyle,tempPenJoinStyle);
    tempPolygon = new Shape::Polygon(ui->renderCanvas,tempCount,*tempPen,*tempBrush,tempShape);
    refreshIds();
    ui->renderCanvas->getShapes().push_back(tempPolygon);
    ui->renderCanvas->update();
}

void MainWindow::on_rectangleAddMenu_createButton_clicked()
{
    Shape::Shape* tempRectangle;
    QPoint tempUpperLeft;
    int width, height;
    QBrush *tempPenBrush, *tempBrush;
    QPen *tempPen;
    qreal tempPenWidth = ui->rectangleAddMenu_penSettings_lineWidthSpinBox->value();
    Qt::PenStyle tempPenStyle;
    Qt::PenCapStyle tempPenCapStyle;
    Qt::PenJoinStyle tempPenJoinStyle;
    switch(ui->rectangleAddMenu_penSettings_lineColorCombo->currentIndex())
    {
    case 0: tempPenBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempPenBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempPenBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempPenBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempPenBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempPenBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempPenBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempPenBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempPenBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempPenBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempPenBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempPenBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempPenBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempPenBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempPenBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempPenBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempPenBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->rectangleAddMenu_penSettings_penStyleCombo->currentIndex())
    {
    case 0:tempPenStyle = Qt::SolidLine;break;
    case 1:tempPenStyle = Qt::DashLine;break;
    case 2:tempPenStyle = Qt::DotLine;break;
    case 3:tempPenStyle = Qt::DashDotLine;break;
    case 4:tempPenStyle = Qt::DashDotDotLine;break;
    }
    switch(ui->rectangleAddMenu_penSettings_capStyleCombo->currentIndex())
    {
    case 0:tempPenCapStyle = Qt::SquareCap;break;
    case 1:tempPenCapStyle = Qt::FlatCap;break;
    case 2:tempPenCapStyle = Qt::RoundCap;break;
    }
    switch(ui->rectangleAddMenu_penSettings_joinStyleCombo->currentIndex())
    {
    case 0:tempPenJoinStyle = Qt::BevelJoin;break;
    case 1:tempPenJoinStyle = Qt::MiterJoin;break;
    case 2:tempPenJoinStyle = Qt::RoundJoin;break;
    }
    switch(ui->rectangleAddMenu_penSettings_brushColorCombo->currentIndex())
    {
    case 0: tempBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->rectangleAddMenu_penSettings_brushStyleCombo->currentIndex())
    {
    case 0:tempBrush->setStyle(Qt::SolidPattern);break;
    case 1:tempBrush->setStyle(Qt::NoBrush);break;
    case 2:tempBrush->setStyle(Qt::Dense1Pattern);break;
    case 3:tempBrush->setStyle(Qt::Dense2Pattern);break;
    case 4:tempBrush->setStyle(Qt::Dense3Pattern);break;
    case 5:tempBrush->setStyle(Qt::Dense4Pattern);break;
    case 6:tempBrush->setStyle(Qt::Dense5Pattern);break;
    case 7:tempBrush->setStyle(Qt::Dense6Pattern);break;
    case 8:tempBrush->setStyle(Qt::Dense7Pattern);break;
    case 9:tempBrush->setStyle(Qt::HorPattern);break;
    case 10:tempBrush->setStyle(Qt::VerPattern);break;
    case 11:tempBrush->setStyle(Qt::CrossPattern);break;
    case 12:tempBrush->setStyle(Qt::BDiagPattern);break;
    case 13:tempBrush->setStyle(Qt::FDiagPattern);break;
    case 14:tempBrush->setStyle(Qt::DiagCrossPattern);break;
    }
    tempPen = new QPen(*tempPenBrush,tempPenWidth,tempPenStyle,tempPenCapStyle,tempPenJoinStyle);
    int tempCount = ui->renderCanvas->getShapeCount()+1;
    bool ok = false;
    tempUpperLeft = QPoint(ui->rectangleAddMenu_dimensions_upperLeftX->text().toInt(&ok,10),ui->rectangleAddMenu_dimensions_upperLeftY->text().toInt(&ok,10));
    width = ui->rectangleAddMenu_dimensions_width->text().toInt(&ok,10);
    height = ui->rectangleAddMenu_dimensions_height->text().toInt(&ok,10);
    if(ok)
    {
        tempRectangle = new Shape::Rectangle(ui->renderCanvas,tempCount,Shape::Shape::shape::Rectangle,*tempPen,*tempBrush,tempUpperLeft,width,height);
        ui->renderCanvas->getShapes().push_back(tempRectangle);
    }
    ui->renderCanvas->update();
    refreshIds();
}

void MainWindow::on_squareModMenu_updateButton_2_clicked()
{
    Shape::Shape* tempSquare;
    QPoint tempUpperLeft;
    int sideLength;
    QBrush *tempPenBrush, *tempBrush;
    QPen *tempPen;
    qreal tempPenWidth = ui->squareAddMenu_penSettings_lineWidthSpinBox->value();
    Qt::PenStyle tempPenStyle;
    Qt::PenCapStyle tempPenCapStyle;
    Qt::PenJoinStyle tempPenJoinStyle;
    switch(ui->squareAddMenu_penSettings_lineColorCombo->currentIndex())
    {
    case 0: tempPenBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempPenBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempPenBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempPenBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempPenBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempPenBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempPenBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempPenBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempPenBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempPenBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempPenBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempPenBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempPenBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempPenBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempPenBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempPenBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempPenBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->squareAddMenu_penSettings_penStyleCombo->currentIndex())
    {
    case 0:tempPenStyle = Qt::SolidLine;break;
    case 1:tempPenStyle = Qt::DashLine;break;
    case 2:tempPenStyle = Qt::DotLine;break;
    case 3:tempPenStyle = Qt::DashDotLine;break;
    case 4:tempPenStyle = Qt::DashDotDotLine;break;
    }
    switch(ui->squareAddMenu_penSettings_capStyleCombo->currentIndex())
    {
    case 0:tempPenCapStyle = Qt::SquareCap;break;
    case 1:tempPenCapStyle = Qt::FlatCap;break;
    case 2:tempPenCapStyle = Qt::RoundCap;break;
    }
    switch(ui->squareAddMenu_penSettings_joinStyleCombo->currentIndex())
    {
    case 0:tempPenJoinStyle = Qt::BevelJoin;break;
    case 1:tempPenJoinStyle = Qt::MiterJoin;break;
    case 2:tempPenJoinStyle = Qt::RoundJoin;break;
    }
    switch(ui->squareAddMenu_penSettings_brushColorCombo->currentIndex())
    {
    case 0: tempBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->squareAddMenu_penSettings_brushStyleCombo->currentIndex())
    {
    case 0:tempBrush->setStyle(Qt::SolidPattern);break;
    case 1:tempBrush->setStyle(Qt::NoBrush);break;
    case 2:tempBrush->setStyle(Qt::Dense1Pattern);break;
    case 3:tempBrush->setStyle(Qt::Dense2Pattern);break;
    case 4:tempBrush->setStyle(Qt::Dense3Pattern);break;
    case 5:tempBrush->setStyle(Qt::Dense4Pattern);break;
    case 6:tempBrush->setStyle(Qt::Dense5Pattern);break;
    case 7:tempBrush->setStyle(Qt::Dense6Pattern);break;
    case 8:tempBrush->setStyle(Qt::Dense7Pattern);break;
    case 9:tempBrush->setStyle(Qt::HorPattern);break;
    case 10:tempBrush->setStyle(Qt::VerPattern);break;
    case 11:tempBrush->setStyle(Qt::CrossPattern);break;
    case 12:tempBrush->setStyle(Qt::BDiagPattern);break;
    case 13:tempBrush->setStyle(Qt::FDiagPattern);break;
    case 14:tempBrush->setStyle(Qt::DiagCrossPattern);break;
    }
    tempPen = new QPen(*tempPenBrush,tempPenWidth,tempPenStyle,tempPenCapStyle,tempPenJoinStyle);
    int tempCount = ui->renderCanvas->getShapeCount()+1;
    bool ok = false;
    tempUpperLeft = QPoint(ui->squareAddMenu_dimensions_upperLeftX->text().toInt(&ok,10),ui->squareAddMenu_dimensions_upperLeftY->text().toInt(&ok,10));
    sideLength = ui->squareAddMenu_dimensions_sideLength->text().toInt(&ok,10);
    if(ok)
    {
        tempSquare = new Shape::Square(ui->renderCanvas,tempCount,*tempPen,*tempBrush,tempUpperLeft,sideLength);
        ui->renderCanvas->getShapes().push_back(tempSquare);
    }
    refreshIds();
    ui->renderCanvas->update();
}

void MainWindow::on_ellipseAddMenu_createButton_clicked()
{
    Shape::Shape* tempEllipse;
    QPoint tempOrigin;
    int rx, ry;
    QBrush *tempPenBrush, *tempBrush;
    QPen *tempPen;
    qreal tempPenWidth = ui->ellipseAddMenu_penSettings_lineWidthSpinBox->value();
    Qt::PenStyle tempPenStyle;
    Qt::PenCapStyle tempPenCapStyle;
    Qt::PenJoinStyle tempPenJoinStyle;
    switch(ui->ellipseAddMenu_penSettings_lineColorCombo->currentIndex())
    {
    case 0: tempPenBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempPenBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempPenBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempPenBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempPenBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempPenBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempPenBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempPenBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempPenBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempPenBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempPenBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempPenBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempPenBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempPenBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempPenBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempPenBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempPenBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->ellipseAddMenu_penSettings_penStyleCombo->currentIndex())
    {
    case 0:tempPenStyle = Qt::SolidLine;break;
    case 1:tempPenStyle = Qt::DashLine;break;
    case 2:tempPenStyle = Qt::DotLine;break;
    case 3:tempPenStyle = Qt::DashDotLine;break;
    case 4:tempPenStyle = Qt::DashDotDotLine;break;
    }
    switch(ui->ellipseAddMenu_penSettings_capStyleCombo->currentIndex())
    {
    case 0:tempPenCapStyle = Qt::SquareCap;break;
    case 1:tempPenCapStyle = Qt::FlatCap;break;
    case 2:tempPenCapStyle = Qt::RoundCap;break;
    }
    switch(ui->ellipseAddMenu_penSettings_joinStyleCombo->currentIndex())
    {
    case 0:tempPenJoinStyle = Qt::BevelJoin;break;
    case 1:tempPenJoinStyle = Qt::MiterJoin;break;
    case 2:tempPenJoinStyle = Qt::RoundJoin;break;
    }
    switch(ui->ellipseAddMenu_penSettings_brushColorCombo->currentIndex())
    {
    case 0: tempBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->ellipseAddMenu_penSettings_brushStyleCombo->currentIndex())
    {
    case 0:tempBrush->setStyle(Qt::SolidPattern);break;
    case 1:tempBrush->setStyle(Qt::NoBrush);break;
    case 2:tempBrush->setStyle(Qt::Dense1Pattern);break;
    case 3:tempBrush->setStyle(Qt::Dense2Pattern);break;
    case 4:tempBrush->setStyle(Qt::Dense3Pattern);break;
    case 5:tempBrush->setStyle(Qt::Dense4Pattern);break;
    case 6:tempBrush->setStyle(Qt::Dense5Pattern);break;
    case 7:tempBrush->setStyle(Qt::Dense6Pattern);break;
    case 8:tempBrush->setStyle(Qt::Dense7Pattern);break;
    case 9:tempBrush->setStyle(Qt::HorPattern);break;
    case 10:tempBrush->setStyle(Qt::VerPattern);break;
    case 11:tempBrush->setStyle(Qt::CrossPattern);break;
    case 12:tempBrush->setStyle(Qt::BDiagPattern);break;
    case 13:tempBrush->setStyle(Qt::FDiagPattern);break;
    case 14:tempBrush->setStyle(Qt::DiagCrossPattern);break;
    }
    tempPen = new QPen(*tempPenBrush,tempPenWidth,tempPenStyle,tempPenCapStyle,tempPenJoinStyle);
    int tempCount = ui->renderCanvas->getShapeCount()+1;
    bool ok = false;
    tempOrigin = QPoint(ui->ellipseModMenu_dimensions_originX->text().toInt(&ok,10),ui->ellipseModMenu_dimensions_originY->text().toInt(&ok,10));
    rx = ui->ellipseModMenu_dimensions_RX->text().toInt(&ok,10);
    ry = ui->ellipseModMenu_dimensions_RY->text().toInt(&ok,10);
    if(ok)
    {
        tempEllipse = new Shape::Ellipse(ui->renderCanvas,tempCount,Shape::Shape::shape::Ellipse,*tempPen,*tempBrush,tempOrigin,rx,ry);
        ui->renderCanvas->getShapes().push_back(tempEllipse);
    }
    refreshIds();
    ui->renderCanvas->update();
}

void MainWindow::on_circleAddMenu_createButton_clicked()
{
    Shape::Shape* tempCircle;
    QPoint tempOrigin;
    int tempRadius;
    QBrush *tempPenBrush, *tempBrush;
    QPen *tempPen;
    qreal tempPenWidth = ui->circleAddMenu_penSettings_lineWidthSpinBox->value();
    Qt::PenStyle tempPenStyle;
    Qt::PenCapStyle tempPenCapStyle;
    Qt::PenJoinStyle tempPenJoinStyle;
    switch(ui->circleAddMenu_penSettings_lineColorCombo->currentIndex())
    {
    case 0: tempPenBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempPenBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempPenBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempPenBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempPenBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempPenBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempPenBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempPenBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempPenBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempPenBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempPenBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempPenBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempPenBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempPenBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempPenBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempPenBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempPenBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->circleAddMenu_penSettings_penStyleCombo->currentIndex())
    {
    case 0:tempPenStyle = Qt::SolidLine;break;
    case 1:tempPenStyle = Qt::DashLine;break;
    case 2:tempPenStyle = Qt::DotLine;break;
    case 3:tempPenStyle = Qt::DashDotLine;break;
    case 4:tempPenStyle = Qt::DashDotDotLine;break;
    }
    switch(ui->circleAddMenu_penSettings_capStyleCombo->currentIndex())
    {
    case 0:tempPenCapStyle = Qt::SquareCap;break;
    case 1:tempPenCapStyle = Qt::FlatCap;break;
    case 2:tempPenCapStyle = Qt::RoundCap;break;
    }
    switch(ui->circleAddMenu_penSettings_joinStyleCombo->currentIndex())
    {
    case 0:tempPenJoinStyle = Qt::BevelJoin;break;
    case 1:tempPenJoinStyle = Qt::MiterJoin;break;
    case 2:tempPenJoinStyle = Qt::RoundJoin;break;
    }
    switch(ui->circleAddMenu_penSettings_brushColorCombo->currentIndex())
    {
    case 0: tempBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->circleAddMenu_penSettings_brushStyleCombo->currentIndex())
    {
    case 0:tempBrush->setStyle(Qt::SolidPattern);break;
    case 1:tempBrush->setStyle(Qt::NoBrush);break;
    case 2:tempBrush->setStyle(Qt::Dense1Pattern);break;
    case 3:tempBrush->setStyle(Qt::Dense2Pattern);break;
    case 4:tempBrush->setStyle(Qt::Dense3Pattern);break;
    case 5:tempBrush->setStyle(Qt::Dense4Pattern);break;
    case 6:tempBrush->setStyle(Qt::Dense5Pattern);break;
    case 7:tempBrush->setStyle(Qt::Dense6Pattern);break;
    case 8:tempBrush->setStyle(Qt::Dense7Pattern);break;
    case 9:tempBrush->setStyle(Qt::HorPattern);break;
    case 10:tempBrush->setStyle(Qt::VerPattern);break;
    case 11:tempBrush->setStyle(Qt::CrossPattern);break;
    case 12:tempBrush->setStyle(Qt::BDiagPattern);break;
    case 13:tempBrush->setStyle(Qt::FDiagPattern);break;
    case 14:tempBrush->setStyle(Qt::DiagCrossPattern);break;
    }
    tempPen = new QPen(*tempPenBrush,tempPenWidth,tempPenStyle,tempPenCapStyle,tempPenJoinStyle);
    int tempCount = ui->renderCanvas->getShapeCount()+1;
    bool ok = false;
    tempOrigin = QPoint(ui->circleAddMenu_dimensions_originX->text().toInt(&ok,10),ui->circleAddMenu_dimensions_originY->text().toInt(&ok,10));
    tempRadius = ui->circleAddMenu_dimensions_Radius->text().toInt(&ok,10);
    if(ok)
    {
        tempCircle = new Shape::Circle(ui->renderCanvas,tempCount,*tempPen,*tempBrush,tempOrigin,tempRadius);
        ui->renderCanvas->getShapes().push_back(tempCircle);
    }
    refreshIds();
    ui->renderCanvas->update();
}

void MainWindow::on_textAddMenu_createButton_clicked()
{
    const QString SANS_SERIF = "SansSerif";
    const QString HELVETICA = "Helvetica";
    const QString SERIF = "Serif";
    const QString TIMES = "Times";
    const QString TYPEWRITER = "TypeWriter";
    const QString COURIER = "Courier";
    const QString OLD_ENGLISH = "OldEnglish";
    const QString DECORATIVE = "Decorative";
    const QString MONOSPACE = "Monospace";
    const QString FANTASY = "Fantasy";
    const QString CURSIVE = "Cursive";
    const QString SYSTEM = "System";

    Shape::Shape* tempText;
    QPoint tempUpperLeft;
    QFont tempFont;
    QPen *tempPen;
    QBrush *tempPenBrush;
    QString tempString;

    tempFont.setPointSize(ui->textAddMenu_textSettings_textPointSizeBox->value());
    switch(ui->textAddMenu_textSettings_textColorCombo->currentIndex())
    {
    case 0:tempPenBrush = new QBrush(Qt::GlobalColor::white);break;
    case 1:tempPenBrush = new QBrush(Qt::GlobalColor::black);break;
    case 2:tempPenBrush = new QBrush(Qt::GlobalColor::cyan);break;
    case 3:tempPenBrush = new QBrush(Qt::GlobalColor::darkCyan);break;
    case 4:tempPenBrush = new QBrush(Qt::GlobalColor::red);break;
    case 5:tempPenBrush = new QBrush(Qt::GlobalColor::darkRed);break;
    case 6:tempPenBrush = new QBrush(Qt::GlobalColor::magenta);break;
    case 7:tempPenBrush = new QBrush(Qt::GlobalColor::darkMagenta);break;
    case 8:tempPenBrush = new QBrush(Qt::GlobalColor::green);break;
    case 9:tempPenBrush = new QBrush(Qt::GlobalColor::darkGreen);break;
    case 10:tempPenBrush = new QBrush(Qt::GlobalColor::yellow);break;
    case 11:tempPenBrush = new QBrush(Qt::GlobalColor::darkYellow);break;
    case 12:tempPenBrush = new QBrush(Qt::GlobalColor::blue);break;
    case 13:tempPenBrush = new QBrush(Qt::GlobalColor::darkBlue);break;
    case 14:tempPenBrush = new QBrush(Qt::GlobalColor::gray);break;
    case 15:tempPenBrush = new QBrush(Qt::GlobalColor::darkGray);break;
    case 16:tempPenBrush = new QBrush(Qt::GlobalColor::lightGray);break;
    }
    switch(ui->textAddMenu_textSettings_fontCombo->currentIndex())
    {
    case 0:tempFont.setFamily(SANS_SERIF);break;
    case 1:tempFont.setFamily(HELVETICA);break;
    case 2:tempFont.setFamily(SERIF);break;
    case 3:tempFont.setFamily(TIMES);break;
    case 4:tempFont.setFamily(TYPEWRITER);break;
    case 5:tempFont.setFamily(COURIER);break;
    case 6:tempFont.setFamily(OLD_ENGLISH);break;
    case 7:tempFont.setFamily(DECORATIVE);break;
    case 8:tempFont.setFamily(MONOSPACE);break;
    case 9:tempFont.setFamily(FANTASY);break;
    case 10:tempFont.setFamily(CURSIVE);break;
    case 11:tempFont.setFamily(SYSTEM);break;
    }
    switch(ui->textAddMenu_textSettings_fontStyleCombo->currentIndex())
    {
    case 0:tempFont.setStyle(QFont::StyleNormal);break;
    case 1:tempFont.setStyle(QFont::StyleItalic);break;
    case 2:tempFont.setStyle(QFont::StyleOblique);break;
    }
    switch(ui->textAddMenu_textSettings_fontWeightCombo->currentIndex())
    {
    case 0:tempFont.setWeight(QFont::Light);break;
    case 1:tempFont.setWeight(QFont::Normal);break;
    case 2:tempFont.setWeight(QFont::DemiBold);break;
    case 3:tempFont.setWeight(QFont::Bold);break;
    case 4:tempFont.setWeight(QFont::Black);break;
    }
    tempPen = new QPen(*tempPenBrush,0,Qt::SolidLine,Qt::SquareCap,Qt::MiterJoin);
    int tempCount = ui->renderCanvas->getShapeCount()+1;
    bool ok = false;
    tempUpperLeft = QPoint(ui->textAddMenu_dimensions_upperLeftX->text().toInt(&ok,10),ui->textAddMenu_dimensions_upperLeftY->text().toInt(&ok,10));
    tempString = ui->textAddMenu_textSettings_textEdit->toPlainText();
    if(ok)
    {
        tempText = new Shape::Text(ui->renderCanvas,tempCount,*tempPen,Qt::NoBrush,tempUpperLeft,10,10,tempString);
        ui->renderCanvas->getShapes().push_back(tempText);
        ui->renderCanvas->getShape(tempCount)->setFont(tempFont);
    }
    refreshIds();
    ui->renderCanvas->update();
}

void MainWindow::on_tabMenu_tabBarClicked(int index)
{
    ui->lineAddMenu->show();
    ui->polylineAddMenu->hide();
    ui->polygonAddMenu->hide();
    ui->rectangleAddMenu->hide();
    ui->squareAddMenu->hide();
    ui->ellipseAddMenu->hide();
    ui->circleAddMenu->hide();
    ui->textAddMenu->hide();
}

void MainWindow::on_areaReportRefreshButton_clicked()
{
    ui->areaReport->clearContents();
    areaTableGen(ui->areaReport,ui->renderCanvas->getShapes());
    ui->areaReport->horizontalHeader()->setStretchLastSection(true);
}

void MainWindow::on_perimeterReportRefreshButton_clicked()
{
    ui->perimeterReport->clearContents();
    perimeterTableGen(ui->perimeterReport,ui->renderCanvas->getShapes());
    ui->perimeterReport->horizontalHeader()->setStretchLastSection(true);
}

void MainWindow::on_shapeReportRefreshButton_clicked()
{
    ui->shapeReport->clear();
    shapeTreeGen(ui->shapeReport,ui->renderCanvas->getShapes());
}

void MainWindow::on_actionGet_Help_triggered()
{
    ui->helpBrowser->show();
    ui->helpDoneButton->show();
}

void MainWindow::on_actionSave_and_Exit_triggered()
{
    saveFile(ui->renderCanvas->getShapes());
    QApplication::quit();
}

void MainWindow::on_helpDoneButton_clicked()
{
    ui->helpBrowser->hide();
    ui->helpDoneButton->hide();
}

void MainWindow::on_actionAdmin_Login_triggered()
{
    ui->loginMenu->show();
    ui->loginMenu_invalidInputLabel->hide();
}

void MainWindow::on_userLogin_logoutButton_clicked()
{
    adminPrivledge = false;
    ui->modMenu_adminBlind->show();
    ui->addMenu_adminBlind->show();
    ui->loginUserLineEdit->show();
    ui->loginPasswordLineEdit->show();
    ui->loginUserLabel->show();
    ui->loginPasswordLabel->show();
    ui->loginUserButton->show();
    ui->userLogin_logoutButton->hide();
    refreshIds();
}

void MainWindow::on_loginUserButton_clicked()
{
    QString user = ui->loginUserLineEdit->text();
    QString password = ui->loginPasswordLineEdit->text();
    ui->loginUserLineEdit->clear();
    ui->loginPasswordLineEdit->clear();
    if(user == adminUser && password == adminPassword)
    {
        adminPrivledge = true;
        ui->modMenu_adminBlind->hide();
        ui->addMenu_adminBlind->hide();
        ui->loginUserLineEdit->hide();
        ui->loginPasswordLineEdit->hide();
        ui->loginUserLabel->hide();
        ui->loginPasswordLabel->hide();
        ui->loginUserButton->hide();
        ui->userLogin_logoutButton->show();
        refreshIds();
    }
    else
    {
        ui->loginMenu_invalidInputLabel->show();
    }
}

void MainWindow::on_loginCancelButton_clicked()
{
    ui->loginMenu->hide();
}
