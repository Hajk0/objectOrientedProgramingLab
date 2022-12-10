#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include "Board.hpp"
#include "Cell.hpp"

using namespace std;

class Player
{
private:
    char symbol;
    string name;
    Board *board;
    bool *usedCells;
public:
    Player();
    Player(string name, char symbol);
    Board *move(Board board, int position);
    char playersSymbol();
    int input();
    Player *usedCellsCopy(Player *copied);
    
};

#endif
