#include <iostream>
#include "Player.hpp"

using namespace std;


class Game
{
private:
    Player *player0;
    Player *player1;
    Board *board;

public:
    Game(Player *player0, Player *player1, Board *board);
    void switchPlayer();
    
};

