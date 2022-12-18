#include <iostream>
#include "Board.hpp"
#include "Cell.hpp"
#include "Player.hpp"
#include "Game.hpp"

int main()
{
    Board board0 = Board();

    Player player0 = Player();
    Player player1 = Player("Player1", 'O');
    //Player player1 = Player();

    Game game0 = Game(&player0, &player1, &board0);

    game0.game();
    
    return 0;
}