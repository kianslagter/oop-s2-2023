#include <iostream>

#include "Car.h"
#include "Tesla.h"
using namespace std;

int main(void) {
  Tesla tesla('s', 50000);

  cout << "Price: " << tesla.get_price() << endl;
  tesla.drive(100);
  cout << "Emissions after drive: " << tesla.get_emissions() << endl;
  tesla.set_batteryPercentage(50);
  cout << "Battery before charge: " << tesla.get_batteryPercentage() << endl;
  tesla.chargeBattery(30);
  cout << "Battery after charge: " << tesla.get_batteryPercentage() << endl;
}