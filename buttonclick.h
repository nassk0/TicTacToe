#ifndef BUTTONCLICK_H
#define BUTTONCLICK_H
#include <QPushButton>
class ButtonClick
{
public:
    ButtonClick();
    QList<QPushButton*> getAllButtons();
    void setAllButtons(QList<QPushButton*> all);
    void setObjectButton(QPushButton* push, int index);

    QPushButton* getObjectButton();
    int getIndexButton();
private:
    static QPushButton* objectButton;
    static int indexButton;
    static QList<QPushButton*> allPButtons;

};

#endif // BUTTONCLICK_H
