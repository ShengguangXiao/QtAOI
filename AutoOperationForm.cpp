#include "AutoOperationForm.h"
#include "ui_AutoOperationForm.h"

AutoOperationForm::AutoOperationForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AutoOperationForm)
{
    ui->setupUi(this);
}

AutoOperationForm::~AutoOperationForm()
{
    delete ui;
}
