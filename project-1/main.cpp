#include <iostream>
#include "Board.hpp"
#include "Cell.hpp"
#include "Player.hpp"
#include "Game.hpp"

int main()
{
    Board board0 = Board();

    Player player0 = Player();
    Player player1 = Player("Witek", 'O');

    Game game0 = Game(&player0, &player1, &board0);

    game0.game();



    /*char c0 = 'X', c1 = 'O';
    int move;

    for (int i = 0; i < 9; i++)
    {
        cout << "Pick cell number: " << endl;
        cin >> move;
        if (i%2)
        {
            board0.move(move, c0);
        }
        else
        {
            board0.move(move, c1);
        }
        
        board0.display();
        if (board0.checkIfEnd())
        {
            if (i%2)
            {
                cout << "Player " << c0 << " won." << endl;
            }
            else
            {
                cout << "Player " << c1 << " won." << endl;
            }
            
            break;
        }
        
    }*/
    


    return 0;
}