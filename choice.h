#ifndef CHOICE_H
#define CHOICE_H
#include <QPushButton>
#include "tictactoestatic.h"
#include "startgame.h"
#include "game.h"

class Choice
{
public:
    Choice();
    void choiceSymbol(QString s, QList <QPushButton*> sym, Game* g);
};

#endif // CHOICE_H
