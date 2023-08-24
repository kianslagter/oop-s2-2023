#ifndef HOUSE_H
#define HOUSE_H

#include <iostream>
#include <string>
using namespace std;

class House {
 private:
  int lotNumber;
  string ownerName;

 public:
  House() : ownerName(""), lotNumber(0) {};  
    // a default constructor lot number is zero and owner name is an empty string ""

  House(string newName, int newNumber) : ownerName(newName), lotNumber(newNumber) {};
    // a constructor that takes the lot number and house owner name

  string get_owner_name() {return ownerName; };  // returns the name of the house owner

  int get_lot_number() {return lotNumber; };  // returns the house's lot number

  ~House() {};  // destructor
};

#endif