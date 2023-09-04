#include <iostream>

#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include "House.h"
using namespace std;

int main() {
  House House;
  Fridge* myFridge = new Fridge(1000, 300);
  TV* myTV = new TV(1000, 70);

  House.addAppliance(myFridge);
  House.addAppliance(myTV);

  cout << "Total power consumption: " << House.getTotalPowerConsumption()
       << endl;

  delete myFridge;
  delete myTV;
  return 0;
}
