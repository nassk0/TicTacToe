#ifndef TICTACTOESTATIC_H
#define TICTACTOESTATIC_H

#include "QPushButton"
class TicTacToeStatic
{
public:
    static int getStateField(int i);
    static void setStateField(int i, int play);

    static int getMoveStatusPlayer();
    static void setMoveStatusPlayer();

    static int getProgress();
    static void setProgress(bool newStart);

    static int getLockSymbol();
    static void setLockSymbol();

    static QString getSymbol(int i);

private:
    static int playerLocked;
    static int progress;
    static int player;
    static int field[];
    static QString symbol[];
    static bool lockSymbol;

};

#endif // TICTACTOESTATIC_H
