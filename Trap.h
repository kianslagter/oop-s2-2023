#pragma once
#include "Cell.h"
#include "Effect.h"

class Trap : public Cell, public Effect {
 private:
  bool active;

 public:
  Trap(int x, int y) : Cell(x, y, 'T'), active(true) {}

  bool isActive() { return active; }

  void apply(Cell& cell) override {
    if (active) {
      cell.setType('T');
      active = false;
    }
  }
};
