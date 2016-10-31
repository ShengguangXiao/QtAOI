#include "MenuTreeWidget.h"
#include <QStackedWidget>
#include <assert.h>

MenuTreeWidget::MenuTreeWidget(QWidget *parent) : QWidget(parent)
{

}

void MenuTreeWidget::setParentPageIndex(int index)
{
    _parentPageIndex = index;
}

void MenuTreeWidget::goBack()
{
    assert( _parentPageIndex >= 0 );

    QStackedWidget *pParent = (QStackedWidget *)this->parent();
    pParent->setCurrentIndex( _parentPageIndex );
}
