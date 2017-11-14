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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "canvas.h"
#include "modtab.h"
#include "tabinterface.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
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
    QWidget *polygonModMenu;
    QWidget *rectangleModMenu;
    QWidget *ellipseModMenu;
    QWidget *textModMenu;
    QWidget *tab_2;
    canvas *renderCanvas;
    QFrame *frame;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAdmin;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setAutoFillBackground(true);
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
        lineModMenu_dimensionLabel->raise();
        lineModMenu_penSettingLabel->raise();
        lineModMenu_dimensions_formatLine->raise();
        lineModMenu_dimensions_startPointLabel->raise();
        lineModMenu_dimensions_endPointLabel->raise();
        lineModMenu_dimensions_startPointX->raise();
        lineModMenu_dimensions_startPointXLabel->raise();
        lineModMenu_dimensions_endPointYLabel->raise();
        lineModMenu_dimensions_startPointY->raise();
        lineModMenu_penSettings_formatLineTop->raise();
        lineModMenu_penSettings_formatLineBot->raise();
        lineModMenu_dimensions_endPointYLabel_2->raise();
        lineModMenu_dimensions_endPointXLabel->raise();
        lineModMenu_dimensions_endPointY->raise();
        lineModMenu_dimensions_endPointX->raise();
        verticalLayoutWidget->raise();
        verticalLayoutWidget_2->raise();
        lineModMenu_updateButton->raise();
        polylineModMenu = new QWidget(modTab);
        polylineModMenu->setObjectName(QStringLiteral("polylineModMenu"));
        polylineModMenu->setGeometry(QRect(9, 39, 281, 451));
        polygonModMenu = new QWidget(modTab);
        polygonModMenu->setObjectName(QStringLiteral("polygonModMenu"));
        polygonModMenu->setGeometry(QRect(9, 39, 281, 451));
        rectangleModMenu = new QWidget(modTab);
        rectangleModMenu->setObjectName(QStringLiteral("rectangleModMenu"));
        rectangleModMenu->setGeometry(QRect(9, 39, 281, 451));
        ellipseModMenu = new QWidget(modTab);
        ellipseModMenu->setObjectName(QStringLiteral("ellipseModMenu"));
        ellipseModMenu->setGeometry(QRect(9, 40, 281, 451));
        lineModMenu->raise();
        textModMenu = new QWidget(modTab);
        textModMenu->setObjectName(QStringLiteral("textModMenu"));
        textModMenu->setGeometry(QRect(9, 39, 281, 451));
        tabMenu->addTab(modTab, QString());
        shapeIdModLabel->raise();
        shapeIdModSpinBox->raise();
        shapeTypeModLabel->raise();
        shapeModType->raise();
        ellipseModMenu->raise();
        polygonModMenu->raise();
        polylineModMenu->raise();
        rectangleModMenu->raise();
        textModMenu->raise();
        lineModMenu->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabMenu->addTab(tab_2, QString());

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
        tabMenu->raise();

        horizontalLayout->addWidget(renderCanvas, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
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

        retranslateUi(MainWindow);

        tabMenu->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
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
        tabMenu->setTabText(tabMenu->indexOf(modTab), QApplication::translate("MainWindow", "Modify", 0));
        tabMenu->setTabText(tabMenu->indexOf(tab_2), QApplication::translate("MainWindow", "Add/Remove", 0));
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
