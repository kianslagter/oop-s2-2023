#pragma once
#include "GameEntity.h"

class Ship : public GameEntity {
 public:
  Ship(int x, int y) : GameEntity(x, y, 'S') {}

  void move(int dx, int dy) {
    int x = std::get<0>(getPos()) + dx;
    int y = std::get<1>(getPos()) + dy;
    setPos(x, y);
  }
};
