#ifndef SUBDIVISION_H
#define SUBDIVISION_H

#include <iostream>
#include <string>

#include "House.h"
using namespace std;

class Subdivision {
 private:
  int currSize;
  int maxSize;
  string subName;
  House* houses;

 public:
  Subdivision() : subName(""), maxSize(0), currSize(0), houses(nullptr) {};  // default constructor

  Subdivision(string newName, int newSize) : subName(newName), maxSize(newSize), currSize(0) {
    houses = new House[newSize]; // Allocate memory for houses
  };
  // constructor with given subdivision size and subdivision name

  int get_num_houses() { return currSize; };
  // returns the number of houses currently built on the the subdivision

  string get_subdiv_name() {
    return subName;
  };  // returns the subdivision's name

  House* get_Houses() {
    return houses;
  };  // returns the array of houses currently on the subdivision

  // returns true and adds new house to the subdivision if the subdivision is
  // not full otherwise returns false
  bool add_House(House new_house) {
    if (currSize >= maxSize) {
      return 0;
    } else {
      houses[currSize] = new_house;
      currSize++;
      return 1;
    }
  };

    ~Subdivision() { 
    if(houses != nullptr) {
      delete[] houses;
    }
};
};

#endif