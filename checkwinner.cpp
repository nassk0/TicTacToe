#include "checkwinner.h"

checkWinner::checkWinner()
{
     g = 0, v = 0;
     d1 = 0, d2 = 0;
}

int checkWinner::check()
{
    for (int i = 0; i < 3; i++) {
        g = TicTacToeStatic::getStateField(i*3);

        for (int j = 0; j < 3; j++) {
            if (TicTacToeStatic::getStateField(i * 3 + j) != g || g == 0) {
                g = 0;
                break;
            }
        }

            if (g != 0) {
                return g;
            }
            v = TicTacToeStatic::getStateField(i);

            for (int j = 0; j < 3; j++) {
                if (TicTacToeStatic::getStateField(j*3+i) != v || v == 0) {
                    v = 0;
                    break;
                }
            }

            if (v != 0) {
                return v;
            }
        }

        d1 = TicTacToeStatic::getStateField(0);
        d2 = TicTacToeStatic::getStateField(2);

        for (int i = 0; i < 3; i++) {
            if (TicTacToeStatic::getStateField(i*3+i) != d1) {
                d1 = 0;
                break;
            }
        }

        if (d1 != 0) {
            return d1;
        }

        for (int i = 0; i < 3; i++) {
            if (TicTacToeStatic::getStateField(i*3+2-i) != d2) {
                d2 = 0;
                break;
            }
        }

        if (d2 != 0) {
            return d2;
        }

        return 0;

}
