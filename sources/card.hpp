#include <iostream>

using namespace std;
namespace ariel {
    enum SUIT {
        HEART = 0, DIAMOND = 1, SPADE = 2, CLUB = 3, SUIT_UNDEFINED = -1
    };
    enum COLOR {
        RED = 0, BLACK = 1, COLOR_UNDEFINED = -1
    };

    class Card {
        SUIT _suit;
        COLOR _col;
        int _value;
    public:

        Card(SUIT s = SUIT_UNDEFINED, int val = -1, COLOR col = COLOR_UNDEFINED);

        ~Card();

        SUIT getSuit();

        COLOR getColor();

        int getVal();

        void setCard(SUIT s, int val, COLOR col);


    };
}