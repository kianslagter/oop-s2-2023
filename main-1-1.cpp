#include <iostream>

#include "Car.h"
using namespace std;

int main(void) {
  Car car(10000);

  cout << "Price: " << car.get_price() << endl;
  car.drive(100);
  cout << "Emissions after drive: " << car.get_emissions() << endl;
}