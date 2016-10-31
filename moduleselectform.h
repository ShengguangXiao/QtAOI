#ifndef MODULESELECTFORM_H
#define MODULESELECTFORM_H

#include <QWidget>
#include <QStackedWidget>

namespace Ui {
class ModuleSelectForm;
}

class ModuleSelectForm : public QWidget
{
    Q_OBJECT

public:
    explicit ModuleSelectForm(QWidget *parent = 0);
    ~ModuleSelectForm();
    void setStackedWidget(QStackedWidget *pStackeWidget);

private slots:
    void on_autoMenuBtn_clicked();
    void on_pgmMenuBtn_clicked();
    void on_configMenuBtn_clicked();
    void on_calibMenuBtn_clicked();
    void on_utilityMenuBtn_clicked();
    void on_systemMenuBtn_clicked();

private:
    Ui::ModuleSelectForm *ui;
    QStackedWidget       *_pStackeWidget;
};

#endif // MODULESELECTFORM_H
