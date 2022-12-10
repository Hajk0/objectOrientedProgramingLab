#include "Player.hpp"
#include "Board.hpp"
#include "Cell.hpp"

Player::Player()
{
    this->name = "Player";
    //this->first = true;
    this->symbol = 'X';
}

Player::Player(string name, char symbol)
{
    this->name = name;
    this->symbol = symbol;
}

Board *Player::move(Board board, int position)
{
    this->board = board.move(position, this->symbol);
    cout << "position: " << position << endl;
    return this->board;
}

char Player::playersSymbol()
{
    return this->symbol;
}

int Player::input()
{
    cout << "Pick cell number: " << endl;
    int cellNumber;
    
    while (!(cin >> cellNumber) || cellNumber < 0 || cellNumber >= 9)
    {
        cout << "Pick existing cell (numbers 0-8):" << endl;
    }

    return cellNumber;
}