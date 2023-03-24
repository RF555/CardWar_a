#include <iostream>
#include "card.hpp"

using namespace std;

class Player {
public:
    string name;
    Card deck

    Player(string _name);

    ~Player();

/**
* @brief Print the amount of cards left.
 * Should be 21 but can be less if a draw was played.
*/
    void stacksize();

/**
 * @brief Print the amount of cards this player has won.
 */
    void cardesTaken();

};