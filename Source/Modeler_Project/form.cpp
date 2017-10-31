#include "form.h"

form::form(QWidget *parent) :
 QWidget(parent),
 ui(new Ui::form)
{
 ui->setupUi(this);
}

form::~form()
{
 delete ui;
}

void form::setName(const QString &name)
{
 ui->lineEdit->setText(name);
}

QString form::name() const
{
 return ui->lineEdit->text();
}
