#include <iostream>
#include <string>
#ifndef PERSON_H
#define PERSON_H
using namespace std;

struct Person {
  string name;
  int age;
};

struct PersonList {
    Person* people;
    int numPeople;
};

#endif