#include <iostream>
#include "Player.hpp"
#include "Board.hpp"
#include "Cell.hpp"

using namespace std;


class Game
{
private:
    Player *player0;
    Player *player1;
    Player *activePlayer;
    Board *board;

public:
    Game(Player *player0, Player *player1, Board *board);
    void game();
    void switchPlayer();
};

