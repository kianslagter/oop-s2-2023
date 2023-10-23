#include <iostream>

#include "Mine.h"
#include "Ship.h"
using namespace std;

int main() {
  Ship ship(10, 10);
  cout << "ship position: (" << get<0>(ship.getPos()) << ", "
       << get<1>(ship.getPos()) << ")\n";

  ship.move(5, -3);
  cout << "ships moved position: (" << get<0>(ship.getPos()) << ", "
       << get<1>(ship.getPos()) << ")\n";

  Mine mine(20, 20);
  cout << "mine type: " << mine.getType() << "\n";

  Explosion explosion = mine.explode();
  cout << "mine type after: " << mine.getType() << "\n";

  explosion.apply(ship);
  cout << "ship after explosion: (" << get<0>(ship.getPos())
       << ", " << get<1>(ship.getPos()) << "), " << ship.getType() << "\n";

  return 0;
}
