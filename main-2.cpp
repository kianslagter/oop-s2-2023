#include <iostream>

#include "Character.h"
#include "Trap.h"
using namespace std;

int main() {
  Character character(1, 1);
  cout << "pos: " << get<0>(character.getPos()) << ", "
       << get<1>(character.getPos()) << endl;

  character.move(3, 3);
  cout << "move pos: " << get<0>(character.getPos()) << ", "
       << get<1>(character.getPos()) << endl;

  return 0;
}
