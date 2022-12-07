#include <iostream>
#include "Board.hpp"
#include "Cell.hpp"

int main()
{
    Board board0 = Board();

    board0.move(4);
    board0.move(0);
    board0.display();


    return 0;
}