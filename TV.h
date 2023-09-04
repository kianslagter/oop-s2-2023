#pragma once
#include <iostream>

#include "Appliance.h"

class TV : public Appliance {
 private:
  double screenSize;

 public:
  TV() : screenSize(0) {}
  TV(int powerRating, double screenSize)
      : Appliance(powerRating), screenSize(screenSize) {}

  void setScreenSize(double size) { screenSize = size; }

  double getScreenSize() { return screenSize; }

  double getPowerConsumption() {
    double powerConsumption = powerRating * (screenSize / 10);
    return powerConsumption;
  }
};
