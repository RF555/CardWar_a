#include <iostream>
//#include "card.hpp"

//using namespace std;
namespace ariel {

    class Player {
    public:
//    string name;
//    Card deck;

        Player(string _name);

        ~Player();

/**
* @brief Print the amount of cards left.
 * Should be 21 but can be less if a draw was played.
*/
        int stacksize();

/**
 * @brief Print the amount of cards this player has won.
 */
        int cardesTaken();

    };
}