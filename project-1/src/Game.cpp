#include "../include/Game.hpp"
#include "../include/Board.hpp"
#include "../include/Cell.hpp"

Game::Game(Player *player0, Player *player1, Board *board)
{
    this->player0 = player0;
    //this->player0 = Player();
    this->player1 = player1;
    //this->player1 = &Player();
    this->activePlayer = player0;
    this->board = board;
}

void Game::game()
{
    int move;

    for (int i = 0; i < 9; i++)
    {
        move = this->activePlayer->input();
        this->board = this->activePlayer->move(*this->board, move);
        this->board->display();
        if (this->board->checkIfEnd())
        {
            cout << "Player " << this->activePlayer->playersSymbol() << " won." << endl;
            break;
        }
        
        this->switchPlayer();
        if (i == 8)
        {
            cout << "Game has been ended with a tie." << endl;
        }
        
    }
    
}

void Game::switchPlayer()
{
    if (this->activePlayer == this->player0)
    {
        player1 = player1->usedCellsCopy(player0);
        this->activePlayer = this->player1;
    }
    else
    {
        player0 = player0->usedCellsCopy(player1);
        this->activePlayer = this->player0;
    }
}