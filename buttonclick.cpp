#include "buttonclick.h"
#include "QDebug"
QPushButton* ButtonClick::objectButton = 0;
int ButtonClick::indexButton = 0;
QList<QPushButton*> ButtonClick::allPButtons = {};
ButtonClick::ButtonClick()
{

}

QList<QPushButton *> ButtonClick::getAllButtons()
{
    return allPButtons;
}

void ButtonClick::setAllButtons(QList<QPushButton *> all)
{
    allPButtons = all;
}

void ButtonClick::setObjectButton(QPushButton *push, int index)
{
    objectButton = push;
    indexButton = index;

}

QPushButton* ButtonClick::getObjectButton()
{
    return objectButton;
}

int ButtonClick::getIndexButton()
{
    return indexButton;
}
