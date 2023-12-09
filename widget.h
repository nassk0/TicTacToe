#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include "game.h"
#include "buttonclick.h"
#include "checkwinner.h"
#include "startgame.h"
#include "choice.h"
#include "endgame.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void playButton();
    void on_start_clicked();
    void symbol_clicked();


private:
    QList<QPushButton*> allPButtons;
    QList<QPushButton*> symbol;
    Ui::Widget *ui;
    void configurationButton();
    ButtonClick* btn;
    TicTacToeStatic* state;
    Game* game;
    startGame* start;
    EndGame* end;
    checkWinner* win;
    Choice* choice;
};
#endif // WIDGET_H
