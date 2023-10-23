#pragma once
#include <vector>
#include <tuple>

#include "GameEntity.h"
#include "Mine.h"
#include "Ship.h"
#include "Utils.h"
using namespace std;

class Game {
 private:
  vector<GameEntity*> entities;

 public:
  vector<GameEntity*>& get_entities() { return entities; }

  void set_entities(const vector<GameEntity*>& newEntities) {
    entities = newEntities;
  }

  vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth,
                               int gridHeight) {
                                
    for (int i = 0; i < numShips; i++) {
      auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
      entities.push_back(new Ship(get<0>(pos), get<1>(pos)));
    }
    for (int i = 0; i < numMines; i++) {
      auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
      entities.push_back(new Mine(get<0>(pos), get<1>(pos)));
    }
    return entities;
  }

  void gameLoop(int maxIterations, double mineDistanceThreshold) {
    for (int i = 0; i < maxIterations; i++) {
      for (auto& entity : entities) {
        if (entity->getType() == 'S') {
          static_cast<Ship*>(entity)->move(1, 0);
        }
      }
      for (auto& entity : entities) {
        if (entity->getType() == 'S') {
          for (auto& other : entities) {
            if (other->getType() == 'M' &&
                Utils::calculateDistance(entity->getPos(), other->getPos()) <=
                    mineDistanceThreshold) {
              Explosion explosion = static_cast<Mine*>(other)->explode();
              explosion.apply(*entity);
            }
          }
        }
      }
    }
  }
};
