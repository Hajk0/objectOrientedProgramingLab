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
    Player(string name="User 1", bool first=true, char symbol='X');
    void move(Board *board, int position);
    
};
