#include "Player.hpp"
#include "Board.hpp"
#include "Cell.hpp"

Player::Player()
{
    this->name = "Player";
    this->symbol = 'X';
    this->usedCells[9];
    for (int i = 0; i < 9; i++)
    {
        this->usedCells[i] = false;
    }
    
}

Player::Player(string name, char symbol)
{
    this->name = name;
    this->symbol = symbol;
    this->usedCells[9];
    for (int i = 0; i < 9; i++)
    {
        this->usedCells[i] = false;
    }
    
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
    for (int i = 0; i < 9; i++)
    {
        cout << i << ": " << this->usedCells[i] << endl;
    }
    
    while (!(cin >> cellNumber) || cellNumber < 0 || cellNumber >= 9 || this->usedCells[cellNumber] == true)
    {
        cout << "Pick existing cell (numbers 0-8)." << endl;
        cin.clear();
        cin.sync();
    }
    this->usedCells[cellNumber] = true;

    return cellNumber;
}

Player *Player::usedCellsCopy(Player *copied)
{
    this->usedCells = copied->usedCells;
    return this;
}