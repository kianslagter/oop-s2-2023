#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include "Vehicle.h"
using namespace std;

int main() {
  ParkingLot lot(10);

  for (int i = 0; i < 5; i++) {
    Vehicle* car = new Car();
    lot.parkVehicle(car);
  }

  for (int i = 0; i < 3; i++) {
    Vehicle* bus = new Bus();
    lot.parkVehicle(bus);
  }

  for (int i = 0; i < 2; i++) {
    Vehicle* motorbike = new Motorbike();
    lot.parkVehicle(motorbike);
  }

  int overstayingVehicles = lot.countOverstayingVehicles(15);
  cout << "Number of vehicles that have overstayed: " << overstayingVehicles
       << endl;

  return 0;
}
