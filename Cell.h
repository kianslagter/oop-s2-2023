#pragma once
#include <tuple>
using namespace std;

class Cell {
 private:
  tuple<int, int> position;
  char type;

 public:
  Cell(int x, int y, char type) : position(make_tuple(x, y)), type(type) {}

  tuple<int, int> getPos() { return position; }

  char getType() { return type; }

  void setPos(int x, int y) { position = make_tuple(x, y); }

  void setType(char newType) { type = newType; }
};
