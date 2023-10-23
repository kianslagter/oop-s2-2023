#pragma once
#include "GameEntity.h"
using namespace std;

class Ship : public GameEntity {
 public:
  Ship(int x, int y) : GameEntity(x, y, 'S') {}

  void move(int dx, int dy) {
    int x = get<0>(getPos()) + dx;
    int y = get<1>(getPos()) + dy;
    setPos(x, y);
  }
};
