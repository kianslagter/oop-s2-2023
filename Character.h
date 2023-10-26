#pragma once
#include "Cell.h"
using namespace std;

class Character : public Cell {
 public:
  Character(int x, int y) : Cell(x, y, 'C') {}

  void move(int dx, int dy) {
    int x = get<0>(getPos()) + dx;
    int y = get<1>(getPos()) + dy;
    setPos(x, y);
  }
};
