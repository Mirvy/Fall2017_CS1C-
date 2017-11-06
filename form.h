#ifndef FORM_H
#define FORM_H
#include <QWidget>

namespace Ui {
  class form;
 }

 class form : public QWidget
 {
  Q_OBJECT

 public:
  explicit form(QWidget *parent = 0);
  ~form();

 void setName(const QString &name);
  QString name() const;

 private:
  Ui::form *ui;
 };



#endif
