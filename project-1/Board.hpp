#include <iostream>

using namespace std;

class Board
{
private:
    char board[3][3];

public:
    Board();
    Board *move(int position);
};

