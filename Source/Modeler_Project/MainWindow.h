#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "vector.h"
#include "shape.h"
using namespace myStd;
using namespace Shape;

namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{

    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    void setShape(myStd::vector<Shape::Shape*>);
    void paintEvent(QPaintEvent *e);
    void refreshIds();
    ~MainWindow();

private slots:
    void on_shapeIdModSpinBox_valueChanged(int arg1);

    void on_lineModMenu_updateButton_clicked();

    void on_polyLineModMenu_dimensions_addPointButton_clicked();

    void on_polyLineModMenu_dimensions_movePointButton_clicked();

    void on_polyLineModMenu_dimensions_deletePointButton_clicked();

    void on_polyLineModMenu_updateButton_clicked();

    void on_polygonModMenu_dimensions_addPointButton_clicked();

    void on_polygonModMenu_dimensions_movePointButton_clicked();

    void on_polygonModMenu_dimensions_deletePointButton_clicked();

    void on_polygonModMenu_updateButton_clicked();

    void on_rectangleModMenu_updateButton_clicked();

    void on_squareModMenu_updateButton_clicked();

    void on_ellipseModMenu_updateButton_clicked();

    void on_circleModMenu_updateButton_clicked();

private:

    Ui::MainWindow *ui;
    vector<QPoint> tempShape;


};

#endif // MAINWINDOW_H
