
#ifndef MODTAB_H
#define MODTAB_H

#include <QWidget>

class modtab : public QWidget
{
    Q_OBJECT
public:
    explicit modtab(QWidget *parent = 0);

signals:

private:
    modtab *mtab;
};

#endif // MODTAB_H
