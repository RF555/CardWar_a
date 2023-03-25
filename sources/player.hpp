#include <iostream>
//#include "card.hpp"

using namespace std;
namespace ariel {

    class Player {
    public:
        string name;
//    Card deck;

        Player() { this->name = "NoName"; }

        Player(string _name) { this->name = _name; }

//        ~Player() {}

/**
 * @return The amount of cards left in the deck.
*/
        int stacksize() { return 0; }

/**
 * @return The amount of cards this player has won.
 */
        int cardesTaken() { return 0; }

    };
}