/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "canvas.h"
#include "modtab.h"
#include "tabinterface.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionGet_Help;
    QAction *actionProvide_Feedback;
    QAction *actionAdmin_Login;
    QAction *actionSave_and_Exit;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    tabInterface *tabMenu;
    modtab *modTab;
    QLabel *shapeIdModLabel;
    QSpinBox *shapeIdModSpinBox;
    QLabel *shapeTypeModLabel;
    QLabel *shapeModType;
    QWidget *ellipseModMenu;
    QLabel *ellipseModMenu_dimensions_heighttLabel;
    QLabel *ellipseModMenu_dimensions_upperLefttXLabel;
    QLabel *ellipseModMenu_dimensions_widthLabel;
    QLabel *ellipseModMenu_penSettingLabel;
    QLineEdit *ellipseModMenu_dimensions_RY;
    QLabel *ellipseModMenu_dimensions_uuperLeftYLabel;
    QLineEdit *ellipseModMenu_dimensions_RX;
    QLabel *ellipseModMenu_dimensionLabel;
    QFrame *ellipseModMenu_penSettings_formatLineBot;
    QFrame *ellipseModMenu_penSettings_formatLineTop;
    QFrame *ellipseModMenu_dimensions_formatLine;
    QWidget *verticalLayoutWidget_15;
    QVBoxLayout *verticalLayout_20;
    QComboBox *ellipseModMenu_penSettings_lineColorCombo;
    QSpinBox *ellipseModMenu_penSettings_lineWidthSpinBox;
    QComboBox *ellipseModMenu_penSettings_penStyleCombo;
    QComboBox *ellipseModMenu_penSettings_capStyleCombo;
    QComboBox *ellipseModMenu_penSettings_joinStyleCombo;
    QComboBox *ellipseModMenu_penSettings_brushColorCombo;
    QComboBox *ellipseModMenu_penSettings_brushStyleCombo;
    QLabel *ellipseModMenu_dimensions_originLabel;
    QPushButton *ellipseModMenu_updateButton;
    QLineEdit *ellipseModMenu_dimensions_originY;
    QLineEdit *ellipseModMenu_dimensions_originX;
    QWidget *verticalLayoutWidget_16;
    QVBoxLayout *verticalLayout_21;
    QLabel *ellipseModMenu_penSettings_lineColorLabel;
    QLabel *ellipseModMenu_penSettings_lineWidthLabel;
    QLabel *ellipseModMenu_penSettings_penStyleLabel;
    QLabel *ellipseModMenu_penSettings_capStyleLabel;
    QLabel *ellipseModMenu_penSettings_joinStyleLabel;
    QLabel *ellipseModMenu_penSettings_brushColorLabel;
    QLabel *ellipseModMenu_penSettings_brushStyleLabel;
    QPushButton *ellipseModMenu_deleteButton;
    QWidget *circleModMenu;
    QLabel *cicleModMenu_dimensions_originXLabel;
    QLabel *circleModMenu_dimensions_radiusLabel;
    QLabel *circleModMenu_penSettingLabel;
    QLabel *circleModMenu_dimensions_originYLabel;
    QLineEdit *circleModMenu_dimensions_Radius;
    QLabel *circleModMenu_dimensionLabel;
    QFrame *circleModMenu_penSettings_formatLineBot;
    QFrame *circleModMenu_penSettings_formatLineTop;
    QFrame *circleModMenu_dimensions_formatLine;
    QWidget *verticalLayoutWidget_17;
    QVBoxLayout *verticalLayout_22;
    QComboBox *circleModMenu_penSettings_lineColorCombo;
    QSpinBox *circleModMenu_penSettings_lineWidthSpinBox;
    QComboBox *circleModMenu_penSettings_penStyleCombo;
    QComboBox *circleModMenu_penSettings_capStyleCombo;
    QComboBox *circleModMenu_penSettings_joinStyleCombo;
    QComboBox *circleModMenu_penSettings_brushColorCombo;
    QComboBox *circleModMenu_penSettings_brushStyleCombo;
    QLabel *circleModMenu_dimensions_upperLeftLabel;
    QPushButton *circleModMenu_updateButton;
    QLineEdit *circleModMenu_dimensions_originY;
    QLineEdit *circleModMenu_dimensions_originX;
    QWidget *verticalLayoutWidget_18;
    QVBoxLayout *verticalLayout_23;
    QLabel *circleModMenu_penSettings_lineColorLabel;
    QLabel *circleModMenu_penSettings_lineWidthLabel;
    QLabel *circleModMenu_penSettings_penStyleLabel;
    QLabel *circleModMenu_penSettings_capStyleLabel;
    QLabel *circleModMenu_penSettings_joinStyleLabel;
    QLabel *circleModMenu_penSettings_brushColorLabel;
    QLabel *circleModMenu_penSettings_brushStyleLabel;
    QPushButton *circleModMenu_deleteButton;
    QWidget *lineModMenu;
    QLabel *lineModMenu_dimensionLabel;
    QLabel *lineModMenu_penSettingLabel;
    QFrame *lineModMenu_dimensions_formatLine;
    QLabel *lineModMenu_dimensions_startPointLabel;
    QLabel *lineModMenu_dimensions_endPointLabel;
    QLineEdit *lineModMenu_dimensions_startPointX;
    QLabel *lineModMenu_dimensions_startPointXLabel;
    QLabel *lineModMenu_dimensions_endPointYLabel;
    QLineEdit *lineModMenu_dimensions_startPointY;
    QFrame *lineModMenu_penSettings_formatLineTop;
    QFrame *lineModMenu_penSettings_formatLineBot;
    QLabel *lineModMenu_dimensions_endPointYLabel_2;
    QLabel *lineModMenu_dimensions_endPointXLabel;
    QLineEdit *lineModMenu_dimensions_endPointY;
    QLineEdit *lineModMenu_dimensions_endPointX;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *lineModMenu_penSettings_lineColorLabel;
    QLabel *lineModMenu_penSettings_lineWidthLabel;
    QLabel *lineModMenu_penSettings_penStyleLabel;
    QLabel *lineModMenu_penSettings_capStyleLabel;
    QLabel *lineModMenu_penSettings_joinStyleLabel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QComboBox *lineModMenu_penSettings_lineColorCombo;
    QSpinBox *lineModMenu_penSettings_lineWidthSpinBox;
    QComboBox *lineModMenu_penSettings_penStyleCombo;
    QComboBox *lineModMenu_penSettings_capStyleCombo;
    QComboBox *lineModMenu_penSettings_joinStyleCombo;
    QPushButton *lineModMenu_updateButton;
    QPushButton *lineModMenu_deleteButton;
    QWidget *polygonModMenu;
    QLabel *polygonModMenu_dimensions_endPointYLabel;
    QFrame *polygonModMenu_dimensions_formatLine;
    QLineEdit *polygonModMenu_dimensions_startPointY;
    QListWidget *polygonModMenu_dimensions_pointList;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_8;
    QComboBox *polygonModMenu_penSettings_lineColorCombo;
    QSpinBox *polygonModMenu_penSettings_lineWidthSpinBox;
    QComboBox *polygonModMenu_penSettings_penStyleCombo;
    QComboBox *polygonModMenu_penSettings_capStyleCombo;
    QComboBox *polygonModMenu_penSettings_joinStyleCombo;
    QComboBox *polygonModMenu_penSettings_brushColorCombo;
    QComboBox *polygonModMenu_penSettings_brushStyleCombo;
    QFrame *polygonModMenu_penSettings_formatLineTop;
    QFrame *polygonModMenu_penSettings_formatLineBot;
    QLabel *polygonModMenu_penSettingLabel;
    QLabel *polygonModMenu_dimensionLabel;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_4;
    QPushButton *polygonModMenu_dimensions_addPointButton;
    QPushButton *polygonModMenu_dimensions_movePointButton;
    QPushButton *polygonModMenu_dimensions_deletePointButton;
    QWidget *verticalLayoutWidget_10;
    QVBoxLayout *verticalLayout_9;
    QLabel *polygonModMenu_penSettings_lineColorLabel;
    QLabel *polygonModMenu_penSettings_lineWidthLabel;
    QLabel *polygonModMenu_penSettings_penStyleLabel;
    QLabel *polygonModMenu_penSettings_capStyleLabel;
    QLabel *polygonModMenu_penSettings_joinStyleLabel;
    QLabel *polygonModMenu_penSettings_brushColorLabel;
    QLabel *polygonModMenu_penSettings_brushStyleLabel;
    QLineEdit *polygonModMenu_dimensions_startPointX;
    QPushButton *polygonModMenu_updateButton;
    QLabel *polygonModMenu_dimensions_startPointXLabel;
    QPushButton *polygonModMenu_deleteButton;
    QWidget *polylineModMenu;
    QFrame *polyLineModMenu_dimensions_formatLine;
    QLabel *polyLineModMenu_dimensionLabel;
    QPushButton *polyLineModMenu_updateButton;
    QFrame *polyLineModMenu_penSettings_formatLineTop;
    QLineEdit *polyLineModMenu_dimensions_startPointX;
    QLabel *polyLineModMenu_dimensions_endPointYLabel;
    QLabel *polyLineModMenu_dimensions_startPointXLabel;
    QLineEdit *polyLineModMenu_dimensions_startPointY;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout;
    QPushButton *polyLineModMenu_dimensions_addPointButton;
    QPushButton *polyLineModMenu_dimensions_movePointButton;
    QPushButton *polyLineModMenu_dimensions_deletePointButton;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QComboBox *polyLineModMenu_penSettings_lineColorCombo;
    QSpinBox *polyLineModMenu_penSettings_lineWidthSpinBox;
    QComboBox *polyLineModMenu_penSettings_penStyleCombo;
    QComboBox *polyLineModMenu_penSettings_capStyleCombo;
    QComboBox *polyLineModMenu_penSettings_joinStyleCombo;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *polyLineModMenu_penSettings_lineColorLabel;
    QLabel *polyLineModMenu_penSettings_lineWidthLabel;
    QLabel *polyLineModMenu_penSettings_penStyleLabel;
    QLabel *polyLineModMenu_penSettings_capStyleLabel;
    QLabel *polyLineModMenu_penSettings_joinStyleLabel;
    QFrame *lineModMenu_penSettings_formatLineBot_3;
    QLabel *lineModMenu_penSettingLabel_3;
    QListWidget *polyLineModMenu_dimensions_pointList;
    QPushButton *polyLineModMenu_deleteButton;
    QWidget *rectangleModMenu;
    QPushButton *rectangleModMenu_updateButton;
    QFrame *rectangleModMenu_penSettings_formatLineTop;
    QLabel *rectangleModMenu_dimensions_widthLabel;
    QFrame *rectangleModMenu_dimensions_formatLine;
    QLabel *rectangleModMenu_dimensions_uuperLeftYLabel;
    QLineEdit *rectangleModMenu_dimensions_width;
    QFrame *rectangleModMenu_penSettings_formatLineBot;
    QLabel *rectangleModMenu_dimensions_upperLeftLabel;
    QLineEdit *rectangleModMenu_dimensions_upperLeftX;
    QLineEdit *rectangleModMenu_dimensions_upperLeftY;
    QLabel *rectangleModMenu_penSettingLabel;
    QLabel *rectangleModMenu_dimensionLabel;
    QLabel *rectangleModMenu_dimensions_upperLefttXLabel;
    QLineEdit *rectangleModMenu_dimensions_height;
    QWidget *verticalLayoutWidget_11;
    QVBoxLayout *verticalLayout_12;
    QLabel *rectangleModMenu_penSettings_lineColorLabel;
    QLabel *rectangleModMenu_penSettings_lineWidthLabel;
    QLabel *rectangleModMenu_penSettings_penStyleLabel;
    QLabel *rectangleModMenu_penSettings_capStyleLabel;
    QLabel *rectangleModMenu_penSettings_joinStyleLabel;
    QLabel *rectangleModMenu_penSettings_brushColorLabel;
    QLabel *rectangleModMenu_penSettings_brushStyleLabel;
    QWidget *verticalLayoutWidget_12;
    QVBoxLayout *verticalLayout_13;
    QComboBox *rectangleModMenu_penSettings_lineColorCombo;
    QSpinBox *rectangleModMenu_penSettings_lineWidthSpinBox;
    QComboBox *rectangleModMenu_penSettings_penStyleCombo;
    QComboBox *rectangleModMenu_penSettings_capStyleCombo;
    QComboBox *rectangleModMenu_penSettings_joinStyleCombo;
    QComboBox *rectangleModMenu_penSettings_brushColorCombo;
    QComboBox *rectangleModMenu_penSettings_brushStyleCombo;
    QLabel *rectangleModMenu_dimensions_heighttLabel;
    QPushButton *rectangleModMenu_deleteButton;
    QWidget *squareModMenu;
    QPushButton *squareModMenu_updateButton;
    QFrame *squareModMenu_penSettings_formatLineTop;
    QLabel *squareModMenu_dimensions_widthLabel;
    QFrame *squareModMenu_dimensions_formatLine;
    QLabel *squareModMenu_dimensions_uuperLeftYLabel;
    QLineEdit *squareModMenu_dimensions_sideLength;
    QFrame *squareModMenu_penSettings_formatLineBot;
    QLabel *squareModMenu_dimensions_upperLeftLabel;
    QLineEdit *squareModMenu_dimensions_upperLeftX;
    QLineEdit *squareModMenu_dimensions_upperLeftY;
    QLabel *squareModMenu_penSettingLabel;
    QLabel *squareModMenu_dimensionLabel;
    QLabel *squareModMenu_dimensions_upperLefttXLabel;
    QWidget *verticalLayoutWidget_13;
    QVBoxLayout *verticalLayout_16;
    QLabel *squareModMenu_penSettings_lineColorLabel;
    QLabel *squareModMenu_penSettings_lineWidthLabel;
    QLabel *squareModMenu_penSettings_penStyleLabel;
    QLabel *squareModMenu_penSettings_capStyleLabel;
    QLabel *squaresquareModMenu_penSettings_joinStyleLabel;
    QLabel *squareModMenu_penSettings_brushColorLabel;
    QLabel *squareModMenu_penSettings_brushStyleLabel;
    QWidget *verticalLayoutWidget_14;
    QVBoxLayout *verticalLayout_17;
    QComboBox *squareModMenu_penSettings_lineColorCombo;
    QSpinBox *squareModMenu_penSettings_lineWidthSpinBox;
    QComboBox *squareModMenu_penSettings_penStyleCombo;
    QComboBox *squareModMenu_penSettings_capStyleCombo;
    QComboBox *squareModMenu_penSettings_joinStyleCombo;
    QComboBox *squareModMenu_penSettings_brushColorCombo;
    QComboBox *squareModMenu_penSettings_brushStyleCombo;
    QPushButton *squareModMenu_deleteButton;
    QWidget *textModMenu;
    QLabel *textModMenu_dimensions_upperLefttXLabel;
    QLabel *textModMenu_penSettingLabel;
    QLabel *textModMenu_dimensions_uuperLeftYLabel;
    QLabel *textModMenu_dimensionLabel;
    QFrame *textModMenu_textSettings_formatLineBot;
    QFrame *textModMenu_textSettings_formatLineTop;
    QFrame *textModMenu_dimensions_formatLine;
    QWidget *verticalLayoutWidget_19;
    QVBoxLayout *verticalLayout_24;
    QComboBox *textModMenu_textSettings_textColorCombo;
    QSpinBox *textModMenu_textSettings_textPointSizeBox;
    QComboBox *textModMenu_textSettings_fontCombo;
    QComboBox *textModMenu_textSettings_fontStyleCombo;
    QComboBox *textModMenu_textSettings_fontWeightCombo;
    QLabel *textModMenu_dimensions_upperLeftLabel;
    QPushButton *textModMenu_updateButton;
    QLineEdit *textModMenu_dimensions_upperLeftY;
    QLineEdit *textModMenu_dimensions_upperLeftX;
    QWidget *verticalLayoutWidget_20;
    QVBoxLayout *verticalLayout_25;
    QLabel *textModMenu_textSettings_textColorLabel;
    QLabel *textModMenu_textSettings_pointSizeLabel;
    QLabel *textModMenu_textSettings_fontLabel;
    QLabel *textModMenu_textSettings_fontStyleLabel;
    QLabel *textModMenu_textSettings_fontWeightLabel;
    QLabel *textModMenu_textSettings_textEditLabel;
    QPlainTextEdit *textModMenu_textSettings_textEdit;
    QPushButton *textModMenu_deleteButton;
    QWidget *ModMenu_deleteScreen;
    QLabel *ModMenu_deleteScreenLabel;
    QWidget *ModMenu_emptyScreen;
    QLabel *ModMenu_emptyScreenLabel;
    QWidget *modMenu_adminBlind;
    QLabel *ModMenu_adminBlineLabel;
    QWidget *addShapeTab;
    QComboBox *shapeTypeAddCombo;
    QLabel *shapeTypeAddLabel;
    QWidget *lineAddMenu;
    QLabel *lineAddMenu_dimensionLabel;
    QLabel *lineAddMenu_penSettingLabel;
    QFrame *lineAddMenu_dimensions_formatLine;
    QLabel *lineAddMenu_dimensions_startPointLabel;
    QLabel *lineAddMenu_dimensions_endPointLabel;
    QLineEdit *lineAddMenu_dimensions_startPointX;
    QLabel *lineAddMenu_dimensions_startPointXLabel;
    QLabel *lineAddMenu_dimensions_endPointYLabel;
    QLineEdit *lineAddMenu_dimensions_startPointY;
    QFrame *lineAddMenu_penSettings_formatLineTop;
    QFrame *lineAddMenu_penSettings_formatLineBot;
    QLabel *lineAddMenu_dimensions_endPointYLabel_2;
    QLabel *lineAddMenu_dimensions_endPointXLabel;
    QLineEdit *lineAddMenu_dimensions_endPointY;
    QLineEdit *lineAddMenu_dimensions_endPointX;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *lineAddMenu_penSettings_lineColorLabel;
    QLabel *lineAddMenu_penSettings_lineWidthLabel;
    QLabel *lineAddMenu_penSettings_penStyleLabel;
    QLabel *lineAddMenu_penSettings_capStyleLabel;
    QLabel *lineAddMenu_penSettings_joinStyleLabel;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_10;
    QComboBox *lineAddMenu_penSettings_lineColorCombo;
    QSpinBox *lineAddMenu_penSettings_lineWidthSpinBox;
    QComboBox *lineAddMenu_penSettings_penStyleCombo;
    QComboBox *lineAddMenu_penSettings_capStyleCombo;
    QComboBox *lineAddMenu_penSettings_joinStyleCombo;
    QPushButton *lineAddMenu_createButton;
    QWidget *polylineAddMenu;
    QFrame *polyLineAddMenu_dimensions_formatLine;
    QLabel *polyLineAddMenu_dimensionLabel;
    QPushButton *polyLineAddMenu_createButton;
    QFrame *polyLineAddMenu_penSettings_formatLineTop;
    QLineEdit *polyLineAddMenu_dimensions_startPointX;
    QLabel *polyLineAddMenu_dimensions_endPointYLabel;
    QLabel *polyLineAddMenu_dimensions_startPointXLabel;
    QLineEdit *polyLineAddMenu_dimensions_startPointY;
    QWidget *verticalLayoutWidget_21;
    QVBoxLayout *verticalLayout_11;
    QPushButton *polyLineAddMenu_dimensions_addPointButton;
    QPushButton *polyLineAddMenu_dimensions_movePointButton;
    QPushButton *polyLineAddMenu_dimensions_deletePointButton;
    QWidget *verticalLayoutWidget_22;
    QVBoxLayout *verticalLayout_14;
    QComboBox *polyLineAddMenu_penSettings_lineColorCombo;
    QSpinBox *polyLineAddMenu_penSettings_lineWidthSpinBox;
    QComboBox *polyLineAddMenu_penSettings_penStyleCombo;
    QComboBox *polyLineAddMenu_penSettings_capStyleCombo;
    QComboBox *polyLineAddMenu_penSettings_joinStyleCombo;
    QWidget *verticalLayoutWidget_23;
    QVBoxLayout *verticalLayout_15;
    QLabel *polyLineAddMenu_penSettings_lineColorLabel;
    QLabel *polyLineAddMenu_penSettings_lineWidthLabel;
    QLabel *polyLineAddMenu_penSettings_penStyleLabel;
    QLabel *polyLineAddMenu_penSettings_capStyleLabel;
    QLabel *polyLineAddMenu_penSettings_joinStyleLabel;
    QFrame *lineAddMenu_penSettings_formatLineBot_2;
    QLabel *lineAddMenu_penSettingLabel_2;
    QListWidget *polyLineAddMenu_dimensions_pointList;
    QWidget *polygonAddMenu;
    QLabel *polygonAddMenu_dimensions_endPointYLabel;
    QFrame *polygonAddMenu_dimensions_formatLine;
    QLineEdit *polygonAddMenu_dimensions_startPointY;
    QListWidget *polygonAddMenu_dimensions_pointList;
    QWidget *verticalLayoutWidget_24;
    QVBoxLayout *verticalLayout_18;
    QComboBox *polygonAddMenu_penSettings_lineColorCombo;
    QSpinBox *polygonAddMenu_penSettings_lineWidthSpinBox;
    QComboBox *polygonAddMenu_penSettings_penStyleCombo;
    QComboBox *polygonAddMenu_penSettings_capStyleCombo;
    QComboBox *polygonAddMenu_penSettings_joinStyleCombo;
    QComboBox *polygonAddMenu_penSettings_brushColorCombo;
    QComboBox *polygonAddMenu_penSettings_brushStyleCombo;
    QFrame *polygonAddMenu_penSettings_formatLineTop;
    QFrame *polygonAddMenu_penSettings_formatLineBot;
    QLabel *polygonAddMenu_penSettingLabel;
    QLabel *polygonAddMenu_dimensionLabel;
    QWidget *verticalLayoutWidget_25;
    QVBoxLayout *verticalLayout_19;
    QPushButton *polygonAddMenu_dimensions_addPointButton;
    QPushButton *polygonAddMenu_dimensions_movePointButton;
    QPushButton *polygonAddMenu_dimensions_deletePointButton;
    QWidget *verticalLayoutWidget_26;
    QVBoxLayout *verticalLayout_26;
    QLabel *polygonAddMenu_penSettings_lineColorLabel;
    QLabel *polygonAddMenu_penSettings_lineWidthLabel;
    QLabel *polygonAddMenu_penSettings_penStyleLabel;
    QLabel *polygonAddMenu_penSettings_capStyleLabel;
    QLabel *polygonAddMenu_penSettings_joinStyleLabel;
    QLabel *polygonAddMenu_penSettings_brushColorLabel;
    QLabel *polygonAddMenu_penSettings_brushStyleLabel;
    QLineEdit *polygonAddMenu_dimensions_startPointX;
    QPushButton *polygonAddMenu_createButton;
    QLabel *polygonAddMenu_dimensions_startPointXLabel;
    QWidget *rectangleAddMenu;
    QPushButton *rectangleAddMenu_createButton;
    QFrame *rectangleAddMenu_penSettings_formatLineTop;
    QLabel *rectangleAddMenu_dimensions_widthLabel;
    QFrame *rectangleAddMenu_dimensions_formatLine;
    QLabel *rectangleAddMenu_dimensions_uuperLeftYLabel;
    QLineEdit *rectangleAddMenu_dimensions_width;
    QFrame *rectangleAddMenu_penSettings_formatLineBot;
    QLabel *rectangleAddMenu_dimensions_upperLeftLabel;
    QLineEdit *rectangleAddMenu_dimensions_upperLeftX;
    QLineEdit *rectangleAddMenu_dimensions_upperLeftY;
    QLabel *rectangleAddMenu_penSettingLabel;
    QLabel *rectangleAddMenu_dimensionLabel;
    QLabel *rectangleAddMenu_dimensions_upperLefttXLabel;
    QLineEdit *rectangleAddMenu_dimensions_height;
    QWidget *verticalLayoutWidget_27;
    QVBoxLayout *verticalLayout_27;
    QLabel *rectangleAddMenu_penSettings_lineColorLabel;
    QLabel *rectangleAddMenu_penSettings_lineWidthLabel;
    QLabel *rectangleAddMenu_penSettings_penStyleLabel;
    QLabel *rectangleAddMenu_penSettings_capStyleLabel;
    QLabel *rectangleAddMenu_penSettings_joinStyleLabel;
    QLabel *rectangleAddMenu_penSettings_brushColorLabel;
    QLabel *rectangleAddMenu_penSettings_brushStyleLabel;
    QWidget *verticalLayoutWidget_28;
    QVBoxLayout *verticalLayout_28;
    QComboBox *rectangleAddMenu_penSettings_lineColorCombo;
    QSpinBox *rectangleAddMenu_penSettings_lineWidthSpinBox;
    QComboBox *rectangleAddMenu_penSettings_penStyleCombo;
    QComboBox *rectangleAddMenu_penSettings_capStyleCombo;
    QComboBox *rectangleAddMenu_penSettings_joinStyleCombo;
    QComboBox *rectangleAddMenu_penSettings_brushColorCombo;
    QComboBox *rectangleAddMenu_penSettings_brushStyleCombo;
    QLabel *rectangleAddMenu_dimensions_heighttLabel;
    QWidget *squareAddMenu;
    QPushButton *squareModMenu_updateButton_2;
    QFrame *squareAddMenu_penSettings_formatLineTop;
    QLabel *squareAddMenu_dimensions_widthLabel;
    QFrame *squareAddMenu_dimensions_formatLine;
    QLabel *squareAddMenu_dimensions_uuperLeftYLabel;
    QLineEdit *squareAddMenu_dimensions_sideLength;
    QFrame *squareAddMenu_penSettings_formatLineBot;
    QLabel *squareAddMenu_dimensions_upperLeftLabel;
    QLineEdit *squareAddMenu_dimensions_upperLeftX;
    QLineEdit *squareAddMenu_dimensions_upperLeftY;
    QLabel *squareAddMenu_penSettingLabel;
    QLabel *squareAddMenu_dimensionLabel;
    QLabel *squareAddMenu_dimensions_upperLefttXLabel;
    QWidget *verticalLayoutWidget_29;
    QVBoxLayout *verticalLayout_29;
    QLabel *squareAddMenu_penSettings_lineColorLabel;
    QLabel *squareAddMenu_penSettings_lineWidthLabel;
    QLabel *squareAddMenu_penSettings_penStyleLabel;
    QLabel *squareAddMenu_penSettings_capStyleLabel;
    QLabel *squaresquareAddMenu_penSettings_joinStyleLabel;
    QLabel *squareAddMenu_penSettings_brushColorLabel;
    QLabel *squareAddMenu_penSettings_brushStyleLabel;
    QWidget *verticalLayoutWidget_30;
    QVBoxLayout *verticalLayout_30;
    QComboBox *squareAddMenu_penSettings_lineColorCombo;
    QSpinBox *squareAddMenu_penSettings_lineWidthSpinBox;
    QComboBox *squareAddMenu_penSettings_penStyleCombo;
    QComboBox *squareAddMenu_penSettings_capStyleCombo;
    QComboBox *squareAddMenu_penSettings_joinStyleCombo;
    QComboBox *squareAddMenu_penSettings_brushColorCombo;
    QComboBox *squareAddMenu_penSettings_brushStyleCombo;
    QWidget *circleAddMenu;
    QLabel *cicleAddMenu_dimensions_originXLabel;
    QLabel *circleAddMenu_dimensions_radiusLabel;
    QLabel *circleAddMenu_penSettingLabel;
    QLabel *circleAddMenu_dimensions_originYLabel;
    QLineEdit *circleAddMenu_dimensions_Radius;
    QLabel *circleAddMenu_dimensionLabel;
    QFrame *circleAddMenu_penSettings_formatLineBot;
    QFrame *circleAddMenu_penSettings_formatLineTop;
    QFrame *circleAddMenu_dimensions_formatLine;
    QWidget *verticalLayoutWidget_33;
    QVBoxLayout *verticalLayout_33;
    QComboBox *circleAddMenu_penSettings_lineColorCombo;
    QSpinBox *circleAddMenu_penSettings_lineWidthSpinBox;
    QComboBox *circleAddMenu_penSettings_penStyleCombo;
    QComboBox *circleAddMenu_penSettings_capStyleCombo;
    QComboBox *circleAddMenu_penSettings_joinStyleCombo;
    QComboBox *circleAddMenu_penSettings_brushColorCombo;
    QComboBox *circleAddMenu_penSettings_brushStyleCombo;
    QLabel *circleAddMenu_dimensions_upperLeftLabel;
    QPushButton *circleAddMenu_createButton;
    QLineEdit *circleAddMenu_dimensions_originY;
    QLineEdit *circleAddMenu_dimensions_originX;
    QWidget *verticalLayoutWidget_34;
    QVBoxLayout *verticalLayout_34;
    QLabel *circleAddMenu_penSettings_lineColorLabel;
    QLabel *circleAddMenu_penSettings_lineWidthLabel;
    QLabel *circleAddMenu_penSettings_penStyleLabel;
    QLabel *circleAddMenu_penSettings_capStyleLabel;
    QLabel *circleAddMenu_penSettings_joinStyleLabel;
    QLabel *circleAddMenu_penSettings_brushColorLabel;
    QLabel *circleAddMenu_penSettings_brushStyleLabel;
    QWidget *ellipseAddMenu;
    QLabel *ellipseAddMenu_dimensions_heighttLabel;
    QLabel *ellipseAddMenu_dimensions_upperLefttXLabel;
    QLabel *ellipseAddMenu_dimensions_widthLabel;
    QLabel *ellipseAddMenu_penSettingLabel;
    QLineEdit *ellipseAddMenu_dimensions_RY;
    QLabel *ellipseAddMenu_dimensions_uuperLeftYLabel;
    QLineEdit *ellipseAddMenu_dimensions_RX;
    QLabel *ellipseAddMenu_dimensionLabel;
    QFrame *ellipseAddMenu_penSettings_formatLineBot;
    QFrame *ellipseAddMenu_penSettings_formatLineTop;
    QFrame *ellipseAddMenu_dimensions_formatLine;
    QWidget *verticalLayoutWidget_31;
    QVBoxLayout *verticalLayout_31;
    QComboBox *ellipseAddMenu_penSettings_lineColorCombo;
    QSpinBox *ellipseAddMenu_penSettings_lineWidthSpinBox;
    QComboBox *ellipseAddMenu_penSettings_penStyleCombo;
    QComboBox *ellipseAddMenu_penSettings_capStyleCombo;
    QComboBox *ellipseAddMenu_penSettings_joinStyleCombo;
    QComboBox *ellipseAddMenu_penSettings_brushColorCombo;
    QComboBox *ellipseAddMenu_penSettings_brushStyleCombo;
    QLabel *ellipseAddMenu_dimensions_originLabel;
    QPushButton *ellipseAddMenu_createButton;
    QLineEdit *ellipseAddMenu_dimensions_originY;
    QLineEdit *ellipseAddMenu_dimensions_originX;
    QWidget *verticalLayoutWidget_32;
    QVBoxLayout *verticalLayout_32;
    QLabel *ellipseAddMenu_penSettings_lineColorLabel;
    QLabel *ellipseAddMenu_penSettings_lineWidthLabel;
    QLabel *ellipseAddMenu_penSettings_penStyleLabel;
    QLabel *ellipseAddMenu_penSettings_capStyleLabel;
    QLabel *ellipseAddMenu_penSettings_joinStyleLabel;
    QLabel *ellipseAddMenu_penSettings_brushColorLabel;
    QLabel *ellipseAddMenu_penSettings_brushStyleLabel;
    QWidget *textAddMenu;
    QLabel *textAddMenu_dimensions_upperLefttXLabel;
    QLabel *textAddMenu_penSettingLabel;
    QLabel *textAddMenu_dimensions_uuperLeftYLabel;
    QLabel *textAddMenu_dimensionLabel;
    QFrame *textAddMenu_textSettings_formatLineBot;
    QFrame *textAddMenu_textSettings_formatLineTop;
    QFrame *textAddMenu_dimensions_formatLine;
    QWidget *verticalLayoutWidget_35;
    QVBoxLayout *verticalLayout_35;
    QComboBox *textAddMenu_textSettings_textColorCombo;
    QSpinBox *textAddMenu_textSettings_textPointSizeBox;
    QComboBox *textAddMenu_textSettings_fontCombo;
    QComboBox *textAddMenu_textSettings_fontStyleCombo;
    QComboBox *textAddMenu_textSettings_fontWeightCombo;
    QLabel *textAddMenu_dimensions_upperLeftLabel;
    QPushButton *textAddMenu_createButton;
    QLineEdit *textAddMenu_dimensions_upperLeftY;
    QLineEdit *textAddMenu_dimensions_upperLeftX;
    QWidget *verticalLayoutWidget_36;
    QVBoxLayout *verticalLayout_36;
    QLabel *textAddMenu_textSettings_textColorLabel;
    QLabel *textAddMenu_textSettings_pointSizeLabel;
    QLabel *textAddMenu_textSettings_fontLabel;
    QLabel *textAddMenu_textSettings_fontStyleLabel;
    QLabel *textAddMenu_textSettings_fontWeightLabel;
    QLabel *textAddMenu_textSettings_textEditLabel;
    QPlainTextEdit *textAddMenu_textSettings_textEdit;
    QWidget *addMenu_adminBlind;
    QLabel *addMenu_adminBlineLabel;
    QWidget *reportTab;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QTreeWidget *shapeReport;
    QPushButton *shapeReportRefreshButton;
    QWidget *tab_4;
    QTableWidget *perimeterReport;
    QPushButton *perimeterReportRefreshButton;
    QWidget *tab_5;
    QTableWidget *areaReport;
    QPushButton *areaReportRefreshButton;
    canvas *renderCanvas;
    QFrame *frame;
    QTextBrowser *helpBrowser;
    QPushButton *helpDoneButton;
    QWidget *loginMenu;
    QLabel *loginTitleLabel;
    QLineEdit *loginUserLineEdit;
    QLineEdit *loginPasswordLineEdit;
    QLabel *loginUserLabel;
    QLabel *loginPasswordLabel;
    QPushButton *loginUserButton;
    QPushButton *loginCancelButton;
    QFrame *frame_2;
    QLabel *loginMenu_invalidInputLabel;
    QPushButton *userLogin_logoutButton;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAdmin;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1324, 600);
        MainWindow->setAutoFillBackground(true);
        actionGet_Help = new QAction(MainWindow);
        actionGet_Help->setObjectName(QStringLiteral("actionGet_Help"));
        actionProvide_Feedback = new QAction(MainWindow);
        actionProvide_Feedback->setObjectName(QStringLiteral("actionProvide_Feedback"));
        actionAdmin_Login = new QAction(MainWindow);
        actionAdmin_Login->setObjectName(QStringLiteral("actionAdmin_Login"));
        actionSave_and_Exit = new QAction(MainWindow);
        actionSave_and_Exit->setObjectName(QStringLiteral("actionSave_and_Exit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 0, 191, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(0, 0, 159, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 0, 63, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 0, 84, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        centralwidget->setPalette(palette);
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabMenu = new tabInterface(centralwidget);
        tabMenu->setObjectName(QStringLiteral("tabMenu"));
        tabMenu->setMinimumSize(QSize(300, 500));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush8(QColor(127, 127, 127, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush8);
        QBrush brush9(QColor(170, 170, 170, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        tabMenu->setPalette(palette1);
        tabMenu->setAutoFillBackground(true);
        modTab = new modtab();
        modTab->setObjectName(QStringLiteral("modTab"));
        shapeIdModLabel = new QLabel(modTab);
        shapeIdModLabel->setObjectName(QStringLiteral("shapeIdModLabel"));
        shapeIdModLabel->setGeometry(QRect(10, 10, 67, 17));
        shapeIdModSpinBox = new QSpinBox(modTab);
        shapeIdModSpinBox->setObjectName(QStringLiteral("shapeIdModSpinBox"));
        shapeIdModSpinBox->setGeometry(QRect(80, 10, 41, 21));
        shapeTypeModLabel = new QLabel(modTab);
        shapeTypeModLabel->setObjectName(QStringLiteral("shapeTypeModLabel"));
        shapeTypeModLabel->setGeometry(QRect(130, 10, 81, 17));
        shapeModType = new QLabel(modTab);
        shapeModType->setObjectName(QStringLiteral("shapeModType"));
        shapeModType->setGeometry(QRect(216, 10, 81, 21));
        ellipseModMenu = new QWidget(modTab);
        ellipseModMenu->setObjectName(QStringLiteral("ellipseModMenu"));
        ellipseModMenu->setGeometry(QRect(10, 40, 281, 451));
        ellipseModMenu_dimensions_heighttLabel = new QLabel(ellipseModMenu);
        ellipseModMenu_dimensions_heighttLabel->setObjectName(QStringLiteral("ellipseModMenu_dimensions_heighttLabel"));
        ellipseModMenu_dimensions_heighttLabel->setGeometry(QRect(40, 130, 91, 20));
        ellipseModMenu_dimensions_upperLefttXLabel = new QLabel(ellipseModMenu);
        ellipseModMenu_dimensions_upperLefttXLabel->setObjectName(QStringLiteral("ellipseModMenu_dimensions_upperLefttXLabel"));
        ellipseModMenu_dimensions_upperLefttXLabel->setGeometry(QRect(160, 50, 16, 16));
        ellipseModMenu_dimensions_widthLabel = new QLabel(ellipseModMenu);
        ellipseModMenu_dimensions_widthLabel->setObjectName(QStringLiteral("ellipseModMenu_dimensions_widthLabel"));
        ellipseModMenu_dimensions_widthLabel->setGeometry(QRect(40, 90, 111, 20));
        ellipseModMenu_penSettingLabel = new QLabel(ellipseModMenu);
        ellipseModMenu_penSettingLabel->setObjectName(QStringLiteral("ellipseModMenu_penSettingLabel"));
        ellipseModMenu_penSettingLabel->setGeometry(QRect(10, 164, 101, 17));
        ellipseModMenu_dimensions_RY = new QLineEdit(ellipseModMenu);
        ellipseModMenu_dimensions_RY->setObjectName(QStringLiteral("ellipseModMenu_dimensions_RY"));
        ellipseModMenu_dimensions_RY->setGeometry(QRect(170, 130, 31, 27));
        ellipseModMenu_dimensions_uuperLeftYLabel = new QLabel(ellipseModMenu);
        ellipseModMenu_dimensions_uuperLeftYLabel->setObjectName(QStringLiteral("ellipseModMenu_dimensions_uuperLeftYLabel"));
        ellipseModMenu_dimensions_uuperLeftYLabel->setGeometry(QRect(210, 50, 16, 16));
        ellipseModMenu_dimensions_RX = new QLineEdit(ellipseModMenu);
        ellipseModMenu_dimensions_RX->setObjectName(QStringLiteral("ellipseModMenu_dimensions_RX"));
        ellipseModMenu_dimensions_RX->setGeometry(QRect(170, 90, 31, 27));
        ellipseModMenu_dimensionLabel = new QLabel(ellipseModMenu);
        ellipseModMenu_dimensionLabel->setObjectName(QStringLiteral("ellipseModMenu_dimensionLabel"));
        ellipseModMenu_dimensionLabel->setGeometry(QRect(20, 20, 91, 17));
        ellipseModMenu_penSettings_formatLineBot = new QFrame(ellipseModMenu);
        ellipseModMenu_penSettings_formatLineBot->setObjectName(QStringLiteral("ellipseModMenu_penSettings_formatLineBot"));
        ellipseModMenu_penSettings_formatLineBot->setGeometry(QRect(-10, 174, 301, 20));
        ellipseModMenu_penSettings_formatLineBot->setFrameShape(QFrame::HLine);
        ellipseModMenu_penSettings_formatLineBot->setFrameShadow(QFrame::Sunken);
        ellipseModMenu_penSettings_formatLineTop = new QFrame(ellipseModMenu);
        ellipseModMenu_penSettings_formatLineTop->setObjectName(QStringLiteral("ellipseModMenu_penSettings_formatLineTop"));
        ellipseModMenu_penSettings_formatLineTop->setGeometry(QRect(-10, 150, 301, 20));
        ellipseModMenu_penSettings_formatLineTop->setFrameShape(QFrame::HLine);
        ellipseModMenu_penSettings_formatLineTop->setFrameShadow(QFrame::Sunken);
        ellipseModMenu_dimensions_formatLine = new QFrame(ellipseModMenu);
        ellipseModMenu_dimensions_formatLine->setObjectName(QStringLiteral("ellipseModMenu_dimensions_formatLine"));
        ellipseModMenu_dimensions_formatLine->setGeometry(QRect(-10, 25, 301, 31));
        ellipseModMenu_dimensions_formatLine->setFrameShape(QFrame::HLine);
        ellipseModMenu_dimensions_formatLine->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_15 = new QWidget(ellipseModMenu);
        verticalLayoutWidget_15->setObjectName(QStringLiteral("verticalLayoutWidget_15"));
        verticalLayoutWidget_15->setGeometry(QRect(110, 190, 160, 241));
        verticalLayout_20 = new QVBoxLayout(verticalLayoutWidget_15);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        ellipseModMenu_penSettings_lineColorCombo = new QComboBox(verticalLayoutWidget_15);
        ellipseModMenu_penSettings_lineColorCombo->setObjectName(QStringLiteral("ellipseModMenu_penSettings_lineColorCombo"));

        verticalLayout_20->addWidget(ellipseModMenu_penSettings_lineColorCombo);

        ellipseModMenu_penSettings_lineWidthSpinBox = new QSpinBox(verticalLayoutWidget_15);
        ellipseModMenu_penSettings_lineWidthSpinBox->setObjectName(QStringLiteral("ellipseModMenu_penSettings_lineWidthSpinBox"));

        verticalLayout_20->addWidget(ellipseModMenu_penSettings_lineWidthSpinBox);

        ellipseModMenu_penSettings_penStyleCombo = new QComboBox(verticalLayoutWidget_15);
        ellipseModMenu_penSettings_penStyleCombo->setObjectName(QStringLiteral("ellipseModMenu_penSettings_penStyleCombo"));

        verticalLayout_20->addWidget(ellipseModMenu_penSettings_penStyleCombo);

        ellipseModMenu_penSettings_capStyleCombo = new QComboBox(verticalLayoutWidget_15);
        ellipseModMenu_penSettings_capStyleCombo->setObjectName(QStringLiteral("ellipseModMenu_penSettings_capStyleCombo"));

        verticalLayout_20->addWidget(ellipseModMenu_penSettings_capStyleCombo);

        ellipseModMenu_penSettings_joinStyleCombo = new QComboBox(verticalLayoutWidget_15);
        ellipseModMenu_penSettings_joinStyleCombo->setObjectName(QStringLiteral("ellipseModMenu_penSettings_joinStyleCombo"));

        verticalLayout_20->addWidget(ellipseModMenu_penSettings_joinStyleCombo);

        ellipseModMenu_penSettings_brushColorCombo = new QComboBox(verticalLayoutWidget_15);
        ellipseModMenu_penSettings_brushColorCombo->setObjectName(QStringLiteral("ellipseModMenu_penSettings_brushColorCombo"));

        verticalLayout_20->addWidget(ellipseModMenu_penSettings_brushColorCombo);

        ellipseModMenu_penSettings_brushStyleCombo = new QComboBox(verticalLayoutWidget_15);
        ellipseModMenu_penSettings_brushStyleCombo->setObjectName(QStringLiteral("ellipseModMenu_penSettings_brushStyleCombo"));

        verticalLayout_20->addWidget(ellipseModMenu_penSettings_brushStyleCombo);

        ellipseModMenu_dimensions_originLabel = new QLabel(ellipseModMenu);
        ellipseModMenu_dimensions_originLabel->setObjectName(QStringLiteral("ellipseModMenu_dimensions_originLabel"));
        ellipseModMenu_dimensions_originLabel->setGeometry(QRect(30, 50, 81, 17));
        ellipseModMenu_updateButton = new QPushButton(ellipseModMenu);
        ellipseModMenu_updateButton->setObjectName(QStringLiteral("ellipseModMenu_updateButton"));
        ellipseModMenu_updateButton->setGeometry(QRect(110, 10, 99, 27));
        ellipseModMenu_dimensions_originY = new QLineEdit(ellipseModMenu);
        ellipseModMenu_dimensions_originY->setObjectName(QStringLiteral("ellipseModMenu_dimensions_originY"));
        ellipseModMenu_dimensions_originY->setGeometry(QRect(220, 50, 31, 27));
        ellipseModMenu_dimensions_originX = new QLineEdit(ellipseModMenu);
        ellipseModMenu_dimensions_originX->setObjectName(QStringLiteral("ellipseModMenu_dimensions_originX"));
        ellipseModMenu_dimensions_originX->setGeometry(QRect(170, 50, 31, 27));
        verticalLayoutWidget_16 = new QWidget(ellipseModMenu);
        verticalLayoutWidget_16->setObjectName(QStringLiteral("verticalLayoutWidget_16"));
        verticalLayoutWidget_16->setGeometry(QRect(20, 190, 101, 241));
        verticalLayout_21 = new QVBoxLayout(verticalLayoutWidget_16);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        ellipseModMenu_penSettings_lineColorLabel = new QLabel(verticalLayoutWidget_16);
        ellipseModMenu_penSettings_lineColorLabel->setObjectName(QStringLiteral("ellipseModMenu_penSettings_lineColorLabel"));

        verticalLayout_21->addWidget(ellipseModMenu_penSettings_lineColorLabel);

        ellipseModMenu_penSettings_lineWidthLabel = new QLabel(verticalLayoutWidget_16);
        ellipseModMenu_penSettings_lineWidthLabel->setObjectName(QStringLiteral("ellipseModMenu_penSettings_lineWidthLabel"));

        verticalLayout_21->addWidget(ellipseModMenu_penSettings_lineWidthLabel);

        ellipseModMenu_penSettings_penStyleLabel = new QLabel(verticalLayoutWidget_16);
        ellipseModMenu_penSettings_penStyleLabel->setObjectName(QStringLiteral("ellipseModMenu_penSettings_penStyleLabel"));

        verticalLayout_21->addWidget(ellipseModMenu_penSettings_penStyleLabel);

        ellipseModMenu_penSettings_capStyleLabel = new QLabel(verticalLayoutWidget_16);
        ellipseModMenu_penSettings_capStyleLabel->setObjectName(QStringLiteral("ellipseModMenu_penSettings_capStyleLabel"));

        verticalLayout_21->addWidget(ellipseModMenu_penSettings_capStyleLabel);

        ellipseModMenu_penSettings_joinStyleLabel = new QLabel(verticalLayoutWidget_16);
        ellipseModMenu_penSettings_joinStyleLabel->setObjectName(QStringLiteral("ellipseModMenu_penSettings_joinStyleLabel"));

        verticalLayout_21->addWidget(ellipseModMenu_penSettings_joinStyleLabel);

        ellipseModMenu_penSettings_brushColorLabel = new QLabel(verticalLayoutWidget_16);
        ellipseModMenu_penSettings_brushColorLabel->setObjectName(QStringLiteral("ellipseModMenu_penSettings_brushColorLabel"));

        verticalLayout_21->addWidget(ellipseModMenu_penSettings_brushColorLabel);

        ellipseModMenu_penSettings_brushStyleLabel = new QLabel(verticalLayoutWidget_16);
        ellipseModMenu_penSettings_brushStyleLabel->setObjectName(QStringLiteral("ellipseModMenu_penSettings_brushStyleLabel"));

        verticalLayout_21->addWidget(ellipseModMenu_penSettings_brushStyleLabel);

        ellipseModMenu_deleteButton = new QPushButton(ellipseModMenu);
        ellipseModMenu_deleteButton->setObjectName(QStringLiteral("ellipseModMenu_deleteButton"));
        ellipseModMenu_deleteButton->setGeometry(QRect(220, 10, 51, 27));
        circleModMenu = new QWidget(modTab);
        circleModMenu->setObjectName(QStringLiteral("circleModMenu"));
        circleModMenu->setGeometry(QRect(10, 40, 281, 451));
        cicleModMenu_dimensions_originXLabel = new QLabel(circleModMenu);
        cicleModMenu_dimensions_originXLabel->setObjectName(QStringLiteral("cicleModMenu_dimensions_originXLabel"));
        cicleModMenu_dimensions_originXLabel->setGeometry(QRect(160, 50, 16, 16));
        circleModMenu_dimensions_radiusLabel = new QLabel(circleModMenu);
        circleModMenu_dimensions_radiusLabel->setObjectName(QStringLiteral("circleModMenu_dimensions_radiusLabel"));
        circleModMenu_dimensions_radiusLabel->setGeometry(QRect(50, 90, 101, 20));
        circleModMenu_penSettingLabel = new QLabel(circleModMenu);
        circleModMenu_penSettingLabel->setObjectName(QStringLiteral("circleModMenu_penSettingLabel"));
        circleModMenu_penSettingLabel->setGeometry(QRect(10, 140, 101, 17));
        circleModMenu_dimensions_originYLabel = new QLabel(circleModMenu);
        circleModMenu_dimensions_originYLabel->setObjectName(QStringLiteral("circleModMenu_dimensions_originYLabel"));
        circleModMenu_dimensions_originYLabel->setGeometry(QRect(210, 50, 16, 16));
        circleModMenu_dimensions_Radius = new QLineEdit(circleModMenu);
        circleModMenu_dimensions_Radius->setObjectName(QStringLiteral("circleModMenu_dimensions_Radius"));
        circleModMenu_dimensions_Radius->setGeometry(QRect(170, 90, 31, 27));
        circleModMenu_dimensionLabel = new QLabel(circleModMenu);
        circleModMenu_dimensionLabel->setObjectName(QStringLiteral("circleModMenu_dimensionLabel"));
        circleModMenu_dimensionLabel->setGeometry(QRect(20, 20, 91, 17));
        circleModMenu_penSettings_formatLineBot = new QFrame(circleModMenu);
        circleModMenu_penSettings_formatLineBot->setObjectName(QStringLiteral("circleModMenu_penSettings_formatLineBot"));
        circleModMenu_penSettings_formatLineBot->setGeometry(QRect(-10, 150, 301, 20));
        circleModMenu_penSettings_formatLineBot->setFrameShape(QFrame::HLine);
        circleModMenu_penSettings_formatLineBot->setFrameShadow(QFrame::Sunken);
        circleModMenu_penSettings_formatLineTop = new QFrame(circleModMenu);
        circleModMenu_penSettings_formatLineTop->setObjectName(QStringLiteral("circleModMenu_penSettings_formatLineTop"));
        circleModMenu_penSettings_formatLineTop->setGeometry(QRect(-10, 126, 301, 20));
        circleModMenu_penSettings_formatLineTop->setFrameShape(QFrame::HLine);
        circleModMenu_penSettings_formatLineTop->setFrameShadow(QFrame::Sunken);
        circleModMenu_dimensions_formatLine = new QFrame(circleModMenu);
        circleModMenu_dimensions_formatLine->setObjectName(QStringLiteral("circleModMenu_dimensions_formatLine"));
        circleModMenu_dimensions_formatLine->setGeometry(QRect(-10, 25, 301, 31));
        circleModMenu_dimensions_formatLine->setFrameShape(QFrame::HLine);
        circleModMenu_dimensions_formatLine->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_17 = new QWidget(circleModMenu);
        verticalLayoutWidget_17->setObjectName(QStringLiteral("verticalLayoutWidget_17"));
        verticalLayoutWidget_17->setGeometry(QRect(110, 166, 160, 241));
        verticalLayout_22 = new QVBoxLayout(verticalLayoutWidget_17);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        circleModMenu_penSettings_lineColorCombo = new QComboBox(verticalLayoutWidget_17);
        circleModMenu_penSettings_lineColorCombo->setObjectName(QStringLiteral("circleModMenu_penSettings_lineColorCombo"));

        verticalLayout_22->addWidget(circleModMenu_penSettings_lineColorCombo);

        circleModMenu_penSettings_lineWidthSpinBox = new QSpinBox(verticalLayoutWidget_17);
        circleModMenu_penSettings_lineWidthSpinBox->setObjectName(QStringLiteral("circleModMenu_penSettings_lineWidthSpinBox"));

        verticalLayout_22->addWidget(circleModMenu_penSettings_lineWidthSpinBox);

        circleModMenu_penSettings_penStyleCombo = new QComboBox(verticalLayoutWidget_17);
        circleModMenu_penSettings_penStyleCombo->setObjectName(QStringLiteral("circleModMenu_penSettings_penStyleCombo"));

        verticalLayout_22->addWidget(circleModMenu_penSettings_penStyleCombo);

        circleModMenu_penSettings_capStyleCombo = new QComboBox(verticalLayoutWidget_17);
        circleModMenu_penSettings_capStyleCombo->setObjectName(QStringLiteral("circleModMenu_penSettings_capStyleCombo"));

        verticalLayout_22->addWidget(circleModMenu_penSettings_capStyleCombo);

        circleModMenu_penSettings_joinStyleCombo = new QComboBox(verticalLayoutWidget_17);
        circleModMenu_penSettings_joinStyleCombo->setObjectName(QStringLiteral("circleModMenu_penSettings_joinStyleCombo"));

        verticalLayout_22->addWidget(circleModMenu_penSettings_joinStyleCombo);

        circleModMenu_penSettings_brushColorCombo = new QComboBox(verticalLayoutWidget_17);
        circleModMenu_penSettings_brushColorCombo->setObjectName(QStringLiteral("circleModMenu_penSettings_brushColorCombo"));

        verticalLayout_22->addWidget(circleModMenu_penSettings_brushColorCombo);

        circleModMenu_penSettings_brushStyleCombo = new QComboBox(verticalLayoutWidget_17);
        circleModMenu_penSettings_brushStyleCombo->setObjectName(QStringLiteral("circleModMenu_penSettings_brushStyleCombo"));

        verticalLayout_22->addWidget(circleModMenu_penSettings_brushStyleCombo);

        circleModMenu_dimensions_upperLeftLabel = new QLabel(circleModMenu);
        circleModMenu_dimensions_upperLeftLabel->setObjectName(QStringLiteral("circleModMenu_dimensions_upperLeftLabel"));
        circleModMenu_dimensions_upperLeftLabel->setGeometry(QRect(50, 50, 81, 17));
        circleModMenu_updateButton = new QPushButton(circleModMenu);
        circleModMenu_updateButton->setObjectName(QStringLiteral("circleModMenu_updateButton"));
        circleModMenu_updateButton->setGeometry(QRect(110, 10, 99, 27));
        circleModMenu_dimensions_originY = new QLineEdit(circleModMenu);
        circleModMenu_dimensions_originY->setObjectName(QStringLiteral("circleModMenu_dimensions_originY"));
        circleModMenu_dimensions_originY->setGeometry(QRect(220, 50, 31, 27));
        circleModMenu_dimensions_originX = new QLineEdit(circleModMenu);
        circleModMenu_dimensions_originX->setObjectName(QStringLiteral("circleModMenu_dimensions_originX"));
        circleModMenu_dimensions_originX->setGeometry(QRect(170, 50, 31, 27));
        verticalLayoutWidget_18 = new QWidget(circleModMenu);
        verticalLayoutWidget_18->setObjectName(QStringLiteral("verticalLayoutWidget_18"));
        verticalLayoutWidget_18->setGeometry(QRect(20, 166, 101, 241));
        verticalLayout_23 = new QVBoxLayout(verticalLayoutWidget_18);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        circleModMenu_penSettings_lineColorLabel = new QLabel(verticalLayoutWidget_18);
        circleModMenu_penSettings_lineColorLabel->setObjectName(QStringLiteral("circleModMenu_penSettings_lineColorLabel"));

        verticalLayout_23->addWidget(circleModMenu_penSettings_lineColorLabel);

        circleModMenu_penSettings_lineWidthLabel = new QLabel(verticalLayoutWidget_18);
        circleModMenu_penSettings_lineWidthLabel->setObjectName(QStringLiteral("circleModMenu_penSettings_lineWidthLabel"));

        verticalLayout_23->addWidget(circleModMenu_penSettings_lineWidthLabel);

        circleModMenu_penSettings_penStyleLabel = new QLabel(verticalLayoutWidget_18);
        circleModMenu_penSettings_penStyleLabel->setObjectName(QStringLiteral("circleModMenu_penSettings_penStyleLabel"));

        verticalLayout_23->addWidget(circleModMenu_penSettings_penStyleLabel);

        circleModMenu_penSettings_capStyleLabel = new QLabel(verticalLayoutWidget_18);
        circleModMenu_penSettings_capStyleLabel->setObjectName(QStringLiteral("circleModMenu_penSettings_capStyleLabel"));

        verticalLayout_23->addWidget(circleModMenu_penSettings_capStyleLabel);

        circleModMenu_penSettings_joinStyleLabel = new QLabel(verticalLayoutWidget_18);
        circleModMenu_penSettings_joinStyleLabel->setObjectName(QStringLiteral("circleModMenu_penSettings_joinStyleLabel"));

        verticalLayout_23->addWidget(circleModMenu_penSettings_joinStyleLabel);

        circleModMenu_penSettings_brushColorLabel = new QLabel(verticalLayoutWidget_18);
        circleModMenu_penSettings_brushColorLabel->setObjectName(QStringLiteral("circleModMenu_penSettings_brushColorLabel"));

        verticalLayout_23->addWidget(circleModMenu_penSettings_brushColorLabel);

        circleModMenu_penSettings_brushStyleLabel = new QLabel(verticalLayoutWidget_18);
        circleModMenu_penSettings_brushStyleLabel->setObjectName(QStringLiteral("circleModMenu_penSettings_brushStyleLabel"));

        verticalLayout_23->addWidget(circleModMenu_penSettings_brushStyleLabel);

        circleModMenu_deleteButton = new QPushButton(circleModMenu);
        circleModMenu_deleteButton->setObjectName(QStringLiteral("circleModMenu_deleteButton"));
        circleModMenu_deleteButton->setGeometry(QRect(220, 10, 51, 27));
        lineModMenu = new QWidget(modTab);
        lineModMenu->setObjectName(QStringLiteral("lineModMenu"));
        lineModMenu->setEnabled(true);
        lineModMenu->setGeometry(QRect(10, 40, 281, 451));
        lineModMenu_dimensionLabel = new QLabel(lineModMenu);
        lineModMenu_dimensionLabel->setObjectName(QStringLiteral("lineModMenu_dimensionLabel"));
        lineModMenu_dimensionLabel->setGeometry(QRect(10, 10, 91, 17));
        lineModMenu_penSettingLabel = new QLabel(lineModMenu);
        lineModMenu_penSettingLabel->setObjectName(QStringLiteral("lineModMenu_penSettingLabel"));
        lineModMenu_penSettingLabel->setGeometry(QRect(10, 120, 101, 17));
        lineModMenu_dimensions_formatLine = new QFrame(lineModMenu);
        lineModMenu_dimensions_formatLine->setObjectName(QStringLiteral("lineModMenu_dimensions_formatLine"));
        lineModMenu_dimensions_formatLine->setGeometry(QRect(-20, 15, 301, 31));
        lineModMenu_dimensions_formatLine->setFrameShape(QFrame::HLine);
        lineModMenu_dimensions_formatLine->setFrameShadow(QFrame::Sunken);
        lineModMenu_dimensions_startPointLabel = new QLabel(lineModMenu);
        lineModMenu_dimensions_startPointLabel->setObjectName(QStringLiteral("lineModMenu_dimensions_startPointLabel"));
        lineModMenu_dimensions_startPointLabel->setGeometry(QRect(20, 40, 81, 17));
        lineModMenu_dimensions_endPointLabel = new QLabel(lineModMenu);
        lineModMenu_dimensions_endPointLabel->setObjectName(QStringLiteral("lineModMenu_dimensions_endPointLabel"));
        lineModMenu_dimensions_endPointLabel->setGeometry(QRect(20, 80, 81, 17));
        lineModMenu_dimensions_startPointX = new QLineEdit(lineModMenu);
        lineModMenu_dimensions_startPointX->setObjectName(QStringLiteral("lineModMenu_dimensions_startPointX"));
        lineModMenu_dimensions_startPointX->setGeometry(QRect(160, 40, 31, 27));
        lineModMenu_dimensions_startPointXLabel = new QLabel(lineModMenu);
        lineModMenu_dimensions_startPointXLabel->setObjectName(QStringLiteral("lineModMenu_dimensions_startPointXLabel"));
        lineModMenu_dimensions_startPointXLabel->setGeometry(QRect(150, 40, 16, 16));
        lineModMenu_dimensions_endPointYLabel = new QLabel(lineModMenu);
        lineModMenu_dimensions_endPointYLabel->setObjectName(QStringLiteral("lineModMenu_dimensions_endPointYLabel"));
        lineModMenu_dimensions_endPointYLabel->setGeometry(QRect(200, 40, 16, 16));
        lineModMenu_dimensions_startPointY = new QLineEdit(lineModMenu);
        lineModMenu_dimensions_startPointY->setObjectName(QStringLiteral("lineModMenu_dimensions_startPointY"));
        lineModMenu_dimensions_startPointY->setGeometry(QRect(210, 40, 31, 27));
        lineModMenu_penSettings_formatLineTop = new QFrame(lineModMenu);
        lineModMenu_penSettings_formatLineTop->setObjectName(QStringLiteral("lineModMenu_penSettings_formatLineTop"));
        lineModMenu_penSettings_formatLineTop->setGeometry(QRect(-10, 106, 301, 20));
        lineModMenu_penSettings_formatLineTop->setFrameShape(QFrame::HLine);
        lineModMenu_penSettings_formatLineTop->setFrameShadow(QFrame::Sunken);
        lineModMenu_penSettings_formatLineBot = new QFrame(lineModMenu);
        lineModMenu_penSettings_formatLineBot->setObjectName(QStringLiteral("lineModMenu_penSettings_formatLineBot"));
        lineModMenu_penSettings_formatLineBot->setGeometry(QRect(-10, 130, 301, 20));
        lineModMenu_penSettings_formatLineBot->setFrameShape(QFrame::HLine);
        lineModMenu_penSettings_formatLineBot->setFrameShadow(QFrame::Sunken);
        lineModMenu_dimensions_endPointYLabel_2 = new QLabel(lineModMenu);
        lineModMenu_dimensions_endPointYLabel_2->setObjectName(QStringLiteral("lineModMenu_dimensions_endPointYLabel_2"));
        lineModMenu_dimensions_endPointYLabel_2->setGeometry(QRect(200, 80, 16, 16));
        lineModMenu_dimensions_endPointXLabel = new QLabel(lineModMenu);
        lineModMenu_dimensions_endPointXLabel->setObjectName(QStringLiteral("lineModMenu_dimensions_endPointXLabel"));
        lineModMenu_dimensions_endPointXLabel->setGeometry(QRect(150, 80, 16, 16));
        lineModMenu_dimensions_endPointY = new QLineEdit(lineModMenu);
        lineModMenu_dimensions_endPointY->setObjectName(QStringLiteral("lineModMenu_dimensions_endPointY"));
        lineModMenu_dimensions_endPointY->setGeometry(QRect(210, 80, 31, 27));
        lineModMenu_dimensions_endPointX = new QLineEdit(lineModMenu);
        lineModMenu_dimensions_endPointX->setObjectName(QStringLiteral("lineModMenu_dimensions_endPointX"));
        lineModMenu_dimensions_endPointX->setGeometry(QRect(160, 80, 31, 27));
        verticalLayoutWidget = new QWidget(lineModMenu);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 150, 101, 241));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineModMenu_penSettings_lineColorLabel = new QLabel(verticalLayoutWidget);
        lineModMenu_penSettings_lineColorLabel->setObjectName(QStringLiteral("lineModMenu_penSettings_lineColorLabel"));

        verticalLayout_2->addWidget(lineModMenu_penSettings_lineColorLabel);

        lineModMenu_penSettings_lineWidthLabel = new QLabel(verticalLayoutWidget);
        lineModMenu_penSettings_lineWidthLabel->setObjectName(QStringLiteral("lineModMenu_penSettings_lineWidthLabel"));

        verticalLayout_2->addWidget(lineModMenu_penSettings_lineWidthLabel);

        lineModMenu_penSettings_penStyleLabel = new QLabel(verticalLayoutWidget);
        lineModMenu_penSettings_penStyleLabel->setObjectName(QStringLiteral("lineModMenu_penSettings_penStyleLabel"));

        verticalLayout_2->addWidget(lineModMenu_penSettings_penStyleLabel);

        lineModMenu_penSettings_capStyleLabel = new QLabel(verticalLayoutWidget);
        lineModMenu_penSettings_capStyleLabel->setObjectName(QStringLiteral("lineModMenu_penSettings_capStyleLabel"));

        verticalLayout_2->addWidget(lineModMenu_penSettings_capStyleLabel);

        lineModMenu_penSettings_joinStyleLabel = new QLabel(verticalLayoutWidget);
        lineModMenu_penSettings_joinStyleLabel->setObjectName(QStringLiteral("lineModMenu_penSettings_joinStyleLabel"));

        verticalLayout_2->addWidget(lineModMenu_penSettings_joinStyleLabel);

        verticalLayoutWidget_2 = new QWidget(lineModMenu);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(100, 150, 160, 241));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineModMenu_penSettings_lineColorCombo = new QComboBox(verticalLayoutWidget_2);
        lineModMenu_penSettings_lineColorCombo->setObjectName(QStringLiteral("lineModMenu_penSettings_lineColorCombo"));

        verticalLayout_3->addWidget(lineModMenu_penSettings_lineColorCombo);

        lineModMenu_penSettings_lineWidthSpinBox = new QSpinBox(verticalLayoutWidget_2);
        lineModMenu_penSettings_lineWidthSpinBox->setObjectName(QStringLiteral("lineModMenu_penSettings_lineWidthSpinBox"));

        verticalLayout_3->addWidget(lineModMenu_penSettings_lineWidthSpinBox);

        lineModMenu_penSettings_penStyleCombo = new QComboBox(verticalLayoutWidget_2);
        lineModMenu_penSettings_penStyleCombo->setObjectName(QStringLiteral("lineModMenu_penSettings_penStyleCombo"));

        verticalLayout_3->addWidget(lineModMenu_penSettings_penStyleCombo);

        lineModMenu_penSettings_capStyleCombo = new QComboBox(verticalLayoutWidget_2);
        lineModMenu_penSettings_capStyleCombo->setObjectName(QStringLiteral("lineModMenu_penSettings_capStyleCombo"));

        verticalLayout_3->addWidget(lineModMenu_penSettings_capStyleCombo);

        lineModMenu_penSettings_joinStyleCombo = new QComboBox(verticalLayoutWidget_2);
        lineModMenu_penSettings_joinStyleCombo->setObjectName(QStringLiteral("lineModMenu_penSettings_joinStyleCombo"));

        verticalLayout_3->addWidget(lineModMenu_penSettings_joinStyleCombo);

        lineModMenu_updateButton = new QPushButton(lineModMenu);
        lineModMenu_updateButton->setObjectName(QStringLiteral("lineModMenu_updateButton"));
        lineModMenu_updateButton->setGeometry(QRect(110, 0, 99, 27));
        lineModMenu_deleteButton = new QPushButton(lineModMenu);
        lineModMenu_deleteButton->setObjectName(QStringLiteral("lineModMenu_deleteButton"));
        lineModMenu_deleteButton->setGeometry(QRect(220, 0, 51, 27));
        polygonModMenu = new QWidget(modTab);
        polygonModMenu->setObjectName(QStringLiteral("polygonModMenu"));
        polygonModMenu->setGeometry(QRect(10, 40, 281, 451));
        polygonModMenu_dimensions_endPointYLabel = new QLabel(polygonModMenu);
        polygonModMenu_dimensions_endPointYLabel->setObjectName(QStringLiteral("polygonModMenu_dimensions_endPointYLabel"));
        polygonModMenu_dimensions_endPointYLabel->setGeometry(QRect(200, 50, 16, 16));
        polygonModMenu_dimensions_formatLine = new QFrame(polygonModMenu);
        polygonModMenu_dimensions_formatLine->setObjectName(QStringLiteral("polygonModMenu_dimensions_formatLine"));
        polygonModMenu_dimensions_formatLine->setGeometry(QRect(-20, 25, 301, 31));
        polygonModMenu_dimensions_formatLine->setFrameShape(QFrame::HLine);
        polygonModMenu_dimensions_formatLine->setFrameShadow(QFrame::Sunken);
        polygonModMenu_dimensions_startPointY = new QLineEdit(polygonModMenu);
        polygonModMenu_dimensions_startPointY->setObjectName(QStringLiteral("polygonModMenu_dimensions_startPointY"));
        polygonModMenu_dimensions_startPointY->setGeometry(QRect(210, 50, 31, 27));
        polygonModMenu_dimensions_pointList = new QListWidget(polygonModMenu);
        polygonModMenu_dimensions_pointList->setObjectName(QStringLiteral("polygonModMenu_dimensions_pointList"));
        polygonModMenu_dimensions_pointList->setGeometry(QRect(150, 90, 111, 81));
        polygonModMenu_dimensions_pointList->setSortingEnabled(true);
        verticalLayoutWidget_8 = new QWidget(polygonModMenu);
        verticalLayoutWidget_8->setObjectName(QStringLiteral("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(110, 210, 160, 241));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        polygonModMenu_penSettings_lineColorCombo = new QComboBox(verticalLayoutWidget_8);
        polygonModMenu_penSettings_lineColorCombo->setObjectName(QStringLiteral("polygonModMenu_penSettings_lineColorCombo"));

        verticalLayout_8->addWidget(polygonModMenu_penSettings_lineColorCombo);

        polygonModMenu_penSettings_lineWidthSpinBox = new QSpinBox(verticalLayoutWidget_8);
        polygonModMenu_penSettings_lineWidthSpinBox->setObjectName(QStringLiteral("polygonModMenu_penSettings_lineWidthSpinBox"));

        verticalLayout_8->addWidget(polygonModMenu_penSettings_lineWidthSpinBox);

        polygonModMenu_penSettings_penStyleCombo = new QComboBox(verticalLayoutWidget_8);
        polygonModMenu_penSettings_penStyleCombo->setObjectName(QStringLiteral("polygonModMenu_penSettings_penStyleCombo"));

        verticalLayout_8->addWidget(polygonModMenu_penSettings_penStyleCombo);

        polygonModMenu_penSettings_capStyleCombo = new QComboBox(verticalLayoutWidget_8);
        polygonModMenu_penSettings_capStyleCombo->setObjectName(QStringLiteral("polygonModMenu_penSettings_capStyleCombo"));

        verticalLayout_8->addWidget(polygonModMenu_penSettings_capStyleCombo);

        polygonModMenu_penSettings_joinStyleCombo = new QComboBox(verticalLayoutWidget_8);
        polygonModMenu_penSettings_joinStyleCombo->setObjectName(QStringLiteral("polygonModMenu_penSettings_joinStyleCombo"));

        verticalLayout_8->addWidget(polygonModMenu_penSettings_joinStyleCombo);

        polygonModMenu_penSettings_brushColorCombo = new QComboBox(verticalLayoutWidget_8);
        polygonModMenu_penSettings_brushColorCombo->setObjectName(QStringLiteral("polygonModMenu_penSettings_brushColorCombo"));

        verticalLayout_8->addWidget(polygonModMenu_penSettings_brushColorCombo);

        polygonModMenu_penSettings_brushStyleCombo = new QComboBox(verticalLayoutWidget_8);
        polygonModMenu_penSettings_brushStyleCombo->setObjectName(QStringLiteral("polygonModMenu_penSettings_brushStyleCombo"));

        verticalLayout_8->addWidget(polygonModMenu_penSettings_brushStyleCombo);

        polygonModMenu_penSettings_formatLineTop = new QFrame(polygonModMenu);
        polygonModMenu_penSettings_formatLineTop->setObjectName(QStringLiteral("polygonModMenu_penSettings_formatLineTop"));
        polygonModMenu_penSettings_formatLineTop->setGeometry(QRect(-10, 170, 301, 20));
        polygonModMenu_penSettings_formatLineTop->setFrameShape(QFrame::HLine);
        polygonModMenu_penSettings_formatLineTop->setFrameShadow(QFrame::Sunken);
        polygonModMenu_penSettings_formatLineBot = new QFrame(polygonModMenu);
        polygonModMenu_penSettings_formatLineBot->setObjectName(QStringLiteral("polygonModMenu_penSettings_formatLineBot"));
        polygonModMenu_penSettings_formatLineBot->setGeometry(QRect(-10, 190, 301, 20));
        polygonModMenu_penSettings_formatLineBot->setFrameShape(QFrame::HLine);
        polygonModMenu_penSettings_formatLineBot->setFrameShadow(QFrame::Sunken);
        polygonModMenu_penSettingLabel = new QLabel(polygonModMenu);
        polygonModMenu_penSettingLabel->setObjectName(QStringLiteral("polygonModMenu_penSettingLabel"));
        polygonModMenu_penSettingLabel->setGeometry(QRect(10, 180, 101, 17));
        polygonModMenu_dimensionLabel = new QLabel(polygonModMenu);
        polygonModMenu_dimensionLabel->setObjectName(QStringLiteral("polygonModMenu_dimensionLabel"));
        polygonModMenu_dimensionLabel->setGeometry(QRect(10, 20, 91, 17));
        verticalLayoutWidget_9 = new QWidget(polygonModMenu);
        verticalLayoutWidget_9->setObjectName(QStringLiteral("verticalLayoutWidget_9"));
        verticalLayoutWidget_9->setGeometry(QRect(10, 50, 121, 121));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_9);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        polygonModMenu_dimensions_addPointButton = new QPushButton(verticalLayoutWidget_9);
        polygonModMenu_dimensions_addPointButton->setObjectName(QStringLiteral("polygonModMenu_dimensions_addPointButton"));

        verticalLayout_4->addWidget(polygonModMenu_dimensions_addPointButton);

        polygonModMenu_dimensions_movePointButton = new QPushButton(verticalLayoutWidget_9);
        polygonModMenu_dimensions_movePointButton->setObjectName(QStringLiteral("polygonModMenu_dimensions_movePointButton"));

        verticalLayout_4->addWidget(polygonModMenu_dimensions_movePointButton);

        polygonModMenu_dimensions_deletePointButton = new QPushButton(verticalLayoutWidget_9);
        polygonModMenu_dimensions_deletePointButton->setObjectName(QStringLiteral("polygonModMenu_dimensions_deletePointButton"));

        verticalLayout_4->addWidget(polygonModMenu_dimensions_deletePointButton);

        verticalLayoutWidget_10 = new QWidget(polygonModMenu);
        verticalLayoutWidget_10->setObjectName(QStringLiteral("verticalLayoutWidget_10"));
        verticalLayoutWidget_10->setGeometry(QRect(20, 210, 101, 241));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_10);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        polygonModMenu_penSettings_lineColorLabel = new QLabel(verticalLayoutWidget_10);
        polygonModMenu_penSettings_lineColorLabel->setObjectName(QStringLiteral("polygonModMenu_penSettings_lineColorLabel"));

        verticalLayout_9->addWidget(polygonModMenu_penSettings_lineColorLabel);

        polygonModMenu_penSettings_lineWidthLabel = new QLabel(verticalLayoutWidget_10);
        polygonModMenu_penSettings_lineWidthLabel->setObjectName(QStringLiteral("polygonModMenu_penSettings_lineWidthLabel"));

        verticalLayout_9->addWidget(polygonModMenu_penSettings_lineWidthLabel);

        polygonModMenu_penSettings_penStyleLabel = new QLabel(verticalLayoutWidget_10);
        polygonModMenu_penSettings_penStyleLabel->setObjectName(QStringLiteral("polygonModMenu_penSettings_penStyleLabel"));

        verticalLayout_9->addWidget(polygonModMenu_penSettings_penStyleLabel);

        polygonModMenu_penSettings_capStyleLabel = new QLabel(verticalLayoutWidget_10);
        polygonModMenu_penSettings_capStyleLabel->setObjectName(QStringLiteral("polygonModMenu_penSettings_capStyleLabel"));

        verticalLayout_9->addWidget(polygonModMenu_penSettings_capStyleLabel);

        polygonModMenu_penSettings_joinStyleLabel = new QLabel(verticalLayoutWidget_10);
        polygonModMenu_penSettings_joinStyleLabel->setObjectName(QStringLiteral("polygonModMenu_penSettings_joinStyleLabel"));

        verticalLayout_9->addWidget(polygonModMenu_penSettings_joinStyleLabel);

        polygonModMenu_penSettings_brushColorLabel = new QLabel(verticalLayoutWidget_10);
        polygonModMenu_penSettings_brushColorLabel->setObjectName(QStringLiteral("polygonModMenu_penSettings_brushColorLabel"));

        verticalLayout_9->addWidget(polygonModMenu_penSettings_brushColorLabel);

        polygonModMenu_penSettings_brushStyleLabel = new QLabel(verticalLayoutWidget_10);
        polygonModMenu_penSettings_brushStyleLabel->setObjectName(QStringLiteral("polygonModMenu_penSettings_brushStyleLabel"));

        verticalLayout_9->addWidget(polygonModMenu_penSettings_brushStyleLabel);

        polygonModMenu_dimensions_startPointX = new QLineEdit(polygonModMenu);
        polygonModMenu_dimensions_startPointX->setObjectName(QStringLiteral("polygonModMenu_dimensions_startPointX"));
        polygonModMenu_dimensions_startPointX->setGeometry(QRect(160, 50, 31, 27));
        polygonModMenu_updateButton = new QPushButton(polygonModMenu);
        polygonModMenu_updateButton->setObjectName(QStringLiteral("polygonModMenu_updateButton"));
        polygonModMenu_updateButton->setGeometry(QRect(110, 10, 99, 27));
        polygonModMenu_dimensions_startPointXLabel = new QLabel(polygonModMenu);
        polygonModMenu_dimensions_startPointXLabel->setObjectName(QStringLiteral("polygonModMenu_dimensions_startPointXLabel"));
        polygonModMenu_dimensions_startPointXLabel->setGeometry(QRect(150, 50, 16, 16));
        polygonModMenu_deleteButton = new QPushButton(polygonModMenu);
        polygonModMenu_deleteButton->setObjectName(QStringLiteral("polygonModMenu_deleteButton"));
        polygonModMenu_deleteButton->setGeometry(QRect(220, 10, 51, 27));
        polylineModMenu = new QWidget(modTab);
        polylineModMenu->setObjectName(QStringLiteral("polylineModMenu"));
        polylineModMenu->setEnabled(true);
        polylineModMenu->setGeometry(QRect(10, 40, 281, 441));
        polyLineModMenu_dimensions_formatLine = new QFrame(polylineModMenu);
        polyLineModMenu_dimensions_formatLine->setObjectName(QStringLiteral("polyLineModMenu_dimensions_formatLine"));
        polyLineModMenu_dimensions_formatLine->setGeometry(QRect(-20, 15, 301, 31));
        polyLineModMenu_dimensions_formatLine->setFrameShape(QFrame::HLine);
        polyLineModMenu_dimensions_formatLine->setFrameShadow(QFrame::Sunken);
        polyLineModMenu_dimensionLabel = new QLabel(polylineModMenu);
        polyLineModMenu_dimensionLabel->setObjectName(QStringLiteral("polyLineModMenu_dimensionLabel"));
        polyLineModMenu_dimensionLabel->setGeometry(QRect(10, 10, 91, 17));
        polyLineModMenu_updateButton = new QPushButton(polylineModMenu);
        polyLineModMenu_updateButton->setObjectName(QStringLiteral("polyLineModMenu_updateButton"));
        polyLineModMenu_updateButton->setGeometry(QRect(110, 0, 99, 27));
        polyLineModMenu_penSettings_formatLineTop = new QFrame(polylineModMenu);
        polyLineModMenu_penSettings_formatLineTop->setObjectName(QStringLiteral("polyLineModMenu_penSettings_formatLineTop"));
        polyLineModMenu_penSettings_formatLineTop->setGeometry(QRect(-10, 160, 301, 20));
        polyLineModMenu_penSettings_formatLineTop->setFrameShape(QFrame::HLine);
        polyLineModMenu_penSettings_formatLineTop->setFrameShadow(QFrame::Sunken);
        polyLineModMenu_dimensions_startPointX = new QLineEdit(polylineModMenu);
        polyLineModMenu_dimensions_startPointX->setObjectName(QStringLiteral("polyLineModMenu_dimensions_startPointX"));
        polyLineModMenu_dimensions_startPointX->setGeometry(QRect(160, 40, 31, 27));
        polyLineModMenu_dimensions_endPointYLabel = new QLabel(polylineModMenu);
        polyLineModMenu_dimensions_endPointYLabel->setObjectName(QStringLiteral("polyLineModMenu_dimensions_endPointYLabel"));
        polyLineModMenu_dimensions_endPointYLabel->setGeometry(QRect(200, 40, 16, 16));
        polyLineModMenu_dimensions_startPointXLabel = new QLabel(polylineModMenu);
        polyLineModMenu_dimensions_startPointXLabel->setObjectName(QStringLiteral("polyLineModMenu_dimensions_startPointXLabel"));
        polyLineModMenu_dimensions_startPointXLabel->setGeometry(QRect(150, 40, 16, 16));
        polyLineModMenu_dimensions_startPointY = new QLineEdit(polylineModMenu);
        polyLineModMenu_dimensions_startPointY->setObjectName(QStringLiteral("polyLineModMenu_dimensions_startPointY"));
        polyLineModMenu_dimensions_startPointY->setGeometry(QRect(210, 40, 31, 27));
        verticalLayoutWidget_5 = new QWidget(polylineModMenu);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(10, 40, 121, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        polyLineModMenu_dimensions_addPointButton = new QPushButton(verticalLayoutWidget_5);
        polyLineModMenu_dimensions_addPointButton->setObjectName(QStringLiteral("polyLineModMenu_dimensions_addPointButton"));

        verticalLayout->addWidget(polyLineModMenu_dimensions_addPointButton);

        polyLineModMenu_dimensions_movePointButton = new QPushButton(verticalLayoutWidget_5);
        polyLineModMenu_dimensions_movePointButton->setObjectName(QStringLiteral("polyLineModMenu_dimensions_movePointButton"));

        verticalLayout->addWidget(polyLineModMenu_dimensions_movePointButton);

        polyLineModMenu_dimensions_deletePointButton = new QPushButton(verticalLayoutWidget_5);
        polyLineModMenu_dimensions_deletePointButton->setObjectName(QStringLiteral("polyLineModMenu_dimensions_deletePointButton"));

        verticalLayout->addWidget(polyLineModMenu_dimensions_deletePointButton);

        verticalLayoutWidget_6 = new QWidget(polylineModMenu);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(110, 200, 160, 241));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        polyLineModMenu_penSettings_lineColorCombo = new QComboBox(verticalLayoutWidget_6);
        polyLineModMenu_penSettings_lineColorCombo->setObjectName(QStringLiteral("polyLineModMenu_penSettings_lineColorCombo"));

        verticalLayout_6->addWidget(polyLineModMenu_penSettings_lineColorCombo);

        polyLineModMenu_penSettings_lineWidthSpinBox = new QSpinBox(verticalLayoutWidget_6);
        polyLineModMenu_penSettings_lineWidthSpinBox->setObjectName(QStringLiteral("polyLineModMenu_penSettings_lineWidthSpinBox"));

        verticalLayout_6->addWidget(polyLineModMenu_penSettings_lineWidthSpinBox);

        polyLineModMenu_penSettings_penStyleCombo = new QComboBox(verticalLayoutWidget_6);
        polyLineModMenu_penSettings_penStyleCombo->setObjectName(QStringLiteral("polyLineModMenu_penSettings_penStyleCombo"));

        verticalLayout_6->addWidget(polyLineModMenu_penSettings_penStyleCombo);

        polyLineModMenu_penSettings_capStyleCombo = new QComboBox(verticalLayoutWidget_6);
        polyLineModMenu_penSettings_capStyleCombo->setObjectName(QStringLiteral("polyLineModMenu_penSettings_capStyleCombo"));

        verticalLayout_6->addWidget(polyLineModMenu_penSettings_capStyleCombo);

        polyLineModMenu_penSettings_joinStyleCombo = new QComboBox(verticalLayoutWidget_6);
        polyLineModMenu_penSettings_joinStyleCombo->setObjectName(QStringLiteral("polyLineModMenu_penSettings_joinStyleCombo"));

        verticalLayout_6->addWidget(polyLineModMenu_penSettings_joinStyleCombo);

        verticalLayoutWidget_7 = new QWidget(polylineModMenu);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(20, 200, 101, 241));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        polyLineModMenu_penSettings_lineColorLabel = new QLabel(verticalLayoutWidget_7);
        polyLineModMenu_penSettings_lineColorLabel->setObjectName(QStringLiteral("polyLineModMenu_penSettings_lineColorLabel"));

        verticalLayout_7->addWidget(polyLineModMenu_penSettings_lineColorLabel);

        polyLineModMenu_penSettings_lineWidthLabel = new QLabel(verticalLayoutWidget_7);
        polyLineModMenu_penSettings_lineWidthLabel->setObjectName(QStringLiteral("polyLineModMenu_penSettings_lineWidthLabel"));

        verticalLayout_7->addWidget(polyLineModMenu_penSettings_lineWidthLabel);

        polyLineModMenu_penSettings_penStyleLabel = new QLabel(verticalLayoutWidget_7);
        polyLineModMenu_penSettings_penStyleLabel->setObjectName(QStringLiteral("polyLineModMenu_penSettings_penStyleLabel"));

        verticalLayout_7->addWidget(polyLineModMenu_penSettings_penStyleLabel);

        polyLineModMenu_penSettings_capStyleLabel = new QLabel(verticalLayoutWidget_7);
        polyLineModMenu_penSettings_capStyleLabel->setObjectName(QStringLiteral("polyLineModMenu_penSettings_capStyleLabel"));

        verticalLayout_7->addWidget(polyLineModMenu_penSettings_capStyleLabel);

        polyLineModMenu_penSettings_joinStyleLabel = new QLabel(verticalLayoutWidget_7);
        polyLineModMenu_penSettings_joinStyleLabel->setObjectName(QStringLiteral("polyLineModMenu_penSettings_joinStyleLabel"));

        verticalLayout_7->addWidget(polyLineModMenu_penSettings_joinStyleLabel);

        lineModMenu_penSettings_formatLineBot_3 = new QFrame(polylineModMenu);
        lineModMenu_penSettings_formatLineBot_3->setObjectName(QStringLiteral("lineModMenu_penSettings_formatLineBot_3"));
        lineModMenu_penSettings_formatLineBot_3->setGeometry(QRect(-10, 180, 301, 20));
        lineModMenu_penSettings_formatLineBot_3->setFrameShape(QFrame::HLine);
        lineModMenu_penSettings_formatLineBot_3->setFrameShadow(QFrame::Sunken);
        lineModMenu_penSettingLabel_3 = new QLabel(polylineModMenu);
        lineModMenu_penSettingLabel_3->setObjectName(QStringLiteral("lineModMenu_penSettingLabel_3"));
        lineModMenu_penSettingLabel_3->setGeometry(QRect(10, 170, 101, 17));
        polyLineModMenu_dimensions_pointList = new QListWidget(polylineModMenu);
        polyLineModMenu_dimensions_pointList->setObjectName(QStringLiteral("polyLineModMenu_dimensions_pointList"));
        polyLineModMenu_dimensions_pointList->setGeometry(QRect(150, 80, 111, 81));
        polyLineModMenu_dimensions_pointList->setSortingEnabled(true);
        polyLineModMenu_deleteButton = new QPushButton(polylineModMenu);
        polyLineModMenu_deleteButton->setObjectName(QStringLiteral("polyLineModMenu_deleteButton"));
        polyLineModMenu_deleteButton->setGeometry(QRect(220, 0, 51, 27));
        rectangleModMenu = new QWidget(modTab);
        rectangleModMenu->setObjectName(QStringLiteral("rectangleModMenu"));
        rectangleModMenu->setGeometry(QRect(10, 40, 281, 451));
        rectangleModMenu_updateButton = new QPushButton(rectangleModMenu);
        rectangleModMenu_updateButton->setObjectName(QStringLiteral("rectangleModMenu_updateButton"));
        rectangleModMenu_updateButton->setGeometry(QRect(110, 10, 99, 27));
        rectangleModMenu_penSettings_formatLineTop = new QFrame(rectangleModMenu);
        rectangleModMenu_penSettings_formatLineTop->setObjectName(QStringLiteral("rectangleModMenu_penSettings_formatLineTop"));
        rectangleModMenu_penSettings_formatLineTop->setGeometry(QRect(-10, 150, 301, 20));
        rectangleModMenu_penSettings_formatLineTop->setFrameShape(QFrame::HLine);
        rectangleModMenu_penSettings_formatLineTop->setFrameShadow(QFrame::Sunken);
        rectangleModMenu_dimensions_widthLabel = new QLabel(rectangleModMenu);
        rectangleModMenu_dimensions_widthLabel->setObjectName(QStringLiteral("rectangleModMenu_dimensions_widthLabel"));
        rectangleModMenu_dimensions_widthLabel->setGeometry(QRect(50, 90, 81, 17));
        rectangleModMenu_dimensions_formatLine = new QFrame(rectangleModMenu);
        rectangleModMenu_dimensions_formatLine->setObjectName(QStringLiteral("rectangleModMenu_dimensions_formatLine"));
        rectangleModMenu_dimensions_formatLine->setGeometry(QRect(-10, 25, 301, 31));
        rectangleModMenu_dimensions_formatLine->setFrameShape(QFrame::HLine);
        rectangleModMenu_dimensions_formatLine->setFrameShadow(QFrame::Sunken);
        rectangleModMenu_dimensions_uuperLeftYLabel = new QLabel(rectangleModMenu);
        rectangleModMenu_dimensions_uuperLeftYLabel->setObjectName(QStringLiteral("rectangleModMenu_dimensions_uuperLeftYLabel"));
        rectangleModMenu_dimensions_uuperLeftYLabel->setGeometry(QRect(210, 50, 16, 16));
        rectangleModMenu_dimensions_width = new QLineEdit(rectangleModMenu);
        rectangleModMenu_dimensions_width->setObjectName(QStringLiteral("rectangleModMenu_dimensions_width"));
        rectangleModMenu_dimensions_width->setGeometry(QRect(170, 90, 31, 27));
        rectangleModMenu_penSettings_formatLineBot = new QFrame(rectangleModMenu);
        rectangleModMenu_penSettings_formatLineBot->setObjectName(QStringLiteral("rectangleModMenu_penSettings_formatLineBot"));
        rectangleModMenu_penSettings_formatLineBot->setGeometry(QRect(-10, 174, 301, 20));
        rectangleModMenu_penSettings_formatLineBot->setFrameShape(QFrame::HLine);
        rectangleModMenu_penSettings_formatLineBot->setFrameShadow(QFrame::Sunken);
        rectangleModMenu_dimensions_upperLeftLabel = new QLabel(rectangleModMenu);
        rectangleModMenu_dimensions_upperLeftLabel->setObjectName(QStringLiteral("rectangleModMenu_dimensions_upperLeftLabel"));
        rectangleModMenu_dimensions_upperLeftLabel->setGeometry(QRect(30, 50, 81, 17));
        rectangleModMenu_dimensions_upperLeftX = new QLineEdit(rectangleModMenu);
        rectangleModMenu_dimensions_upperLeftX->setObjectName(QStringLiteral("rectangleModMenu_dimensions_upperLeftX"));
        rectangleModMenu_dimensions_upperLeftX->setGeometry(QRect(170, 50, 31, 27));
        rectangleModMenu_dimensions_upperLeftY = new QLineEdit(rectangleModMenu);
        rectangleModMenu_dimensions_upperLeftY->setObjectName(QStringLiteral("rectangleModMenu_dimensions_upperLeftY"));
        rectangleModMenu_dimensions_upperLeftY->setGeometry(QRect(220, 50, 31, 27));
        rectangleModMenu_penSettingLabel = new QLabel(rectangleModMenu);
        rectangleModMenu_penSettingLabel->setObjectName(QStringLiteral("rectangleModMenu_penSettingLabel"));
        rectangleModMenu_penSettingLabel->setGeometry(QRect(10, 164, 101, 17));
        rectangleModMenu_dimensionLabel = new QLabel(rectangleModMenu);
        rectangleModMenu_dimensionLabel->setObjectName(QStringLiteral("rectangleModMenu_dimensionLabel"));
        rectangleModMenu_dimensionLabel->setGeometry(QRect(20, 20, 91, 17));
        rectangleModMenu_dimensions_upperLefttXLabel = new QLabel(rectangleModMenu);
        rectangleModMenu_dimensions_upperLefttXLabel->setObjectName(QStringLiteral("rectangleModMenu_dimensions_upperLefttXLabel"));
        rectangleModMenu_dimensions_upperLefttXLabel->setGeometry(QRect(160, 50, 16, 16));
        rectangleModMenu_dimensions_height = new QLineEdit(rectangleModMenu);
        rectangleModMenu_dimensions_height->setObjectName(QStringLiteral("rectangleModMenu_dimensions_height"));
        rectangleModMenu_dimensions_height->setGeometry(QRect(170, 130, 31, 27));
        verticalLayoutWidget_11 = new QWidget(rectangleModMenu);
        verticalLayoutWidget_11->setObjectName(QStringLiteral("verticalLayoutWidget_11"));
        verticalLayoutWidget_11->setGeometry(QRect(20, 190, 101, 241));
        verticalLayout_12 = new QVBoxLayout(verticalLayoutWidget_11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        rectangleModMenu_penSettings_lineColorLabel = new QLabel(verticalLayoutWidget_11);
        rectangleModMenu_penSettings_lineColorLabel->setObjectName(QStringLiteral("rectangleModMenu_penSettings_lineColorLabel"));

        verticalLayout_12->addWidget(rectangleModMenu_penSettings_lineColorLabel);

        rectangleModMenu_penSettings_lineWidthLabel = new QLabel(verticalLayoutWidget_11);
        rectangleModMenu_penSettings_lineWidthLabel->setObjectName(QStringLiteral("rectangleModMenu_penSettings_lineWidthLabel"));

        verticalLayout_12->addWidget(rectangleModMenu_penSettings_lineWidthLabel);

        rectangleModMenu_penSettings_penStyleLabel = new QLabel(verticalLayoutWidget_11);
        rectangleModMenu_penSettings_penStyleLabel->setObjectName(QStringLiteral("rectangleModMenu_penSettings_penStyleLabel"));

        verticalLayout_12->addWidget(rectangleModMenu_penSettings_penStyleLabel);

        rectangleModMenu_penSettings_capStyleLabel = new QLabel(verticalLayoutWidget_11);
        rectangleModMenu_penSettings_capStyleLabel->setObjectName(QStringLiteral("rectangleModMenu_penSettings_capStyleLabel"));

        verticalLayout_12->addWidget(rectangleModMenu_penSettings_capStyleLabel);

        rectangleModMenu_penSettings_joinStyleLabel = new QLabel(verticalLayoutWidget_11);
        rectangleModMenu_penSettings_joinStyleLabel->setObjectName(QStringLiteral("rectangleModMenu_penSettings_joinStyleLabel"));

        verticalLayout_12->addWidget(rectangleModMenu_penSettings_joinStyleLabel);

        rectangleModMenu_penSettings_brushColorLabel = new QLabel(verticalLayoutWidget_11);
        rectangleModMenu_penSettings_brushColorLabel->setObjectName(QStringLiteral("rectangleModMenu_penSettings_brushColorLabel"));

        verticalLayout_12->addWidget(rectangleModMenu_penSettings_brushColorLabel);

        rectangleModMenu_penSettings_brushStyleLabel = new QLabel(verticalLayoutWidget_11);
        rectangleModMenu_penSettings_brushStyleLabel->setObjectName(QStringLiteral("rectangleModMenu_penSettings_brushStyleLabel"));

        verticalLayout_12->addWidget(rectangleModMenu_penSettings_brushStyleLabel);

        verticalLayoutWidget_12 = new QWidget(rectangleModMenu);
        verticalLayoutWidget_12->setObjectName(QStringLiteral("verticalLayoutWidget_12"));
        verticalLayoutWidget_12->setGeometry(QRect(110, 190, 160, 241));
        verticalLayout_13 = new QVBoxLayout(verticalLayoutWidget_12);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        rectangleModMenu_penSettings_lineColorCombo = new QComboBox(verticalLayoutWidget_12);
        rectangleModMenu_penSettings_lineColorCombo->setObjectName(QStringLiteral("rectangleModMenu_penSettings_lineColorCombo"));

        verticalLayout_13->addWidget(rectangleModMenu_penSettings_lineColorCombo);

        rectangleModMenu_penSettings_lineWidthSpinBox = new QSpinBox(verticalLayoutWidget_12);
        rectangleModMenu_penSettings_lineWidthSpinBox->setObjectName(QStringLiteral("rectangleModMenu_penSettings_lineWidthSpinBox"));

        verticalLayout_13->addWidget(rectangleModMenu_penSettings_lineWidthSpinBox);

        rectangleModMenu_penSettings_penStyleCombo = new QComboBox(verticalLayoutWidget_12);
        rectangleModMenu_penSettings_penStyleCombo->setObjectName(QStringLiteral("rectangleModMenu_penSettings_penStyleCombo"));

        verticalLayout_13->addWidget(rectangleModMenu_penSettings_penStyleCombo);

        rectangleModMenu_penSettings_capStyleCombo = new QComboBox(verticalLayoutWidget_12);
        rectangleModMenu_penSettings_capStyleCombo->setObjectName(QStringLiteral("rectangleModMenu_penSettings_capStyleCombo"));

        verticalLayout_13->addWidget(rectangleModMenu_penSettings_capStyleCombo);

        rectangleModMenu_penSettings_joinStyleCombo = new QComboBox(verticalLayoutWidget_12);
        rectangleModMenu_penSettings_joinStyleCombo->setObjectName(QStringLiteral("rectangleModMenu_penSettings_joinStyleCombo"));

        verticalLayout_13->addWidget(rectangleModMenu_penSettings_joinStyleCombo);

        rectangleModMenu_penSettings_brushColorCombo = new QComboBox(verticalLayoutWidget_12);
        rectangleModMenu_penSettings_brushColorCombo->setObjectName(QStringLiteral("rectangleModMenu_penSettings_brushColorCombo"));

        verticalLayout_13->addWidget(rectangleModMenu_penSettings_brushColorCombo);

        rectangleModMenu_penSettings_brushStyleCombo = new QComboBox(verticalLayoutWidget_12);
        rectangleModMenu_penSettings_brushStyleCombo->setObjectName(QStringLiteral("rectangleModMenu_penSettings_brushStyleCombo"));

        verticalLayout_13->addWidget(rectangleModMenu_penSettings_brushStyleCombo);

        rectangleModMenu_dimensions_heighttLabel = new QLabel(rectangleModMenu);
        rectangleModMenu_dimensions_heighttLabel->setObjectName(QStringLiteral("rectangleModMenu_dimensions_heighttLabel"));
        rectangleModMenu_dimensions_heighttLabel->setGeometry(QRect(50, 130, 81, 17));
        rectangleModMenu_deleteButton = new QPushButton(rectangleModMenu);
        rectangleModMenu_deleteButton->setObjectName(QStringLiteral("rectangleModMenu_deleteButton"));
        rectangleModMenu_deleteButton->setGeometry(QRect(220, 10, 51, 27));
        squareModMenu = new QWidget(modTab);
        squareModMenu->setObjectName(QStringLiteral("squareModMenu"));
        squareModMenu->setGeometry(QRect(10, 40, 281, 451));
        squareModMenu_updateButton = new QPushButton(squareModMenu);
        squareModMenu_updateButton->setObjectName(QStringLiteral("squareModMenu_updateButton"));
        squareModMenu_updateButton->setGeometry(QRect(110, 10, 99, 27));
        squareModMenu_penSettings_formatLineTop = new QFrame(squareModMenu);
        squareModMenu_penSettings_formatLineTop->setObjectName(QStringLiteral("squareModMenu_penSettings_formatLineTop"));
        squareModMenu_penSettings_formatLineTop->setGeometry(QRect(-10, 120, 301, 20));
        squareModMenu_penSettings_formatLineTop->setFrameShape(QFrame::HLine);
        squareModMenu_penSettings_formatLineTop->setFrameShadow(QFrame::Sunken);
        squareModMenu_dimensions_widthLabel = new QLabel(squareModMenu);
        squareModMenu_dimensions_widthLabel->setObjectName(QStringLiteral("squareModMenu_dimensions_widthLabel"));
        squareModMenu_dimensions_widthLabel->setGeometry(QRect(30, 90, 101, 20));
        squareModMenu_dimensions_formatLine = new QFrame(squareModMenu);
        squareModMenu_dimensions_formatLine->setObjectName(QStringLiteral("squareModMenu_dimensions_formatLine"));
        squareModMenu_dimensions_formatLine->setGeometry(QRect(-10, 25, 301, 31));
        squareModMenu_dimensions_formatLine->setFrameShape(QFrame::HLine);
        squareModMenu_dimensions_formatLine->setFrameShadow(QFrame::Sunken);
        squareModMenu_dimensions_uuperLeftYLabel = new QLabel(squareModMenu);
        squareModMenu_dimensions_uuperLeftYLabel->setObjectName(QStringLiteral("squareModMenu_dimensions_uuperLeftYLabel"));
        squareModMenu_dimensions_uuperLeftYLabel->setGeometry(QRect(210, 50, 16, 16));
        squareModMenu_dimensions_sideLength = new QLineEdit(squareModMenu);
        squareModMenu_dimensions_sideLength->setObjectName(QStringLiteral("squareModMenu_dimensions_sideLength"));
        squareModMenu_dimensions_sideLength->setGeometry(QRect(170, 90, 31, 27));
        squareModMenu_penSettings_formatLineBot = new QFrame(squareModMenu);
        squareModMenu_penSettings_formatLineBot->setObjectName(QStringLiteral("squareModMenu_penSettings_formatLineBot"));
        squareModMenu_penSettings_formatLineBot->setGeometry(QRect(-10, 144, 301, 20));
        squareModMenu_penSettings_formatLineBot->setFrameShape(QFrame::HLine);
        squareModMenu_penSettings_formatLineBot->setFrameShadow(QFrame::Sunken);
        squareModMenu_dimensions_upperLeftLabel = new QLabel(squareModMenu);
        squareModMenu_dimensions_upperLeftLabel->setObjectName(QStringLiteral("squareModMenu_dimensions_upperLeftLabel"));
        squareModMenu_dimensions_upperLeftLabel->setGeometry(QRect(30, 50, 81, 17));
        squareModMenu_dimensions_upperLeftX = new QLineEdit(squareModMenu);
        squareModMenu_dimensions_upperLeftX->setObjectName(QStringLiteral("squareModMenu_dimensions_upperLeftX"));
        squareModMenu_dimensions_upperLeftX->setGeometry(QRect(170, 50, 31, 27));
        squareModMenu_dimensions_upperLeftY = new QLineEdit(squareModMenu);
        squareModMenu_dimensions_upperLeftY->setObjectName(QStringLiteral("squareModMenu_dimensions_upperLeftY"));
        squareModMenu_dimensions_upperLeftY->setGeometry(QRect(220, 50, 31, 27));
        squareModMenu_penSettingLabel = new QLabel(squareModMenu);
        squareModMenu_penSettingLabel->setObjectName(QStringLiteral("squareModMenu_penSettingLabel"));
        squareModMenu_penSettingLabel->setGeometry(QRect(10, 134, 101, 17));
        squareModMenu_dimensionLabel = new QLabel(squareModMenu);
        squareModMenu_dimensionLabel->setObjectName(QStringLiteral("squareModMenu_dimensionLabel"));
        squareModMenu_dimensionLabel->setGeometry(QRect(20, 20, 91, 17));
        squareModMenu_dimensions_upperLefttXLabel = new QLabel(squareModMenu);
        squareModMenu_dimensions_upperLefttXLabel->setObjectName(QStringLiteral("squareModMenu_dimensions_upperLefttXLabel"));
        squareModMenu_dimensions_upperLefttXLabel->setGeometry(QRect(160, 50, 16, 16));
        verticalLayoutWidget_13 = new QWidget(squareModMenu);
        verticalLayoutWidget_13->setObjectName(QStringLiteral("verticalLayoutWidget_13"));
        verticalLayoutWidget_13->setGeometry(QRect(20, 160, 101, 241));
        verticalLayout_16 = new QVBoxLayout(verticalLayoutWidget_13);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        squareModMenu_penSettings_lineColorLabel = new QLabel(verticalLayoutWidget_13);
        squareModMenu_penSettings_lineColorLabel->setObjectName(QStringLiteral("squareModMenu_penSettings_lineColorLabel"));

        verticalLayout_16->addWidget(squareModMenu_penSettings_lineColorLabel);

        squareModMenu_penSettings_lineWidthLabel = new QLabel(verticalLayoutWidget_13);
        squareModMenu_penSettings_lineWidthLabel->setObjectName(QStringLiteral("squareModMenu_penSettings_lineWidthLabel"));

        verticalLayout_16->addWidget(squareModMenu_penSettings_lineWidthLabel);

        squareModMenu_penSettings_penStyleLabel = new QLabel(verticalLayoutWidget_13);
        squareModMenu_penSettings_penStyleLabel->setObjectName(QStringLiteral("squareModMenu_penSettings_penStyleLabel"));

        verticalLayout_16->addWidget(squareModMenu_penSettings_penStyleLabel);

        squareModMenu_penSettings_capStyleLabel = new QLabel(verticalLayoutWidget_13);
        squareModMenu_penSettings_capStyleLabel->setObjectName(QStringLiteral("squareModMenu_penSettings_capStyleLabel"));

        verticalLayout_16->addWidget(squareModMenu_penSettings_capStyleLabel);

        squaresquareModMenu_penSettings_joinStyleLabel = new QLabel(verticalLayoutWidget_13);
        squaresquareModMenu_penSettings_joinStyleLabel->setObjectName(QStringLiteral("squaresquareModMenu_penSettings_joinStyleLabel"));

        verticalLayout_16->addWidget(squaresquareModMenu_penSettings_joinStyleLabel);

        squareModMenu_penSettings_brushColorLabel = new QLabel(verticalLayoutWidget_13);
        squareModMenu_penSettings_brushColorLabel->setObjectName(QStringLiteral("squareModMenu_penSettings_brushColorLabel"));

        verticalLayout_16->addWidget(squareModMenu_penSettings_brushColorLabel);

        squareModMenu_penSettings_brushStyleLabel = new QLabel(verticalLayoutWidget_13);
        squareModMenu_penSettings_brushStyleLabel->setObjectName(QStringLiteral("squareModMenu_penSettings_brushStyleLabel"));

        verticalLayout_16->addWidget(squareModMenu_penSettings_brushStyleLabel);

        verticalLayoutWidget_14 = new QWidget(squareModMenu);
        verticalLayoutWidget_14->setObjectName(QStringLiteral("verticalLayoutWidget_14"));
        verticalLayoutWidget_14->setGeometry(QRect(110, 160, 160, 241));
        verticalLayout_17 = new QVBoxLayout(verticalLayoutWidget_14);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        squareModMenu_penSettings_lineColorCombo = new QComboBox(verticalLayoutWidget_14);
        squareModMenu_penSettings_lineColorCombo->setObjectName(QStringLiteral("squareModMenu_penSettings_lineColorCombo"));

        verticalLayout_17->addWidget(squareModMenu_penSettings_lineColorCombo);

        squareModMenu_penSettings_lineWidthSpinBox = new QSpinBox(verticalLayoutWidget_14);
        squareModMenu_penSettings_lineWidthSpinBox->setObjectName(QStringLiteral("squareModMenu_penSettings_lineWidthSpinBox"));

        verticalLayout_17->addWidget(squareModMenu_penSettings_lineWidthSpinBox);

        squareModMenu_penSettings_penStyleCombo = new QComboBox(verticalLayoutWidget_14);
        squareModMenu_penSettings_penStyleCombo->setObjectName(QStringLiteral("squareModMenu_penSettings_penStyleCombo"));

        verticalLayout_17->addWidget(squareModMenu_penSettings_penStyleCombo);

        squareModMenu_penSettings_capStyleCombo = new QComboBox(verticalLayoutWidget_14);
        squareModMenu_penSettings_capStyleCombo->setObjectName(QStringLiteral("squareModMenu_penSettings_capStyleCombo"));

        verticalLayout_17->addWidget(squareModMenu_penSettings_capStyleCombo);

        squareModMenu_penSettings_joinStyleCombo = new QComboBox(verticalLayoutWidget_14);
        squareModMenu_penSettings_joinStyleCombo->setObjectName(QStringLiteral("squareModMenu_penSettings_joinStyleCombo"));

        verticalLayout_17->addWidget(squareModMenu_penSettings_joinStyleCombo);

        squareModMenu_penSettings_brushColorCombo = new QComboBox(verticalLayoutWidget_14);
        squareModMenu_penSettings_brushColorCombo->setObjectName(QStringLiteral("squareModMenu_penSettings_brushColorCombo"));

        verticalLayout_17->addWidget(squareModMenu_penSettings_brushColorCombo);

        squareModMenu_penSettings_brushStyleCombo = new QComboBox(verticalLayoutWidget_14);
        squareModMenu_penSettings_brushStyleCombo->setObjectName(QStringLiteral("squareModMenu_penSettings_brushStyleCombo"));

        verticalLayout_17->addWidget(squareModMenu_penSettings_brushStyleCombo);

        squareModMenu_deleteButton = new QPushButton(squareModMenu);
        squareModMenu_deleteButton->setObjectName(QStringLiteral("squareModMenu_deleteButton"));
        squareModMenu_deleteButton->setGeometry(QRect(220, 10, 51, 27));
        textModMenu = new QWidget(modTab);
        textModMenu->setObjectName(QStringLiteral("textModMenu"));
        textModMenu->setGeometry(QRect(10, 40, 281, 451));
        textModMenu_dimensions_upperLefttXLabel = new QLabel(textModMenu);
        textModMenu_dimensions_upperLefttXLabel->setObjectName(QStringLiteral("textModMenu_dimensions_upperLefttXLabel"));
        textModMenu_dimensions_upperLefttXLabel->setGeometry(QRect(160, 55, 16, 16));
        textModMenu_penSettingLabel = new QLabel(textModMenu);
        textModMenu_penSettingLabel->setObjectName(QStringLiteral("textModMenu_penSettingLabel"));
        textModMenu_penSettingLabel->setGeometry(QRect(10, 90, 101, 17));
        textModMenu_dimensions_uuperLeftYLabel = new QLabel(textModMenu);
        textModMenu_dimensions_uuperLeftYLabel->setObjectName(QStringLiteral("textModMenu_dimensions_uuperLeftYLabel"));
        textModMenu_dimensions_uuperLeftYLabel->setGeometry(QRect(210, 55, 16, 16));
        textModMenu_dimensionLabel = new QLabel(textModMenu);
        textModMenu_dimensionLabel->setObjectName(QStringLiteral("textModMenu_dimensionLabel"));
        textModMenu_dimensionLabel->setGeometry(QRect(20, 25, 91, 17));
        textModMenu_textSettings_formatLineBot = new QFrame(textModMenu);
        textModMenu_textSettings_formatLineBot->setObjectName(QStringLiteral("textModMenu_textSettings_formatLineBot"));
        textModMenu_textSettings_formatLineBot->setGeometry(QRect(-10, 100, 301, 20));
        textModMenu_textSettings_formatLineBot->setFrameShape(QFrame::HLine);
        textModMenu_textSettings_formatLineBot->setFrameShadow(QFrame::Sunken);
        textModMenu_textSettings_formatLineTop = new QFrame(textModMenu);
        textModMenu_textSettings_formatLineTop->setObjectName(QStringLiteral("textModMenu_textSettings_formatLineTop"));
        textModMenu_textSettings_formatLineTop->setGeometry(QRect(-10, 76, 301, 20));
        textModMenu_textSettings_formatLineTop->setFrameShape(QFrame::HLine);
        textModMenu_textSettings_formatLineTop->setFrameShadow(QFrame::Sunken);
        textModMenu_dimensions_formatLine = new QFrame(textModMenu);
        textModMenu_dimensions_formatLine->setObjectName(QStringLiteral("textModMenu_dimensions_formatLine"));
        textModMenu_dimensions_formatLine->setGeometry(QRect(-10, 30, 301, 31));
        textModMenu_dimensions_formatLine->setFrameShape(QFrame::HLine);
        textModMenu_dimensions_formatLine->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_19 = new QWidget(textModMenu);
        verticalLayoutWidget_19->setObjectName(QStringLiteral("verticalLayoutWidget_19"));
        verticalLayoutWidget_19->setGeometry(QRect(100, 200, 160, 241));
        verticalLayout_24 = new QVBoxLayout(verticalLayoutWidget_19);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);
        textModMenu_textSettings_textColorCombo = new QComboBox(verticalLayoutWidget_19);
        textModMenu_textSettings_textColorCombo->setObjectName(QStringLiteral("textModMenu_textSettings_textColorCombo"));

        verticalLayout_24->addWidget(textModMenu_textSettings_textColorCombo);

        textModMenu_textSettings_textPointSizeBox = new QSpinBox(verticalLayoutWidget_19);
        textModMenu_textSettings_textPointSizeBox->setObjectName(QStringLiteral("textModMenu_textSettings_textPointSizeBox"));

        verticalLayout_24->addWidget(textModMenu_textSettings_textPointSizeBox);

        textModMenu_textSettings_fontCombo = new QComboBox(verticalLayoutWidget_19);
        textModMenu_textSettings_fontCombo->setObjectName(QStringLiteral("textModMenu_textSettings_fontCombo"));
        textModMenu_textSettings_fontCombo->setEnabled(true);

        verticalLayout_24->addWidget(textModMenu_textSettings_fontCombo);

        textModMenu_textSettings_fontStyleCombo = new QComboBox(verticalLayoutWidget_19);
        textModMenu_textSettings_fontStyleCombo->setObjectName(QStringLiteral("textModMenu_textSettings_fontStyleCombo"));

        verticalLayout_24->addWidget(textModMenu_textSettings_fontStyleCombo);

        textModMenu_textSettings_fontWeightCombo = new QComboBox(verticalLayoutWidget_19);
        textModMenu_textSettings_fontWeightCombo->setObjectName(QStringLiteral("textModMenu_textSettings_fontWeightCombo"));

        verticalLayout_24->addWidget(textModMenu_textSettings_fontWeightCombo);

        textModMenu_dimensions_upperLeftLabel = new QLabel(textModMenu);
        textModMenu_dimensions_upperLeftLabel->setObjectName(QStringLiteral("textModMenu_dimensions_upperLeftLabel"));
        textModMenu_dimensions_upperLeftLabel->setGeometry(QRect(30, 55, 81, 17));
        textModMenu_updateButton = new QPushButton(textModMenu);
        textModMenu_updateButton->setObjectName(QStringLiteral("textModMenu_updateButton"));
        textModMenu_updateButton->setGeometry(QRect(110, 10, 99, 27));
        textModMenu_dimensions_upperLeftY = new QLineEdit(textModMenu);
        textModMenu_dimensions_upperLeftY->setObjectName(QStringLiteral("textModMenu_dimensions_upperLeftY"));
        textModMenu_dimensions_upperLeftY->setGeometry(QRect(220, 55, 31, 27));
        textModMenu_dimensions_upperLeftX = new QLineEdit(textModMenu);
        textModMenu_dimensions_upperLeftX->setObjectName(QStringLiteral("textModMenu_dimensions_upperLeftX"));
        textModMenu_dimensions_upperLeftX->setGeometry(QRect(170, 55, 31, 27));
        verticalLayoutWidget_20 = new QWidget(textModMenu);
        verticalLayoutWidget_20->setObjectName(QStringLiteral("verticalLayoutWidget_20"));
        verticalLayoutWidget_20->setGeometry(QRect(10, 200, 101, 241));
        verticalLayout_25 = new QVBoxLayout(verticalLayoutWidget_20);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        textModMenu_textSettings_textColorLabel = new QLabel(verticalLayoutWidget_20);
        textModMenu_textSettings_textColorLabel->setObjectName(QStringLiteral("textModMenu_textSettings_textColorLabel"));

        verticalLayout_25->addWidget(textModMenu_textSettings_textColorLabel);

        textModMenu_textSettings_pointSizeLabel = new QLabel(verticalLayoutWidget_20);
        textModMenu_textSettings_pointSizeLabel->setObjectName(QStringLiteral("textModMenu_textSettings_pointSizeLabel"));

        verticalLayout_25->addWidget(textModMenu_textSettings_pointSizeLabel);

        textModMenu_textSettings_fontLabel = new QLabel(verticalLayoutWidget_20);
        textModMenu_textSettings_fontLabel->setObjectName(QStringLiteral("textModMenu_textSettings_fontLabel"));

        verticalLayout_25->addWidget(textModMenu_textSettings_fontLabel);

        textModMenu_textSettings_fontStyleLabel = new QLabel(verticalLayoutWidget_20);
        textModMenu_textSettings_fontStyleLabel->setObjectName(QStringLiteral("textModMenu_textSettings_fontStyleLabel"));

        verticalLayout_25->addWidget(textModMenu_textSettings_fontStyleLabel);

        textModMenu_textSettings_fontWeightLabel = new QLabel(verticalLayoutWidget_20);
        textModMenu_textSettings_fontWeightLabel->setObjectName(QStringLiteral("textModMenu_textSettings_fontWeightLabel"));

        verticalLayout_25->addWidget(textModMenu_textSettings_fontWeightLabel);

        textModMenu_textSettings_textEditLabel = new QLabel(textModMenu);
        textModMenu_textSettings_textEditLabel->setObjectName(QStringLiteral("textModMenu_textSettings_textEditLabel"));
        textModMenu_textSettings_textEditLabel->setGeometry(QRect(10, 116, 91, 16));
        textModMenu_textSettings_textEdit = new QPlainTextEdit(textModMenu);
        textModMenu_textSettings_textEdit->setObjectName(QStringLiteral("textModMenu_textSettings_textEdit"));
        textModMenu_textSettings_textEdit->setGeometry(QRect(10, 140, 261, 51));
        textModMenu_deleteButton = new QPushButton(textModMenu);
        textModMenu_deleteButton->setObjectName(QStringLiteral("textModMenu_deleteButton"));
        textModMenu_deleteButton->setGeometry(QRect(220, 10, 51, 27));
        ModMenu_deleteScreen = new QWidget(modTab);
        ModMenu_deleteScreen->setObjectName(QStringLiteral("ModMenu_deleteScreen"));
        ModMenu_deleteScreen->setGeometry(QRect(10, 40, 281, 451));
        ModMenu_deleteScreenLabel = new QLabel(ModMenu_deleteScreen);
        ModMenu_deleteScreenLabel->setObjectName(QStringLiteral("ModMenu_deleteScreenLabel"));
        ModMenu_deleteScreenLabel->setGeometry(QRect(50, 90, 191, 31));
        ModMenu_emptyScreen = new QWidget(modTab);
        ModMenu_emptyScreen->setObjectName(QStringLiteral("ModMenu_emptyScreen"));
        ModMenu_emptyScreen->setGeometry(QRect(10, 40, 281, 451));
        ModMenu_emptyScreenLabel = new QLabel(ModMenu_emptyScreen);
        ModMenu_emptyScreenLabel->setObjectName(QStringLiteral("ModMenu_emptyScreenLabel"));
        ModMenu_emptyScreenLabel->setGeometry(QRect(50, 90, 191, 31));
        modMenu_adminBlind = new QWidget(modTab);
        modMenu_adminBlind->setObjectName(QStringLiteral("modMenu_adminBlind"));
        modMenu_adminBlind->setGeometry(QRect(10, 10, 281, 481));
        modMenu_adminBlind->setAutoFillBackground(true);
        ModMenu_adminBlineLabel = new QLabel(modMenu_adminBlind);
        ModMenu_adminBlineLabel->setObjectName(QStringLiteral("ModMenu_adminBlineLabel"));
        ModMenu_adminBlineLabel->setGeometry(QRect(0, 140, 261, 111));
        ModMenu_adminBlineLabel->setAlignment(Qt::AlignCenter);
        ModMenu_adminBlineLabel->setWordWrap(true);
        tabMenu->addTab(modTab, QString());
        shapeIdModLabel->raise();
        shapeIdModSpinBox->raise();
        shapeTypeModLabel->raise();
        shapeModType->raise();
        lineModMenu->raise();
        ModMenu_deleteScreen->raise();
        circleModMenu->raise();
        polygonModMenu->raise();
        polylineModMenu->raise();
        rectangleModMenu->raise();
        squareModMenu->raise();
        textModMenu->raise();
        ModMenu_emptyScreen->raise();
        ellipseModMenu->raise();
        modMenu_adminBlind->raise();
        addShapeTab = new QWidget();
        addShapeTab->setObjectName(QStringLiteral("addShapeTab"));
        shapeTypeAddCombo = new QComboBox(addShapeTab);
        shapeTypeAddCombo->setObjectName(QStringLiteral("shapeTypeAddCombo"));
        shapeTypeAddCombo->setGeometry(QRect(160, 10, 121, 27));
        shapeTypeAddLabel = new QLabel(addShapeTab);
        shapeTypeAddLabel->setObjectName(QStringLiteral("shapeTypeAddLabel"));
        shapeTypeAddLabel->setGeometry(QRect(50, 10, 91, 17));
        lineAddMenu = new QWidget(addShapeTab);
        lineAddMenu->setObjectName(QStringLiteral("lineAddMenu"));
        lineAddMenu->setEnabled(true);
        lineAddMenu->setGeometry(QRect(10, 50, 281, 451));
        lineAddMenu_dimensionLabel = new QLabel(lineAddMenu);
        lineAddMenu_dimensionLabel->setObjectName(QStringLiteral("lineAddMenu_dimensionLabel"));
        lineAddMenu_dimensionLabel->setGeometry(QRect(10, 10, 91, 17));
        lineAddMenu_penSettingLabel = new QLabel(lineAddMenu);
        lineAddMenu_penSettingLabel->setObjectName(QStringLiteral("lineAddMenu_penSettingLabel"));
        lineAddMenu_penSettingLabel->setGeometry(QRect(10, 120, 101, 17));
        lineAddMenu_dimensions_formatLine = new QFrame(lineAddMenu);
        lineAddMenu_dimensions_formatLine->setObjectName(QStringLiteral("lineAddMenu_dimensions_formatLine"));
        lineAddMenu_dimensions_formatLine->setGeometry(QRect(-20, 15, 301, 31));
        lineAddMenu_dimensions_formatLine->setFrameShape(QFrame::HLine);
        lineAddMenu_dimensions_formatLine->setFrameShadow(QFrame::Sunken);
        lineAddMenu_dimensions_startPointLabel = new QLabel(lineAddMenu);
        lineAddMenu_dimensions_startPointLabel->setObjectName(QStringLiteral("lineAddMenu_dimensions_startPointLabel"));
        lineAddMenu_dimensions_startPointLabel->setGeometry(QRect(20, 40, 81, 17));
        lineAddMenu_dimensions_endPointLabel = new QLabel(lineAddMenu);
        lineAddMenu_dimensions_endPointLabel->setObjectName(QStringLiteral("lineAddMenu_dimensions_endPointLabel"));
        lineAddMenu_dimensions_endPointLabel->setGeometry(QRect(20, 80, 81, 17));
        lineAddMenu_dimensions_startPointX = new QLineEdit(lineAddMenu);
        lineAddMenu_dimensions_startPointX->setObjectName(QStringLiteral("lineAddMenu_dimensions_startPointX"));
        lineAddMenu_dimensions_startPointX->setGeometry(QRect(160, 40, 31, 27));
        lineAddMenu_dimensions_startPointXLabel = new QLabel(lineAddMenu);
        lineAddMenu_dimensions_startPointXLabel->setObjectName(QStringLiteral("lineAddMenu_dimensions_startPointXLabel"));
        lineAddMenu_dimensions_startPointXLabel->setGeometry(QRect(150, 40, 16, 16));
        lineAddMenu_dimensions_endPointYLabel = new QLabel(lineAddMenu);
        lineAddMenu_dimensions_endPointYLabel->setObjectName(QStringLiteral("lineAddMenu_dimensions_endPointYLabel"));
        lineAddMenu_dimensions_endPointYLabel->setGeometry(QRect(200, 40, 16, 16));
        lineAddMenu_dimensions_startPointY = new QLineEdit(lineAddMenu);
        lineAddMenu_dimensions_startPointY->setObjectName(QStringLiteral("lineAddMenu_dimensions_startPointY"));
        lineAddMenu_dimensions_startPointY->setGeometry(QRect(210, 40, 31, 27));
        lineAddMenu_penSettings_formatLineTop = new QFrame(lineAddMenu);
        lineAddMenu_penSettings_formatLineTop->setObjectName(QStringLiteral("lineAddMenu_penSettings_formatLineTop"));
        lineAddMenu_penSettings_formatLineTop->setGeometry(QRect(-10, 106, 301, 20));
        lineAddMenu_penSettings_formatLineTop->setFrameShape(QFrame::HLine);
        lineAddMenu_penSettings_formatLineTop->setFrameShadow(QFrame::Sunken);
        lineAddMenu_penSettings_formatLineBot = new QFrame(lineAddMenu);
        lineAddMenu_penSettings_formatLineBot->setObjectName(QStringLiteral("lineAddMenu_penSettings_formatLineBot"));
        lineAddMenu_penSettings_formatLineBot->setGeometry(QRect(-10, 130, 301, 20));
        lineAddMenu_penSettings_formatLineBot->setFrameShape(QFrame::HLine);
        lineAddMenu_penSettings_formatLineBot->setFrameShadow(QFrame::Sunken);
        lineAddMenu_dimensions_endPointYLabel_2 = new QLabel(lineAddMenu);
        lineAddMenu_dimensions_endPointYLabel_2->setObjectName(QStringLiteral("lineAddMenu_dimensions_endPointYLabel_2"));
        lineAddMenu_dimensions_endPointYLabel_2->setGeometry(QRect(200, 80, 16, 16));
        lineAddMenu_dimensions_endPointXLabel = new QLabel(lineAddMenu);
        lineAddMenu_dimensions_endPointXLabel->setObjectName(QStringLiteral("lineAddMenu_dimensions_endPointXLabel"));
        lineAddMenu_dimensions_endPointXLabel->setGeometry(QRect(150, 80, 16, 16));
        lineAddMenu_dimensions_endPointY = new QLineEdit(lineAddMenu);
        lineAddMenu_dimensions_endPointY->setObjectName(QStringLiteral("lineAddMenu_dimensions_endPointY"));
        lineAddMenu_dimensions_endPointY->setGeometry(QRect(210, 80, 31, 27));
        lineAddMenu_dimensions_endPointX = new QLineEdit(lineAddMenu);
        lineAddMenu_dimensions_endPointX->setObjectName(QStringLiteral("lineAddMenu_dimensions_endPointX"));
        lineAddMenu_dimensions_endPointX->setGeometry(QRect(160, 80, 31, 27));
        verticalLayoutWidget_3 = new QWidget(lineAddMenu);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 150, 101, 241));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        lineAddMenu_penSettings_lineColorLabel = new QLabel(verticalLayoutWidget_3);
        lineAddMenu_penSettings_lineColorLabel->setObjectName(QStringLiteral("lineAddMenu_penSettings_lineColorLabel"));

        verticalLayout_5->addWidget(lineAddMenu_penSettings_lineColorLabel);

        lineAddMenu_penSettings_lineWidthLabel = new QLabel(verticalLayoutWidget_3);
        lineAddMenu_penSettings_lineWidthLabel->setObjectName(QStringLiteral("lineAddMenu_penSettings_lineWidthLabel"));

        verticalLayout_5->addWidget(lineAddMenu_penSettings_lineWidthLabel);

        lineAddMenu_penSettings_penStyleLabel = new QLabel(verticalLayoutWidget_3);
        lineAddMenu_penSettings_penStyleLabel->setObjectName(QStringLiteral("lineAddMenu_penSettings_penStyleLabel"));

        verticalLayout_5->addWidget(lineAddMenu_penSettings_penStyleLabel);

        lineAddMenu_penSettings_capStyleLabel = new QLabel(verticalLayoutWidget_3);
        lineAddMenu_penSettings_capStyleLabel->setObjectName(QStringLiteral("lineAddMenu_penSettings_capStyleLabel"));

        verticalLayout_5->addWidget(lineAddMenu_penSettings_capStyleLabel);

        lineAddMenu_penSettings_joinStyleLabel = new QLabel(verticalLayoutWidget_3);
        lineAddMenu_penSettings_joinStyleLabel->setObjectName(QStringLiteral("lineAddMenu_penSettings_joinStyleLabel"));

        verticalLayout_5->addWidget(lineAddMenu_penSettings_joinStyleLabel);

        verticalLayoutWidget_4 = new QWidget(lineAddMenu);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(100, 150, 160, 241));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        lineAddMenu_penSettings_lineColorCombo = new QComboBox(verticalLayoutWidget_4);
        lineAddMenu_penSettings_lineColorCombo->setObjectName(QStringLiteral("lineAddMenu_penSettings_lineColorCombo"));

        verticalLayout_10->addWidget(lineAddMenu_penSettings_lineColorCombo);

        lineAddMenu_penSettings_lineWidthSpinBox = new QSpinBox(verticalLayoutWidget_4);
        lineAddMenu_penSettings_lineWidthSpinBox->setObjectName(QStringLiteral("lineAddMenu_penSettings_lineWidthSpinBox"));

        verticalLayout_10->addWidget(lineAddMenu_penSettings_lineWidthSpinBox);

        lineAddMenu_penSettings_penStyleCombo = new QComboBox(verticalLayoutWidget_4);
        lineAddMenu_penSettings_penStyleCombo->setObjectName(QStringLiteral("lineAddMenu_penSettings_penStyleCombo"));

        verticalLayout_10->addWidget(lineAddMenu_penSettings_penStyleCombo);

        lineAddMenu_penSettings_capStyleCombo = new QComboBox(verticalLayoutWidget_4);
        lineAddMenu_penSettings_capStyleCombo->setObjectName(QStringLiteral("lineAddMenu_penSettings_capStyleCombo"));

        verticalLayout_10->addWidget(lineAddMenu_penSettings_capStyleCombo);

        lineAddMenu_penSettings_joinStyleCombo = new QComboBox(verticalLayoutWidget_4);
        lineAddMenu_penSettings_joinStyleCombo->setObjectName(QStringLiteral("lineAddMenu_penSettings_joinStyleCombo"));

        verticalLayout_10->addWidget(lineAddMenu_penSettings_joinStyleCombo);

        lineAddMenu_createButton = new QPushButton(lineAddMenu);
        lineAddMenu_createButton->setObjectName(QStringLiteral("lineAddMenu_createButton"));
        lineAddMenu_createButton->setGeometry(QRect(150, 0, 99, 27));
        polylineAddMenu = new QWidget(addShapeTab);
        polylineAddMenu->setObjectName(QStringLiteral("polylineAddMenu"));
        polylineAddMenu->setEnabled(true);
        polylineAddMenu->setGeometry(QRect(10, 50, 281, 441));
        polyLineAddMenu_dimensions_formatLine = new QFrame(polylineAddMenu);
        polyLineAddMenu_dimensions_formatLine->setObjectName(QStringLiteral("polyLineAddMenu_dimensions_formatLine"));
        polyLineAddMenu_dimensions_formatLine->setGeometry(QRect(-20, 15, 301, 31));
        polyLineAddMenu_dimensions_formatLine->setFrameShape(QFrame::HLine);
        polyLineAddMenu_dimensions_formatLine->setFrameShadow(QFrame::Sunken);
        polyLineAddMenu_dimensionLabel = new QLabel(polylineAddMenu);
        polyLineAddMenu_dimensionLabel->setObjectName(QStringLiteral("polyLineAddMenu_dimensionLabel"));
        polyLineAddMenu_dimensionLabel->setGeometry(QRect(10, 10, 91, 17));
        polyLineAddMenu_createButton = new QPushButton(polylineAddMenu);
        polyLineAddMenu_createButton->setObjectName(QStringLiteral("polyLineAddMenu_createButton"));
        polyLineAddMenu_createButton->setGeometry(QRect(150, 0, 99, 27));
        polyLineAddMenu_penSettings_formatLineTop = new QFrame(polylineAddMenu);
        polyLineAddMenu_penSettings_formatLineTop->setObjectName(QStringLiteral("polyLineAddMenu_penSettings_formatLineTop"));
        polyLineAddMenu_penSettings_formatLineTop->setGeometry(QRect(-10, 160, 301, 20));
        polyLineAddMenu_penSettings_formatLineTop->setFrameShape(QFrame::HLine);
        polyLineAddMenu_penSettings_formatLineTop->setFrameShadow(QFrame::Sunken);
        polyLineAddMenu_dimensions_startPointX = new QLineEdit(polylineAddMenu);
        polyLineAddMenu_dimensions_startPointX->setObjectName(QStringLiteral("polyLineAddMenu_dimensions_startPointX"));
        polyLineAddMenu_dimensions_startPointX->setGeometry(QRect(160, 40, 31, 27));
        polyLineAddMenu_dimensions_endPointYLabel = new QLabel(polylineAddMenu);
        polyLineAddMenu_dimensions_endPointYLabel->setObjectName(QStringLiteral("polyLineAddMenu_dimensions_endPointYLabel"));
        polyLineAddMenu_dimensions_endPointYLabel->setGeometry(QRect(200, 40, 16, 16));
        polyLineAddMenu_dimensions_startPointXLabel = new QLabel(polylineAddMenu);
        polyLineAddMenu_dimensions_startPointXLabel->setObjectName(QStringLiteral("polyLineAddMenu_dimensions_startPointXLabel"));
        polyLineAddMenu_dimensions_startPointXLabel->setGeometry(QRect(150, 40, 16, 16));
        polyLineAddMenu_dimensions_startPointY = new QLineEdit(polylineAddMenu);
        polyLineAddMenu_dimensions_startPointY->setObjectName(QStringLiteral("polyLineAddMenu_dimensions_startPointY"));
        polyLineAddMenu_dimensions_startPointY->setGeometry(QRect(210, 40, 31, 27));
        verticalLayoutWidget_21 = new QWidget(polylineAddMenu);
        verticalLayoutWidget_21->setObjectName(QStringLiteral("verticalLayoutWidget_21"));
        verticalLayoutWidget_21->setGeometry(QRect(10, 40, 121, 121));
        verticalLayout_11 = new QVBoxLayout(verticalLayoutWidget_21);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        polyLineAddMenu_dimensions_addPointButton = new QPushButton(verticalLayoutWidget_21);
        polyLineAddMenu_dimensions_addPointButton->setObjectName(QStringLiteral("polyLineAddMenu_dimensions_addPointButton"));

        verticalLayout_11->addWidget(polyLineAddMenu_dimensions_addPointButton);

        polyLineAddMenu_dimensions_movePointButton = new QPushButton(verticalLayoutWidget_21);
        polyLineAddMenu_dimensions_movePointButton->setObjectName(QStringLiteral("polyLineAddMenu_dimensions_movePointButton"));

        verticalLayout_11->addWidget(polyLineAddMenu_dimensions_movePointButton);

        polyLineAddMenu_dimensions_deletePointButton = new QPushButton(verticalLayoutWidget_21);
        polyLineAddMenu_dimensions_deletePointButton->setObjectName(QStringLiteral("polyLineAddMenu_dimensions_deletePointButton"));

        verticalLayout_11->addWidget(polyLineAddMenu_dimensions_deletePointButton);

        verticalLayoutWidget_22 = new QWidget(polylineAddMenu);
        verticalLayoutWidget_22->setObjectName(QStringLiteral("verticalLayoutWidget_22"));
        verticalLayoutWidget_22->setGeometry(QRect(110, 200, 160, 241));
        verticalLayout_14 = new QVBoxLayout(verticalLayoutWidget_22);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        polyLineAddMenu_penSettings_lineColorCombo = new QComboBox(verticalLayoutWidget_22);
        polyLineAddMenu_penSettings_lineColorCombo->setObjectName(QStringLiteral("polyLineAddMenu_penSettings_lineColorCombo"));

        verticalLayout_14->addWidget(polyLineAddMenu_penSettings_lineColorCombo);

        polyLineAddMenu_penSettings_lineWidthSpinBox = new QSpinBox(verticalLayoutWidget_22);
        polyLineAddMenu_penSettings_lineWidthSpinBox->setObjectName(QStringLiteral("polyLineAddMenu_penSettings_lineWidthSpinBox"));

        verticalLayout_14->addWidget(polyLineAddMenu_penSettings_lineWidthSpinBox);

        polyLineAddMenu_penSettings_penStyleCombo = new QComboBox(verticalLayoutWidget_22);
        polyLineAddMenu_penSettings_penStyleCombo->setObjectName(QStringLiteral("polyLineAddMenu_penSettings_penStyleCombo"));

        verticalLayout_14->addWidget(polyLineAddMenu_penSettings_penStyleCombo);

        polyLineAddMenu_penSettings_capStyleCombo = new QComboBox(verticalLayoutWidget_22);
        polyLineAddMenu_penSettings_capStyleCombo->setObjectName(QStringLiteral("polyLineAddMenu_penSettings_capStyleCombo"));

        verticalLayout_14->addWidget(polyLineAddMenu_penSettings_capStyleCombo);

        polyLineAddMenu_penSettings_joinStyleCombo = new QComboBox(verticalLayoutWidget_22);
        polyLineAddMenu_penSettings_joinStyleCombo->setObjectName(QStringLiteral("polyLineAddMenu_penSettings_joinStyleCombo"));

        verticalLayout_14->addWidget(polyLineAddMenu_penSettings_joinStyleCombo);

        verticalLayoutWidget_23 = new QWidget(polylineAddMenu);
        verticalLayoutWidget_23->setObjectName(QStringLiteral("verticalLayoutWidget_23"));
        verticalLayoutWidget_23->setGeometry(QRect(20, 200, 101, 241));
        verticalLayout_15 = new QVBoxLayout(verticalLayoutWidget_23);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        polyLineAddMenu_penSettings_lineColorLabel = new QLabel(verticalLayoutWidget_23);
        polyLineAddMenu_penSettings_lineColorLabel->setObjectName(QStringLiteral("polyLineAddMenu_penSettings_lineColorLabel"));

        verticalLayout_15->addWidget(polyLineAddMenu_penSettings_lineColorLabel);

        polyLineAddMenu_penSettings_lineWidthLabel = new QLabel(verticalLayoutWidget_23);
        polyLineAddMenu_penSettings_lineWidthLabel->setObjectName(QStringLiteral("polyLineAddMenu_penSettings_lineWidthLabel"));

        verticalLayout_15->addWidget(polyLineAddMenu_penSettings_lineWidthLabel);

        polyLineAddMenu_penSettings_penStyleLabel = new QLabel(verticalLayoutWidget_23);
        polyLineAddMenu_penSettings_penStyleLabel->setObjectName(QStringLiteral("polyLineAddMenu_penSettings_penStyleLabel"));

        verticalLayout_15->addWidget(polyLineAddMenu_penSettings_penStyleLabel);

        polyLineAddMenu_penSettings_capStyleLabel = new QLabel(verticalLayoutWidget_23);
        polyLineAddMenu_penSettings_capStyleLabel->setObjectName(QStringLiteral("polyLineAddMenu_penSettings_capStyleLabel"));

        verticalLayout_15->addWidget(polyLineAddMenu_penSettings_capStyleLabel);

        polyLineAddMenu_penSettings_joinStyleLabel = new QLabel(verticalLayoutWidget_23);
        polyLineAddMenu_penSettings_joinStyleLabel->setObjectName(QStringLiteral("polyLineAddMenu_penSettings_joinStyleLabel"));

        verticalLayout_15->addWidget(polyLineAddMenu_penSettings_joinStyleLabel);

        lineAddMenu_penSettings_formatLineBot_2 = new QFrame(polylineAddMenu);
        lineAddMenu_penSettings_formatLineBot_2->setObjectName(QStringLiteral("lineAddMenu_penSettings_formatLineBot_2"));
        lineAddMenu_penSettings_formatLineBot_2->setGeometry(QRect(-10, 180, 301, 20));
        lineAddMenu_penSettings_formatLineBot_2->setFrameShape(QFrame::HLine);
        lineAddMenu_penSettings_formatLineBot_2->setFrameShadow(QFrame::Sunken);
        lineAddMenu_penSettingLabel_2 = new QLabel(polylineAddMenu);
        lineAddMenu_penSettingLabel_2->setObjectName(QStringLiteral("lineAddMenu_penSettingLabel_2"));
        lineAddMenu_penSettingLabel_2->setGeometry(QRect(10, 170, 101, 17));
        polyLineAddMenu_dimensions_pointList = new QListWidget(polylineAddMenu);
        polyLineAddMenu_dimensions_pointList->setObjectName(QStringLiteral("polyLineAddMenu_dimensions_pointList"));
        polyLineAddMenu_dimensions_pointList->setGeometry(QRect(150, 80, 111, 81));
        polyLineAddMenu_dimensions_pointList->setSortingEnabled(true);
        polygonAddMenu = new QWidget(addShapeTab);
        polygonAddMenu->setObjectName(QStringLiteral("polygonAddMenu"));
        polygonAddMenu->setGeometry(QRect(10, 50, 281, 451));
        polygonAddMenu_dimensions_endPointYLabel = new QLabel(polygonAddMenu);
        polygonAddMenu_dimensions_endPointYLabel->setObjectName(QStringLiteral("polygonAddMenu_dimensions_endPointYLabel"));
        polygonAddMenu_dimensions_endPointYLabel->setGeometry(QRect(200, 50, 16, 16));
        polygonAddMenu_dimensions_formatLine = new QFrame(polygonAddMenu);
        polygonAddMenu_dimensions_formatLine->setObjectName(QStringLiteral("polygonAddMenu_dimensions_formatLine"));
        polygonAddMenu_dimensions_formatLine->setGeometry(QRect(-20, 25, 301, 31));
        polygonAddMenu_dimensions_formatLine->setFrameShape(QFrame::HLine);
        polygonAddMenu_dimensions_formatLine->setFrameShadow(QFrame::Sunken);
        polygonAddMenu_dimensions_startPointY = new QLineEdit(polygonAddMenu);
        polygonAddMenu_dimensions_startPointY->setObjectName(QStringLiteral("polygonAddMenu_dimensions_startPointY"));
        polygonAddMenu_dimensions_startPointY->setGeometry(QRect(210, 50, 31, 27));
        polygonAddMenu_dimensions_pointList = new QListWidget(polygonAddMenu);
        polygonAddMenu_dimensions_pointList->setObjectName(QStringLiteral("polygonAddMenu_dimensions_pointList"));
        polygonAddMenu_dimensions_pointList->setGeometry(QRect(150, 90, 111, 81));
        polygonAddMenu_dimensions_pointList->setSortingEnabled(true);
        verticalLayoutWidget_24 = new QWidget(polygonAddMenu);
        verticalLayoutWidget_24->setObjectName(QStringLiteral("verticalLayoutWidget_24"));
        verticalLayoutWidget_24->setGeometry(QRect(110, 210, 160, 241));
        verticalLayout_18 = new QVBoxLayout(verticalLayoutWidget_24);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        polygonAddMenu_penSettings_lineColorCombo = new QComboBox(verticalLayoutWidget_24);
        polygonAddMenu_penSettings_lineColorCombo->setObjectName(QStringLiteral("polygonAddMenu_penSettings_lineColorCombo"));

        verticalLayout_18->addWidget(polygonAddMenu_penSettings_lineColorCombo);

        polygonAddMenu_penSettings_lineWidthSpinBox = new QSpinBox(verticalLayoutWidget_24);
        polygonAddMenu_penSettings_lineWidthSpinBox->setObjectName(QStringLiteral("polygonAddMenu_penSettings_lineWidthSpinBox"));

        verticalLayout_18->addWidget(polygonAddMenu_penSettings_lineWidthSpinBox);

        polygonAddMenu_penSettings_penStyleCombo = new QComboBox(verticalLayoutWidget_24);
        polygonAddMenu_penSettings_penStyleCombo->setObjectName(QStringLiteral("polygonAddMenu_penSettings_penStyleCombo"));

        verticalLayout_18->addWidget(polygonAddMenu_penSettings_penStyleCombo);

        polygonAddMenu_penSettings_capStyleCombo = new QComboBox(verticalLayoutWidget_24);
        polygonAddMenu_penSettings_capStyleCombo->setObjectName(QStringLiteral("polygonAddMenu_penSettings_capStyleCombo"));

        verticalLayout_18->addWidget(polygonAddMenu_penSettings_capStyleCombo);

        polygonAddMenu_penSettings_joinStyleCombo = new QComboBox(verticalLayoutWidget_24);
        polygonAddMenu_penSettings_joinStyleCombo->setObjectName(QStringLiteral("polygonAddMenu_penSettings_joinStyleCombo"));

        verticalLayout_18->addWidget(polygonAddMenu_penSettings_joinStyleCombo);

        polygonAddMenu_penSettings_brushColorCombo = new QComboBox(verticalLayoutWidget_24);
        polygonAddMenu_penSettings_brushColorCombo->setObjectName(QStringLiteral("polygonAddMenu_penSettings_brushColorCombo"));

        verticalLayout_18->addWidget(polygonAddMenu_penSettings_brushColorCombo);

        polygonAddMenu_penSettings_brushStyleCombo = new QComboBox(verticalLayoutWidget_24);
        polygonAddMenu_penSettings_brushStyleCombo->setObjectName(QStringLiteral("polygonAddMenu_penSettings_brushStyleCombo"));

        verticalLayout_18->addWidget(polygonAddMenu_penSettings_brushStyleCombo);

        polygonAddMenu_penSettings_formatLineTop = new QFrame(polygonAddMenu);
        polygonAddMenu_penSettings_formatLineTop->setObjectName(QStringLiteral("polygonAddMenu_penSettings_formatLineTop"));
        polygonAddMenu_penSettings_formatLineTop->setGeometry(QRect(-10, 170, 301, 20));
        polygonAddMenu_penSettings_formatLineTop->setFrameShape(QFrame::HLine);
        polygonAddMenu_penSettings_formatLineTop->setFrameShadow(QFrame::Sunken);
        polygonAddMenu_penSettings_formatLineBot = new QFrame(polygonAddMenu);
        polygonAddMenu_penSettings_formatLineBot->setObjectName(QStringLiteral("polygonAddMenu_penSettings_formatLineBot"));
        polygonAddMenu_penSettings_formatLineBot->setGeometry(QRect(-10, 190, 301, 20));
        polygonAddMenu_penSettings_formatLineBot->setFrameShape(QFrame::HLine);
        polygonAddMenu_penSettings_formatLineBot->setFrameShadow(QFrame::Sunken);
        polygonAddMenu_penSettingLabel = new QLabel(polygonAddMenu);
        polygonAddMenu_penSettingLabel->setObjectName(QStringLiteral("polygonAddMenu_penSettingLabel"));
        polygonAddMenu_penSettingLabel->setGeometry(QRect(10, 180, 101, 17));
        polygonAddMenu_dimensionLabel = new QLabel(polygonAddMenu);
        polygonAddMenu_dimensionLabel->setObjectName(QStringLiteral("polygonAddMenu_dimensionLabel"));
        polygonAddMenu_dimensionLabel->setGeometry(QRect(10, 20, 91, 17));
        verticalLayoutWidget_25 = new QWidget(polygonAddMenu);
        verticalLayoutWidget_25->setObjectName(QStringLiteral("verticalLayoutWidget_25"));
        verticalLayoutWidget_25->setGeometry(QRect(10, 50, 121, 121));
        verticalLayout_19 = new QVBoxLayout(verticalLayoutWidget_25);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        polygonAddMenu_dimensions_addPointButton = new QPushButton(verticalLayoutWidget_25);
        polygonAddMenu_dimensions_addPointButton->setObjectName(QStringLiteral("polygonAddMenu_dimensions_addPointButton"));

        verticalLayout_19->addWidget(polygonAddMenu_dimensions_addPointButton);

        polygonAddMenu_dimensions_movePointButton = new QPushButton(verticalLayoutWidget_25);
        polygonAddMenu_dimensions_movePointButton->setObjectName(QStringLiteral("polygonAddMenu_dimensions_movePointButton"));

        verticalLayout_19->addWidget(polygonAddMenu_dimensions_movePointButton);

        polygonAddMenu_dimensions_deletePointButton = new QPushButton(verticalLayoutWidget_25);
        polygonAddMenu_dimensions_deletePointButton->setObjectName(QStringLiteral("polygonAddMenu_dimensions_deletePointButton"));

        verticalLayout_19->addWidget(polygonAddMenu_dimensions_deletePointButton);

        verticalLayoutWidget_26 = new QWidget(polygonAddMenu);
        verticalLayoutWidget_26->setObjectName(QStringLiteral("verticalLayoutWidget_26"));
        verticalLayoutWidget_26->setGeometry(QRect(20, 210, 101, 241));
        verticalLayout_26 = new QVBoxLayout(verticalLayoutWidget_26);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);
        polygonAddMenu_penSettings_lineColorLabel = new QLabel(verticalLayoutWidget_26);
        polygonAddMenu_penSettings_lineColorLabel->setObjectName(QStringLiteral("polygonAddMenu_penSettings_lineColorLabel"));

        verticalLayout_26->addWidget(polygonAddMenu_penSettings_lineColorLabel);

        polygonAddMenu_penSettings_lineWidthLabel = new QLabel(verticalLayoutWidget_26);
        polygonAddMenu_penSettings_lineWidthLabel->setObjectName(QStringLiteral("polygonAddMenu_penSettings_lineWidthLabel"));

        verticalLayout_26->addWidget(polygonAddMenu_penSettings_lineWidthLabel);

        polygonAddMenu_penSettings_penStyleLabel = new QLabel(verticalLayoutWidget_26);
        polygonAddMenu_penSettings_penStyleLabel->setObjectName(QStringLiteral("polygonAddMenu_penSettings_penStyleLabel"));

        verticalLayout_26->addWidget(polygonAddMenu_penSettings_penStyleLabel);

        polygonAddMenu_penSettings_capStyleLabel = new QLabel(verticalLayoutWidget_26);
        polygonAddMenu_penSettings_capStyleLabel->setObjectName(QStringLiteral("polygonAddMenu_penSettings_capStyleLabel"));

        verticalLayout_26->addWidget(polygonAddMenu_penSettings_capStyleLabel);

        polygonAddMenu_penSettings_joinStyleLabel = new QLabel(verticalLayoutWidget_26);
        polygonAddMenu_penSettings_joinStyleLabel->setObjectName(QStringLiteral("polygonAddMenu_penSettings_joinStyleLabel"));

        verticalLayout_26->addWidget(polygonAddMenu_penSettings_joinStyleLabel);

        polygonAddMenu_penSettings_brushColorLabel = new QLabel(verticalLayoutWidget_26);
        polygonAddMenu_penSettings_brushColorLabel->setObjectName(QStringLiteral("polygonAddMenu_penSettings_brushColorLabel"));

        verticalLayout_26->addWidget(polygonAddMenu_penSettings_brushColorLabel);

        polygonAddMenu_penSettings_brushStyleLabel = new QLabel(verticalLayoutWidget_26);
        polygonAddMenu_penSettings_brushStyleLabel->setObjectName(QStringLiteral("polygonAddMenu_penSettings_brushStyleLabel"));

        verticalLayout_26->addWidget(polygonAddMenu_penSettings_brushStyleLabel);

        polygonAddMenu_dimensions_startPointX = new QLineEdit(polygonAddMenu);
        polygonAddMenu_dimensions_startPointX->setObjectName(QStringLiteral("polygonAddMenu_dimensions_startPointX"));
        polygonAddMenu_dimensions_startPointX->setGeometry(QRect(160, 50, 31, 27));
        polygonAddMenu_createButton = new QPushButton(polygonAddMenu);
        polygonAddMenu_createButton->setObjectName(QStringLiteral("polygonAddMenu_createButton"));
        polygonAddMenu_createButton->setGeometry(QRect(150, 10, 99, 27));
        polygonAddMenu_dimensions_startPointXLabel = new QLabel(polygonAddMenu);
        polygonAddMenu_dimensions_startPointXLabel->setObjectName(QStringLiteral("polygonAddMenu_dimensions_startPointXLabel"));
        polygonAddMenu_dimensions_startPointXLabel->setGeometry(QRect(150, 50, 16, 16));
        rectangleAddMenu = new QWidget(addShapeTab);
        rectangleAddMenu->setObjectName(QStringLiteral("rectangleAddMenu"));
        rectangleAddMenu->setGeometry(QRect(10, 50, 281, 451));
        rectangleAddMenu_createButton = new QPushButton(rectangleAddMenu);
        rectangleAddMenu_createButton->setObjectName(QStringLiteral("rectangleAddMenu_createButton"));
        rectangleAddMenu_createButton->setGeometry(QRect(160, 10, 99, 27));
        rectangleAddMenu_penSettings_formatLineTop = new QFrame(rectangleAddMenu);
        rectangleAddMenu_penSettings_formatLineTop->setObjectName(QStringLiteral("rectangleAddMenu_penSettings_formatLineTop"));
        rectangleAddMenu_penSettings_formatLineTop->setGeometry(QRect(-10, 150, 301, 20));
        rectangleAddMenu_penSettings_formatLineTop->setFrameShape(QFrame::HLine);
        rectangleAddMenu_penSettings_formatLineTop->setFrameShadow(QFrame::Sunken);
        rectangleAddMenu_dimensions_widthLabel = new QLabel(rectangleAddMenu);
        rectangleAddMenu_dimensions_widthLabel->setObjectName(QStringLiteral("rectangleAddMenu_dimensions_widthLabel"));
        rectangleAddMenu_dimensions_widthLabel->setGeometry(QRect(50, 90, 81, 17));
        rectangleAddMenu_dimensions_formatLine = new QFrame(rectangleAddMenu);
        rectangleAddMenu_dimensions_formatLine->setObjectName(QStringLiteral("rectangleAddMenu_dimensions_formatLine"));
        rectangleAddMenu_dimensions_formatLine->setGeometry(QRect(-10, 25, 301, 31));
        rectangleAddMenu_dimensions_formatLine->setFrameShape(QFrame::HLine);
        rectangleAddMenu_dimensions_formatLine->setFrameShadow(QFrame::Sunken);
        rectangleAddMenu_dimensions_uuperLeftYLabel = new QLabel(rectangleAddMenu);
        rectangleAddMenu_dimensions_uuperLeftYLabel->setObjectName(QStringLiteral("rectangleAddMenu_dimensions_uuperLeftYLabel"));
        rectangleAddMenu_dimensions_uuperLeftYLabel->setGeometry(QRect(210, 50, 16, 16));
        rectangleAddMenu_dimensions_width = new QLineEdit(rectangleAddMenu);
        rectangleAddMenu_dimensions_width->setObjectName(QStringLiteral("rectangleAddMenu_dimensions_width"));
        rectangleAddMenu_dimensions_width->setGeometry(QRect(170, 90, 31, 27));
        rectangleAddMenu_penSettings_formatLineBot = new QFrame(rectangleAddMenu);
        rectangleAddMenu_penSettings_formatLineBot->setObjectName(QStringLiteral("rectangleAddMenu_penSettings_formatLineBot"));
        rectangleAddMenu_penSettings_formatLineBot->setGeometry(QRect(-10, 174, 301, 20));
        rectangleAddMenu_penSettings_formatLineBot->setFrameShape(QFrame::HLine);
        rectangleAddMenu_penSettings_formatLineBot->setFrameShadow(QFrame::Sunken);
        rectangleAddMenu_dimensions_upperLeftLabel = new QLabel(rectangleAddMenu);
        rectangleAddMenu_dimensions_upperLeftLabel->setObjectName(QStringLiteral("rectangleAddMenu_dimensions_upperLeftLabel"));
        rectangleAddMenu_dimensions_upperLeftLabel->setGeometry(QRect(30, 50, 81, 17));
        rectangleAddMenu_dimensions_upperLeftX = new QLineEdit(rectangleAddMenu);
        rectangleAddMenu_dimensions_upperLeftX->setObjectName(QStringLiteral("rectangleAddMenu_dimensions_upperLeftX"));
        rectangleAddMenu_dimensions_upperLeftX->setGeometry(QRect(170, 50, 31, 27));
        rectangleAddMenu_dimensions_upperLeftY = new QLineEdit(rectangleAddMenu);
        rectangleAddMenu_dimensions_upperLeftY->setObjectName(QStringLiteral("rectangleAddMenu_dimensions_upperLeftY"));
        rectangleAddMenu_dimensions_upperLeftY->setGeometry(QRect(220, 50, 31, 27));
        rectangleAddMenu_penSettingLabel = new QLabel(rectangleAddMenu);
        rectangleAddMenu_penSettingLabel->setObjectName(QStringLiteral("rectangleAddMenu_penSettingLabel"));
        rectangleAddMenu_penSettingLabel->setGeometry(QRect(10, 164, 101, 17));
        rectangleAddMenu_dimensionLabel = new QLabel(rectangleAddMenu);
        rectangleAddMenu_dimensionLabel->setObjectName(QStringLiteral("rectangleAddMenu_dimensionLabel"));
        rectangleAddMenu_dimensionLabel->setGeometry(QRect(20, 20, 91, 17));
        rectangleAddMenu_dimensions_upperLefttXLabel = new QLabel(rectangleAddMenu);
        rectangleAddMenu_dimensions_upperLefttXLabel->setObjectName(QStringLiteral("rectangleAddMenu_dimensions_upperLefttXLabel"));
        rectangleAddMenu_dimensions_upperLefttXLabel->setGeometry(QRect(160, 50, 16, 16));
        rectangleAddMenu_dimensions_height = new QLineEdit(rectangleAddMenu);
        rectangleAddMenu_dimensions_height->setObjectName(QStringLiteral("rectangleAddMenu_dimensions_height"));
        rectangleAddMenu_dimensions_height->setGeometry(QRect(170, 130, 31, 27));
        verticalLayoutWidget_27 = new QWidget(rectangleAddMenu);
        verticalLayoutWidget_27->setObjectName(QStringLiteral("verticalLayoutWidget_27"));
        verticalLayoutWidget_27->setGeometry(QRect(20, 190, 101, 241));
        verticalLayout_27 = new QVBoxLayout(verticalLayoutWidget_27);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        verticalLayout_27->setContentsMargins(0, 0, 0, 0);
        rectangleAddMenu_penSettings_lineColorLabel = new QLabel(verticalLayoutWidget_27);
        rectangleAddMenu_penSettings_lineColorLabel->setObjectName(QStringLiteral("rectangleAddMenu_penSettings_lineColorLabel"));

        verticalLayout_27->addWidget(rectangleAddMenu_penSettings_lineColorLabel);

        rectangleAddMenu_penSettings_lineWidthLabel = new QLabel(verticalLayoutWidget_27);
        rectangleAddMenu_penSettings_lineWidthLabel->setObjectName(QStringLiteral("rectangleAddMenu_penSettings_lineWidthLabel"));

        verticalLayout_27->addWidget(rectangleAddMenu_penSettings_lineWidthLabel);

        rectangleAddMenu_penSettings_penStyleLabel = new QLabel(verticalLayoutWidget_27);
        rectangleAddMenu_penSettings_penStyleLabel->setObjectName(QStringLiteral("rectangleAddMenu_penSettings_penStyleLabel"));

        verticalLayout_27->addWidget(rectangleAddMenu_penSettings_penStyleLabel);

        rectangleAddMenu_penSettings_capStyleLabel = new QLabel(verticalLayoutWidget_27);
        rectangleAddMenu_penSettings_capStyleLabel->setObjectName(QStringLiteral("rectangleAddMenu_penSettings_capStyleLabel"));

        verticalLayout_27->addWidget(rectangleAddMenu_penSettings_capStyleLabel);

        rectangleAddMenu_penSettings_joinStyleLabel = new QLabel(verticalLayoutWidget_27);
        rectangleAddMenu_penSettings_joinStyleLabel->setObjectName(QStringLiteral("rectangleAddMenu_penSettings_joinStyleLabel"));

        verticalLayout_27->addWidget(rectangleAddMenu_penSettings_joinStyleLabel);

        rectangleAddMenu_penSettings_brushColorLabel = new QLabel(verticalLayoutWidget_27);
        rectangleAddMenu_penSettings_brushColorLabel->setObjectName(QStringLiteral("rectangleAddMenu_penSettings_brushColorLabel"));

        verticalLayout_27->addWidget(rectangleAddMenu_penSettings_brushColorLabel);

        rectangleAddMenu_penSettings_brushStyleLabel = new QLabel(verticalLayoutWidget_27);
        rectangleAddMenu_penSettings_brushStyleLabel->setObjectName(QStringLiteral("rectangleAddMenu_penSettings_brushStyleLabel"));

        verticalLayout_27->addWidget(rectangleAddMenu_penSettings_brushStyleLabel);

        verticalLayoutWidget_28 = new QWidget(rectangleAddMenu);
        verticalLayoutWidget_28->setObjectName(QStringLiteral("verticalLayoutWidget_28"));
        verticalLayoutWidget_28->setGeometry(QRect(110, 190, 160, 241));
        verticalLayout_28 = new QVBoxLayout(verticalLayoutWidget_28);
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        rectangleAddMenu_penSettings_lineColorCombo = new QComboBox(verticalLayoutWidget_28);
        rectangleAddMenu_penSettings_lineColorCombo->setObjectName(QStringLiteral("rectangleAddMenu_penSettings_lineColorCombo"));

        verticalLayout_28->addWidget(rectangleAddMenu_penSettings_lineColorCombo);

        rectangleAddMenu_penSettings_lineWidthSpinBox = new QSpinBox(verticalLayoutWidget_28);
        rectangleAddMenu_penSettings_lineWidthSpinBox->setObjectName(QStringLiteral("rectangleAddMenu_penSettings_lineWidthSpinBox"));

        verticalLayout_28->addWidget(rectangleAddMenu_penSettings_lineWidthSpinBox);

        rectangleAddMenu_penSettings_penStyleCombo = new QComboBox(verticalLayoutWidget_28);
        rectangleAddMenu_penSettings_penStyleCombo->setObjectName(QStringLiteral("rectangleAddMenu_penSettings_penStyleCombo"));

        verticalLayout_28->addWidget(rectangleAddMenu_penSettings_penStyleCombo);

        rectangleAddMenu_penSettings_capStyleCombo = new QComboBox(verticalLayoutWidget_28);
        rectangleAddMenu_penSettings_capStyleCombo->setObjectName(QStringLiteral("rectangleAddMenu_penSettings_capStyleCombo"));

        verticalLayout_28->addWidget(rectangleAddMenu_penSettings_capStyleCombo);

        rectangleAddMenu_penSettings_joinStyleCombo = new QComboBox(verticalLayoutWidget_28);
        rectangleAddMenu_penSettings_joinStyleCombo->setObjectName(QStringLiteral("rectangleAddMenu_penSettings_joinStyleCombo"));

        verticalLayout_28->addWidget(rectangleAddMenu_penSettings_joinStyleCombo);

        rectangleAddMenu_penSettings_brushColorCombo = new QComboBox(verticalLayoutWidget_28);
        rectangleAddMenu_penSettings_brushColorCombo->setObjectName(QStringLiteral("rectangleAddMenu_penSettings_brushColorCombo"));

        verticalLayout_28->addWidget(rectangleAddMenu_penSettings_brushColorCombo);

        rectangleAddMenu_penSettings_brushStyleCombo = new QComboBox(verticalLayoutWidget_28);
        rectangleAddMenu_penSettings_brushStyleCombo->setObjectName(QStringLiteral("rectangleAddMenu_penSettings_brushStyleCombo"));

        verticalLayout_28->addWidget(rectangleAddMenu_penSettings_brushStyleCombo);

        rectangleAddMenu_dimensions_heighttLabel = new QLabel(rectangleAddMenu);
        rectangleAddMenu_dimensions_heighttLabel->setObjectName(QStringLiteral("rectangleAddMenu_dimensions_heighttLabel"));
        rectangleAddMenu_dimensions_heighttLabel->setGeometry(QRect(50, 130, 81, 17));
        squareAddMenu = new QWidget(addShapeTab);
        squareAddMenu->setObjectName(QStringLiteral("squareAddMenu"));
        squareAddMenu->setGeometry(QRect(10, 50, 281, 451));
        squareModMenu_updateButton_2 = new QPushButton(squareAddMenu);
        squareModMenu_updateButton_2->setObjectName(QStringLiteral("squareModMenu_updateButton_2"));
        squareModMenu_updateButton_2->setGeometry(QRect(160, 10, 99, 27));
        squareAddMenu_penSettings_formatLineTop = new QFrame(squareAddMenu);
        squareAddMenu_penSettings_formatLineTop->setObjectName(QStringLiteral("squareAddMenu_penSettings_formatLineTop"));
        squareAddMenu_penSettings_formatLineTop->setGeometry(QRect(-10, 120, 301, 20));
        squareAddMenu_penSettings_formatLineTop->setFrameShape(QFrame::HLine);
        squareAddMenu_penSettings_formatLineTop->setFrameShadow(QFrame::Sunken);
        squareAddMenu_dimensions_widthLabel = new QLabel(squareAddMenu);
        squareAddMenu_dimensions_widthLabel->setObjectName(QStringLiteral("squareAddMenu_dimensions_widthLabel"));
        squareAddMenu_dimensions_widthLabel->setGeometry(QRect(30, 90, 101, 20));
        squareAddMenu_dimensions_formatLine = new QFrame(squareAddMenu);
        squareAddMenu_dimensions_formatLine->setObjectName(QStringLiteral("squareAddMenu_dimensions_formatLine"));
        squareAddMenu_dimensions_formatLine->setGeometry(QRect(-10, 25, 301, 31));
        squareAddMenu_dimensions_formatLine->setFrameShape(QFrame::HLine);
        squareAddMenu_dimensions_formatLine->setFrameShadow(QFrame::Sunken);
        squareAddMenu_dimensions_uuperLeftYLabel = new QLabel(squareAddMenu);
        squareAddMenu_dimensions_uuperLeftYLabel->setObjectName(QStringLiteral("squareAddMenu_dimensions_uuperLeftYLabel"));
        squareAddMenu_dimensions_uuperLeftYLabel->setGeometry(QRect(210, 50, 16, 16));
        squareAddMenu_dimensions_sideLength = new QLineEdit(squareAddMenu);
        squareAddMenu_dimensions_sideLength->setObjectName(QStringLiteral("squareAddMenu_dimensions_sideLength"));
        squareAddMenu_dimensions_sideLength->setGeometry(QRect(170, 90, 31, 27));
        squareAddMenu_penSettings_formatLineBot = new QFrame(squareAddMenu);
        squareAddMenu_penSettings_formatLineBot->setObjectName(QStringLiteral("squareAddMenu_penSettings_formatLineBot"));
        squareAddMenu_penSettings_formatLineBot->setGeometry(QRect(-10, 144, 301, 20));
        squareAddMenu_penSettings_formatLineBot->setFrameShape(QFrame::HLine);
        squareAddMenu_penSettings_formatLineBot->setFrameShadow(QFrame::Sunken);
        squareAddMenu_dimensions_upperLeftLabel = new QLabel(squareAddMenu);
        squareAddMenu_dimensions_upperLeftLabel->setObjectName(QStringLiteral("squareAddMenu_dimensions_upperLeftLabel"));
        squareAddMenu_dimensions_upperLeftLabel->setGeometry(QRect(30, 50, 81, 17));
        squareAddMenu_dimensions_upperLeftX = new QLineEdit(squareAddMenu);
        squareAddMenu_dimensions_upperLeftX->setObjectName(QStringLiteral("squareAddMenu_dimensions_upperLeftX"));
        squareAddMenu_dimensions_upperLeftX->setGeometry(QRect(170, 50, 31, 27));
        squareAddMenu_dimensions_upperLeftY = new QLineEdit(squareAddMenu);
        squareAddMenu_dimensions_upperLeftY->setObjectName(QStringLiteral("squareAddMenu_dimensions_upperLeftY"));
        squareAddMenu_dimensions_upperLeftY->setGeometry(QRect(220, 50, 31, 27));
        squareAddMenu_penSettingLabel = new QLabel(squareAddMenu);
        squareAddMenu_penSettingLabel->setObjectName(QStringLiteral("squareAddMenu_penSettingLabel"));
        squareAddMenu_penSettingLabel->setGeometry(QRect(10, 134, 101, 17));
        squareAddMenu_dimensionLabel = new QLabel(squareAddMenu);
        squareAddMenu_dimensionLabel->setObjectName(QStringLiteral("squareAddMenu_dimensionLabel"));
        squareAddMenu_dimensionLabel->setGeometry(QRect(20, 20, 91, 17));
        squareAddMenu_dimensions_upperLefttXLabel = new QLabel(squareAddMenu);
        squareAddMenu_dimensions_upperLefttXLabel->setObjectName(QStringLiteral("squareAddMenu_dimensions_upperLefttXLabel"));
        squareAddMenu_dimensions_upperLefttXLabel->setGeometry(QRect(160, 50, 16, 16));
        verticalLayoutWidget_29 = new QWidget(squareAddMenu);
        verticalLayoutWidget_29->setObjectName(QStringLiteral("verticalLayoutWidget_29"));
        verticalLayoutWidget_29->setGeometry(QRect(20, 160, 101, 241));
        verticalLayout_29 = new QVBoxLayout(verticalLayoutWidget_29);
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        verticalLayout_29->setContentsMargins(0, 0, 0, 0);
        squareAddMenu_penSettings_lineColorLabel = new QLabel(verticalLayoutWidget_29);
        squareAddMenu_penSettings_lineColorLabel->setObjectName(QStringLiteral("squareAddMenu_penSettings_lineColorLabel"));

        verticalLayout_29->addWidget(squareAddMenu_penSettings_lineColorLabel);

        squareAddMenu_penSettings_lineWidthLabel = new QLabel(verticalLayoutWidget_29);
        squareAddMenu_penSettings_lineWidthLabel->setObjectName(QStringLiteral("squareAddMenu_penSettings_lineWidthLabel"));

        verticalLayout_29->addWidget(squareAddMenu_penSettings_lineWidthLabel);

        squareAddMenu_penSettings_penStyleLabel = new QLabel(verticalLayoutWidget_29);
        squareAddMenu_penSettings_penStyleLabel->setObjectName(QStringLiteral("squareAddMenu_penSettings_penStyleLabel"));

        verticalLayout_29->addWidget(squareAddMenu_penSettings_penStyleLabel);

        squareAddMenu_penSettings_capStyleLabel = new QLabel(verticalLayoutWidget_29);
        squareAddMenu_penSettings_capStyleLabel->setObjectName(QStringLiteral("squareAddMenu_penSettings_capStyleLabel"));

        verticalLayout_29->addWidget(squareAddMenu_penSettings_capStyleLabel);

        squaresquareAddMenu_penSettings_joinStyleLabel = new QLabel(verticalLayoutWidget_29);
        squaresquareAddMenu_penSettings_joinStyleLabel->setObjectName(QStringLiteral("squaresquareAddMenu_penSettings_joinStyleLabel"));

        verticalLayout_29->addWidget(squaresquareAddMenu_penSettings_joinStyleLabel);

        squareAddMenu_penSettings_brushColorLabel = new QLabel(verticalLayoutWidget_29);
        squareAddMenu_penSettings_brushColorLabel->setObjectName(QStringLiteral("squareAddMenu_penSettings_brushColorLabel"));

        verticalLayout_29->addWidget(squareAddMenu_penSettings_brushColorLabel);

        squareAddMenu_penSettings_brushStyleLabel = new QLabel(verticalLayoutWidget_29);
        squareAddMenu_penSettings_brushStyleLabel->setObjectName(QStringLiteral("squareAddMenu_penSettings_brushStyleLabel"));

        verticalLayout_29->addWidget(squareAddMenu_penSettings_brushStyleLabel);

        verticalLayoutWidget_30 = new QWidget(squareAddMenu);
        verticalLayoutWidget_30->setObjectName(QStringLiteral("verticalLayoutWidget_30"));
        verticalLayoutWidget_30->setGeometry(QRect(110, 160, 160, 241));
        verticalLayout_30 = new QVBoxLayout(verticalLayoutWidget_30);
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        verticalLayout_30->setContentsMargins(0, 0, 0, 0);
        squareAddMenu_penSettings_lineColorCombo = new QComboBox(verticalLayoutWidget_30);
        squareAddMenu_penSettings_lineColorCombo->setObjectName(QStringLiteral("squareAddMenu_penSettings_lineColorCombo"));

        verticalLayout_30->addWidget(squareAddMenu_penSettings_lineColorCombo);

        squareAddMenu_penSettings_lineWidthSpinBox = new QSpinBox(verticalLayoutWidget_30);
        squareAddMenu_penSettings_lineWidthSpinBox->setObjectName(QStringLiteral("squareAddMenu_penSettings_lineWidthSpinBox"));

        verticalLayout_30->addWidget(squareAddMenu_penSettings_lineWidthSpinBox);

        squareAddMenu_penSettings_penStyleCombo = new QComboBox(verticalLayoutWidget_30);
        squareAddMenu_penSettings_penStyleCombo->setObjectName(QStringLiteral("squareAddMenu_penSettings_penStyleCombo"));

        verticalLayout_30->addWidget(squareAddMenu_penSettings_penStyleCombo);

        squareAddMenu_penSettings_capStyleCombo = new QComboBox(verticalLayoutWidget_30);
        squareAddMenu_penSettings_capStyleCombo->setObjectName(QStringLiteral("squareAddMenu_penSettings_capStyleCombo"));

        verticalLayout_30->addWidget(squareAddMenu_penSettings_capStyleCombo);

        squareAddMenu_penSettings_joinStyleCombo = new QComboBox(verticalLayoutWidget_30);
        squareAddMenu_penSettings_joinStyleCombo->setObjectName(QStringLiteral("squareAddMenu_penSettings_joinStyleCombo"));

        verticalLayout_30->addWidget(squareAddMenu_penSettings_joinStyleCombo);

        squareAddMenu_penSettings_brushColorCombo = new QComboBox(verticalLayoutWidget_30);
        squareAddMenu_penSettings_brushColorCombo->setObjectName(QStringLiteral("squareAddMenu_penSettings_brushColorCombo"));

        verticalLayout_30->addWidget(squareAddMenu_penSettings_brushColorCombo);

        squareAddMenu_penSettings_brushStyleCombo = new QComboBox(verticalLayoutWidget_30);
        squareAddMenu_penSettings_brushStyleCombo->setObjectName(QStringLiteral("squareAddMenu_penSettings_brushStyleCombo"));

        verticalLayout_30->addWidget(squareAddMenu_penSettings_brushStyleCombo);

        circleAddMenu = new QWidget(addShapeTab);
        circleAddMenu->setObjectName(QStringLiteral("circleAddMenu"));
        circleAddMenu->setGeometry(QRect(10, 50, 281, 451));
        cicleAddMenu_dimensions_originXLabel = new QLabel(circleAddMenu);
        cicleAddMenu_dimensions_originXLabel->setObjectName(QStringLiteral("cicleAddMenu_dimensions_originXLabel"));
        cicleAddMenu_dimensions_originXLabel->setGeometry(QRect(160, 50, 16, 16));
        circleAddMenu_dimensions_radiusLabel = new QLabel(circleAddMenu);
        circleAddMenu_dimensions_radiusLabel->setObjectName(QStringLiteral("circleAddMenu_dimensions_radiusLabel"));
        circleAddMenu_dimensions_radiusLabel->setGeometry(QRect(50, 90, 101, 20));
        circleAddMenu_penSettingLabel = new QLabel(circleAddMenu);
        circleAddMenu_penSettingLabel->setObjectName(QStringLiteral("circleAddMenu_penSettingLabel"));
        circleAddMenu_penSettingLabel->setGeometry(QRect(10, 140, 101, 17));
        circleAddMenu_dimensions_originYLabel = new QLabel(circleAddMenu);
        circleAddMenu_dimensions_originYLabel->setObjectName(QStringLiteral("circleAddMenu_dimensions_originYLabel"));
        circleAddMenu_dimensions_originYLabel->setGeometry(QRect(210, 50, 16, 16));
        circleAddMenu_dimensions_Radius = new QLineEdit(circleAddMenu);
        circleAddMenu_dimensions_Radius->setObjectName(QStringLiteral("circleAddMenu_dimensions_Radius"));
        circleAddMenu_dimensions_Radius->setGeometry(QRect(170, 90, 31, 27));
        circleAddMenu_dimensionLabel = new QLabel(circleAddMenu);
        circleAddMenu_dimensionLabel->setObjectName(QStringLiteral("circleAddMenu_dimensionLabel"));
        circleAddMenu_dimensionLabel->setGeometry(QRect(20, 20, 91, 17));
        circleAddMenu_penSettings_formatLineBot = new QFrame(circleAddMenu);
        circleAddMenu_penSettings_formatLineBot->setObjectName(QStringLiteral("circleAddMenu_penSettings_formatLineBot"));
        circleAddMenu_penSettings_formatLineBot->setGeometry(QRect(-10, 150, 301, 20));
        circleAddMenu_penSettings_formatLineBot->setFrameShape(QFrame::HLine);
        circleAddMenu_penSettings_formatLineBot->setFrameShadow(QFrame::Sunken);
        circleAddMenu_penSettings_formatLineTop = new QFrame(circleAddMenu);
        circleAddMenu_penSettings_formatLineTop->setObjectName(QStringLiteral("circleAddMenu_penSettings_formatLineTop"));
        circleAddMenu_penSettings_formatLineTop->setGeometry(QRect(-10, 126, 301, 20));
        circleAddMenu_penSettings_formatLineTop->setFrameShape(QFrame::HLine);
        circleAddMenu_penSettings_formatLineTop->setFrameShadow(QFrame::Sunken);
        circleAddMenu_dimensions_formatLine = new QFrame(circleAddMenu);
        circleAddMenu_dimensions_formatLine->setObjectName(QStringLiteral("circleAddMenu_dimensions_formatLine"));
        circleAddMenu_dimensions_formatLine->setGeometry(QRect(-10, 25, 301, 31));
        circleAddMenu_dimensions_formatLine->setFrameShape(QFrame::HLine);
        circleAddMenu_dimensions_formatLine->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_33 = new QWidget(circleAddMenu);
        verticalLayoutWidget_33->setObjectName(QStringLiteral("verticalLayoutWidget_33"));
        verticalLayoutWidget_33->setGeometry(QRect(110, 166, 160, 241));
        verticalLayout_33 = new QVBoxLayout(verticalLayoutWidget_33);
        verticalLayout_33->setObjectName(QStringLiteral("verticalLayout_33"));
        verticalLayout_33->setContentsMargins(0, 0, 0, 0);
        circleAddMenu_penSettings_lineColorCombo = new QComboBox(verticalLayoutWidget_33);
        circleAddMenu_penSettings_lineColorCombo->setObjectName(QStringLiteral("circleAddMenu_penSettings_lineColorCombo"));

        verticalLayout_33->addWidget(circleAddMenu_penSettings_lineColorCombo);

        circleAddMenu_penSettings_lineWidthSpinBox = new QSpinBox(verticalLayoutWidget_33);
        circleAddMenu_penSettings_lineWidthSpinBox->setObjectName(QStringLiteral("circleAddMenu_penSettings_lineWidthSpinBox"));

        verticalLayout_33->addWidget(circleAddMenu_penSettings_lineWidthSpinBox);

        circleAddMenu_penSettings_penStyleCombo = new QComboBox(verticalLayoutWidget_33);
        circleAddMenu_penSettings_penStyleCombo->setObjectName(QStringLiteral("circleAddMenu_penSettings_penStyleCombo"));

        verticalLayout_33->addWidget(circleAddMenu_penSettings_penStyleCombo);

        circleAddMenu_penSettings_capStyleCombo = new QComboBox(verticalLayoutWidget_33);
        circleAddMenu_penSettings_capStyleCombo->setObjectName(QStringLiteral("circleAddMenu_penSettings_capStyleCombo"));

        verticalLayout_33->addWidget(circleAddMenu_penSettings_capStyleCombo);

        circleAddMenu_penSettings_joinStyleCombo = new QComboBox(verticalLayoutWidget_33);
        circleAddMenu_penSettings_joinStyleCombo->setObjectName(QStringLiteral("circleAddMenu_penSettings_joinStyleCombo"));

        verticalLayout_33->addWidget(circleAddMenu_penSettings_joinStyleCombo);

        circleAddMenu_penSettings_brushColorCombo = new QComboBox(verticalLayoutWidget_33);
        circleAddMenu_penSettings_brushColorCombo->setObjectName(QStringLiteral("circleAddMenu_penSettings_brushColorCombo"));

        verticalLayout_33->addWidget(circleAddMenu_penSettings_brushColorCombo);

        circleAddMenu_penSettings_brushStyleCombo = new QComboBox(verticalLayoutWidget_33);
        circleAddMenu_penSettings_brushStyleCombo->setObjectName(QStringLiteral("circleAddMenu_penSettings_brushStyleCombo"));

        verticalLayout_33->addWidget(circleAddMenu_penSettings_brushStyleCombo);

        circleAddMenu_dimensions_upperLeftLabel = new QLabel(circleAddMenu);
        circleAddMenu_dimensions_upperLeftLabel->setObjectName(QStringLiteral("circleAddMenu_dimensions_upperLeftLabel"));
        circleAddMenu_dimensions_upperLeftLabel->setGeometry(QRect(50, 50, 81, 17));
        circleAddMenu_createButton = new QPushButton(circleAddMenu);
        circleAddMenu_createButton->setObjectName(QStringLiteral("circleAddMenu_createButton"));
        circleAddMenu_createButton->setGeometry(QRect(160, 10, 99, 27));
        circleAddMenu_dimensions_originY = new QLineEdit(circleAddMenu);
        circleAddMenu_dimensions_originY->setObjectName(QStringLiteral("circleAddMenu_dimensions_originY"));
        circleAddMenu_dimensions_originY->setGeometry(QRect(220, 50, 31, 27));
        circleAddMenu_dimensions_originX = new QLineEdit(circleAddMenu);
        circleAddMenu_dimensions_originX->setObjectName(QStringLiteral("circleAddMenu_dimensions_originX"));
        circleAddMenu_dimensions_originX->setGeometry(QRect(170, 50, 31, 27));
        verticalLayoutWidget_34 = new QWidget(circleAddMenu);
        verticalLayoutWidget_34->setObjectName(QStringLiteral("verticalLayoutWidget_34"));
        verticalLayoutWidget_34->setGeometry(QRect(20, 166, 101, 241));
        verticalLayout_34 = new QVBoxLayout(verticalLayoutWidget_34);
        verticalLayout_34->setObjectName(QStringLiteral("verticalLayout_34"));
        verticalLayout_34->setContentsMargins(0, 0, 0, 0);
        circleAddMenu_penSettings_lineColorLabel = new QLabel(verticalLayoutWidget_34);
        circleAddMenu_penSettings_lineColorLabel->setObjectName(QStringLiteral("circleAddMenu_penSettings_lineColorLabel"));

        verticalLayout_34->addWidget(circleAddMenu_penSettings_lineColorLabel);

        circleAddMenu_penSettings_lineWidthLabel = new QLabel(verticalLayoutWidget_34);
        circleAddMenu_penSettings_lineWidthLabel->setObjectName(QStringLiteral("circleAddMenu_penSettings_lineWidthLabel"));

        verticalLayout_34->addWidget(circleAddMenu_penSettings_lineWidthLabel);

        circleAddMenu_penSettings_penStyleLabel = new QLabel(verticalLayoutWidget_34);
        circleAddMenu_penSettings_penStyleLabel->setObjectName(QStringLiteral("circleAddMenu_penSettings_penStyleLabel"));

        verticalLayout_34->addWidget(circleAddMenu_penSettings_penStyleLabel);

        circleAddMenu_penSettings_capStyleLabel = new QLabel(verticalLayoutWidget_34);
        circleAddMenu_penSettings_capStyleLabel->setObjectName(QStringLiteral("circleAddMenu_penSettings_capStyleLabel"));

        verticalLayout_34->addWidget(circleAddMenu_penSettings_capStyleLabel);

        circleAddMenu_penSettings_joinStyleLabel = new QLabel(verticalLayoutWidget_34);
        circleAddMenu_penSettings_joinStyleLabel->setObjectName(QStringLiteral("circleAddMenu_penSettings_joinStyleLabel"));

        verticalLayout_34->addWidget(circleAddMenu_penSettings_joinStyleLabel);

        circleAddMenu_penSettings_brushColorLabel = new QLabel(verticalLayoutWidget_34);
        circleAddMenu_penSettings_brushColorLabel->setObjectName(QStringLiteral("circleAddMenu_penSettings_brushColorLabel"));

        verticalLayout_34->addWidget(circleAddMenu_penSettings_brushColorLabel);

        circleAddMenu_penSettings_brushStyleLabel = new QLabel(verticalLayoutWidget_34);
        circleAddMenu_penSettings_brushStyleLabel->setObjectName(QStringLiteral("circleAddMenu_penSettings_brushStyleLabel"));

        verticalLayout_34->addWidget(circleAddMenu_penSettings_brushStyleLabel);

        ellipseAddMenu = new QWidget(addShapeTab);
        ellipseAddMenu->setObjectName(QStringLiteral("ellipseAddMenu"));
        ellipseAddMenu->setGeometry(QRect(10, 50, 281, 451));
        ellipseAddMenu_dimensions_heighttLabel = new QLabel(ellipseAddMenu);
        ellipseAddMenu_dimensions_heighttLabel->setObjectName(QStringLiteral("ellipseAddMenu_dimensions_heighttLabel"));
        ellipseAddMenu_dimensions_heighttLabel->setGeometry(QRect(40, 130, 91, 20));
        ellipseAddMenu_dimensions_upperLefttXLabel = new QLabel(ellipseAddMenu);
        ellipseAddMenu_dimensions_upperLefttXLabel->setObjectName(QStringLiteral("ellipseAddMenu_dimensions_upperLefttXLabel"));
        ellipseAddMenu_dimensions_upperLefttXLabel->setGeometry(QRect(160, 50, 16, 16));
        ellipseAddMenu_dimensions_widthLabel = new QLabel(ellipseAddMenu);
        ellipseAddMenu_dimensions_widthLabel->setObjectName(QStringLiteral("ellipseAddMenu_dimensions_widthLabel"));
        ellipseAddMenu_dimensions_widthLabel->setGeometry(QRect(40, 90, 111, 20));
        ellipseAddMenu_penSettingLabel = new QLabel(ellipseAddMenu);
        ellipseAddMenu_penSettingLabel->setObjectName(QStringLiteral("ellipseAddMenu_penSettingLabel"));
        ellipseAddMenu_penSettingLabel->setGeometry(QRect(10, 164, 101, 17));
        ellipseAddMenu_dimensions_RY = new QLineEdit(ellipseAddMenu);
        ellipseAddMenu_dimensions_RY->setObjectName(QStringLiteral("ellipseAddMenu_dimensions_RY"));
        ellipseAddMenu_dimensions_RY->setGeometry(QRect(170, 130, 31, 27));
        ellipseAddMenu_dimensions_uuperLeftYLabel = new QLabel(ellipseAddMenu);
        ellipseAddMenu_dimensions_uuperLeftYLabel->setObjectName(QStringLiteral("ellipseAddMenu_dimensions_uuperLeftYLabel"));
        ellipseAddMenu_dimensions_uuperLeftYLabel->setGeometry(QRect(210, 50, 16, 16));
        ellipseAddMenu_dimensions_RX = new QLineEdit(ellipseAddMenu);
        ellipseAddMenu_dimensions_RX->setObjectName(QStringLiteral("ellipseAddMenu_dimensions_RX"));
        ellipseAddMenu_dimensions_RX->setGeometry(QRect(170, 90, 31, 27));
        ellipseAddMenu_dimensionLabel = new QLabel(ellipseAddMenu);
        ellipseAddMenu_dimensionLabel->setObjectName(QStringLiteral("ellipseAddMenu_dimensionLabel"));
        ellipseAddMenu_dimensionLabel->setGeometry(QRect(20, 20, 91, 17));
        ellipseAddMenu_penSettings_formatLineBot = new QFrame(ellipseAddMenu);
        ellipseAddMenu_penSettings_formatLineBot->setObjectName(QStringLiteral("ellipseAddMenu_penSettings_formatLineBot"));
        ellipseAddMenu_penSettings_formatLineBot->setGeometry(QRect(-10, 174, 301, 20));
        ellipseAddMenu_penSettings_formatLineBot->setFrameShape(QFrame::HLine);
        ellipseAddMenu_penSettings_formatLineBot->setFrameShadow(QFrame::Sunken);
        ellipseAddMenu_penSettings_formatLineTop = new QFrame(ellipseAddMenu);
        ellipseAddMenu_penSettings_formatLineTop->setObjectName(QStringLiteral("ellipseAddMenu_penSettings_formatLineTop"));
        ellipseAddMenu_penSettings_formatLineTop->setGeometry(QRect(-10, 150, 301, 20));
        ellipseAddMenu_penSettings_formatLineTop->setFrameShape(QFrame::HLine);
        ellipseAddMenu_penSettings_formatLineTop->setFrameShadow(QFrame::Sunken);
        ellipseAddMenu_dimensions_formatLine = new QFrame(ellipseAddMenu);
        ellipseAddMenu_dimensions_formatLine->setObjectName(QStringLiteral("ellipseAddMenu_dimensions_formatLine"));
        ellipseAddMenu_dimensions_formatLine->setGeometry(QRect(-10, 25, 301, 31));
        ellipseAddMenu_dimensions_formatLine->setFrameShape(QFrame::HLine);
        ellipseAddMenu_dimensions_formatLine->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_31 = new QWidget(ellipseAddMenu);
        verticalLayoutWidget_31->setObjectName(QStringLiteral("verticalLayoutWidget_31"));
        verticalLayoutWidget_31->setGeometry(QRect(110, 190, 160, 241));
        verticalLayout_31 = new QVBoxLayout(verticalLayoutWidget_31);
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        verticalLayout_31->setContentsMargins(0, 0, 0, 0);
        ellipseAddMenu_penSettings_lineColorCombo = new QComboBox(verticalLayoutWidget_31);
        ellipseAddMenu_penSettings_lineColorCombo->setObjectName(QStringLiteral("ellipseAddMenu_penSettings_lineColorCombo"));

        verticalLayout_31->addWidget(ellipseAddMenu_penSettings_lineColorCombo);

        ellipseAddMenu_penSettings_lineWidthSpinBox = new QSpinBox(verticalLayoutWidget_31);
        ellipseAddMenu_penSettings_lineWidthSpinBox->setObjectName(QStringLiteral("ellipseAddMenu_penSettings_lineWidthSpinBox"));

        verticalLayout_31->addWidget(ellipseAddMenu_penSettings_lineWidthSpinBox);

        ellipseAddMenu_penSettings_penStyleCombo = new QComboBox(verticalLayoutWidget_31);
        ellipseAddMenu_penSettings_penStyleCombo->setObjectName(QStringLiteral("ellipseAddMenu_penSettings_penStyleCombo"));

        verticalLayout_31->addWidget(ellipseAddMenu_penSettings_penStyleCombo);

        ellipseAddMenu_penSettings_capStyleCombo = new QComboBox(verticalLayoutWidget_31);
        ellipseAddMenu_penSettings_capStyleCombo->setObjectName(QStringLiteral("ellipseAddMenu_penSettings_capStyleCombo"));

        verticalLayout_31->addWidget(ellipseAddMenu_penSettings_capStyleCombo);

        ellipseAddMenu_penSettings_joinStyleCombo = new QComboBox(verticalLayoutWidget_31);
        ellipseAddMenu_penSettings_joinStyleCombo->setObjectName(QStringLiteral("ellipseAddMenu_penSettings_joinStyleCombo"));

        verticalLayout_31->addWidget(ellipseAddMenu_penSettings_joinStyleCombo);

        ellipseAddMenu_penSettings_brushColorCombo = new QComboBox(verticalLayoutWidget_31);
        ellipseAddMenu_penSettings_brushColorCombo->setObjectName(QStringLiteral("ellipseAddMenu_penSettings_brushColorCombo"));

        verticalLayout_31->addWidget(ellipseAddMenu_penSettings_brushColorCombo);

        ellipseAddMenu_penSettings_brushStyleCombo = new QComboBox(verticalLayoutWidget_31);
        ellipseAddMenu_penSettings_brushStyleCombo->setObjectName(QStringLiteral("ellipseAddMenu_penSettings_brushStyleCombo"));

        verticalLayout_31->addWidget(ellipseAddMenu_penSettings_brushStyleCombo);

        ellipseAddMenu_dimensions_originLabel = new QLabel(ellipseAddMenu);
        ellipseAddMenu_dimensions_originLabel->setObjectName(QStringLiteral("ellipseAddMenu_dimensions_originLabel"));
        ellipseAddMenu_dimensions_originLabel->setGeometry(QRect(30, 50, 81, 17));
        ellipseAddMenu_createButton = new QPushButton(ellipseAddMenu);
        ellipseAddMenu_createButton->setObjectName(QStringLiteral("ellipseAddMenu_createButton"));
        ellipseAddMenu_createButton->setGeometry(QRect(160, 10, 99, 27));
        ellipseAddMenu_dimensions_originY = new QLineEdit(ellipseAddMenu);
        ellipseAddMenu_dimensions_originY->setObjectName(QStringLiteral("ellipseAddMenu_dimensions_originY"));
        ellipseAddMenu_dimensions_originY->setGeometry(QRect(220, 50, 31, 27));
        ellipseAddMenu_dimensions_originX = new QLineEdit(ellipseAddMenu);
        ellipseAddMenu_dimensions_originX->setObjectName(QStringLiteral("ellipseAddMenu_dimensions_originX"));
        ellipseAddMenu_dimensions_originX->setGeometry(QRect(170, 50, 31, 27));
        verticalLayoutWidget_32 = new QWidget(ellipseAddMenu);
        verticalLayoutWidget_32->setObjectName(QStringLiteral("verticalLayoutWidget_32"));
        verticalLayoutWidget_32->setGeometry(QRect(20, 190, 101, 241));
        verticalLayout_32 = new QVBoxLayout(verticalLayoutWidget_32);
        verticalLayout_32->setObjectName(QStringLiteral("verticalLayout_32"));
        verticalLayout_32->setContentsMargins(0, 0, 0, 0);
        ellipseAddMenu_penSettings_lineColorLabel = new QLabel(verticalLayoutWidget_32);
        ellipseAddMenu_penSettings_lineColorLabel->setObjectName(QStringLiteral("ellipseAddMenu_penSettings_lineColorLabel"));

        verticalLayout_32->addWidget(ellipseAddMenu_penSettings_lineColorLabel);

        ellipseAddMenu_penSettings_lineWidthLabel = new QLabel(verticalLayoutWidget_32);
        ellipseAddMenu_penSettings_lineWidthLabel->setObjectName(QStringLiteral("ellipseAddMenu_penSettings_lineWidthLabel"));

        verticalLayout_32->addWidget(ellipseAddMenu_penSettings_lineWidthLabel);

        ellipseAddMenu_penSettings_penStyleLabel = new QLabel(verticalLayoutWidget_32);
        ellipseAddMenu_penSettings_penStyleLabel->setObjectName(QStringLiteral("ellipseAddMenu_penSettings_penStyleLabel"));

        verticalLayout_32->addWidget(ellipseAddMenu_penSettings_penStyleLabel);

        ellipseAddMenu_penSettings_capStyleLabel = new QLabel(verticalLayoutWidget_32);
        ellipseAddMenu_penSettings_capStyleLabel->setObjectName(QStringLiteral("ellipseAddMenu_penSettings_capStyleLabel"));

        verticalLayout_32->addWidget(ellipseAddMenu_penSettings_capStyleLabel);

        ellipseAddMenu_penSettings_joinStyleLabel = new QLabel(verticalLayoutWidget_32);
        ellipseAddMenu_penSettings_joinStyleLabel->setObjectName(QStringLiteral("ellipseAddMenu_penSettings_joinStyleLabel"));

        verticalLayout_32->addWidget(ellipseAddMenu_penSettings_joinStyleLabel);

        ellipseAddMenu_penSettings_brushColorLabel = new QLabel(verticalLayoutWidget_32);
        ellipseAddMenu_penSettings_brushColorLabel->setObjectName(QStringLiteral("ellipseAddMenu_penSettings_brushColorLabel"));

        verticalLayout_32->addWidget(ellipseAddMenu_penSettings_brushColorLabel);

        ellipseAddMenu_penSettings_brushStyleLabel = new QLabel(verticalLayoutWidget_32);
        ellipseAddMenu_penSettings_brushStyleLabel->setObjectName(QStringLiteral("ellipseAddMenu_penSettings_brushStyleLabel"));

        verticalLayout_32->addWidget(ellipseAddMenu_penSettings_brushStyleLabel);

        textAddMenu = new QWidget(addShapeTab);
        textAddMenu->setObjectName(QStringLiteral("textAddMenu"));
        textAddMenu->setGeometry(QRect(10, 50, 281, 451));
        textAddMenu_dimensions_upperLefttXLabel = new QLabel(textAddMenu);
        textAddMenu_dimensions_upperLefttXLabel->setObjectName(QStringLiteral("textAddMenu_dimensions_upperLefttXLabel"));
        textAddMenu_dimensions_upperLefttXLabel->setGeometry(QRect(160, 55, 16, 16));
        textAddMenu_penSettingLabel = new QLabel(textAddMenu);
        textAddMenu_penSettingLabel->setObjectName(QStringLiteral("textAddMenu_penSettingLabel"));
        textAddMenu_penSettingLabel->setGeometry(QRect(10, 90, 101, 17));
        textAddMenu_dimensions_uuperLeftYLabel = new QLabel(textAddMenu);
        textAddMenu_dimensions_uuperLeftYLabel->setObjectName(QStringLiteral("textAddMenu_dimensions_uuperLeftYLabel"));
        textAddMenu_dimensions_uuperLeftYLabel->setGeometry(QRect(210, 55, 16, 16));
        textAddMenu_dimensionLabel = new QLabel(textAddMenu);
        textAddMenu_dimensionLabel->setObjectName(QStringLiteral("textAddMenu_dimensionLabel"));
        textAddMenu_dimensionLabel->setGeometry(QRect(20, 25, 91, 17));
        textAddMenu_textSettings_formatLineBot = new QFrame(textAddMenu);
        textAddMenu_textSettings_formatLineBot->setObjectName(QStringLiteral("textAddMenu_textSettings_formatLineBot"));
        textAddMenu_textSettings_formatLineBot->setGeometry(QRect(-10, 100, 301, 20));
        textAddMenu_textSettings_formatLineBot->setFrameShape(QFrame::HLine);
        textAddMenu_textSettings_formatLineBot->setFrameShadow(QFrame::Sunken);
        textAddMenu_textSettings_formatLineTop = new QFrame(textAddMenu);
        textAddMenu_textSettings_formatLineTop->setObjectName(QStringLiteral("textAddMenu_textSettings_formatLineTop"));
        textAddMenu_textSettings_formatLineTop->setGeometry(QRect(-10, 76, 301, 20));
        textAddMenu_textSettings_formatLineTop->setFrameShape(QFrame::HLine);
        textAddMenu_textSettings_formatLineTop->setFrameShadow(QFrame::Sunken);
        textAddMenu_dimensions_formatLine = new QFrame(textAddMenu);
        textAddMenu_dimensions_formatLine->setObjectName(QStringLiteral("textAddMenu_dimensions_formatLine"));
        textAddMenu_dimensions_formatLine->setGeometry(QRect(-10, 30, 301, 31));
        textAddMenu_dimensions_formatLine->setFrameShape(QFrame::HLine);
        textAddMenu_dimensions_formatLine->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_35 = new QWidget(textAddMenu);
        verticalLayoutWidget_35->setObjectName(QStringLiteral("verticalLayoutWidget_35"));
        verticalLayoutWidget_35->setGeometry(QRect(100, 200, 160, 241));
        verticalLayout_35 = new QVBoxLayout(verticalLayoutWidget_35);
        verticalLayout_35->setObjectName(QStringLiteral("verticalLayout_35"));
        verticalLayout_35->setContentsMargins(0, 0, 0, 0);
        textAddMenu_textSettings_textColorCombo = new QComboBox(verticalLayoutWidget_35);
        textAddMenu_textSettings_textColorCombo->setObjectName(QStringLiteral("textAddMenu_textSettings_textColorCombo"));

        verticalLayout_35->addWidget(textAddMenu_textSettings_textColorCombo);

        textAddMenu_textSettings_textPointSizeBox = new QSpinBox(verticalLayoutWidget_35);
        textAddMenu_textSettings_textPointSizeBox->setObjectName(QStringLiteral("textAddMenu_textSettings_textPointSizeBox"));

        verticalLayout_35->addWidget(textAddMenu_textSettings_textPointSizeBox);

        textAddMenu_textSettings_fontCombo = new QComboBox(verticalLayoutWidget_35);
        textAddMenu_textSettings_fontCombo->setObjectName(QStringLiteral("textAddMenu_textSettings_fontCombo"));
        textAddMenu_textSettings_fontCombo->setEnabled(true);

        verticalLayout_35->addWidget(textAddMenu_textSettings_fontCombo);

        textAddMenu_textSettings_fontStyleCombo = new QComboBox(verticalLayoutWidget_35);
        textAddMenu_textSettings_fontStyleCombo->setObjectName(QStringLiteral("textAddMenu_textSettings_fontStyleCombo"));

        verticalLayout_35->addWidget(textAddMenu_textSettings_fontStyleCombo);

        textAddMenu_textSettings_fontWeightCombo = new QComboBox(verticalLayoutWidget_35);
        textAddMenu_textSettings_fontWeightCombo->setObjectName(QStringLiteral("textAddMenu_textSettings_fontWeightCombo"));

        verticalLayout_35->addWidget(textAddMenu_textSettings_fontWeightCombo);

        textAddMenu_dimensions_upperLeftLabel = new QLabel(textAddMenu);
        textAddMenu_dimensions_upperLeftLabel->setObjectName(QStringLiteral("textAddMenu_dimensions_upperLeftLabel"));
        textAddMenu_dimensions_upperLeftLabel->setGeometry(QRect(30, 55, 81, 17));
        textAddMenu_createButton = new QPushButton(textAddMenu);
        textAddMenu_createButton->setObjectName(QStringLiteral("textAddMenu_createButton"));
        textAddMenu_createButton->setGeometry(QRect(160, 10, 99, 27));
        textAddMenu_dimensions_upperLeftY = new QLineEdit(textAddMenu);
        textAddMenu_dimensions_upperLeftY->setObjectName(QStringLiteral("textAddMenu_dimensions_upperLeftY"));
        textAddMenu_dimensions_upperLeftY->setGeometry(QRect(220, 55, 31, 27));
        textAddMenu_dimensions_upperLeftX = new QLineEdit(textAddMenu);
        textAddMenu_dimensions_upperLeftX->setObjectName(QStringLiteral("textAddMenu_dimensions_upperLeftX"));
        textAddMenu_dimensions_upperLeftX->setGeometry(QRect(170, 55, 31, 27));
        verticalLayoutWidget_36 = new QWidget(textAddMenu);
        verticalLayoutWidget_36->setObjectName(QStringLiteral("verticalLayoutWidget_36"));
        verticalLayoutWidget_36->setGeometry(QRect(10, 200, 101, 241));
        verticalLayout_36 = new QVBoxLayout(verticalLayoutWidget_36);
        verticalLayout_36->setObjectName(QStringLiteral("verticalLayout_36"));
        verticalLayout_36->setContentsMargins(0, 0, 0, 0);
        textAddMenu_textSettings_textColorLabel = new QLabel(verticalLayoutWidget_36);
        textAddMenu_textSettings_textColorLabel->setObjectName(QStringLiteral("textAddMenu_textSettings_textColorLabel"));

        verticalLayout_36->addWidget(textAddMenu_textSettings_textColorLabel);

        textAddMenu_textSettings_pointSizeLabel = new QLabel(verticalLayoutWidget_36);
        textAddMenu_textSettings_pointSizeLabel->setObjectName(QStringLiteral("textAddMenu_textSettings_pointSizeLabel"));

        verticalLayout_36->addWidget(textAddMenu_textSettings_pointSizeLabel);

        textAddMenu_textSettings_fontLabel = new QLabel(verticalLayoutWidget_36);
        textAddMenu_textSettings_fontLabel->setObjectName(QStringLiteral("textAddMenu_textSettings_fontLabel"));

        verticalLayout_36->addWidget(textAddMenu_textSettings_fontLabel);

        textAddMenu_textSettings_fontStyleLabel = new QLabel(verticalLayoutWidget_36);
        textAddMenu_textSettings_fontStyleLabel->setObjectName(QStringLiteral("textAddMenu_textSettings_fontStyleLabel"));

        verticalLayout_36->addWidget(textAddMenu_textSettings_fontStyleLabel);

        textAddMenu_textSettings_fontWeightLabel = new QLabel(verticalLayoutWidget_36);
        textAddMenu_textSettings_fontWeightLabel->setObjectName(QStringLiteral("textAddMenu_textSettings_fontWeightLabel"));

        verticalLayout_36->addWidget(textAddMenu_textSettings_fontWeightLabel);

        textAddMenu_textSettings_textEditLabel = new QLabel(textAddMenu);
        textAddMenu_textSettings_textEditLabel->setObjectName(QStringLiteral("textAddMenu_textSettings_textEditLabel"));
        textAddMenu_textSettings_textEditLabel->setGeometry(QRect(10, 116, 91, 16));
        textAddMenu_textSettings_textEdit = new QPlainTextEdit(textAddMenu);
        textAddMenu_textSettings_textEdit->setObjectName(QStringLiteral("textAddMenu_textSettings_textEdit"));
        textAddMenu_textSettings_textEdit->setGeometry(QRect(10, 140, 261, 51));
        addMenu_adminBlind = new QWidget(addShapeTab);
        addMenu_adminBlind->setObjectName(QStringLiteral("addMenu_adminBlind"));
        addMenu_adminBlind->setGeometry(QRect(10, 10, 281, 491));
        addMenu_adminBlind->setAutoFillBackground(true);
        addMenu_adminBlineLabel = new QLabel(addMenu_adminBlind);
        addMenu_adminBlineLabel->setObjectName(QStringLiteral("addMenu_adminBlineLabel"));
        addMenu_adminBlineLabel->setGeometry(QRect(0, 140, 261, 111));
        addMenu_adminBlineLabel->setAlignment(Qt::AlignCenter);
        addMenu_adminBlineLabel->setWordWrap(true);
        tabMenu->addTab(addShapeTab, QString());
        reportTab = new QWidget();
        reportTab->setObjectName(QStringLiteral("reportTab"));
        tabWidget = new QTabWidget(reportTab);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 301, 501));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        shapeReport = new QTreeWidget(tab_3);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        shapeReport->setHeaderItem(__qtreewidgetitem);
        shapeReport->setObjectName(QStringLiteral("shapeReport"));
        shapeReport->setGeometry(QRect(0, 30, 291, 441));
        shapeReport->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        shapeReportRefreshButton = new QPushButton(tab_3);
        shapeReportRefreshButton->setObjectName(QStringLiteral("shapeReportRefreshButton"));
        shapeReportRefreshButton->setGeometry(QRect(180, 0, 99, 27));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        perimeterReport = new QTableWidget(tab_4);
        perimeterReport->setObjectName(QStringLiteral("perimeterReport"));
        perimeterReport->setGeometry(QRect(0, 30, 291, 441));
        perimeterReport->setSortingEnabled(true);
        perimeterReportRefreshButton = new QPushButton(tab_4);
        perimeterReportRefreshButton->setObjectName(QStringLiteral("perimeterReportRefreshButton"));
        perimeterReportRefreshButton->setGeometry(QRect(180, 0, 99, 27));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        areaReport = new QTableWidget(tab_5);
        areaReport->setObjectName(QStringLiteral("areaReport"));
        areaReport->setGeometry(QRect(0, 30, 291, 441));
        areaReport->setSortingEnabled(true);
        areaReportRefreshButton = new QPushButton(tab_5);
        areaReportRefreshButton->setObjectName(QStringLiteral("areaReportRefreshButton"));
        areaReportRefreshButton->setGeometry(QRect(180, 0, 99, 27));
        tabWidget->addTab(tab_5, QString());
        tabMenu->addTab(reportTab, QString());

        horizontalLayout->addWidget(tabMenu);

        renderCanvas = new canvas(centralwidget);
        renderCanvas->setObjectName(QStringLiteral("renderCanvas"));
        renderCanvas->setMinimumSize(QSize(1000, 500));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        renderCanvas->setPalette(palette2);
        renderCanvas->setAutoFillBackground(true);
        frame = new QFrame(renderCanvas);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 1001, 501));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush10(QColor(255, 255, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush10);
        QBrush brush11(QColor(255, 255, 127, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush11);
        QBrush brush12(QColor(255, 255, 63, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        QBrush brush13(QColor(127, 127, 0, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush13);
        QBrush brush14(QColor(170, 170, 0, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        frame->setPalette(palette3);
        frame->setAutoFillBackground(false);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(2);
        frame->setMidLineWidth(2);
        helpBrowser = new QTextBrowser(frame);
        helpBrowser->setObjectName(QStringLiteral("helpBrowser"));
        helpBrowser->setEnabled(true);
        helpBrowser->setGeometry(QRect(15, 11, 511, 481));
        helpBrowser->setAutoFormatting(QTextEdit::AutoAll);
        helpBrowser->setLineWrapColumnOrWidth(0);
        helpBrowser->setSource(QUrl(QStringLiteral("file:///home/mike/cs1c/Project/Fall2017_CS1C-/Source/build-Modeler_Project-Desktop-Debug/Help Text File.txt")));
        helpDoneButton = new QPushButton(frame);
        helpDoneButton->setObjectName(QStringLiteral("helpDoneButton"));
        helpDoneButton->setGeometry(QRect(350, 30, 131, 27));
        helpDoneButton->setFlat(false);
        loginMenu = new QWidget(frame);
        loginMenu->setObjectName(QStringLiteral("loginMenu"));
        loginMenu->setGeometry(QRect(30, 70, 381, 131));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        loginMenu->setPalette(palette4);
        loginMenu->setAutoFillBackground(true);
        loginTitleLabel = new QLabel(loginMenu);
        loginTitleLabel->setObjectName(QStringLiteral("loginTitleLabel"));
        loginTitleLabel->setGeometry(QRect(10, 10, 181, 17));
        loginUserLineEdit = new QLineEdit(loginMenu);
        loginUserLineEdit->setObjectName(QStringLiteral("loginUserLineEdit"));
        loginUserLineEdit->setGeometry(QRect(100, 40, 131, 27));
        loginPasswordLineEdit = new QLineEdit(loginMenu);
        loginPasswordLineEdit->setObjectName(QStringLiteral("loginPasswordLineEdit"));
        loginPasswordLineEdit->setGeometry(QRect(100, 70, 131, 27));
        loginUserLabel = new QLabel(loginMenu);
        loginUserLabel->setObjectName(QStringLiteral("loginUserLabel"));
        loginUserLabel->setGeometry(QRect(50, 40, 41, 21));
        loginPasswordLabel = new QLabel(loginMenu);
        loginPasswordLabel->setObjectName(QStringLiteral("loginPasswordLabel"));
        loginPasswordLabel->setGeometry(QRect(16, 70, 71, 20));
        loginUserButton = new QPushButton(loginMenu);
        loginUserButton->setObjectName(QStringLiteral("loginUserButton"));
        loginUserButton->setGeometry(QRect(250, 50, 99, 27));
        loginCancelButton = new QPushButton(loginMenu);
        loginCancelButton->setObjectName(QStringLiteral("loginCancelButton"));
        loginCancelButton->setGeometry(QRect(250, 90, 99, 27));
        frame_2 = new QFrame(loginMenu);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 381, 131));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        frame_2->setPalette(palette5);
        frame_2->setAutoFillBackground(false);
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(2);
        frame_2->setMidLineWidth(2);
        loginMenu_invalidInputLabel = new QLabel(frame_2);
        loginMenu_invalidInputLabel->setObjectName(QStringLiteral("loginMenu_invalidInputLabel"));
        loginMenu_invalidInputLabel->setGeometry(QRect(50, 100, 181, 17));
        userLogin_logoutButton = new QPushButton(loginMenu);
        userLogin_logoutButton->setObjectName(QStringLiteral("userLogin_logoutButton"));
        userLogin_logoutButton->setGeometry(QRect(250, 50, 99, 27));
        frame_2->raise();
        loginTitleLabel->raise();
        loginUserLineEdit->raise();
        loginPasswordLineEdit->raise();
        loginUserLabel->raise();
        loginPasswordLabel->raise();
        loginUserButton->raise();
        loginCancelButton->raise();
        userLogin_logoutButton->raise();

        horizontalLayout->addWidget(renderCanvas);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1324, 25));
        menubar->setDefaultUp(true);
        menubar->setNativeMenuBar(true);
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAdmin = new QMenu(menubar);
        menuAdmin->setObjectName(QStringLiteral("menuAdmin"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuAdmin->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSave_and_Exit);
        menuAdmin->addAction(actionAdmin_Login);
        menuHelp->addAction(actionGet_Help);
        menuHelp->addAction(actionProvide_Feedback);

        retranslateUi(MainWindow);

        tabMenu->setCurrentIndex(0);
        polygonModMenu_dimensions_pointList->setCurrentRow(-1);
        polyLineModMenu_dimensions_pointList->setCurrentRow(-1);
        polyLineAddMenu_dimensions_pointList->setCurrentRow(-1);
        polygonAddMenu_dimensions_pointList->setCurrentRow(-1);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "2D Modeler", 0));
        actionGet_Help->setText(QApplication::translate("MainWindow", "Get Help!", 0));
        actionProvide_Feedback->setText(QApplication::translate("MainWindow", "Provide Feedback", 0));
        actionAdmin_Login->setText(QApplication::translate("MainWindow", "Admin Login", 0));
        actionSave_and_Exit->setText(QApplication::translate("MainWindow", "Save and Exit", 0));
#ifndef QT_NO_TOOLTIP
        tabMenu->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        shapeIdModLabel->setText(QApplication::translate("MainWindow", "Shape ID:", 0));
#ifndef QT_NO_TOOLTIP
        shapeIdModSpinBox->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Select Shape ID# to Display</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        shapeTypeModLabel->setText(QApplication::translate("MainWindow", "Shape Type:", 0));
#ifndef QT_NO_TOOLTIP
        shapeModType->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Currently Selected Shape's Type</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        shapeModType->setText(QApplication::translate("MainWindow", "<TYPE>", 0));
        ellipseModMenu_dimensions_heighttLabel->setText(QApplication::translate("MainWindow", "RY Size    :", 0));
        ellipseModMenu_dimensions_upperLefttXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        ellipseModMenu_dimensions_widthLabel->setText(QApplication::translate("MainWindow", "RX Size    :", 0));
        ellipseModMenu_penSettingLabel->setText(QApplication::translate("MainWindow", "Pen Settings:", 0));
        ellipseModMenu_dimensions_uuperLeftYLabel->setText(QApplication::translate("MainWindow", "Y", 0));
        ellipseModMenu_dimensionLabel->setText(QApplication::translate("MainWindow", "Dimensions:", 0));
        ellipseModMenu_penSettings_lineColorCombo->clear();
        ellipseModMenu_penSettings_lineColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Grey", 0)
         << QApplication::translate("MainWindow", "Dark Grey", 0)
         << QApplication::translate("MainWindow", "Light Grey", 0)
        );
        ellipseModMenu_penSettings_penStyleCombo->clear();
        ellipseModMenu_penSettings_penStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid Line", 0)
         << QApplication::translate("MainWindow", "Dash Line", 0)
         << QApplication::translate("MainWindow", "Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot-Dot Line", 0)
        );
        ellipseModMenu_penSettings_capStyleCombo->clear();
        ellipseModMenu_penSettings_capStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Square Cap", 0)
         << QApplication::translate("MainWindow", "Flat Cap", 0)
         << QApplication::translate("MainWindow", "Round Cap", 0)
        );
        ellipseModMenu_penSettings_joinStyleCombo->clear();
        ellipseModMenu_penSettings_joinStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bevel Join", 0)
         << QApplication::translate("MainWindow", "Miter Join", 0)
         << QApplication::translate("MainWindow", "Round Join", 0)
        );
        ellipseModMenu_penSettings_brushColorCombo->clear();
        ellipseModMenu_penSettings_brushColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Gray", 0)
         << QApplication::translate("MainWindow", "Dark Gray", 0)
         << QApplication::translate("MainWindow", "Light Gray", 0)
        );
        ellipseModMenu_penSettings_brushStyleCombo->clear();
        ellipseModMenu_penSettings_brushStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid", 0)
         << QApplication::translate("MainWindow", "No Brush", 0)
         << QApplication::translate("MainWindow", "Dense 1", 0)
         << QApplication::translate("MainWindow", "Dense 2", 0)
         << QApplication::translate("MainWindow", "Dense 3", 0)
         << QApplication::translate("MainWindow", "Dense 4", 0)
         << QApplication::translate("MainWindow", "Dense 5", 0)
         << QApplication::translate("MainWindow", "Dense 6", 0)
         << QApplication::translate("MainWindow", "Dense 7", 0)
         << QApplication::translate("MainWindow", "Horizontal", 0)
         << QApplication::translate("MainWindow", "Vertical", 0)
         << QApplication::translate("MainWindow", "Cross", 0)
         << QApplication::translate("MainWindow", "Back Diag.", 0)
         << QApplication::translate("MainWindow", "Forward Diag.", 0)
         << QApplication::translate("MainWindow", "Diag. Cross", 0)
        );
        ellipseModMenu_dimensions_originLabel->setText(QApplication::translate("MainWindow", "       Origin :", 0));
        ellipseModMenu_updateButton->setText(QApplication::translate("MainWindow", "UPDATE!", 0));
        ellipseModMenu_penSettings_lineColorLabel->setText(QApplication::translate("MainWindow", " Line Color :", 0));
        ellipseModMenu_penSettings_lineWidthLabel->setText(QApplication::translate("MainWindow", " Line Width :", 0));
        ellipseModMenu_penSettings_penStyleLabel->setText(QApplication::translate("MainWindow", "Pen Style :", 0));
        ellipseModMenu_penSettings_capStyleLabel->setText(QApplication::translate("MainWindow", " Cap Style :", 0));
        ellipseModMenu_penSettings_joinStyleLabel->setText(QApplication::translate("MainWindow", "Join Style :", 0));
        ellipseModMenu_penSettings_brushColorLabel->setText(QApplication::translate("MainWindow", "Fill Color :", 0));
        ellipseModMenu_penSettings_brushStyleLabel->setText(QApplication::translate("MainWindow", "FIll Style :", 0));
        ellipseModMenu_deleteButton->setText(QApplication::translate("MainWindow", "Delete", 0));
        cicleModMenu_dimensions_originXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        circleModMenu_dimensions_radiusLabel->setText(QApplication::translate("MainWindow", "Radius  :", 0));
        circleModMenu_penSettingLabel->setText(QApplication::translate("MainWindow", "Pen Settings:", 0));
        circleModMenu_dimensions_originYLabel->setText(QApplication::translate("MainWindow", "Y", 0));
        circleModMenu_dimensionLabel->setText(QApplication::translate("MainWindow", "Dimensions:", 0));
        circleModMenu_penSettings_lineColorCombo->clear();
        circleModMenu_penSettings_lineColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Grey", 0)
         << QApplication::translate("MainWindow", "Dark Grey", 0)
         << QApplication::translate("MainWindow", "Light Grey", 0)
        );
        circleModMenu_penSettings_penStyleCombo->clear();
        circleModMenu_penSettings_penStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid Line", 0)
         << QApplication::translate("MainWindow", "Dash Line", 0)
         << QApplication::translate("MainWindow", "Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot-Dot Line", 0)
        );
        circleModMenu_penSettings_capStyleCombo->clear();
        circleModMenu_penSettings_capStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Square Cap", 0)
         << QApplication::translate("MainWindow", "Flat Cap", 0)
         << QApplication::translate("MainWindow", "Round Cap", 0)
        );
        circleModMenu_penSettings_joinStyleCombo->clear();
        circleModMenu_penSettings_joinStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bevel Join", 0)
         << QApplication::translate("MainWindow", "Miter Join", 0)
         << QApplication::translate("MainWindow", "Round Join", 0)
        );
        circleModMenu_penSettings_brushColorCombo->clear();
        circleModMenu_penSettings_brushColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Gray", 0)
         << QApplication::translate("MainWindow", "Dark Gray", 0)
         << QApplication::translate("MainWindow", "Light Gray", 0)
        );
        circleModMenu_penSettings_brushStyleCombo->clear();
        circleModMenu_penSettings_brushStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid", 0)
         << QApplication::translate("MainWindow", "No Brush", 0)
         << QApplication::translate("MainWindow", "Dense 1", 0)
         << QApplication::translate("MainWindow", "Dense 2", 0)
         << QApplication::translate("MainWindow", "Dense 3", 0)
         << QApplication::translate("MainWindow", "Dense 4", 0)
         << QApplication::translate("MainWindow", "Dense 5", 0)
         << QApplication::translate("MainWindow", "Dense 6", 0)
         << QApplication::translate("MainWindow", "Dense 7", 0)
         << QApplication::translate("MainWindow", "Horizontal", 0)
         << QApplication::translate("MainWindow", "Vertical", 0)
         << QApplication::translate("MainWindow", "Cross", 0)
         << QApplication::translate("MainWindow", "Back Diag.", 0)
         << QApplication::translate("MainWindow", "Forward Diag.", 0)
         << QApplication::translate("MainWindow", "Diag. Cross", 0)
        );
        circleModMenu_dimensions_upperLeftLabel->setText(QApplication::translate("MainWindow", "Origin  :", 0));
        circleModMenu_updateButton->setText(QApplication::translate("MainWindow", "UPDATE!", 0));
        circleModMenu_penSettings_lineColorLabel->setText(QApplication::translate("MainWindow", " Line Color :", 0));
        circleModMenu_penSettings_lineWidthLabel->setText(QApplication::translate("MainWindow", " Line Width :", 0));
        circleModMenu_penSettings_penStyleLabel->setText(QApplication::translate("MainWindow", "Pen Style :", 0));
        circleModMenu_penSettings_capStyleLabel->setText(QApplication::translate("MainWindow", " Cap Style :", 0));
        circleModMenu_penSettings_joinStyleLabel->setText(QApplication::translate("MainWindow", "Join Style :", 0));
        circleModMenu_penSettings_brushColorLabel->setText(QApplication::translate("MainWindow", "Fill Color :", 0));
        circleModMenu_penSettings_brushStyleLabel->setText(QApplication::translate("MainWindow", "FIll Style :", 0));
        circleModMenu_deleteButton->setText(QApplication::translate("MainWindow", "Delete", 0));
        lineModMenu_dimensionLabel->setText(QApplication::translate("MainWindow", "Dimensions:", 0));
        lineModMenu_penSettingLabel->setText(QApplication::translate("MainWindow", "Pen Settings:", 0));
        lineModMenu_dimensions_startPointLabel->setText(QApplication::translate("MainWindow", "Start Point:", 0));
        lineModMenu_dimensions_endPointLabel->setText(QApplication::translate("MainWindow", " End Point :", 0));
        lineModMenu_dimensions_startPointXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        lineModMenu_dimensions_endPointYLabel->setText(QApplication::translate("MainWindow", "Y", 0));
        lineModMenu_dimensions_endPointYLabel_2->setText(QApplication::translate("MainWindow", "Y", 0));
        lineModMenu_dimensions_endPointXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        lineModMenu_penSettings_lineColorLabel->setText(QApplication::translate("MainWindow", " Line Color :", 0));
        lineModMenu_penSettings_lineWidthLabel->setText(QApplication::translate("MainWindow", " Line Width :", 0));
        lineModMenu_penSettings_penStyleLabel->setText(QApplication::translate("MainWindow", "Pen Style :", 0));
        lineModMenu_penSettings_capStyleLabel->setText(QApplication::translate("MainWindow", " Cap Style :", 0));
        lineModMenu_penSettings_joinStyleLabel->setText(QApplication::translate("MainWindow", "Join Style :", 0));
        lineModMenu_penSettings_lineColorCombo->clear();
        lineModMenu_penSettings_lineColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Grey", 0)
         << QApplication::translate("MainWindow", "Dark Grey", 0)
         << QApplication::translate("MainWindow", "Light Grey", 0)
        );
        lineModMenu_penSettings_penStyleCombo->clear();
        lineModMenu_penSettings_penStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid Line", 0)
         << QApplication::translate("MainWindow", "Dash Line", 0)
         << QApplication::translate("MainWindow", "Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot-Dot Line", 0)
        );
        lineModMenu_penSettings_capStyleCombo->clear();
        lineModMenu_penSettings_capStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Square Cap", 0)
         << QApplication::translate("MainWindow", "Flat Cap", 0)
         << QApplication::translate("MainWindow", "Round Cap", 0)
        );
        lineModMenu_penSettings_joinStyleCombo->clear();
        lineModMenu_penSettings_joinStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bevel Join", 0)
         << QApplication::translate("MainWindow", "Miter Join", 0)
         << QApplication::translate("MainWindow", "Round Join", 0)
        );
        lineModMenu_updateButton->setText(QApplication::translate("MainWindow", "UPDATE!", 0));
        lineModMenu_deleteButton->setText(QApplication::translate("MainWindow", "Delete", 0));
        polygonModMenu_dimensions_endPointYLabel->setText(QApplication::translate("MainWindow", "Y", 0));
        polygonModMenu_penSettings_lineColorCombo->clear();
        polygonModMenu_penSettings_lineColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Grey", 0)
         << QApplication::translate("MainWindow", "Dark Grey", 0)
         << QApplication::translate("MainWindow", "Light Grey", 0)
        );
        polygonModMenu_penSettings_penStyleCombo->clear();
        polygonModMenu_penSettings_penStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid Line", 0)
         << QApplication::translate("MainWindow", "Dash Line", 0)
         << QApplication::translate("MainWindow", "Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot-Dot Line", 0)
        );
        polygonModMenu_penSettings_capStyleCombo->clear();
        polygonModMenu_penSettings_capStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Square Cap", 0)
         << QApplication::translate("MainWindow", "Flat Cap", 0)
         << QApplication::translate("MainWindow", "Round Cap", 0)
        );
        polygonModMenu_penSettings_joinStyleCombo->clear();
        polygonModMenu_penSettings_joinStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bevel Join", 0)
         << QApplication::translate("MainWindow", "Miter Join", 0)
         << QApplication::translate("MainWindow", "Round Join", 0)
        );
        polygonModMenu_penSettings_brushColorCombo->clear();
        polygonModMenu_penSettings_brushColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Gray", 0)
         << QApplication::translate("MainWindow", "Dark Gray", 0)
         << QApplication::translate("MainWindow", "Light Gray", 0)
        );
        polygonModMenu_penSettings_brushStyleCombo->clear();
        polygonModMenu_penSettings_brushStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid", 0)
         << QApplication::translate("MainWindow", "No Brush", 0)
         << QApplication::translate("MainWindow", "Dense 1", 0)
         << QApplication::translate("MainWindow", "Dense 2", 0)
         << QApplication::translate("MainWindow", "Dense 3", 0)
         << QApplication::translate("MainWindow", "Dense 4", 0)
         << QApplication::translate("MainWindow", "Dense 5", 0)
         << QApplication::translate("MainWindow", "Dense 6", 0)
         << QApplication::translate("MainWindow", "Dense 7", 0)
         << QApplication::translate("MainWindow", "Horizontal", 0)
         << QApplication::translate("MainWindow", "Vertical", 0)
         << QApplication::translate("MainWindow", "Cross", 0)
         << QApplication::translate("MainWindow", "Back Diag.", 0)
         << QApplication::translate("MainWindow", "Forward Diag.", 0)
         << QApplication::translate("MainWindow", "Diag. Cross", 0)
        );
        polygonModMenu_penSettingLabel->setText(QApplication::translate("MainWindow", "Pen Settings:", 0));
        polygonModMenu_dimensionLabel->setText(QApplication::translate("MainWindow", "Dimensions:", 0));
        polygonModMenu_dimensions_addPointButton->setText(QApplication::translate("MainWindow", "Add Point", 0));
        polygonModMenu_dimensions_movePointButton->setText(QApplication::translate("MainWindow", "Move Point", 0));
        polygonModMenu_dimensions_deletePointButton->setText(QApplication::translate("MainWindow", "Delete Point", 0));
        polygonModMenu_penSettings_lineColorLabel->setText(QApplication::translate("MainWindow", " Line Color :", 0));
        polygonModMenu_penSettings_lineWidthLabel->setText(QApplication::translate("MainWindow", " Line Width :", 0));
        polygonModMenu_penSettings_penStyleLabel->setText(QApplication::translate("MainWindow", "Pen Style :", 0));
        polygonModMenu_penSettings_capStyleLabel->setText(QApplication::translate("MainWindow", " Cap Style :", 0));
        polygonModMenu_penSettings_joinStyleLabel->setText(QApplication::translate("MainWindow", "Join Style :", 0));
        polygonModMenu_penSettings_brushColorLabel->setText(QApplication::translate("MainWindow", "Fill Color :", 0));
        polygonModMenu_penSettings_brushStyleLabel->setText(QApplication::translate("MainWindow", "FIll Style :", 0));
        polygonModMenu_updateButton->setText(QApplication::translate("MainWindow", "UPDATE!", 0));
        polygonModMenu_dimensions_startPointXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        polygonModMenu_deleteButton->setText(QApplication::translate("MainWindow", "Delete", 0));
        polyLineModMenu_dimensionLabel->setText(QApplication::translate("MainWindow", "Dimensions:", 0));
        polyLineModMenu_updateButton->setText(QApplication::translate("MainWindow", "UPDATE!", 0));
        polyLineModMenu_dimensions_endPointYLabel->setText(QApplication::translate("MainWindow", "Y", 0));
        polyLineModMenu_dimensions_startPointXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        polyLineModMenu_dimensions_addPointButton->setText(QApplication::translate("MainWindow", "Add Point", 0));
        polyLineModMenu_dimensions_movePointButton->setText(QApplication::translate("MainWindow", "Move Point", 0));
        polyLineModMenu_dimensions_deletePointButton->setText(QApplication::translate("MainWindow", "Delete Point", 0));
        polyLineModMenu_penSettings_lineColorCombo->clear();
        polyLineModMenu_penSettings_lineColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Grey", 0)
         << QApplication::translate("MainWindow", "Dark Grey", 0)
         << QApplication::translate("MainWindow", "Light Grey", 0)
        );
        polyLineModMenu_penSettings_penStyleCombo->clear();
        polyLineModMenu_penSettings_penStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid Line", 0)
         << QApplication::translate("MainWindow", "Dash Line", 0)
         << QApplication::translate("MainWindow", "Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot-Dot Line", 0)
        );
        polyLineModMenu_penSettings_capStyleCombo->clear();
        polyLineModMenu_penSettings_capStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Square Cap", 0)
         << QApplication::translate("MainWindow", "Flat Cap", 0)
         << QApplication::translate("MainWindow", "Round Cap", 0)
        );
        polyLineModMenu_penSettings_joinStyleCombo->clear();
        polyLineModMenu_penSettings_joinStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bevel Join", 0)
         << QApplication::translate("MainWindow", "Miter Join", 0)
         << QApplication::translate("MainWindow", "Round Join", 0)
        );
        polyLineModMenu_penSettings_lineColorLabel->setText(QApplication::translate("MainWindow", " Line Color :", 0));
        polyLineModMenu_penSettings_lineWidthLabel->setText(QApplication::translate("MainWindow", " Line Width :", 0));
        polyLineModMenu_penSettings_penStyleLabel->setText(QApplication::translate("MainWindow", "Pen Style :", 0));
        polyLineModMenu_penSettings_capStyleLabel->setText(QApplication::translate("MainWindow", " Cap Style :", 0));
        polyLineModMenu_penSettings_joinStyleLabel->setText(QApplication::translate("MainWindow", "Join Style :", 0));
        lineModMenu_penSettingLabel_3->setText(QApplication::translate("MainWindow", "Pen Settings:", 0));
        polyLineModMenu_deleteButton->setText(QApplication::translate("MainWindow", "Delete", 0));
        rectangleModMenu_updateButton->setText(QApplication::translate("MainWindow", "UPDATE!", 0));
        rectangleModMenu_dimensions_widthLabel->setText(QApplication::translate("MainWindow", "Width   :", 0));
        rectangleModMenu_dimensions_uuperLeftYLabel->setText(QApplication::translate("MainWindow", "Y", 0));
        rectangleModMenu_dimensions_upperLeftLabel->setText(QApplication::translate("MainWindow", "Upper Left :", 0));
        rectangleModMenu_penSettingLabel->setText(QApplication::translate("MainWindow", "Pen Settings:", 0));
        rectangleModMenu_dimensionLabel->setText(QApplication::translate("MainWindow", "Dimensions:", 0));
        rectangleModMenu_dimensions_upperLefttXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        rectangleModMenu_penSettings_lineColorLabel->setText(QApplication::translate("MainWindow", " Line Color :", 0));
        rectangleModMenu_penSettings_lineWidthLabel->setText(QApplication::translate("MainWindow", " Line Width :", 0));
        rectangleModMenu_penSettings_penStyleLabel->setText(QApplication::translate("MainWindow", "Pen Style :", 0));
        rectangleModMenu_penSettings_capStyleLabel->setText(QApplication::translate("MainWindow", " Cap Style :", 0));
        rectangleModMenu_penSettings_joinStyleLabel->setText(QApplication::translate("MainWindow", "Join Style :", 0));
        rectangleModMenu_penSettings_brushColorLabel->setText(QApplication::translate("MainWindow", "Fill Color :", 0));
        rectangleModMenu_penSettings_brushStyleLabel->setText(QApplication::translate("MainWindow", "FIll Style :", 0));
        rectangleModMenu_penSettings_lineColorCombo->clear();
        rectangleModMenu_penSettings_lineColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Grey", 0)
         << QApplication::translate("MainWindow", "Dark Grey", 0)
         << QApplication::translate("MainWindow", "Light Grey", 0)
        );
        rectangleModMenu_penSettings_penStyleCombo->clear();
        rectangleModMenu_penSettings_penStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid Line", 0)
         << QApplication::translate("MainWindow", "Dash Line", 0)
         << QApplication::translate("MainWindow", "Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot-Dot Line", 0)
        );
        rectangleModMenu_penSettings_capStyleCombo->clear();
        rectangleModMenu_penSettings_capStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Square Cap", 0)
         << QApplication::translate("MainWindow", "Flat Cap", 0)
         << QApplication::translate("MainWindow", "Round Cap", 0)
        );
        rectangleModMenu_penSettings_joinStyleCombo->clear();
        rectangleModMenu_penSettings_joinStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bevel Join", 0)
         << QApplication::translate("MainWindow", "Miter Join", 0)
         << QApplication::translate("MainWindow", "Round Join", 0)
        );
        rectangleModMenu_penSettings_brushColorCombo->clear();
        rectangleModMenu_penSettings_brushColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Gray", 0)
         << QApplication::translate("MainWindow", "Dark Gray", 0)
         << QApplication::translate("MainWindow", "Light Gray", 0)
        );
        rectangleModMenu_penSettings_brushStyleCombo->clear();
        rectangleModMenu_penSettings_brushStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid", 0)
         << QApplication::translate("MainWindow", "No Brush", 0)
         << QApplication::translate("MainWindow", "Dense 1", 0)
         << QApplication::translate("MainWindow", "Dense 2", 0)
         << QApplication::translate("MainWindow", "Dense 3", 0)
         << QApplication::translate("MainWindow", "Dense 4", 0)
         << QApplication::translate("MainWindow", "Dense 5", 0)
         << QApplication::translate("MainWindow", "Dense 6", 0)
         << QApplication::translate("MainWindow", "Dense 7", 0)
         << QApplication::translate("MainWindow", "Horizontal", 0)
         << QApplication::translate("MainWindow", "Vertical", 0)
         << QApplication::translate("MainWindow", "Cross", 0)
         << QApplication::translate("MainWindow", "Back Diag.", 0)
         << QApplication::translate("MainWindow", "Forward Diag.", 0)
         << QApplication::translate("MainWindow", "Diag. Cross", 0)
        );
        rectangleModMenu_dimensions_heighttLabel->setText(QApplication::translate("MainWindow", "Height  :", 0));
        rectangleModMenu_deleteButton->setText(QApplication::translate("MainWindow", "Delete", 0));
        squareModMenu_updateButton->setText(QApplication::translate("MainWindow", "UPDATE!", 0));
        squareModMenu_dimensions_widthLabel->setText(QApplication::translate("MainWindow", "Side Length :", 0));
        squareModMenu_dimensions_uuperLeftYLabel->setText(QApplication::translate("MainWindow", "Y", 0));
        squareModMenu_dimensions_upperLeftLabel->setText(QApplication::translate("MainWindow", "Upper Left :", 0));
        squareModMenu_penSettingLabel->setText(QApplication::translate("MainWindow", "Pen Settings:", 0));
        squareModMenu_dimensionLabel->setText(QApplication::translate("MainWindow", "Dimensions:", 0));
        squareModMenu_dimensions_upperLefttXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        squareModMenu_penSettings_lineColorLabel->setText(QApplication::translate("MainWindow", " Line Color :", 0));
        squareModMenu_penSettings_lineWidthLabel->setText(QApplication::translate("MainWindow", " Line Width :", 0));
        squareModMenu_penSettings_penStyleLabel->setText(QApplication::translate("MainWindow", "Pen Style :", 0));
        squareModMenu_penSettings_capStyleLabel->setText(QApplication::translate("MainWindow", " Cap Style :", 0));
        squaresquareModMenu_penSettings_joinStyleLabel->setText(QApplication::translate("MainWindow", "Join Style :", 0));
        squareModMenu_penSettings_brushColorLabel->setText(QApplication::translate("MainWindow", "Fill Color :", 0));
        squareModMenu_penSettings_brushStyleLabel->setText(QApplication::translate("MainWindow", "FIll Style :", 0));
        squareModMenu_penSettings_lineColorCombo->clear();
        squareModMenu_penSettings_lineColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Grey", 0)
         << QApplication::translate("MainWindow", "Dark Grey", 0)
         << QApplication::translate("MainWindow", "Light Grey", 0)
        );
        squareModMenu_penSettings_penStyleCombo->clear();
        squareModMenu_penSettings_penStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid Line", 0)
         << QApplication::translate("MainWindow", "Dash Line", 0)
         << QApplication::translate("MainWindow", "Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot-Dot Line", 0)
        );
        squareModMenu_penSettings_capStyleCombo->clear();
        squareModMenu_penSettings_capStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Square Cap", 0)
         << QApplication::translate("MainWindow", "Flat Cap", 0)
         << QApplication::translate("MainWindow", "Round Cap", 0)
        );
        squareModMenu_penSettings_joinStyleCombo->clear();
        squareModMenu_penSettings_joinStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bevel Join", 0)
         << QApplication::translate("MainWindow", "Miter Join", 0)
         << QApplication::translate("MainWindow", "Round Join", 0)
        );
        squareModMenu_penSettings_brushColorCombo->clear();
        squareModMenu_penSettings_brushColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Gray", 0)
         << QApplication::translate("MainWindow", "Dark Gray", 0)
         << QApplication::translate("MainWindow", "Light Gray", 0)
        );
        squareModMenu_penSettings_brushStyleCombo->clear();
        squareModMenu_penSettings_brushStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid", 0)
         << QApplication::translate("MainWindow", "No Brush", 0)
         << QApplication::translate("MainWindow", "Dense 1", 0)
         << QApplication::translate("MainWindow", "Dense 2", 0)
         << QApplication::translate("MainWindow", "Dense 3", 0)
         << QApplication::translate("MainWindow", "Dense 4", 0)
         << QApplication::translate("MainWindow", "Dense 5", 0)
         << QApplication::translate("MainWindow", "Dense 6", 0)
         << QApplication::translate("MainWindow", "Dense 7", 0)
         << QApplication::translate("MainWindow", "Horizontal", 0)
         << QApplication::translate("MainWindow", "Vertical", 0)
         << QApplication::translate("MainWindow", "Cross", 0)
         << QApplication::translate("MainWindow", "Back Diag.", 0)
         << QApplication::translate("MainWindow", "Forward Diag.", 0)
         << QApplication::translate("MainWindow", "Diag. Cross", 0)
        );
        squareModMenu_deleteButton->setText(QApplication::translate("MainWindow", "Delete", 0));
        textModMenu_dimensions_upperLefttXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        textModMenu_penSettingLabel->setText(QApplication::translate("MainWindow", "Text Settings :", 0));
        textModMenu_dimensions_uuperLeftYLabel->setText(QApplication::translate("MainWindow", "Y", 0));
        textModMenu_dimensionLabel->setText(QApplication::translate("MainWindow", "Dimensions:", 0));
        textModMenu_textSettings_textColorCombo->clear();
        textModMenu_textSettings_textColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Grey", 0)
         << QApplication::translate("MainWindow", "Dark Grey", 0)
         << QApplication::translate("MainWindow", "Light Grey", 0)
        );
        textModMenu_textSettings_fontCombo->clear();
        textModMenu_textSettings_fontCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "SansSerif", 0)
         << QApplication::translate("MainWindow", "Halvetica", 0)
         << QApplication::translate("MainWindow", "Serif", 0)
         << QApplication::translate("MainWindow", "Times", 0)
         << QApplication::translate("MainWindow", "TypeWriter", 0)
         << QApplication::translate("MainWindow", "Courier", 0)
         << QApplication::translate("MainWindow", "OldEnglish", 0)
         << QApplication::translate("MainWindow", "Decorative", 0)
         << QApplication::translate("MainWindow", "Monspace", 0)
         << QApplication::translate("MainWindow", "Fantasy", 0)
         << QApplication::translate("MainWindow", "Cursive", 0)
         << QApplication::translate("MainWindow", "Systen", 0)
        );
        textModMenu_textSettings_fontStyleCombo->clear();
        textModMenu_textSettings_fontStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Normal", 0)
         << QApplication::translate("MainWindow", "Italic", 0)
         << QApplication::translate("MainWindow", "Oblique", 0)
        );
        textModMenu_textSettings_fontWeightCombo->clear();
        textModMenu_textSettings_fontWeightCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Light", 0)
         << QApplication::translate("MainWindow", "Normal", 0)
         << QApplication::translate("MainWindow", "DemiBold", 0)
         << QApplication::translate("MainWindow", "Bold", 0)
         << QApplication::translate("MainWindow", "Black", 0)
        );
        textModMenu_dimensions_upperLeftLabel->setText(QApplication::translate("MainWindow", "Upper Left :", 0));
        textModMenu_updateButton->setText(QApplication::translate("MainWindow", "UPDATE!", 0));
        textModMenu_textSettings_textColorLabel->setText(QApplication::translate("MainWindow", "Text Color :", 0));
        textModMenu_textSettings_pointSizeLabel->setText(QApplication::translate("MainWindow", "Point Size :", 0));
        textModMenu_textSettings_fontLabel->setText(QApplication::translate("MainWindow", "        Font  :", 0));
        textModMenu_textSettings_fontStyleLabel->setText(QApplication::translate("MainWindow", "Font Style :", 0));
        textModMenu_textSettings_fontWeightLabel->setText(QApplication::translate("MainWindow", "FontWeight :", 0));
        textModMenu_textSettings_textEditLabel->setText(QApplication::translate("MainWindow", "Visible Text :", 0));
        textModMenu_deleteButton->setText(QApplication::translate("MainWindow", "Delete", 0));
        ModMenu_deleteScreenLabel->setText(QApplication::translate("MainWindow", "SHAPE HAS BEEN DELETED", 0));
        ModMenu_emptyScreenLabel->setText(QApplication::translate("MainWindow", "    THERE ARE NO SHAPES", 0));
        ModMenu_adminBlineLabel->setText(QApplication::translate("MainWindow", "YOU DO NOT HAVE PRIVLEDGES TO MODIFY SHAPES PLEASE LOGIN", 0));
        tabMenu->setTabText(tabMenu->indexOf(modTab), QApplication::translate("MainWindow", "Modify", 0));
        tabMenu->setTabToolTip(tabMenu->indexOf(modTab), QApplication::translate("MainWindow", "Modify Existing Shapes", 0));
        shapeTypeAddCombo->clear();
        shapeTypeAddCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Line", 0)
         << QApplication::translate("MainWindow", "Polyline", 0)
         << QApplication::translate("MainWindow", "Polygon", 0)
         << QApplication::translate("MainWindow", "Rectangle", 0)
         << QApplication::translate("MainWindow", "Square", 0)
         << QApplication::translate("MainWindow", "Ellipse", 0)
         << QApplication::translate("MainWindow", "Circle", 0)
         << QApplication::translate("MainWindow", "Text", 0)
        );
        shapeTypeAddLabel->setText(QApplication::translate("MainWindow", "Shape Type :", 0));
        lineAddMenu_dimensionLabel->setText(QApplication::translate("MainWindow", "Dimensions:", 0));
        lineAddMenu_penSettingLabel->setText(QApplication::translate("MainWindow", "Pen Settings:", 0));
        lineAddMenu_dimensions_startPointLabel->setText(QApplication::translate("MainWindow", "Start Point:", 0));
        lineAddMenu_dimensions_endPointLabel->setText(QApplication::translate("MainWindow", " End Point :", 0));
        lineAddMenu_dimensions_startPointXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        lineAddMenu_dimensions_endPointYLabel->setText(QApplication::translate("MainWindow", "Y", 0));
        lineAddMenu_dimensions_endPointYLabel_2->setText(QApplication::translate("MainWindow", "Y", 0));
        lineAddMenu_dimensions_endPointXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        lineAddMenu_penSettings_lineColorLabel->setText(QApplication::translate("MainWindow", " Line Color :", 0));
        lineAddMenu_penSettings_lineWidthLabel->setText(QApplication::translate("MainWindow", " Line Width :", 0));
        lineAddMenu_penSettings_penStyleLabel->setText(QApplication::translate("MainWindow", "Pen Style :", 0));
        lineAddMenu_penSettings_capStyleLabel->setText(QApplication::translate("MainWindow", " Cap Style :", 0));
        lineAddMenu_penSettings_joinStyleLabel->setText(QApplication::translate("MainWindow", "Join Style :", 0));
        lineAddMenu_penSettings_lineColorCombo->clear();
        lineAddMenu_penSettings_lineColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Grey", 0)
         << QApplication::translate("MainWindow", "Dark Grey", 0)
         << QApplication::translate("MainWindow", "Light Grey", 0)
        );
        lineAddMenu_penSettings_penStyleCombo->clear();
        lineAddMenu_penSettings_penStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid Line", 0)
         << QApplication::translate("MainWindow", "Dash Line", 0)
         << QApplication::translate("MainWindow", "Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot-Dot Line", 0)
        );
        lineAddMenu_penSettings_capStyleCombo->clear();
        lineAddMenu_penSettings_capStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Square Cap", 0)
         << QApplication::translate("MainWindow", "Flat Cap", 0)
         << QApplication::translate("MainWindow", "Round Cap", 0)
        );
        lineAddMenu_penSettings_joinStyleCombo->clear();
        lineAddMenu_penSettings_joinStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bevel Join", 0)
         << QApplication::translate("MainWindow", "Miter Join", 0)
         << QApplication::translate("MainWindow", "Round Join", 0)
        );
        lineAddMenu_createButton->setText(QApplication::translate("MainWindow", "CREATE!", 0));
        polyLineAddMenu_dimensionLabel->setText(QApplication::translate("MainWindow", "Dimensions:", 0));
        polyLineAddMenu_createButton->setText(QApplication::translate("MainWindow", "CREATE!", 0));
        polyLineAddMenu_dimensions_endPointYLabel->setText(QApplication::translate("MainWindow", "Y", 0));
        polyLineAddMenu_dimensions_startPointXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        polyLineAddMenu_dimensions_addPointButton->setText(QApplication::translate("MainWindow", "Add Point", 0));
        polyLineAddMenu_dimensions_movePointButton->setText(QApplication::translate("MainWindow", "Move Point", 0));
        polyLineAddMenu_dimensions_deletePointButton->setText(QApplication::translate("MainWindow", "Delete Point", 0));
        polyLineAddMenu_penSettings_lineColorCombo->clear();
        polyLineAddMenu_penSettings_lineColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Grey", 0)
         << QApplication::translate("MainWindow", "Dark Grey", 0)
         << QApplication::translate("MainWindow", "Light Grey", 0)
        );
        polyLineAddMenu_penSettings_penStyleCombo->clear();
        polyLineAddMenu_penSettings_penStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid Line", 0)
         << QApplication::translate("MainWindow", "Dash Line", 0)
         << QApplication::translate("MainWindow", "Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot-Dot Line", 0)
        );
        polyLineAddMenu_penSettings_capStyleCombo->clear();
        polyLineAddMenu_penSettings_capStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Square Cap", 0)
         << QApplication::translate("MainWindow", "Flat Cap", 0)
         << QApplication::translate("MainWindow", "Round Cap", 0)
        );
        polyLineAddMenu_penSettings_joinStyleCombo->clear();
        polyLineAddMenu_penSettings_joinStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bevel Join", 0)
         << QApplication::translate("MainWindow", "Miter Join", 0)
         << QApplication::translate("MainWindow", "Round Join", 0)
        );
        polyLineAddMenu_penSettings_lineColorLabel->setText(QApplication::translate("MainWindow", " Line Color :", 0));
        polyLineAddMenu_penSettings_lineWidthLabel->setText(QApplication::translate("MainWindow", " Line Width :", 0));
        polyLineAddMenu_penSettings_penStyleLabel->setText(QApplication::translate("MainWindow", "Pen Style :", 0));
        polyLineAddMenu_penSettings_capStyleLabel->setText(QApplication::translate("MainWindow", " Cap Style :", 0));
        polyLineAddMenu_penSettings_joinStyleLabel->setText(QApplication::translate("MainWindow", "Join Style :", 0));
        lineAddMenu_penSettingLabel_2->setText(QApplication::translate("MainWindow", "Pen Settings:", 0));
        polygonAddMenu_dimensions_endPointYLabel->setText(QApplication::translate("MainWindow", "Y", 0));
        polygonAddMenu_penSettings_lineColorCombo->clear();
        polygonAddMenu_penSettings_lineColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Grey", 0)
         << QApplication::translate("MainWindow", "Dark Grey", 0)
         << QApplication::translate("MainWindow", "Light Grey", 0)
        );
        polygonAddMenu_penSettings_penStyleCombo->clear();
        polygonAddMenu_penSettings_penStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid Line", 0)
         << QApplication::translate("MainWindow", "Dash Line", 0)
         << QApplication::translate("MainWindow", "Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot-Dot Line", 0)
        );
        polygonAddMenu_penSettings_capStyleCombo->clear();
        polygonAddMenu_penSettings_capStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Square Cap", 0)
         << QApplication::translate("MainWindow", "Flat Cap", 0)
         << QApplication::translate("MainWindow", "Round Cap", 0)
        );
        polygonAddMenu_penSettings_joinStyleCombo->clear();
        polygonAddMenu_penSettings_joinStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bevel Join", 0)
         << QApplication::translate("MainWindow", "Miter Join", 0)
         << QApplication::translate("MainWindow", "Round Join", 0)
        );
        polygonAddMenu_penSettings_brushColorCombo->clear();
        polygonAddMenu_penSettings_brushColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Gray", 0)
         << QApplication::translate("MainWindow", "Dark Gray", 0)
         << QApplication::translate("MainWindow", "Light Gray", 0)
        );
        polygonAddMenu_penSettings_brushStyleCombo->clear();
        polygonAddMenu_penSettings_brushStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid", 0)
         << QApplication::translate("MainWindow", "No Brush", 0)
         << QApplication::translate("MainWindow", "Dense 1", 0)
         << QApplication::translate("MainWindow", "Dense 2", 0)
         << QApplication::translate("MainWindow", "Dense 3", 0)
         << QApplication::translate("MainWindow", "Dense 4", 0)
         << QApplication::translate("MainWindow", "Dense 5", 0)
         << QApplication::translate("MainWindow", "Dense 6", 0)
         << QApplication::translate("MainWindow", "Dense 7", 0)
         << QApplication::translate("MainWindow", "Horizontal", 0)
         << QApplication::translate("MainWindow", "Vertical", 0)
         << QApplication::translate("MainWindow", "Cross", 0)
         << QApplication::translate("MainWindow", "Back Diag.", 0)
         << QApplication::translate("MainWindow", "Forward Diag.", 0)
         << QApplication::translate("MainWindow", "Diag. Cross", 0)
        );
        polygonAddMenu_penSettingLabel->setText(QApplication::translate("MainWindow", "Pen Settings:", 0));
        polygonAddMenu_dimensionLabel->setText(QApplication::translate("MainWindow", "Dimensions:", 0));
        polygonAddMenu_dimensions_addPointButton->setText(QApplication::translate("MainWindow", "Add Point", 0));
        polygonAddMenu_dimensions_movePointButton->setText(QApplication::translate("MainWindow", "Move Point", 0));
        polygonAddMenu_dimensions_deletePointButton->setText(QApplication::translate("MainWindow", "Delete Point", 0));
        polygonAddMenu_penSettings_lineColorLabel->setText(QApplication::translate("MainWindow", " Line Color :", 0));
        polygonAddMenu_penSettings_lineWidthLabel->setText(QApplication::translate("MainWindow", " Line Width :", 0));
        polygonAddMenu_penSettings_penStyleLabel->setText(QApplication::translate("MainWindow", "Pen Style :", 0));
        polygonAddMenu_penSettings_capStyleLabel->setText(QApplication::translate("MainWindow", " Cap Style :", 0));
        polygonAddMenu_penSettings_joinStyleLabel->setText(QApplication::translate("MainWindow", "Join Style :", 0));
        polygonAddMenu_penSettings_brushColorLabel->setText(QApplication::translate("MainWindow", "Fill Color :", 0));
        polygonAddMenu_penSettings_brushStyleLabel->setText(QApplication::translate("MainWindow", "FIll Style :", 0));
        polygonAddMenu_createButton->setText(QApplication::translate("MainWindow", "CREATE!", 0));
        polygonAddMenu_dimensions_startPointXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        rectangleAddMenu_createButton->setText(QApplication::translate("MainWindow", "CREATE!", 0));
        rectangleAddMenu_dimensions_widthLabel->setText(QApplication::translate("MainWindow", "Width   :", 0));
        rectangleAddMenu_dimensions_uuperLeftYLabel->setText(QApplication::translate("MainWindow", "Y", 0));
        rectangleAddMenu_dimensions_upperLeftLabel->setText(QApplication::translate("MainWindow", "Upper Left :", 0));
        rectangleAddMenu_penSettingLabel->setText(QApplication::translate("MainWindow", "Pen Settings:", 0));
        rectangleAddMenu_dimensionLabel->setText(QApplication::translate("MainWindow", "Dimensions:", 0));
        rectangleAddMenu_dimensions_upperLefttXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        rectangleAddMenu_penSettings_lineColorLabel->setText(QApplication::translate("MainWindow", " Line Color :", 0));
        rectangleAddMenu_penSettings_lineWidthLabel->setText(QApplication::translate("MainWindow", " Line Width :", 0));
        rectangleAddMenu_penSettings_penStyleLabel->setText(QApplication::translate("MainWindow", "Pen Style :", 0));
        rectangleAddMenu_penSettings_capStyleLabel->setText(QApplication::translate("MainWindow", " Cap Style :", 0));
        rectangleAddMenu_penSettings_joinStyleLabel->setText(QApplication::translate("MainWindow", "Join Style :", 0));
        rectangleAddMenu_penSettings_brushColorLabel->setText(QApplication::translate("MainWindow", "Fill Color :", 0));
        rectangleAddMenu_penSettings_brushStyleLabel->setText(QApplication::translate("MainWindow", "FIll Style :", 0));
        rectangleAddMenu_penSettings_lineColorCombo->clear();
        rectangleAddMenu_penSettings_lineColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Grey", 0)
         << QApplication::translate("MainWindow", "Dark Grey", 0)
         << QApplication::translate("MainWindow", "Light Grey", 0)
        );
        rectangleAddMenu_penSettings_penStyleCombo->clear();
        rectangleAddMenu_penSettings_penStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid Line", 0)
         << QApplication::translate("MainWindow", "Dash Line", 0)
         << QApplication::translate("MainWindow", "Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot-Dot Line", 0)
        );
        rectangleAddMenu_penSettings_capStyleCombo->clear();
        rectangleAddMenu_penSettings_capStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Square Cap", 0)
         << QApplication::translate("MainWindow", "Flat Cap", 0)
         << QApplication::translate("MainWindow", "Round Cap", 0)
        );
        rectangleAddMenu_penSettings_joinStyleCombo->clear();
        rectangleAddMenu_penSettings_joinStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bevel Join", 0)
         << QApplication::translate("MainWindow", "Miter Join", 0)
         << QApplication::translate("MainWindow", "Round Join", 0)
        );
        rectangleAddMenu_penSettings_brushColorCombo->clear();
        rectangleAddMenu_penSettings_brushColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Gray", 0)
         << QApplication::translate("MainWindow", "Dark Gray", 0)
         << QApplication::translate("MainWindow", "Light Gray", 0)
        );
        rectangleAddMenu_penSettings_brushStyleCombo->clear();
        rectangleAddMenu_penSettings_brushStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid", 0)
         << QApplication::translate("MainWindow", "No Brush", 0)
         << QApplication::translate("MainWindow", "Dense 1", 0)
         << QApplication::translate("MainWindow", "Dense 2", 0)
         << QApplication::translate("MainWindow", "Dense 3", 0)
         << QApplication::translate("MainWindow", "Dense 4", 0)
         << QApplication::translate("MainWindow", "Dense 5", 0)
         << QApplication::translate("MainWindow", "Dense 6", 0)
         << QApplication::translate("MainWindow", "Dense 7", 0)
         << QApplication::translate("MainWindow", "Horizontal", 0)
         << QApplication::translate("MainWindow", "Vertical", 0)
         << QApplication::translate("MainWindow", "Cross", 0)
         << QApplication::translate("MainWindow", "Back Diag.", 0)
         << QApplication::translate("MainWindow", "Forward Diag.", 0)
         << QApplication::translate("MainWindow", "Diag. Cross", 0)
        );
        rectangleAddMenu_dimensions_heighttLabel->setText(QApplication::translate("MainWindow", "Height  :", 0));
        squareModMenu_updateButton_2->setText(QApplication::translate("MainWindow", "CREATE!", 0));
        squareAddMenu_dimensions_widthLabel->setText(QApplication::translate("MainWindow", "Side Length :", 0));
        squareAddMenu_dimensions_uuperLeftYLabel->setText(QApplication::translate("MainWindow", "Y", 0));
        squareAddMenu_dimensions_upperLeftLabel->setText(QApplication::translate("MainWindow", "Upper Left :", 0));
        squareAddMenu_penSettingLabel->setText(QApplication::translate("MainWindow", "Pen Settings:", 0));
        squareAddMenu_dimensionLabel->setText(QApplication::translate("MainWindow", "Dimensions:", 0));
        squareAddMenu_dimensions_upperLefttXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        squareAddMenu_penSettings_lineColorLabel->setText(QApplication::translate("MainWindow", " Line Color :", 0));
        squareAddMenu_penSettings_lineWidthLabel->setText(QApplication::translate("MainWindow", " Line Width :", 0));
        squareAddMenu_penSettings_penStyleLabel->setText(QApplication::translate("MainWindow", "Pen Style :", 0));
        squareAddMenu_penSettings_capStyleLabel->setText(QApplication::translate("MainWindow", " Cap Style :", 0));
        squaresquareAddMenu_penSettings_joinStyleLabel->setText(QApplication::translate("MainWindow", "Join Style :", 0));
        squareAddMenu_penSettings_brushColorLabel->setText(QApplication::translate("MainWindow", "Fill Color :", 0));
        squareAddMenu_penSettings_brushStyleLabel->setText(QApplication::translate("MainWindow", "FIll Style :", 0));
        squareAddMenu_penSettings_lineColorCombo->clear();
        squareAddMenu_penSettings_lineColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Grey", 0)
         << QApplication::translate("MainWindow", "Dark Grey", 0)
         << QApplication::translate("MainWindow", "Light Grey", 0)
        );
        squareAddMenu_penSettings_penStyleCombo->clear();
        squareAddMenu_penSettings_penStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid Line", 0)
         << QApplication::translate("MainWindow", "Dash Line", 0)
         << QApplication::translate("MainWindow", "Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot-Dot Line", 0)
        );
        squareAddMenu_penSettings_capStyleCombo->clear();
        squareAddMenu_penSettings_capStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Square Cap", 0)
         << QApplication::translate("MainWindow", "Flat Cap", 0)
         << QApplication::translate("MainWindow", "Round Cap", 0)
        );
        squareAddMenu_penSettings_joinStyleCombo->clear();
        squareAddMenu_penSettings_joinStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bevel Join", 0)
         << QApplication::translate("MainWindow", "Miter Join", 0)
         << QApplication::translate("MainWindow", "Round Join", 0)
        );
        squareAddMenu_penSettings_brushColorCombo->clear();
        squareAddMenu_penSettings_brushColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Gray", 0)
         << QApplication::translate("MainWindow", "Dark Gray", 0)
         << QApplication::translate("MainWindow", "Light Gray", 0)
        );
        squareAddMenu_penSettings_brushStyleCombo->clear();
        squareAddMenu_penSettings_brushStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid", 0)
         << QApplication::translate("MainWindow", "No Brush", 0)
         << QApplication::translate("MainWindow", "Dense 1", 0)
         << QApplication::translate("MainWindow", "Dense 2", 0)
         << QApplication::translate("MainWindow", "Dense 3", 0)
         << QApplication::translate("MainWindow", "Dense 4", 0)
         << QApplication::translate("MainWindow", "Dense 5", 0)
         << QApplication::translate("MainWindow", "Dense 6", 0)
         << QApplication::translate("MainWindow", "Dense 7", 0)
         << QApplication::translate("MainWindow", "Horizontal", 0)
         << QApplication::translate("MainWindow", "Vertical", 0)
         << QApplication::translate("MainWindow", "Cross", 0)
         << QApplication::translate("MainWindow", "Back Diag.", 0)
         << QApplication::translate("MainWindow", "Forward Diag.", 0)
         << QApplication::translate("MainWindow", "Diag. Cross", 0)
        );
        cicleAddMenu_dimensions_originXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        circleAddMenu_dimensions_radiusLabel->setText(QApplication::translate("MainWindow", "Radius  :", 0));
        circleAddMenu_penSettingLabel->setText(QApplication::translate("MainWindow", "Pen Settings:", 0));
        circleAddMenu_dimensions_originYLabel->setText(QApplication::translate("MainWindow", "Y", 0));
        circleAddMenu_dimensionLabel->setText(QApplication::translate("MainWindow", "Dimensions:", 0));
        circleAddMenu_penSettings_lineColorCombo->clear();
        circleAddMenu_penSettings_lineColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Grey", 0)
         << QApplication::translate("MainWindow", "Dark Grey", 0)
         << QApplication::translate("MainWindow", "Light Grey", 0)
        );
        circleAddMenu_penSettings_penStyleCombo->clear();
        circleAddMenu_penSettings_penStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid Line", 0)
         << QApplication::translate("MainWindow", "Dash Line", 0)
         << QApplication::translate("MainWindow", "Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot-Dot Line", 0)
        );
        circleAddMenu_penSettings_capStyleCombo->clear();
        circleAddMenu_penSettings_capStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Square Cap", 0)
         << QApplication::translate("MainWindow", "Flat Cap", 0)
         << QApplication::translate("MainWindow", "Round Cap", 0)
        );
        circleAddMenu_penSettings_joinStyleCombo->clear();
        circleAddMenu_penSettings_joinStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bevel Join", 0)
         << QApplication::translate("MainWindow", "Miter Join", 0)
         << QApplication::translate("MainWindow", "Round Join", 0)
        );
        circleAddMenu_penSettings_brushColorCombo->clear();
        circleAddMenu_penSettings_brushColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Gray", 0)
         << QApplication::translate("MainWindow", "Dark Gray", 0)
         << QApplication::translate("MainWindow", "Light Gray", 0)
        );
        circleAddMenu_penSettings_brushStyleCombo->clear();
        circleAddMenu_penSettings_brushStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid", 0)
         << QApplication::translate("MainWindow", "No Brush", 0)
         << QApplication::translate("MainWindow", "Dense 1", 0)
         << QApplication::translate("MainWindow", "Dense 2", 0)
         << QApplication::translate("MainWindow", "Dense 3", 0)
         << QApplication::translate("MainWindow", "Dense 4", 0)
         << QApplication::translate("MainWindow", "Dense 5", 0)
         << QApplication::translate("MainWindow", "Dense 6", 0)
         << QApplication::translate("MainWindow", "Dense 7", 0)
         << QApplication::translate("MainWindow", "Horizontal", 0)
         << QApplication::translate("MainWindow", "Vertical", 0)
         << QApplication::translate("MainWindow", "Cross", 0)
         << QApplication::translate("MainWindow", "Back Diag.", 0)
         << QApplication::translate("MainWindow", "Forward Diag.", 0)
         << QApplication::translate("MainWindow", "Diag. Cross", 0)
        );
        circleAddMenu_dimensions_upperLeftLabel->setText(QApplication::translate("MainWindow", "Origin  :", 0));
        circleAddMenu_createButton->setText(QApplication::translate("MainWindow", "CREATE!", 0));
        circleAddMenu_penSettings_lineColorLabel->setText(QApplication::translate("MainWindow", " Line Color :", 0));
        circleAddMenu_penSettings_lineWidthLabel->setText(QApplication::translate("MainWindow", " Line Width :", 0));
        circleAddMenu_penSettings_penStyleLabel->setText(QApplication::translate("MainWindow", "Pen Style :", 0));
        circleAddMenu_penSettings_capStyleLabel->setText(QApplication::translate("MainWindow", " Cap Style :", 0));
        circleAddMenu_penSettings_joinStyleLabel->setText(QApplication::translate("MainWindow", "Join Style :", 0));
        circleAddMenu_penSettings_brushColorLabel->setText(QApplication::translate("MainWindow", "Fill Color :", 0));
        circleAddMenu_penSettings_brushStyleLabel->setText(QApplication::translate("MainWindow", "FIll Style :", 0));
        ellipseAddMenu_dimensions_heighttLabel->setText(QApplication::translate("MainWindow", "RY Size    :", 0));
        ellipseAddMenu_dimensions_upperLefttXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        ellipseAddMenu_dimensions_widthLabel->setText(QApplication::translate("MainWindow", "RX Size    :", 0));
        ellipseAddMenu_penSettingLabel->setText(QApplication::translate("MainWindow", "Pen Settings:", 0));
        ellipseAddMenu_dimensions_uuperLeftYLabel->setText(QApplication::translate("MainWindow", "Y", 0));
        ellipseAddMenu_dimensionLabel->setText(QApplication::translate("MainWindow", "Dimensions:", 0));
        ellipseAddMenu_penSettings_lineColorCombo->clear();
        ellipseAddMenu_penSettings_lineColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Grey", 0)
         << QApplication::translate("MainWindow", "Dark Grey", 0)
         << QApplication::translate("MainWindow", "Light Grey", 0)
        );
        ellipseAddMenu_penSettings_penStyleCombo->clear();
        ellipseAddMenu_penSettings_penStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid Line", 0)
         << QApplication::translate("MainWindow", "Dash Line", 0)
         << QApplication::translate("MainWindow", "Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot-Dot Line", 0)
        );
        ellipseAddMenu_penSettings_capStyleCombo->clear();
        ellipseAddMenu_penSettings_capStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Square Cap", 0)
         << QApplication::translate("MainWindow", "Flat Cap", 0)
         << QApplication::translate("MainWindow", "Round Cap", 0)
        );
        ellipseAddMenu_penSettings_joinStyleCombo->clear();
        ellipseAddMenu_penSettings_joinStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bevel Join", 0)
         << QApplication::translate("MainWindow", "Miter Join", 0)
         << QApplication::translate("MainWindow", "Round Join", 0)
        );
        ellipseAddMenu_penSettings_brushColorCombo->clear();
        ellipseAddMenu_penSettings_brushColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Gray", 0)
         << QApplication::translate("MainWindow", "Dark Gray", 0)
         << QApplication::translate("MainWindow", "Light Gray", 0)
        );
        ellipseAddMenu_penSettings_brushStyleCombo->clear();
        ellipseAddMenu_penSettings_brushStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid", 0)
         << QApplication::translate("MainWindow", "No Brush", 0)
         << QApplication::translate("MainWindow", "Dense 1", 0)
         << QApplication::translate("MainWindow", "Dense 2", 0)
         << QApplication::translate("MainWindow", "Dense 3", 0)
         << QApplication::translate("MainWindow", "Dense 4", 0)
         << QApplication::translate("MainWindow", "Dense 5", 0)
         << QApplication::translate("MainWindow", "Dense 6", 0)
         << QApplication::translate("MainWindow", "Dense 7", 0)
         << QApplication::translate("MainWindow", "Horizontal", 0)
         << QApplication::translate("MainWindow", "Vertical", 0)
         << QApplication::translate("MainWindow", "Cross", 0)
         << QApplication::translate("MainWindow", "Back Diag.", 0)
         << QApplication::translate("MainWindow", "Forward Diag.", 0)
         << QApplication::translate("MainWindow", "Diag. Cross", 0)
        );
        ellipseAddMenu_dimensions_originLabel->setText(QApplication::translate("MainWindow", "       Origin :", 0));
        ellipseAddMenu_createButton->setText(QApplication::translate("MainWindow", "CREATE!", 0));
        ellipseAddMenu_penSettings_lineColorLabel->setText(QApplication::translate("MainWindow", " Line Color :", 0));
        ellipseAddMenu_penSettings_lineWidthLabel->setText(QApplication::translate("MainWindow", " Line Width :", 0));
        ellipseAddMenu_penSettings_penStyleLabel->setText(QApplication::translate("MainWindow", "Pen Style :", 0));
        ellipseAddMenu_penSettings_capStyleLabel->setText(QApplication::translate("MainWindow", " Cap Style :", 0));
        ellipseAddMenu_penSettings_joinStyleLabel->setText(QApplication::translate("MainWindow", "Join Style :", 0));
        ellipseAddMenu_penSettings_brushColorLabel->setText(QApplication::translate("MainWindow", "Fill Color :", 0));
        ellipseAddMenu_penSettings_brushStyleLabel->setText(QApplication::translate("MainWindow", "FIll Style :", 0));
        textAddMenu_dimensions_upperLefttXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        textAddMenu_penSettingLabel->setText(QApplication::translate("MainWindow", "Text Settings :", 0));
        textAddMenu_dimensions_uuperLeftYLabel->setText(QApplication::translate("MainWindow", "Y", 0));
        textAddMenu_dimensionLabel->setText(QApplication::translate("MainWindow", "Dimensions:", 0));
        textAddMenu_textSettings_textColorCombo->clear();
        textAddMenu_textSettings_textColorCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "Black", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "Dark Cyan", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Dark Red", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Dark Magenta", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Dark Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Dark Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Dark Blue", 0)
         << QApplication::translate("MainWindow", "Grey", 0)
         << QApplication::translate("MainWindow", "Dark Grey", 0)
         << QApplication::translate("MainWindow", "Light Grey", 0)
        );
        textAddMenu_textSettings_fontCombo->clear();
        textAddMenu_textSettings_fontCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "SansSerif", 0)
         << QApplication::translate("MainWindow", "Halvetica", 0)
         << QApplication::translate("MainWindow", "Serif", 0)
         << QApplication::translate("MainWindow", "Times", 0)
         << QApplication::translate("MainWindow", "TypeWriter", 0)
         << QApplication::translate("MainWindow", "Courier", 0)
         << QApplication::translate("MainWindow", "OldEnglish", 0)
         << QApplication::translate("MainWindow", "Decorative", 0)
         << QApplication::translate("MainWindow", "Monspace", 0)
         << QApplication::translate("MainWindow", "Fantasy", 0)
         << QApplication::translate("MainWindow", "Cursive", 0)
         << QApplication::translate("MainWindow", "Systen", 0)
        );
        textAddMenu_textSettings_fontStyleCombo->clear();
        textAddMenu_textSettings_fontStyleCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Normal", 0)
         << QApplication::translate("MainWindow", "Italic", 0)
         << QApplication::translate("MainWindow", "Oblique", 0)
        );
        textAddMenu_textSettings_fontWeightCombo->clear();
        textAddMenu_textSettings_fontWeightCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Light", 0)
         << QApplication::translate("MainWindow", "Normal", 0)
         << QApplication::translate("MainWindow", "DemiBold", 0)
         << QApplication::translate("MainWindow", "Bold", 0)
         << QApplication::translate("MainWindow", "Black", 0)
        );
        textAddMenu_dimensions_upperLeftLabel->setText(QApplication::translate("MainWindow", "Upper Left :", 0));
        textAddMenu_createButton->setText(QApplication::translate("MainWindow", "CREATE!", 0));
        textAddMenu_textSettings_textColorLabel->setText(QApplication::translate("MainWindow", "Text Color :", 0));
        textAddMenu_textSettings_pointSizeLabel->setText(QApplication::translate("MainWindow", "Point Size :", 0));
        textAddMenu_textSettings_fontLabel->setText(QApplication::translate("MainWindow", "        Font  :", 0));
        textAddMenu_textSettings_fontStyleLabel->setText(QApplication::translate("MainWindow", "Font Style :", 0));
        textAddMenu_textSettings_fontWeightLabel->setText(QApplication::translate("MainWindow", "FontWeight :", 0));
        textAddMenu_textSettings_textEditLabel->setText(QApplication::translate("MainWindow", "Visible Text :", 0));
        addMenu_adminBlineLabel->setText(QApplication::translate("MainWindow", "YOU DO NOT HAVE PRIVLEDGES TO ADD SHAPES PLEASE LOGIN", 0));
        tabMenu->setTabText(tabMenu->indexOf(addShapeTab), QApplication::translate("MainWindow", "Add Shape", 0));
        tabMenu->setTabToolTip(tabMenu->indexOf(addShapeTab), QApplication::translate("MainWindow", "Add New Shapes", 0));
        shapeReportRefreshButton->setText(QApplication::translate("MainWindow", "REFRESH", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Report by ID", 0));
        perimeterReportRefreshButton->setText(QApplication::translate("MainWindow", "REFRESH", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "by Perimeter", 0));
        areaReportRefreshButton->setText(QApplication::translate("MainWindow", "REFRESH", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "by Area", 0));
        tabMenu->setTabText(tabMenu->indexOf(reportTab), QApplication::translate("MainWindow", "Shape Tables", 0));
        tabMenu->setTabToolTip(tabMenu->indexOf(reportTab), QApplication::translate("MainWindow", "Review Shape Reports", 0));
        helpBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">2D Modeler - Help File</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">[ADMIN ONLY]</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decor"
                        "ation: underline;\">1. Modify: Allows the user to modify or remove existing shapes.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A)Select the shape by either entering its ID# or scrolling through the</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    &quot;Shape ID&quot; spinbox.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    i) Enter and the select the attributes you wish to change.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">       1)Line Color - the color which the pen will be drawn with.</p>\n"
"<p style=\"-qt-"
                        "paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">       2)Line Width - the width of the pen to be drawn with.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">       3)Pen Style - the style of the pen IE: solidline, dash line, etc.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">       4)Cap Style - the style of the cap fo"
                        "r the pen IE: square, round, etc.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">       5)Join Style - the style of the join for the pen IE: bevel, miter, etc.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">       6)Fill Color - the color which will be used to fill the shape.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-i"
                        "ndent:0; text-indent:0px;\">       7)Brush Style - the pattern for the fill color IE: dense, diagonal, etc.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    ii) Use &quot;UPDATE!&quot; to finalize changes to the selected shape.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    iii)Use Delete to remove the shape from the modeler.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-b"
                        "ottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    iV)PolyLine and polygon shapes can have unlimited points.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">         - Points can be added using the &quot;Add Point&quot; button after</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">           entering coordinates.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">         - Points can be modified by first selecting a point in the list,</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">            enteri"
                        "ng coordinates, and using the &quot;Move Point&quot; button.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">          - Points can be removed by first selecting a point in the list,</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">             and using the &quot;Delete Point&quot; button.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">[ADMIN ONLY]</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0"
                        "; text-indent:0px;\"><span style=\" text-decoration: underline;\">2)Add Shape: Allows the user to add new shapes to the modeler.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; text-decoration: underline;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A)Line</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    i)A simple line with one start point and one end point.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">B)PolyLine</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; ma"
                        "rgin-right:0px; -qt-block-indent:0; text-indent:0px;\">    i)A complex line with multiple points.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">C)Polygon</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    i)A complex shape with multiple points.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">D)Rectangle</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    i)A simples shape c"
                        "omposed of one upper left coordinate, width, and</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">       height.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">E)Square</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    i)Same as a rectangle with one upper left coordinate and side length.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">F)Ellipse</p>\n"
