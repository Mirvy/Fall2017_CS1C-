#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "vector.h"
#include "shape.h"
using namespace myStd;
using namespace Shape;

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::setShape(myStd::vector<Shape::Shape*> sourceShape)
{
    testShape = sourceShape;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    myStd::vector<Shape::Shape*>::iterator i = testShape.begin();
    while(i < testShape.end())
    {
       (*i)->draw(this);
        ++i;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
