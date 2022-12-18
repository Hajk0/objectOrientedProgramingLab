#include "../include/Board.hpp"
#include "../include/Cell.hpp"
#include <iostream>

using namespace std;

Board::Board()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            this->board[i][j] = Cell();
        }
        
    }
    
}

Board* Board::move(int position, char symbol)
{
    if (position < 0 || position >= 9)
    {
        return this;
    }
        
    board[position/3][position%3] = *board[position/3][position%3].contentChange(symbol);

    return this;
}

void Board::display()
{
    // cout << "PLAYER - 1 [X]\t PLAYER - 2 [O]\n\n";
    cout << "\t\t\t\t     |     |     \n";
    cout << "\t\t\t\t  " << this->board[0][0].content() << "  |  " << this->board[0][1].content() <<"  |  " << this->board[0][2].content() << " \n";
    cout << "\t\t\t\t_____|_____|_____\n";
    cout << "\t\t\t\t     |     |     \n";
    cout << "\t\t\t\t  " << this->board[1][0].content() << "  |  " << this->board[1][1].content() <<"  |  " << this->board[1][2].content() << " \n";
    cout << "\t\t\t\t_____|_____|_____\n";
    cout << "\t\t\t\t     |     |     \n";
    cout << "\t\t\t\t  " << this->board[2][0].content() << "  |  " << this->board[2][1].content() <<"  |  " << this->board[2][2].content() << " \n";
    cout << "\t\t\t\t     |     |     \n";
}

bool Board::checkIfEnd()
{
    for (int i = 0; i < 3; i++)
    {
        if (this->board[i][0].content() == this->board[i][1].content() && this->board[i][1].content() == this->board[i][2].content() && this->board[i][0].content() != ' ')
        {
            return true;
        }
        else if (this->board[0][i].content() == this->board[1][i].content() && this->board[1][i].content() == this->board[2][i].content() && this->board[0][i].content() != ' ')
        {
            return true;
        }
    }
    
    if (this->board[0][0].content() == this->board[1][1].content() && this->board[1][1].content() == this->board[2][2].content() && this->board[0][0].content() != ' ' || this->board[2][0].content() == this->board[1][1].content() && this->board[1][1].content() == this->board[0][2].content() && this->board[2][0].content() != ' ')
    {
        return true;
    }
    
    return false;
}