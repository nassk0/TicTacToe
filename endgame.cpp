#include "endgame.h"

EndGame::EndGame()
{


}

void EndGame::fieldClearing(QPushButton *push, int win, QLabel* label)
{

    if (win != 0 || TicTacToeStatic::getProgress() == 10)
    {
        if(!TicTacToeStatic::getMoveStatusPlayer())
            TicTacToeStatic::setMoveStatusPlayer();
        for (int i = 0;i < 9;i++)
        {
             btn->getAllButtons().at(i)->setText("");
             btn->getAllButtons().at(i)->setStyleSheet("background-color: rgb(205, 244, 255)");
             TicTacToeStatic::setStateField(i, 0);
        }
            push->setText("Начать игру");
            label->setText("");
            TicTacToeStatic::setProgress(true);
            TicTacToeStatic::setLockSymbol();
    }

}
