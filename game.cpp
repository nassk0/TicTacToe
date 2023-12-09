#include "game.h"
#include "QDebug"
Game::Game()
{
    btn = new ButtonClick();
    player = 1;
    temp = QRandomGenerator::global()->bounded(0, 9);
}

void Game::setPlayer(int index)
{
    player = index;
}

int Game::getPlayer()
{
    return player;
}

void Game::moveComp(int win)
{
    if (TicTacToeStatic::getMoveStatusPlayer() && win == 0 && TicTacToeStatic::getProgress() != 10 && TicTacToeStatic::getProgress() != 0)
    {
        while (TicTacToeStatic::getStateField(temp) != 0)
           temp = QRandomGenerator::global()->bounded(0, 9);
        TicTacToeStatic::setStateField(temp, player*(-1));
        btn->getAllButtons().at(temp)->setText(TicTacToeStatic::getSymbol(player*(-1)));
        btn->getAllButtons().at(temp)->setStyleSheet("color: black; background-color: rgb(255, 143, 143)");
        TicTacToeStatic::setProgress(false);
        TicTacToeStatic::setMoveStatusPlayer();

    }
}

void Game::movePlayer(int win)
{
    if (!TicTacToeStatic::getMoveStatusPlayer() && win == 0 && TicTacToeStatic::getStateField(btn->getIndexButton()) == 0 && TicTacToeStatic::getProgress()!= 10 && TicTacToeStatic::getProgress() != 0)
    {
        btn->getObjectButton()->setText(TicTacToeStatic::getSymbol(player));
        btn->getObjectButton()->setStyleSheet("color: black; background-color: rgb(124, 255, 179)");
        TicTacToeStatic::setMoveStatusPlayer();
        TicTacToeStatic::setProgress(false);
        TicTacToeStatic::setStateField(btn->getIndexButton(), player);

    }
}

void Game::winnerAnnouncement(QPushButton *push, int win, QLabel* label)
{
    if(win != 0 || TicTacToeStatic::getProgress() == 10)
    {
        if(win == player)
        {
            label->setText("Вы выиграли!");
            push->setText("Играть снова");
        }


        else if(win == player*(-1))
        {
            label->setText("Вы проиграли!");
            push->setText("Играть снова");
        }


        if(win == 0 && TicTacToeStatic::getProgress() == 10)
        {
            label->setText("Ничья!");
            push->setText("Играть снова");
        }
    }
}






