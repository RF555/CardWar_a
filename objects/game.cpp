#include "../sources/game.hpp"

namespace ariel {

    Game::Game(Player _p1, Player _p2) {
        this->p1 = Player(_p1.name);

        this->p2 = Player(_p2.name);
    }

    void Game::playTurn() {}

    void Game::printLastTurn() {}

    void Game::playAll() {}

    void Game::printWiner() {}

    void Game::printLog() {}

    void Game::printStats() {}
}