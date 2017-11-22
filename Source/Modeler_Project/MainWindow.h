#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QTreeWidget>
#include <vector>
#include <string>
#include "vector.h"
#include "shape.h"
using namespace myStd;
using namespace Shape;

/****************************
 * ourList - Namspace
 * used to differentiate our
 * list struct from std's
 * list.
 * *************************/

namespace ourList{

/****************************
 * list - struct
 * simple container to hold
 * user names and asociated
 * feedback.
 * *************************/
struct list
{
    std::string name;
    std::string feedback;
};
}

/****************************
 * Ui - Namespace
 * used to isolate all of the
 * MainWindow objects and
 * functions.
 * *************************/

namespace Ui {

/***********************************
 * MainWindow
 * Primary widget from what all other widgets
 * are assigned to. Holds all of the menu,
 * canvas, and helper widgets.
 * ********************************/

class MainWindow;
//FORWARD DECLARATION - places MainWindow class into the Ui namespace

}

void areaTableGen(QTableWidget* destination, myStd::vector<Shape::Shape*> &source);
//areaTableGen():produces the area report table for the QTableWidget passed into it with the provided vector of shape*

void perimeterTableGen(QTableWidget* destination, myStd::vector<Shape::Shape*> &source);
//perimeterTableGen():produces the perimeter report table for the QTableWidget passed into it with the provided vector of shape*

void shapeTreeGen(QTreeWidget* destination, myStd::vector<Shape::Shape*> &source);
//shapeTreenGen():produces the shapeId tree for the QTreeWidget passed into tit with the provided vector of shape*

void saveFile(myStd::vector<Shape::Shape*> &source);
//saveFile(): saves the active collection of shapes to file, for later use at program termination

void ReadFrom(std::vector<ourList::list>&vec);
//ReadFrom(): reads in the user feedback from file

void WriteTo(std::vector<ourList::list>&vec);
//WriteTo(): writes the active user feedback to file, for later use at program termination

class MainWindow : public QMainWindow
{

    Q_OBJECT
    //Qt macro needed for signal-slot handling

public:
    explicit MainWindow(QWidget *parent = 0);
    //Default Constructor

    void setShape(myStd::vector<Shape::Shape*>);
    //setShape():facilitates the handling of shape* vectors transfer from parser to canvas

    void paintEvent(QPaintEvent *e);
    //paintEvent():OVERLOADED: paintevent not used in final program; cant draw to child widgets!

    void refreshIds();
    //refreshIds(): refreshes the menu as changes are made; primarily updates the current shape ID count in modify menu

    std::vector<ourList::list>& getFeedback(){return feedbackList;}
    //getFeedback(): returns the current objects feedbackList, which contains all active user feedback

    ~MainWindow();
    //Default Deconstructor

private slots:
    void on_shapeIdModSpinBox_valueChanged(int arg1);
    //Handles when values are changed on modify menu's spinbox containing current shapeID#s
    //Presents the user with relevant menu, depending on active shape type

    void on_lineModMenu_updateButton_clicked();
    //Finalizes the modifcation of currently selected shape; updates the currently selected
    //vector ID# with current settings.

    void on_polyLineModMenu_dimensions_addPointButton_clicked();

    void on_polyLineModMenu_dimensions_movePointButton_clicked();

    void on_polyLineModMenu_dimensions_deletePointButton_clicked();

    void on_polyLineModMenu_updateButton_clicked();
    //Finalizes the modifcation of currently selected shape; updates the currently selected
    //vector ID# with current settings.

    void on_polygonModMenu_dimensions_addPointButton_clicked();

    void on_polygonModMenu_dimensions_movePointButton_clicked();

    void on_polygonModMenu_dimensions_deletePointButton_clicked();

    void on_polygonModMenu_updateButton_clicked();
    //Finalizes the modifcation of currently selected shape; updates the currently selected
    //vector ID# with current settings.

    void on_rectangleModMenu_updateButton_clicked();
    //Finalizes the modifcation of currently selected shape; updates the currently selected
    //vector ID# with current settings.

    void on_squareModMenu_updateButton_clicked();
    //Finalizes the modifcation of currently selected shape; updates the currently selected
    //vector ID# with current settings.

    void on_ellipseModMenu_updateButton_clicked();
    //Finalizes the modifcation of currently selected shape; updates the currently selected
    //vector ID# with current settings.

    void on_circleModMenu_updateButton_clicked();
    //Finalizes the modifcation of currently selected shape; updates the currently selected
    //vector ID# with current settings.

