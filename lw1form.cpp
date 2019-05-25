#include "lw1form.h"
#include "ui_lw1form.h"

LW1Form::LW1Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LW1Form)
{
    ui->setupUi(this);
}

LW1Form::~LW1Form()
{
    delete ui;
}
