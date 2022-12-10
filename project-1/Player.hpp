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
public:
    Player();
    Player(string name, char symbol);
    Board *move(Board board, int position);
    char playersSymbol();
    int input();
    
};

#endif
