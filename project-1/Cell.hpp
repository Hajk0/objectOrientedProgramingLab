#ifndef CELL_HPP
#define CELL_HPP

#include <iostream>

using namespace std;

class Cell
{
private:
    char symbol;
public:
    Cell();
    Cell(char symbol);
    Cell *contentChange(char newSymbol);
    char content();
};

#endif
