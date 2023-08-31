#pragma once
#include <iostream>
#include <vector>

#include "Vehicle.h"
using namespace std;

class ParkingLot {
 private:
  int maxCapacity;
  int vehicleCount;
  vector<Vehicle*> vehicles;

 public:
  ParkingLot(int maxCapacity) : maxCapacity(maxCapacity), vehicleCount(0) {}

  int getCount() { return vehicleCount; }

  void parkVehicle(Vehicle* vehicle) {
    if (vehicleCount == maxCapacity) {
      cout << "The lot is full" << endl;
      return;
    }
    vehicles.push_back(vehicle);
    vehicleCount++;
  }

  void unparkVehicle(int ID) {
    for (int i = 0; i < vehicleCount; i++) {
      if (vehicles[i]->getID() == ID) {
        vehicles.erase(vehicles.begin() + i);
        vehicleCount--;
        return;
      }
    }
    cout << "Vehicle not in the lot" << endl;
  }

  int countOverstayingVehicles(int maxParkingDuration) {
    int count = 0;
    for (int i = 0; i < vehicleCount; i++) {
      if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
        count++;
      }
    }
    return count;
  }
};
