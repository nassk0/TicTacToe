#include "startgame.h"

startGame::startGame()
{

}

void startGame::starting(QPushButton *push, Game* g)
{
    if(!TicTacToeStatic::getLockSymbol())
    {
        TicTacToeStatic::setMoveStatusPlayer();
        push->setText("Игра началась!");
        TicTacToeStatic::setProgress(false);
        TicTacToeStatic::setLockSymbol();
        if(g->getPlayer() == -1){
            player = -1;
            TicTacToeStatic::setMoveStatusPlayer();
            moveComp(0);
        }
    }
}


