#include "programmanagementform.h"
#include "ui_programmanagementform.h"
#include <QFileDialog>

ProgramManagementForm::ProgramManagementForm(QWidget *parent) :
    MenuTreeWidget(parent),
    ui(new Ui::ProgramManagementForm)
{
    ui->setupUi(this);
}

ProgramManagementForm::~ProgramManagementForm()
{
    delete ui;
}

void ProgramManagementForm::on_btnStart_clicked()
{
    if ( PGM_OPERATION::LOAD == _enPgmOperation )   {
        loadPgm();
    }
}

void ProgramManagementForm::loadPgm()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::AnyFile);
    dialog.setAcceptMode(QFileDialog::AcceptOpen);
    dialog.setNameFilter(tr("Projects (*.aoip)"));
    dialog.setViewMode(QFileDialog::Detail);
    QStringList fileNames;
    if (dialog.exec())  {
        fileNames = dialog.selectedFiles();
    }
}

void ProgramManagementForm::savePgm()
{
}

void ProgramManagementForm::clearPgm()
{
}
