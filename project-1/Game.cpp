#include "Game.hpp"
#include "Board.hpp"
#include "Cell.hpp"

Game::Game(Player *player0, Player *player1, Board *board)
{
    this->player0 = player0;
    this->player1 = player1;
    this->activePlayer = player0;
    this->board = board;
}

void Game::game()
{
    int move;

    for (int i = 0; i < 9; i++)
    {
        move = this->activePlayer->input();
        cout << "move: " << move << endl;
        this->board = this->activePlayer->move(*this->board, move);
        this->board->display();
        if (this->board->checkIfEnd())
        {
            cout << "Player " << this->activePlayer->playersSymbol() << " won." << endl;
            break;
        }
        
        this->switchPlayer();
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