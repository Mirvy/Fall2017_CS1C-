/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Modeler_Project/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[645];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 33), // "on_shapeIdModSpinBox_valueCha..."
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 4), // "arg1"
QT_MOC_LITERAL(4, 51, 35), // "on_lineModMenu_updateButton_c..."
QT_MOC_LITERAL(5, 87, 52), // "on_polyLineModMenu_dimensions..."
QT_MOC_LITERAL(6, 140, 53), // "on_polyLineModMenu_dimensions..."
QT_MOC_LITERAL(7, 194, 55), // "on_polyLineModMenu_dimensions..."
QT_MOC_LITERAL(8, 250, 39), // "on_polyLineModMenu_updateButt..."
QT_MOC_LITERAL(9, 290, 51), // "on_polygonModMenu_dimensions_..."
QT_MOC_LITERAL(10, 342, 52), // "on_polygonModMenu_dimensions_..."
QT_MOC_LITERAL(11, 395, 54), // "on_polygonModMenu_dimensions_..."
QT_MOC_LITERAL(12, 450, 38), // "on_polygonModMenu_updateButto..."
QT_MOC_LITERAL(13, 489, 40), // "on_rectangleModMenu_updateBut..."
QT_MOC_LITERAL(14, 530, 37), // "on_squareModMenu_updateButton..."
QT_MOC_LITERAL(15, 568, 38), // "on_ellipseModMenu_updateButto..."
QT_MOC_LITERAL(16, 607, 37) // "on_circleModMenu_updateButton..."

    },
    "MainWindow\0on_shapeIdModSpinBox_valueChanged\0"
    "\0arg1\0on_lineModMenu_updateButton_clicked\0"
    "on_polyLineModMenu_dimensions_addPointButton_clicked\0"
    "on_polyLineModMenu_dimensions_movePointButton_clicked\0"
    "on_polyLineModMenu_dimensions_deletePointButton_clicked\0"
    "on_polyLineModMenu_updateButton_clicked\0"
    "on_polygonModMenu_dimensions_addPointButton_clicked\0"
    "on_polygonModMenu_dimensions_movePointButton_clicked\0"
    "on_polygonModMenu_dimensions_deletePointButton_clicked\0"
    "on_polygonModMenu_updateButton_clicked\0"
    "on_rectangleModMenu_updateButton_clicked\0"
    "on_squareModMenu_updateButton_clicked\0"
    "on_ellipseModMenu_updateButton_clicked\0"
    "on_circleModMenu_updateButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x08 /* Private */,
       4,    0,   87,    2, 0x08 /* Private */,
       5,    0,   88,    2, 0x08 /* Private */,
       6,    0,   89,    2, 0x08 /* Private */,
       7,    0,   90,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_shapeIdModSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_lineModMenu_updateButton_clicked(); break;
        case 2: _t->on_polyLineModMenu_dimensions_addPointButton_clicked(); break;
        case 3: _t->on_polyLineModMenu_dimensions_movePointButton_clicked(); break;
        case 4: _t->on_polyLineModMenu_dimensions_deletePointButton_clicked(); break;
        case 5: _t->on_polyLineModMenu_updateButton_clicked(); break;
        case 6: _t->on_polygonModMenu_dimensions_addPointButton_clicked(); break;
        case 7: _t->on_polygonModMenu_dimensions_movePointButton_clicked(); break;
        case 8: _t->on_polygonModMenu_dimensions_deletePointButton_clicked(); break;
        case 9: _t->on_polygonModMenu_updateButton_clicked(); break;
        case 10: _t->on_rectangleModMenu_updateButton_clicked(); break;
        case 11: _t->on_squareModMenu_updateButton_clicked(); break;
        case 12: _t->on_ellipseModMenu_updateButton_clicked(); break;
        case 13: _t->on_circleModMenu_updateButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
