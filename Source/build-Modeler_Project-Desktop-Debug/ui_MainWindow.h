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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
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
    QWidget *tab_2;
    QWidget *tab;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QTreeWidget *treeWidget;
    QWidget *tab_4;
    QTableWidget *tableWidget;
    QWidget *tab_5;
    QTableWidget *tableWidget_2;
    canvas *renderCanvas;
    QFrame *frame;
    QWidget *textModMenu;
    QLabel *rectangleModMenu_dimensions_heighttLabel_2;
    QLabel *rectangleModMenu_dimensions_upperLefttXLabel_2;
    QLabel *rectangleModMenu_dimensions_widthLabel_2;
    QLabel *rectangleModMenu_penSettingLabel_2;
    QLineEdit *rectangleModMenu_dimensions_height_2;
    QLabel *rectangleModMenu_dimensions_uuperLeftYLabel_2;
    QLineEdit *rectangleModMenu_dimensions_width_2;
    QLabel *rectangleModMenu_dimensionLabel_2;
    QFrame *rectangleModMenu_penSettings_formatLineBot_2;
    QFrame *rectangleModMenu_penSettings_formatLineTop_2;
    QFrame *rectangleModMenu_dimensions_formatLine_2;
    QWidget *verticalLayoutWidget_19;
    QVBoxLayout *verticalLayout_24;
    QComboBox *rectangleModMenu_penSettings_lineColorCombo_2;
    QSpinBox *rectangleModMenu_penSettings_lineWidthSpinBox_2;
    QComboBox *rectangleModMenu_penSettings_penStyleCombo_2;
    QComboBox *rectangleModMenu_penSettings_capStyleCombo_2;
    QComboBox *rectangleModMenu_penSettings_joinStyleCombo_2;
    QComboBox *rectangleModMenu_penSettings_brushColorCombo_2;
    QComboBox *rectangleModMenu_penSettings_brushStyleCombo_2;
    QLabel *rectangleModMenu_dimensions_upperLeftLabel_2;
    QPushButton *rectangleModMenu_updateButton_2;
    QLineEdit *rectangleModMenu_dimensions_upperLeftY_2;
    QLineEdit *rectangleModMenu_dimensions_upperLeftX_2;
    QWidget *verticalLayoutWidget_20;
    QVBoxLayout *verticalLayout_25;
    QLabel *rectangleModMenu_penSettings_lineColorLabel_2;
    QLabel *rectangleModMenu_penSettings_lineWidthLabel_2;
    QLabel *rectangleModMenu_penSettings_penStyleLabel_2;
    QLabel *rectangleModMenu_penSettings_capStyleLabel_2;
    QLabel *rectangleModMenu_penSettings_joinStyleLabel_2;
    QLabel *rectangleModMenu_penSettings_brushColorLabel_2;
    QLabel *rectangleModMenu_penSettings_brushStyleLabel_2;
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
        lineModMenu = new QWidget(modTab);
        lineModMenu->setObjectName(QStringLiteral("lineModMenu"));
        lineModMenu->setEnabled(true);
        lineModMenu->setGeometry(QRect(9, 40, 281, 451));
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
        lineModMenu_updateButton->setGeometry(QRect(150, 0, 99, 27));
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
        polyLineModMenu_updateButton->setGeometry(QRect(150, 0, 99, 27));
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
        polygonModMenu_updateButton->setGeometry(QRect(150, 10, 99, 27));
        polygonModMenu_dimensions_startPointXLabel = new QLabel(polygonModMenu);
        polygonModMenu_dimensions_startPointXLabel->setObjectName(QStringLiteral("polygonModMenu_dimensions_startPointXLabel"));
        polygonModMenu_dimensions_startPointXLabel->setGeometry(QRect(150, 50, 16, 16));
        rectangleModMenu = new QWidget(modTab);
        rectangleModMenu->setObjectName(QStringLiteral("rectangleModMenu"));
        rectangleModMenu->setGeometry(QRect(10, 40, 281, 451));
        rectangleModMenu_updateButton = new QPushButton(rectangleModMenu);
        rectangleModMenu_updateButton->setObjectName(QStringLiteral("rectangleModMenu_updateButton"));
        rectangleModMenu_updateButton->setGeometry(QRect(160, 10, 99, 27));
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
        squareModMenu = new QWidget(modTab);
        squareModMenu->setObjectName(QStringLiteral("squareModMenu"));
        squareModMenu->setGeometry(QRect(10, 40, 281, 451));
        squareModMenu_updateButton = new QPushButton(squareModMenu);
        squareModMenu_updateButton->setObjectName(QStringLiteral("squareModMenu_updateButton"));
        squareModMenu_updateButton->setGeometry(QRect(160, 10, 99, 27));
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
        ellipseModMenu_updateButton->setGeometry(QRect(160, 10, 99, 27));
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
        circleModMenu_updateButton->setGeometry(QRect(160, 10, 99, 27));
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

        tabMenu->addTab(modTab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabMenu->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget = new QTabWidget(tab);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 301, 501));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        treeWidget = new QTreeWidget(tab_3);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 291, 471));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableWidget = new QTableWidget(tab_4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 291, 471));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tableWidget_2 = new QTableWidget(tab_5);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(0, 0, 291, 471));
        tabWidget->addTab(tab_5, QString());
        tabMenu->addTab(tab, QString());

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
        textModMenu = new QWidget(frame);
        textModMenu->setObjectName(QStringLiteral("textModMenu"));
        textModMenu->setGeometry(QRect(10, 30, 281, 451));
        rectangleModMenu_dimensions_heighttLabel_2 = new QLabel(textModMenu);
        rectangleModMenu_dimensions_heighttLabel_2->setObjectName(QStringLiteral("rectangleModMenu_dimensions_heighttLabel_2"));
        rectangleModMenu_dimensions_heighttLabel_2->setGeometry(QRect(50, 135, 81, 17));
        rectangleModMenu_dimensions_upperLefttXLabel_2 = new QLabel(textModMenu);
        rectangleModMenu_dimensions_upperLefttXLabel_2->setObjectName(QStringLiteral("rectangleModMenu_dimensions_upperLefttXLabel_2"));
        rectangleModMenu_dimensions_upperLefttXLabel_2->setGeometry(QRect(160, 55, 16, 16));
        rectangleModMenu_dimensions_widthLabel_2 = new QLabel(textModMenu);
        rectangleModMenu_dimensions_widthLabel_2->setObjectName(QStringLiteral("rectangleModMenu_dimensions_widthLabel_2"));
        rectangleModMenu_dimensions_widthLabel_2->setGeometry(QRect(50, 95, 81, 17));
        rectangleModMenu_penSettingLabel_2 = new QLabel(textModMenu);
        rectangleModMenu_penSettingLabel_2->setObjectName(QStringLiteral("rectangleModMenu_penSettingLabel_2"));
        rectangleModMenu_penSettingLabel_2->setGeometry(QRect(10, 169, 101, 17));
        rectangleModMenu_dimensions_height_2 = new QLineEdit(textModMenu);
        rectangleModMenu_dimensions_height_2->setObjectName(QStringLiteral("rectangleModMenu_dimensions_height_2"));
        rectangleModMenu_dimensions_height_2->setGeometry(QRect(170, 135, 31, 27));
        rectangleModMenu_dimensions_uuperLeftYLabel_2 = new QLabel(textModMenu);
        rectangleModMenu_dimensions_uuperLeftYLabel_2->setObjectName(QStringLiteral("rectangleModMenu_dimensions_uuperLeftYLabel_2"));
        rectangleModMenu_dimensions_uuperLeftYLabel_2->setGeometry(QRect(210, 55, 16, 16));
        rectangleModMenu_dimensions_width_2 = new QLineEdit(textModMenu);
        rectangleModMenu_dimensions_width_2->setObjectName(QStringLiteral("rectangleModMenu_dimensions_width_2"));
        rectangleModMenu_dimensions_width_2->setGeometry(QRect(170, 95, 31, 27));
        rectangleModMenu_dimensionLabel_2 = new QLabel(textModMenu);
        rectangleModMenu_dimensionLabel_2->setObjectName(QStringLiteral("rectangleModMenu_dimensionLabel_2"));
        rectangleModMenu_dimensionLabel_2->setGeometry(QRect(20, 25, 91, 17));
        rectangleModMenu_penSettings_formatLineBot_2 = new QFrame(textModMenu);
        rectangleModMenu_penSettings_formatLineBot_2->setObjectName(QStringLiteral("rectangleModMenu_penSettings_formatLineBot_2"));
        rectangleModMenu_penSettings_formatLineBot_2->setGeometry(QRect(-10, 179, 301, 20));
        rectangleModMenu_penSettings_formatLineBot_2->setFrameShape(QFrame::HLine);
        rectangleModMenu_penSettings_formatLineBot_2->setFrameShadow(QFrame::Sunken);
        rectangleModMenu_penSettings_formatLineTop_2 = new QFrame(textModMenu);
        rectangleModMenu_penSettings_formatLineTop_2->setObjectName(QStringLiteral("rectangleModMenu_penSettings_formatLineTop_2"));
        rectangleModMenu_penSettings_formatLineTop_2->setGeometry(QRect(-10, 155, 301, 20));
        rectangleModMenu_penSettings_formatLineTop_2->setFrameShape(QFrame::HLine);
        rectangleModMenu_penSettings_formatLineTop_2->setFrameShadow(QFrame::Sunken);
        rectangleModMenu_dimensions_formatLine_2 = new QFrame(textModMenu);
        rectangleModMenu_dimensions_formatLine_2->setObjectName(QStringLiteral("rectangleModMenu_dimensions_formatLine_2"));
        rectangleModMenu_dimensions_formatLine_2->setGeometry(QRect(-10, 30, 301, 31));
        rectangleModMenu_dimensions_formatLine_2->setFrameShape(QFrame::HLine);
        rectangleModMenu_dimensions_formatLine_2->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_19 = new QWidget(textModMenu);
        verticalLayoutWidget_19->setObjectName(QStringLiteral("verticalLayoutWidget_19"));
        verticalLayoutWidget_19->setGeometry(QRect(110, 195, 160, 241));
        verticalLayout_24 = new QVBoxLayout(verticalLayoutWidget_19);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);
        rectangleModMenu_penSettings_lineColorCombo_2 = new QComboBox(verticalLayoutWidget_19);
        rectangleModMenu_penSettings_lineColorCombo_2->setObjectName(QStringLiteral("rectangleModMenu_penSettings_lineColorCombo_2"));

        verticalLayout_24->addWidget(rectangleModMenu_penSettings_lineColorCombo_2);

        rectangleModMenu_penSettings_lineWidthSpinBox_2 = new QSpinBox(verticalLayoutWidget_19);
        rectangleModMenu_penSettings_lineWidthSpinBox_2->setObjectName(QStringLiteral("rectangleModMenu_penSettings_lineWidthSpinBox_2"));

        verticalLayout_24->addWidget(rectangleModMenu_penSettings_lineWidthSpinBox_2);

        rectangleModMenu_penSettings_penStyleCombo_2 = new QComboBox(verticalLayoutWidget_19);
        rectangleModMenu_penSettings_penStyleCombo_2->setObjectName(QStringLiteral("rectangleModMenu_penSettings_penStyleCombo_2"));

        verticalLayout_24->addWidget(rectangleModMenu_penSettings_penStyleCombo_2);

        rectangleModMenu_penSettings_capStyleCombo_2 = new QComboBox(verticalLayoutWidget_19);
        rectangleModMenu_penSettings_capStyleCombo_2->setObjectName(QStringLiteral("rectangleModMenu_penSettings_capStyleCombo_2"));

        verticalLayout_24->addWidget(rectangleModMenu_penSettings_capStyleCombo_2);

        rectangleModMenu_penSettings_joinStyleCombo_2 = new QComboBox(verticalLayoutWidget_19);
        rectangleModMenu_penSettings_joinStyleCombo_2->setObjectName(QStringLiteral("rectangleModMenu_penSettings_joinStyleCombo_2"));

        verticalLayout_24->addWidget(rectangleModMenu_penSettings_joinStyleCombo_2);

        rectangleModMenu_penSettings_brushColorCombo_2 = new QComboBox(verticalLayoutWidget_19);
        rectangleModMenu_penSettings_brushColorCombo_2->setObjectName(QStringLiteral("rectangleModMenu_penSettings_brushColorCombo_2"));

        verticalLayout_24->addWidget(rectangleModMenu_penSettings_brushColorCombo_2);

        rectangleModMenu_penSettings_brushStyleCombo_2 = new QComboBox(verticalLayoutWidget_19);
        rectangleModMenu_penSettings_brushStyleCombo_2->setObjectName(QStringLiteral("rectangleModMenu_penSettings_brushStyleCombo_2"));

        verticalLayout_24->addWidget(rectangleModMenu_penSettings_brushStyleCombo_2);

        rectangleModMenu_dimensions_upperLeftLabel_2 = new QLabel(textModMenu);
        rectangleModMenu_dimensions_upperLeftLabel_2->setObjectName(QStringLiteral("rectangleModMenu_dimensions_upperLeftLabel_2"));
        rectangleModMenu_dimensions_upperLeftLabel_2->setGeometry(QRect(30, 55, 81, 17));
        rectangleModMenu_updateButton_2 = new QPushButton(textModMenu);
        rectangleModMenu_updateButton_2->setObjectName(QStringLiteral("rectangleModMenu_updateButton_2"));
        rectangleModMenu_updateButton_2->setGeometry(QRect(160, 15, 99, 27));
        rectangleModMenu_dimensions_upperLeftY_2 = new QLineEdit(textModMenu);
        rectangleModMenu_dimensions_upperLeftY_2->setObjectName(QStringLiteral("rectangleModMenu_dimensions_upperLeftY_2"));
        rectangleModMenu_dimensions_upperLeftY_2->setGeometry(QRect(220, 55, 31, 27));
        rectangleModMenu_dimensions_upperLeftX_2 = new QLineEdit(textModMenu);
        rectangleModMenu_dimensions_upperLeftX_2->setObjectName(QStringLiteral("rectangleModMenu_dimensions_upperLeftX_2"));
        rectangleModMenu_dimensions_upperLeftX_2->setGeometry(QRect(170, 55, 31, 27));
        verticalLayoutWidget_20 = new QWidget(textModMenu);
        verticalLayoutWidget_20->setObjectName(QStringLiteral("verticalLayoutWidget_20"));
        verticalLayoutWidget_20->setGeometry(QRect(20, 195, 101, 241));
        verticalLayout_25 = new QVBoxLayout(verticalLayoutWidget_20);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        rectangleModMenu_penSettings_lineColorLabel_2 = new QLabel(verticalLayoutWidget_20);
        rectangleModMenu_penSettings_lineColorLabel_2->setObjectName(QStringLiteral("rectangleModMenu_penSettings_lineColorLabel_2"));

        verticalLayout_25->addWidget(rectangleModMenu_penSettings_lineColorLabel_2);

        rectangleModMenu_penSettings_lineWidthLabel_2 = new QLabel(verticalLayoutWidget_20);
        rectangleModMenu_penSettings_lineWidthLabel_2->setObjectName(QStringLiteral("rectangleModMenu_penSettings_lineWidthLabel_2"));

        verticalLayout_25->addWidget(rectangleModMenu_penSettings_lineWidthLabel_2);

        rectangleModMenu_penSettings_penStyleLabel_2 = new QLabel(verticalLayoutWidget_20);
        rectangleModMenu_penSettings_penStyleLabel_2->setObjectName(QStringLiteral("rectangleModMenu_penSettings_penStyleLabel_2"));

        verticalLayout_25->addWidget(rectangleModMenu_penSettings_penStyleLabel_2);

        rectangleModMenu_penSettings_capStyleLabel_2 = new QLabel(verticalLayoutWidget_20);
        rectangleModMenu_penSettings_capStyleLabel_2->setObjectName(QStringLiteral("rectangleModMenu_penSettings_capStyleLabel_2"));

        verticalLayout_25->addWidget(rectangleModMenu_penSettings_capStyleLabel_2);

        rectangleModMenu_penSettings_joinStyleLabel_2 = new QLabel(verticalLayoutWidget_20);
        rectangleModMenu_penSettings_joinStyleLabel_2->setObjectName(QStringLiteral("rectangleModMenu_penSettings_joinStyleLabel_2"));

        verticalLayout_25->addWidget(rectangleModMenu_penSettings_joinStyleLabel_2);

        rectangleModMenu_penSettings_brushColorLabel_2 = new QLabel(verticalLayoutWidget_20);
        rectangleModMenu_penSettings_brushColorLabel_2->setObjectName(QStringLiteral("rectangleModMenu_penSettings_brushColorLabel_2"));

        verticalLayout_25->addWidget(rectangleModMenu_penSettings_brushColorLabel_2);

        rectangleModMenu_penSettings_brushStyleLabel_2 = new QLabel(verticalLayoutWidget_20);
        rectangleModMenu_penSettings_brushStyleLabel_2->setObjectName(QStringLiteral("rectangleModMenu_penSettings_brushStyleLabel_2"));

        verticalLayout_25->addWidget(rectangleModMenu_penSettings_brushStyleLabel_2);


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
        polyLineModMenu_dimensions_pointList->setCurrentRow(-1);
        polygonModMenu_dimensions_pointList->setCurrentRow(-1);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionGet_Help->setText(QApplication::translate("MainWindow", "Get Help!", 0));
        actionProvide_Feedback->setText(QApplication::translate("MainWindow", "Provide Feedback", 0));
        actionAdmin_Login->setText(QApplication::translate("MainWindow", "Admin Login", 0));
        actionSave_and_Exit->setText(QApplication::translate("MainWindow", "Save and Exit", 0));
        shapeIdModLabel->setText(QApplication::translate("MainWindow", "Shape ID:", 0));
        shapeTypeModLabel->setText(QApplication::translate("MainWindow", "Shape Type:", 0));
        shapeModType->setText(QApplication::translate("MainWindow", "<TYPE>", 0));
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
        tabMenu->setTabText(tabMenu->indexOf(modTab), QApplication::translate("MainWindow", "Modify", 0));
        tabMenu->setTabText(tabMenu->indexOf(tab_2), QApplication::translate("MainWindow", "Add/Remove", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Report by ID", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "by Perimeter", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "by Area", 0));
        tabMenu->setTabText(tabMenu->indexOf(tab), QApplication::translate("MainWindow", "Shape Tables", 0));
        rectangleModMenu_dimensions_heighttLabel_2->setText(QApplication::translate("MainWindow", "Height  :", 0));
        rectangleModMenu_dimensions_upperLefttXLabel_2->setText(QApplication::translate("MainWindow", "X", 0));
        rectangleModMenu_dimensions_widthLabel_2->setText(QApplication::translate("MainWindow", "Width   :", 0));
        rectangleModMenu_penSettingLabel_2->setText(QApplication::translate("MainWindow", "Pen Settings:", 0));
        rectangleModMenu_dimensions_uuperLeftYLabel_2->setText(QApplication::translate("MainWindow", "Y", 0));
        rectangleModMenu_dimensionLabel_2->setText(QApplication::translate("MainWindow", "Dimensions:", 0));
        rectangleModMenu_penSettings_lineColorCombo_2->clear();
        rectangleModMenu_penSettings_lineColorCombo_2->insertItems(0, QStringList()
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
        rectangleModMenu_penSettings_penStyleCombo_2->clear();
        rectangleModMenu_penSettings_penStyleCombo_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Solid Line", 0)
         << QApplication::translate("MainWindow", "Dash Line", 0)
         << QApplication::translate("MainWindow", "Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot Line", 0)
         << QApplication::translate("MainWindow", "Dash-Dot-Dot Line", 0)
        );
        rectangleModMenu_penSettings_capStyleCombo_2->clear();
        rectangleModMenu_penSettings_capStyleCombo_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Square Cap", 0)
         << QApplication::translate("MainWindow", "Flat Cap", 0)
         << QApplication::translate("MainWindow", "Round Cap", 0)
        );
        rectangleModMenu_penSettings_joinStyleCombo_2->clear();
        rectangleModMenu_penSettings_joinStyleCombo_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bevel Join", 0)
         << QApplication::translate("MainWindow", "Miter Join", 0)
         << QApplication::translate("MainWindow", "Round Join", 0)
        );
        rectangleModMenu_penSettings_brushColorCombo_2->clear();
        rectangleModMenu_penSettings_brushColorCombo_2->insertItems(0, QStringList()
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
        rectangleModMenu_penSettings_brushStyleCombo_2->clear();
        rectangleModMenu_penSettings_brushStyleCombo_2->insertItems(0, QStringList()
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
        rectangleModMenu_dimensions_upperLeftLabel_2->setText(QApplication::translate("MainWindow", "Upper Left :", 0));
        rectangleModMenu_updateButton_2->setText(QApplication::translate("MainWindow", "UPDATE!", 0));
        rectangleModMenu_penSettings_lineColorLabel_2->setText(QApplication::translate("MainWindow", " Line Color :", 0));
        rectangleModMenu_penSettings_lineWidthLabel_2->setText(QApplication::translate("MainWindow", " Line Width :", 0));
        rectangleModMenu_penSettings_penStyleLabel_2->setText(QApplication::translate("MainWindow", "Pen Style :", 0));
        rectangleModMenu_penSettings_capStyleLabel_2->setText(QApplication::translate("MainWindow", " Cap Style :", 0));
        rectangleModMenu_penSettings_joinStyleLabel_2->setText(QApplication::translate("MainWindow", "Join Style :", 0));
        rectangleModMenu_penSettings_brushColorLabel_2->setText(QApplication::translate("MainWindow", "Fill Color :", 0));
        rectangleModMenu_penSettings_brushStyleLabel_2->setText(QApplication::translate("MainWindow", "FIll Style :", 0));
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
