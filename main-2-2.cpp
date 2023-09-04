#include <iostream>

#include "TV.h"
using namespace std;

int main() {
  TV TV(1000, 80);
  cout << "Power consumption: " << TV.getPowerConsumption() << endl;
  return 0;
}