    void on_textModMenu_updateButton_clicked();
    //Finalizes the modifcation of currently selected shape; updates the currently selected
    //vector ID# with current settings.

    void on_lineModMenu_deleteButton_clicked();
    //Removes the currently selected shape and calls refreshIds()

    void on_circleModMenu_deleteButton_clicked();
    //Removes the currently selected shape and calls refreshIds()

    void on_ellipseModMenu_deleteButton_clicked();
    //Removes the currently selected shape and calls refreshIds()

    void on_polygonModMenu_deleteButton_clicked();
    //Removes the currently selected shape and calls refreshIds()

    void on_polyLineModMenu_deleteButton_clicked();
    //Removes the currently selected shape and calls refreshIds()

    void on_rectangleModMenu_deleteButton_clicked();
    //Removes the currently selected shape and calls refreshIds()

    void on_squareModMenu_deleteButton_clicked();
    //Removes the currently selected shape and calls refreshIds()

    void on_textModMenu_deleteButton_clicked();
    //Removes the currently selected shape and calls refreshIds()

    void on_shapeTypeAddCombo_currentIndexChanged(int index);
    //Displays the appropriate add menu depending on which type of shape is selected

    void on_lineAddMenu_createButton_clicked();
    //Adds a new line shape to the vector of shapes with the currently selected attributes

    void on_polyLineAddMenu_createButton_clicked();
    //Adds a new polyline shape to the vector of shapes with the currently selected attributes

    void on_polyLineAddMenu_dimensions_addPointButton_clicked();

    void on_polyLineAddMenu_dimensions_movePointButton_clicked();

    void on_polyLineAddMenu_dimensions_deletePointButton_clicked();

    void on_polygonAddMenu_createButton_clicked();
    //Adds a new polygon shape to the vector of shapes with the currently selected attributes

    void on_polygonAddMenu_dimensions_addPointButton_clicked();

    void on_polygonAddMenu_dimensions_movePointButton_clicked();

    void on_polygonAddMenu_dimensions_deletePointButton_clicked();

    void on_rectangleAddMenu_createButton_clicked();
    //Adds a new rectangle shape to the vector of shapes with the currently selected attributes

    void on_squareModMenu_updateButton_2_clicked();
    //Adds a new square shape to the vector of shapes with the currently selected attributes

    void on_ellipseAddMenu_createButton_clicked();
    //Adds a new ellipse shape to the vector of shapes with the currently selected attributes

    void on_circleAddMenu_createButton_clicked();
    //Adds a new circle shape to the vector of shapes with the currently selected attributes

    void on_textAddMenu_createButton_clicked();
    //Adds a new text shape to the vector of shapes with the currently selected attributes

    void on_tabMenu_tabBarClicked(int index);
    //NULL - Not used but afraid to remove

    void on_areaReportRefreshButton_clicked();
    //Calls areaTableGen() and presents the constructed table

    void on_perimeterReportRefreshButton_clicked();
    //Calls perimeterTableGen() and presents the constructed table

    void on_shapeReportRefreshButton_clicked();
    //Calls shapeTreeGen() and presents the constructed tree

    void on_actionGet_Help_triggered();
    //Opens the help readme window

    void on_actionSave_and_Exit_triggered();
    //Saves all shapes and user feedback and then terminates the program

    void on_helpDoneButton_clicked();
    //Closes the help readme window

    void on_actionAdmin_Login_triggered();
    //Opens the userlogin screen

    void on_userLogin_logoutButton_clicked();
    //Availble after user login; will reset the program into guest mode

    void on_loginUserButton_clicked();
    //Sets the program into Admin mode if credentials are good; displays active user in statusbar

    void on_loginCancelButton_clicked();
    //Closes the login screen

    void on_actionProvide_Feedback_triggered();
    //Opens the user feedback window

    void on_feedBackMenu_cancelButton_clicked();
    //Closes the user feedback window

    void on_feedBackMenu_submitButton_clicked();
    //Adds the current user feedback to the feedback browser

private:
    Ui::MainWindow *ui;
    //Pointer which holds the MainWindow object.

    vector<QPoint> tempShape;
    //A temporary QPoint vector to facilitate polyline and polygon shape's point manipulation

    std::vector<ourList::list> feedbackList;
    //Holds the user names and corresponding feedback comments

    QTableWidget *areaReport;
    //NULL - Not used afraid to remove anyway

    const QString adminUser = "admin";
    //Admin login username

    const QString adminPassword = "password";
    //Admin login password

    bool adminPrivledge = false;
    //Flag to determine active admin status
};

#endif // MAINWINDOW_H
