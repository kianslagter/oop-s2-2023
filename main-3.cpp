#include "Game.h"
int main() {
    Game game;

    game.initGame(5, 10, 100, 100);

    game.gameLoop(50, 10.0);

    return 0;
}
