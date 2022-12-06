#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include "ElvenCalories.hpp"

using namespace std;

ElvenCalories::ElvenCalories(string fileName)
{
    this->fileName = fileName;
}

int ElvenCalories::Max()
{
    ifstream file(this->fileName);
    string buf;
    int tmpmax = 0, i = 0, max = 0;

    while (getline(file, buf))
    {
        if (buf.empty())
        {
            if (tmpmax > max)
            {
                max = tmpmax;
            }
            //cout << "Elf " << i << ": " << tmpmax << endl;
            //i++;
            tmpmax = 0;
        }
        else
        {
            tmpmax += stoi(buf);
        }
        
    }
    
    file.close();
    
    return max;
}