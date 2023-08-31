#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class Vehicle {
 private:
  int ID;
  time_t timeOfEntry;

 public:
  Vehicle() : ID(0) {timeOfEntry = time(nullptr);}

  Vehicle(int ID) : ID(ID) {timeOfEntry = time(nullptr);}

  int getCurrentTime() { return time(nullptr); }

  int getID() { return ID; }

  int getTimeOfEntry() { return timeOfEntry; }

  virtual int getParkingDuration() = 0;
};