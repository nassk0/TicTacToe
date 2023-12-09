#include "widget.h"
#include "ui_widget.h"
#include "QPushButton"
#include <QRandomGenerator>
#include "QDebug"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    allPButtons = QList<QPushButton*>() << ui->Button00 << ui->Button01 << ui->Button02 << ui->Button03 << ui->Button04 << ui->Button05 << ui->Button06 << ui->Button07 << ui->Button08;
    symbol = QList<QPushButton*>() << ui->cross << ui->zero;
    btn = new ButtonClick();
    game = new Game();
    win = new checkWinner();
    choice = new Choice();
    start = new startGame();
    end = new EndGame();
    configurationButton();
}


Widget::~Widget()
{
    delete ui;
}

void Widget::playButton()
{
    btn->setObjectButton(qobject_cast<QPushButton*>(sender()), sender()->objectName().remove(0, 6).toInt());
    game->movePlayer(win->check());
    game->moveComp(win->check());
    game->winnerAnnouncement(ui->start, win->check(), ui->label);

}

void Widget::configurationButton()
{
    for(int i = 0; i < 9; i++)
      {
          connect(allPButtons.at(i), SIGNAL(clicked()), this, SLOT(playButton()));
      }

    btn->setAllButtons(allPButtons);

    for(int i = 0; i < 2; i++)
      {
          connect(symbol.at(i), SIGNAL(clicked()), this, SLOT(symbol_clicked()));
      }
}

void Widget::on_start_clicked()
{
    start->starting(ui->start, game);
    end->fieldClearing(ui->start, win->check(), ui->label);
}

void Widget::symbol_clicked()
{
    choice->choiceSymbol(sender()->objectName(), symbol, game);
}