"<p style=\" margin-top"
                        ":0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    i)A simple shape composed of one origin point and two radial offsets</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">       RX and RY.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">G)Circle</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">     i)Same as an ellipse with origin coordinate and radius length.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom"
                        ":0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">H)Text</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">     i)A string of text set with one upper left coordinate and text.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">[GUEST ACCESS]</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">3)Shape Tables: Allows the users to review the shapes in the modeler.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; text-decoration: underline;\"><br /></p>\n"
"<p style=\" margi"
                        "n-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">To view a report use the &quot;REFRESH&quot; button at the top of its menu.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; text-decoration: underline;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A)Report by ID</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    i)Displays a report of shapes sorted by ID# with all properties.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    ii)Represented in a tree hierarchy.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-inden"
                        "t:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">B)by Perimeter</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    i)Displays a report of shape's calculated perimeters.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    ii)Represented in a table format.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">C)by Area</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    i)Displays a report of shape's calculated areas.</p>\n"
"<p style=\" margin-to"
                        "p:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    ii)Represented in a table format.</p></body></html>", 0));
        helpDoneButton->setText(QApplication::translate("MainWindow", "GOT IT. THANKS!", 0));
        loginTitleLabel->setText(QApplication::translate("MainWindow", "ADMIN LOGIN:2D Modeler", 0));
        loginUserLabel->setText(QApplication::translate("MainWindow", "User:", 0));
        loginPasswordLabel->setText(QApplication::translate("MainWindow", "Password:", 0));
        loginUserButton->setText(QApplication::translate("MainWindow", "LOGIN", 0));
        loginCancelButton->setText(QApplication::translate("MainWindow", "CANCEL", 0));
        loginMenu_invalidInputLabel->setText(QApplication::translate("MainWindow", "Input Invalid - Login Failed", 0));
        userLogin_logoutButton->setText(QApplication::translate("MainWindow", "LOGOUT", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuAdmin->setTitle(QApplication::translate("MainWindow", "Admin", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
