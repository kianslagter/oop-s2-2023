#include <iostream>

#include "Appliance.h"
using namespace std;

int main() {
  Appliance appliance(1000);
  cout << "Power consumption: " << appliance.getPowerConsumption() << endl;
  return 0;
}
