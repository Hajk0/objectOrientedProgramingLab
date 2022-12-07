#include <iostream>
#include "Cell.hpp"

using namespace std;

Cell::Cell()
{
    this->symbol = ' ';
}

Cell::Cell(char symbol)
{
    this->symbol = symbol;
}

Cell *Cell::contentChange(char newSymbol)
{
    this->symbol = newSymbol;
    return this;
}

char Cell::content()
{
    return this->symbol;
}