#include <iostream>
//#include "player.hpp"

//using namespace std;
namespace ariel {

    class Game {
    public:
//    Player p1, p2;
//    Card deck[52];

        Game(Player _p1, Player _p2);

        ~Game();

        int playTurn();

/**
* @brief Print the last turn stats.
*/
        int printLastTurn();

/**
* @brief Plays the game until the end.
*/
        int playAll();

/**
* @brief Print the name of the winning player.
*/
        int printWiner();

/**
* @brief Print all the turns played one line per turn
     * (same format as game.printLastTurn()).
*/
        int printLog();

/**
* @brief For each player prints basic statistics: win rate, cards won, <other stats you want to print>. Also print the draw rate and amount of draws that happand.
     * (draw within a draw counts as 2 draws. ).
*/
        int printStats();

    };
}