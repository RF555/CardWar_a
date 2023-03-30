#include "../sources/card.hpp"

namespace ariel {
    Card::Card(ariel::SUIT s, int val, ariel::COLOR col) {
        this->_suit = s;
        this->_value = val;
        this->_col = col;
    }

    SUIT Card::getSuit() { return this->_suit; }

    COLOR Card::getColor() { return this->_col; }

    int Card::getVal() { return this->_value; }

    void Card::setCard(ariel::SUIT s, int val, ariel::COLOR col) {
        this->_suit = s;
        this->_value = val;
        this->_col = col;
    }

}