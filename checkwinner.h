#ifndef CHECKWINNER_H
#define CHECKWINNER_H

#include "QRandomGenerator"
#include "tictactoestatic.h"
class checkWinner
{
public:
    checkWinner();
    int check();
private:
    int g, v;
    int d1, d2;
};

#endif // CHECKWINNER_H
