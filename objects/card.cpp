#include "../sources/card.hpp"

namespace ariel {
    Card::Card(ariel::SUIT s, RANK rank, ariel::COLOR col) {
        this->_suit = s;
        this->_rank = rank;
        this->_col = col;
    }

    SUIT Card::getSuit() { return this->_suit; }

    COLOR Card::getColor() { return this->_col; }

    int Card::getRank() { return this->_rank; }

    void Card::setCard(ariel::SUIT s, RANK rank, ariel::COLOR col) {
        this->_suit = s;
        this->_rank = rank;
        this->_col = col;
    }

}