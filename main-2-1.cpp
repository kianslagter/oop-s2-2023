#include <iostream>

#include "Fridge.h"
using namespace std;

int main() {
  Fridge fridge(1000, 300);
  cout << "Power consumption: " << fridge.getPowerConsumption() << endl;
  return 0;
}
