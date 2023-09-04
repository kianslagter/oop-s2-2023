#pragma once
#include <iostream>

#include "Appliance.h"
using namespace std;

class House {
 private:
  Appliance** appliances;
  int numAppliances;
  int maxAppliances;

 public:
  House() : numAppliances(0), maxAppliances(10) {
    appliances = new Appliance*[maxAppliances];
  }
  House(int maxAppliances) : numAppliances(0), maxAppliances(maxAppliances) {
    appliances = new Appliance*[maxAppliances];
  }

  bool addAppliance(Appliance* appliance) {
    if (numAppliances >= maxAppliances) return false;
    appliances[numAppliances++] = appliance;
    numAppliances++;
    return true;
  }

  double getTotalPowerConsumption() const {
    double totalPower = 0;
    for (int i = 0; i < numAppliances; i++) {
      totalPower += appliances[i]->getPowerConsumption();
    }
    return totalPower;
  }

  ~House() { delete[] appliances; }
};
