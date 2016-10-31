#ifndef PROGRAMMANAGEMENTFORM_H
#define PROGRAMMANAGEMENTFORM_H

#include "MenuTreeWidget.h"

namespace Ui {
class ProgramManagementForm;
}

enum class PGM_OPERATION
{
    LOAD,
    SAVE,
    CLEAR,
};

class ProgramManagementForm : public MenuTreeWidget
{
    Q_OBJECT

public:
    explicit ProgramManagementForm(QWidget *parent = 0);
    ~ProgramManagementForm();

private slots:
    void on_btnStart_clicked();

private:
    Ui::ProgramManagementForm *ui;
    PGM_OPERATION              _enPgmOperation = PGM_OPERATION::LOAD;
private:
    void loadPgm();
    void savePgm();
    void clearPgm();
};

#endif // PROGRAMMANAGEMENTFORM_H
