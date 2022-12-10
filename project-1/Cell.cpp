#include <iostream>
#include <exception>
#include "Cell.hpp"

using namespace std;

Cell::Cell()
{
    this->symbol = ' ';
    this->locked = false;
}

Cell::Cell(char symbol)
{
    this->symbol = symbol;
}

Cell *Cell::contentChange(char newSymbol)
{
    try
    {
        if (this->locked == false)
        {
            this->symbol = newSymbol;
            this->locked = true;
        }
        else
        {
            throw invalid_argument("Picked cell have been already locked by another sign.\n");
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return this;
}

char Cell::content()
{
    return this->symbol;
}

Cell *Cell::lock()
{
    this->locked = true;
    return this;
}