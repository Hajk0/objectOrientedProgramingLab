#ifndef CELL_HPP
#define CELL_HPP

#include <iostream>

using namespace std;

class Cell
{
private:
    char symbol;
    bool locked;
public:
    Cell();
    Cell(char symbol);
    Cell *contentChange(char newSymbol);
    char content();
    Cell *lock();
};

#endif
