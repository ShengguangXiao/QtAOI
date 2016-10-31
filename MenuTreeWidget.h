#ifndef MENUTREEWIDGET_H
#define MENUTREEWIDGET_H

#include <QWidget>

class MenuTreeWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MenuTreeWidget(QWidget *parent = 0);
    void setParentPageIndex(int index);
    virtual void goBack();
protected:
    int     _parentPageIndex = -1;
signals:

public slots:
};

#endif // MENUTREEWIDGET_H
