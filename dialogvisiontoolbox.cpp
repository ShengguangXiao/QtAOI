#include "dialogvisiontoolbox.h"
#include "ui_dialogvisiontoolbox.h"

DialogVisionToolBox::DialogVisionToolBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogVisionToolBox)
{
    ui->setupUi(this);
}

DialogVisionToolBox::~DialogVisionToolBox()
{
    delete ui;
}
