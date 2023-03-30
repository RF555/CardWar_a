#include <iostream>

using namespace std;
namespace ariel {
    enum SUIT {
        HEART = 0, DIAMOND = 1, SPADE = 2, CLUB = 3, SUIT_UNDEFINED = -1
    };
    enum COLOR {
        RED = 0, BLACK = 1, COLOR_UNDEFINED = -1
    };
    enum RANK {
        ACE = 1, TWO = 2,
        THREE = 3,
        FOUR = 4,
        FIVE = 5,
        SIX = 6,
        SEVEN = 7,
        EIGHT = 8,
        NINE = 9,
        TEN = 10,
        JACK = 11,
        QUEEN = 12,
        KING = 13,
        RANK_UNDEFINED = -1
    };

    class Card {
        SUIT _suit;
        COLOR _col;
        RANK _rank;
    public:

        Card(SUIT s = SUIT_UNDEFINED, RANK rank = RANK_UNDEFINED, COLOR col = COLOR_UNDEFINED);

        ~Card();

        SUIT getSuit();

        COLOR getColor();

        int getRank();

        void setCard(SUIT s, RANK rank, COLOR col);


    };
}