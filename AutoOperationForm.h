#ifndef AUTOOPERATIONFORM_H
#define AUTOOPERATIONFORM_H

#include <QWidget>

namespace Ui {
class AutoOperationForm;
}

class AutoOperationForm : public QWidget
{
    Q_OBJECT

public:
    explicit AutoOperationForm(QWidget *parent = 0);
    ~AutoOperationForm();

private:
    Ui::AutoOperationForm *ui;
};

#endif // AUTOOPERATIONFORM_H
