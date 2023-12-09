#ifndef STARTGAME_H
#define STARTGAME_H
#include "game.h"

class startGame:public Game
{
public:
    startGame();
    void starting(QPushButton *push, Game* g);


};

#endif // STARTGAME_H
