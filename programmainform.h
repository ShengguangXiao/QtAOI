#ifndef PROGRAMMAINFORM_H
#define PROGRAMMAINFORM_H

#include <QWidget>
#include <QTreeWidgetItem>

namespace Ui {
class ProgramMainForm;
}

class ProgramMainForm : public QWidget
{
    Q_OBJECT

public:
    explicit ProgramMainForm(QWidget *parent = 0);
    ~ProgramMainForm();

private slots:
    void on_treeWidget_clicked(const QModelIndex &index);

    void on_treeWidget_itemClicked(QTreeWidgetItem *item, int column);

private:
    Ui::ProgramMainForm *ui;
};

#endif // PROGRAMMAINFORM_H
