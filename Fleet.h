#pragma once
#include <iostream>
#include "Car.h"
#include "Ford.h"
#include "Tesla.h"
using namespace std;

class Fleet {
  private:
    Car** fleet;
  public:
    Fleet() {
      fleet = new Car*[5];
      fleet[0] = new Tesla('s', 50000);
      fleet[1] = new Ford(3, 30000);
      fleet[2] = new Car(5000);
      fleet[3] = new Ford(150, 40000);
      fleet[4] = new Tesla('x', 60000);
    }
    Car **get_fleet() {
      return fleet;
    }
};