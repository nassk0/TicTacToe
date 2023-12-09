#include "tictactoestatic.h"

int TicTacToeStatic::progress = 0;
int TicTacToeStatic::player = 1;
bool TicTacToeStatic::lockSymbol = false;
int TicTacToeStatic::playerLocked = true;
int TicTacToeStatic::field[9] = {0};
QString TicTacToeStatic::symbol[2] = {"X","O"};

int TicTacToeStatic::getStateField(int i)
{
    return field[i];
}

void TicTacToeStatic::setStateField(int i, int play)
{
    field[i] = play;
}
int TicTacToeStatic::getMoveStatusPlayer()
{
    return playerLocked;
}

void TicTacToeStatic::setMoveStatusPlayer()
{
    if (playerLocked)
        playerLocked = false;
    else
        playerLocked = true;
}

int TicTacToeStatic::getProgress()
{
    return progress;
}

void TicTacToeStatic::setProgress(bool newStart)
{
    progress++;
    if (newStart)
        progress = 0;
}

int TicTacToeStatic::getLockSymbol()
{
    return lockSymbol;

}

void TicTacToeStatic::setLockSymbol()
{
    if (lockSymbol)
        lockSymbol = false;
    else
        lockSymbol = true;
}



QString TicTacToeStatic::getSymbol(int i)
{
    if (i == 1)
        return symbol[0];
    if (i == -1)
        return symbol[1];
}


