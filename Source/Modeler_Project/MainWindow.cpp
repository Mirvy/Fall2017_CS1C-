#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QColor>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
    if(ui->renderCanvas->getShapeCount() != 0)
    {
        ui->shapeIdModSpinBox->setMinimum(1);
        ui->shapeIdModSpinBox->setMaximum(ui->renderCanvas->getShapeCount());
    }
    else
    {
        ui->shapeIdModSpinBox->setRange(0,0);
    }
}

void MainWindow::on_shapeIdModSpinBox_valueChanged(int arg1)
{
    Shape::Shape::shape temp = ui->renderCanvas->getShape(arg1)->getShape();
    switch(temp)
    {
    case 0:
        ui->shapeModType->setText("Line");
        ui->lineModMenu->show();
        ui->polylineModMenu->hide();
        ui->polygonModMenu->hide();
        ui->rectangleModMenu->hide();
        ui->ellipseModMenu->hide();
        ui->textModMenu->hide();

        break;
    case 1:
        ui->shapeModType->setText("Polyline");
        ui->lineModMenu->hide();
        ui->polylineModMenu->show();
        ui->polygonModMenu->hide();
        ui->rectangleModMenu->hide();
        ui->ellipseModMenu->hide();
        ui->textModMenu->hide();
        ui->polyLineModMenu_dimensions_pointList->AboveItem
        break;
    case 2:
        ui->shapeModType->setText("Polygon");
        ui->lineModMenu->hide();
        ui->polylineModMenu->hide();
        ui->polygonModMenu->show();
        ui->rectangleModMenu->hide();
        ui->ellipseModMenu->hide();
        ui->textModMenu->hide();
        break;
    case 3:
        ui->shapeModType->setText("Rectangle");
        ui->lineModMenu->hide();
        ui->polylineModMenu->hide();
        ui->polygonModMenu->hide();
        ui->rectangleModMenu->show();
        ui->ellipseModMenu->hide();
        ui->textModMenu->hide();
        break;
    case 4:
        ui->shapeModType->setText("Square");
        ui->lineModMenu->hide();
        ui->polylineModMenu->hide();
        ui->polygonModMenu->hide();
        ui->rectangleModMenu->show();
        ui->ellipseModMenu->hide();
        ui->textModMenu->hide();
        break;
    case 5:
        ui->shapeModType->setText("Ellipse");
        ui->lineModMenu->hide();
        ui->polylineModMenu->hide();
        ui->polygonModMenu->hide();
        ui->rectangleModMenu->hide();
        ui->ellipseModMenu->show();
        ui->textModMenu->hide();
        break;
    case 6:
        ui->shapeModType->setText("Circle");
        ui->lineModMenu->hide();
        ui->polylineModMenu->hide();
        ui->polygonModMenu->hide();
        ui->rectangleModMenu->hide();
        ui->ellipseModMenu->show();
        ui->textModMenu->hide();
        break;
    case 7:
        ui->shapeModType->setText("Text");
        ui->lineModMenu->hide();
        ui->polylineModMenu->hide();
        ui->polygonModMenu->hide();
        ui->rectangleModMenu->hide();
        ui->ellipseModMenu->hide();
        ui->textModMenu->show();
        break;
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
