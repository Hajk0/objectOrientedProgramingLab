#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include "Board.hpp"

using namespace std;

class Player
{
private:
    char symbol;
    bool first;
    string name;
public:
    Player();
    Player(string name, bool first, char symbol);
    void move(Board *board, int position);
    char playersSymbol();
    
};

#endif
