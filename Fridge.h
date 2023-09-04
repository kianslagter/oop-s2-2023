#pragma once
#include <iostream>

#include "Appliance.h"

class Fridge : public Appliance {
 private:
  double volume;

 public:
  Fridge() : volume(0) {}
  Fridge(int powerRating, double volume)
      : Appliance(powerRating), volume(volume) {}

  void setVolume(double setvol) { volume = setvol; }

  double getVolume() { return volume; }

  double getPowerConsumption() {
    double powerConsumption = powerRating * 24 * (volume / 100);
    return powerConsumption;
  }
};
