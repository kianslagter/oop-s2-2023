#pragma once
#include <iostream>

#include "Vehicle.h"

class Bus : public Vehicle {
 private:
 public:
  Bus() : Vehicle() {}
  Bus(int ID) : Vehicle(ID) {}
  int getParkingDuration() {
    return (getCurrentTime() - getTimeOfEntry()) * 0.75;
  }
};