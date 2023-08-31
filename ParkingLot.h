#pragma once
#include <iostream>

#include "Vehicle.h"

class ParkingLot {
 private:
  int maxVehicles;
  int vehicleCount;
  Vehicle* vehicles;

 public:
  ParkingLot() : ParkingLot(1) {}

  ParkingLot(int maxVehicles) : maxVehicles(maxVehicles) {
    vehicles = new Vehicle[maxVehicles];
  }
  int getCount() { return vehicleCount; }
  void parkVehicle(Vehicle vehicle) {
    if (vehicleCount <= maxVehicles) {
      vehicles[vehicleCount] = vehicle;
      vehicleCount++;
    } else {
      std::cout << "The lot is full" << std::endl;
    }
  }
  void unparkVehicle(int ID) {
    int index = 0;
    for (int i = 0; i < vehicleCount; i++) {
      if (vehicles[i].getID() == ID) {
        index = i;
      } else {
        std::cout << "Vehicle not in the lot" << std::endl;
      }
      for (int i = index; i < vehicleCount - 1; i++) {
        vehicles[i] = vehicles[i + 1];
      }
      vehicleCount--;
    }
  }
};