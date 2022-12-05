#include <iostream>
#include <fstream>
#include "ElvenCalories.hpp"

using namespace std;

ElvenCalories::ElvenCalories(string fileName)
{
    this->max = 0;
    this->fileName = fileName;
}

int ElvenCalories::Max()
{
    ifstream file(this->fileName);
    string buf;
    int tmpmax = 0;

    while (getline(file, buf))
    {
        if (buf.empty())
        {
            if (tmpmax > this->max)
            {
                this->max = tmpmax;
                tmpmax = 0;
            }
        }
        else
        {
            tmpmax += stoi(buf);
        }
        
    }
    
    
    return max;
}