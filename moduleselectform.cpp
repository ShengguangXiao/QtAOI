#include "moduleselectform.h"
#include "ui_moduleselectform.h"
#include "constants.h"

ModuleSelectForm::ModuleSelectForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModuleSelectForm)
{
    ui->setupUi(this);
}

ModuleSelectForm::~ModuleSelectForm()
{
    delete ui;
}

void ModuleSelectForm::setStackedWidget(QStackedWidget *pStackeWidget)
{
    _pStackeWidget = pStackeWidget;
}

void ModuleSelectForm::on_autoMenuBtn_clicked()
{
    _pStackeWidget->setCurrentIndex(ToInt(UI_MENU_TREE::AUTO_MAIN_MENU));
}

void ModuleSelectForm::on_pgmMenuBtn_clicked()
{
    _pStackeWidget->setCurrentIndex(ToInt(UI_MENU_TREE::PROGRAM_MAIN_MENU));
}

void ModuleSelectForm::on_configMenuBtn_clicked()
{

}

void ModuleSelectForm::on_calibMenuBtn_clicked()
{

}

void ModuleSelectForm::on_utilityMenuBtn_clicked()
{

}

void ModuleSelectForm::on_systemMenuBtn_clicked()
{

}
