#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QTreeWidget>
#include "vector.h"
#include "shape.h"
using namespace myStd;
using namespace Shape;

namespace Ui {
class MainWindow;
}

void areaTableGen(QTableWidget* destination, myStd::vector<Shape::Shape*> &source);
void perimeterTableGen(QTableWidget* destination, myStd::vector<Shape::Shape*> &source);
void shapeTreeGen(QTreeWidget* destination, myStd::vector<Shape::Shape*> &source);
void saveFile(myStd::vector<Shape::Shape*> &source);

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

    void on_textModMenu_updateButton_clicked();

    void on_lineModMenu_deleteButton_clicked();

    void on_circleModMenu_deleteButton_clicked();

    void on_ellipseModMenu_deleteButton_clicked();

    void on_polygonModMenu_deleteButton_clicked();

    void on_polyLineModMenu_deleteButton_clicked();

    void on_rectangleModMenu_deleteButton_clicked();

    void on_squareModMenu_deleteButton_clicked();

    void on_textModMenu_deleteButton_clicked();

    void on_shapeTypeAddCombo_currentIndexChanged(int index);

    void on_lineAddMenu_createButton_clicked();

    void on_polyLineAddMenu_createButton_clicked();

    void on_polyLineAddMenu_dimensions_addPointButton_clicked();

    void on_polyLineAddMenu_dimensions_movePointButton_clicked();

    void on_polyLineAddMenu_dimensions_deletePointButton_clicked();

    void on_polygonAddMenu_createButton_clicked();

    void on_polygonAddMenu_dimensions_addPointButton_clicked();

    void on_polygonAddMenu_dimensions_movePointButton_clicked();

    void on_polygonAddMenu_dimensions_deletePointButton_clicked();

    void on_rectangleAddMenu_createButton_clicked();

    void on_squareModMenu_updateButton_2_clicked();

    void on_ellipseAddMenu_createButton_clicked();

    void on_circleAddMenu_createButton_clicked();

    void on_textAddMenu_createButton_clicked();

    void on_tabMenu_tabBarClicked(int index);

    void on_areaReportRefreshButton_clicked();

    void on_perimeterReportRefreshButton_clicked();

    void on_shapeReportRefreshButton_clicked();

    void on_actionGet_Help_triggered();

    void on_actionSave_and_Exit_triggered();

private:

    Ui::MainWindow *ui;
    vector<QPoint> tempShape;
    QTableWidget *areaReport;

};

#endif // MAINWINDOW_H
