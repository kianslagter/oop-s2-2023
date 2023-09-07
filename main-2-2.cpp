#include <iostream>

#include "Car.h"
#include "Ford.h"
using namespace std;

int main(void) {
  Ford ford(3, 50000);

  cout << "Price: " << ford.get_price() << endl;
  ford.set_litresOfFuel(50);
  cout << "Fuel before drive: " << ford.get_litresOfFuel() << endl;
  ford.drive(100);
  cout << "Emissions after drive: " << ford.get_emissions() << endl;
  cout << "Fuel after drive: " << ford.get_litresOfFuel() << endl;
}