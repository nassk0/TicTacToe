#include "choice.h"


Choice::Choice()
{
}

void Choice::choiceSymbol(QString s, QList <QPushButton*> sym, Game* g)
{
    if(!TicTacToeStatic::getLockSymbol())
    {
        if(s == "cross")
        {
            sym.at(0)->setStyleSheet("color: black; background-color:rgb(97, 255, 110)");
            sym.at(1)->setStyleSheet("background-color: rgb(146, 169, 172)");
            g->setPlayer(1);
        }

        if (s == "zero")
        {
            sym.at(1)->setStyleSheet("color: black; background-color: rgb(97, 255, 110)");
            sym.at(0)->setStyleSheet("background-color: rgb(146, 169, 172)");
            g->setPlayer(-1);
        }
    }

}
