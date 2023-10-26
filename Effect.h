#pragma once
#include "Cell.h"

class Effect {
 public:
  virtual void apply(Cell& cell) = 0;
};
