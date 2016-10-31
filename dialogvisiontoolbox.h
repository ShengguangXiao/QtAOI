#ifndef DIALOGVISIONTOOLBOX_H
#define DIALOGVISIONTOOLBOX_H

#include <QDialog>

namespace Ui {
class DialogVisionToolBox;
}

class DialogVisionToolBox : public QDialog
{
    Q_OBJECT

public:
    explicit DialogVisionToolBox(QWidget *parent = 0);
    ~DialogVisionToolBox();

private:
    Ui::DialogVisionToolBox *ui;
};

#endif // DIALOGVISIONTOOLBOX_H
