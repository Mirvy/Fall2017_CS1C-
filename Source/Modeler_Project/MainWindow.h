#ifndef MAINDWNDOW_H
#define MAINWINDOW_H
#include <QWidget>
#include "shape.h"
#include "vector.h"
using namespace myStd;

namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void setShape(myStd::vector<Shape::Shape*> sourceShape);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    myStd::vector<Shape::Shape*> testShape;
};

#endif // MainWindow_H
