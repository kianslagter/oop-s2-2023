#pragma once
#include <iostream>

#include "Vehicle.h"

class Motorbike : public Vehicle {
 private:
 public:
  Motorbike() : Vehicle() {}
  Motorbike(int ID) : Vehicle(ID) {}
  int getParkingDuration() {
    return (getCurrentTime() - getTimeOfEntry()) * 0.85;
  }
};