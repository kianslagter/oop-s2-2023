#include <iostream>

#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "Vehicle.h"
#include "ParkingLot.h"
using namespace std;

int main() {
  ParkingLot lot(4);

  while (lot.getCount() < 4) {
    cout << "Type of vehicle to park: ";
    string type;
    cin >> type;

    Vehicle* vehicle;
    if (type == "car") {
      vehicle = new Car();
    } else if (type == "bus") {
      vehicle = new Bus();
    } else if (type == "motorbike") {
      vehicle = new Motorbike();
    } else {
      cout << "Invalid vehicle type" << endl;
      continue;
    }

    lot.parkVehicle(vehicle);
  }

  cout << "Enter the ID of vehicle to unpark: ";
  int id;
  cin >> id;
  lot.unparkVehicle(id);

  return 0;
}
