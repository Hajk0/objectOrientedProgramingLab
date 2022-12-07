#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>
#include "Cell.hpp"

using namespace std;

class Board
{
private:
    Cell board[3][3];
public:
    Board();
    Board *move(int position);
    void display();
};

#endif
