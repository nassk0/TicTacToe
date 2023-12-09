#ifndef GAME_H
#define GAME_H
#include <QPushButton>
#include <QLabel>
#include "QRandomGenerator"
#include "QDebug"
#include "tictactoestatic.h"
#include "buttonclick.h"
class Game
{
public:
    Game();
    void setPlayer(int index);
    int getPlayer();
    void movePlayer(int win);
    void moveComp(int win);
    void winnerAnnouncement(QPushButton *push, int win, QLabel* label);
protected:
    ButtonClick* btn;
    int player;
private:
    int temp;
};

#endif // GAME_H
