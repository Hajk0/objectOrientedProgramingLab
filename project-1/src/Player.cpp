#include "../include/Player.hpp"
#include "../include/Board.hpp"
#include "../include/Cell.hpp"

Player::Player()
{
    cout << "\nPlayer creation interface.\n-----------------------------------" << endl;
    cout << "Enter players name." << endl;
    cin >> this->name;
    cout << "Enter players symbol." << endl;
    cin >> this->symbol;
    this->usedCells[9];
    for (int i = 0; i < 9; i++)
    {
        this->usedCells[i] = false;
    }
    
    cout << "----------------------------------" << endl;
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
    //this->board = board.move(position, this->symbol);
    return board.move(position, this->symbol);//this->board;
}

char Player::playersSymbol()
{
    return this->symbol;
}

int Player::input()
{
    cout << "Player " << this->name << " turn." << endl;
    cout << "Pick cell number: " << endl;
    int cellNumber;
    
    while (!(cin >> cellNumber) || cellNumber < 0 || cellNumber >= 9 || this->usedCells[cellNumber] == true)
    {
        cout << "Pick existing cell (numbers 0-8) and didn't used yet." << endl;
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