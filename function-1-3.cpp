#include <iostream>

#include "Person.h"

PersonList createPersonList(int n) {
  PersonList list;
  
  list.numPeople = n;
  list.people = new Person[n];
  for (int i = 0; i < n; i++) {
    list.people[i].name = "Jane Doe";
    list.people[i].age = 1;
  }
  
  return list;
}

Person* deepCopyPersonArray(Person* original, int n) {
    Person* copy = new Person[n];
    for (int i = 0; i < n; i++) {
        copy[i].name = original[i].name;
        copy[i].age = original[i].age;
    }
    return copy;
}

PersonList deepCopyPersonList(PersonList pl) {
    PersonList copy;
    copy.people = deepCopyPersonArray(pl.people, pl.numPeople);
    copy.numPeople = pl.numPeople;
    return copy;
}
