#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "vector.h"
#include "shape.h"


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

private:

    Ui::MainWindow *ui;


};

#endif // MAINWINDOW_H
