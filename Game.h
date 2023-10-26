#pragma once
#include <tuple>
#include <vector>
#include <iostream>

#include "Cell.h"
#include "Character.h"
#include "Effect.h"
#include "Trap.h"
#include "Utils.h"
using namespace std;

class Game {
 private:
  vector<Cell*> grid;

 public:
  int gWidth;
  int gHeight;
  vector<Cell*>& getGrid() { return grid; }

  vector<Cell*> initGame(int numCharacters, int numTraps, int gridWidth,
                         int gridHeight) {
    gWidth = gridWidth;
    gHeight = gridHeight;
    for (int i = 0; i < numCharacters; i++) {
      tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
      grid.push_back(new Character(get<0>(pos), get<1>(pos)));
    }
    for (int i = 0; i < numTraps; i++) {
      tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
      grid.push_back(new Trap(get<0>(pos), get<1>(pos)));
    }
    return grid;
  }

  void gameLoop(int maxIterations, double trapActivationDistance) {
    for (int i = 0; i < maxIterations; i++) {
      for (auto& item : grid) {
        if (item->getType() == 'C') {
          Character* character = static_cast<Character*>(item);
          character->move(1, 0);
          if (get<0>(character->getPos()) >= gWidth ||
              get<1>(character->getPos()) >= gHeight) {
            cout << "Character has won the game!" << endl;
            return;
          }
          for (auto& other : grid) {
            if (other->getType() == 'T' &&
                Utils::calculateDistance(item->getPos(), other->getPos()) <=
                    trapActivationDistance) {
              Trap* activatedTrap = static_cast<Trap*>(other);
              activatedTrap->apply(*character);
            }
          }
        }
      }
    }
    cout << "Maximum number of iterations reached. Game over." << endl;
  }
};
