#include "doctest.h"

using namespace std;

#include "sources/card.hpp"

using namespace ariel;

TEST_CASE("Card initiated correctly") {
    Card c1;
    CHECK(c1.getRank() == -1);
    CHECK(c1.getSuit() == SUIT_UNDEFINED);
    CHECK(c1.getColor() == COLOR_UNDEFINED);
}

TEST_CASE("Function 'setCard' works") {
    Card c1;
    c1.setCard(SPADE, (RANK)3, RED);
}
