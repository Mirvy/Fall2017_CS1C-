#ifndef TABINTERFACE_H
#define TABINTERFACE_H

#include <QTabWidget>

class tabInterface: public QTabWidget
{
    Q_OBJECT
public:
    tabInterface(QWidget* parent);
private:
    tabInterface *tabMenu;
};

#endif // TABINTERFACE_H
