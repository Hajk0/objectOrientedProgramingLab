#include "Player.hpp"

Player::Player(string name="User 1", bool first=true, char symbol='X'){
    this->name = name;
    this->first = first;
    this->symbol = symbol;
}

void Player::move(Board *board, int position)
{
    if (position <= 0 || position > 9)
    {
        return;
    }
    
    
}