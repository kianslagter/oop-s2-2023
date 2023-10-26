#include <iostream>

#include "Game.h"
using namespace std;

int main() {
  Game game;
  game.initGame(2, 7, 100, 100);
  game.gameLoop(100, 10);
  return 0;
}
