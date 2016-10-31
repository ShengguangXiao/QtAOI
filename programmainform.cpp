#include "programmainform.h"
#include "ui_programmainform.h"
#include <QStackedWidget>
#include "constants.h"

ProgramMainForm::ProgramMainForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProgramMainForm)
{
    ui->setupUi(this);
}

ProgramMainForm::~ProgramMainForm()
{
    delete ui;
}

void ProgramMainForm::on_treeWidget_clicked(const QModelIndex &index)
{
    //index.
}

void ProgramMainForm::on_treeWidget_itemClicked(QTreeWidgetItem *item, int column)
{
    QString strThis = item->whatsThis(column);
    if ( strThis == "Program Management")    {
        QStackedWidget *pParent = (QStackedWidget *)this->parent();
        pParent->setCurrentIndex(ToInt(UI_MENU_TREE::PROGRAM_MANAGE_FORM));
    }
}
