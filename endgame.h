#ifndef ENDGAME_H
#define ENDGAME_H
#include "game.h"

class EndGame:public Game
{
public:
    EndGame();
    void fieldClearing(QPushButton *push, int win, QLabel* label);
};

#endif // ENDGAME_H
