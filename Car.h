#pragma once
#include <iostream>

#include "Vehicle.h"

class Car : public Vehicle {
 private:
 public:
  Car() : Vehicle() {}
  Car(int ID) : Vehicle(ID) {}
  int getParkingDuration() {
    return (getCurrentTime() - getTimeOfEntry()) * 0.9;
  }
};