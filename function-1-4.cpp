#include <iostream>

#include "Person.h"

Person* createPersonArray(int n) {
    Person* array = new Person[n];
    for (int i = 0; i < n; i++) {
        array[i].name = "Jane Doe";
        array[i].age = 1;
    }
    return array;
}

PersonList createPersonList(int n) {
    PersonList list;
    list.people = createPersonArray(n);
    list.numPeople = n;
    return list;
}

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList copy;
    copy.people = pl.people;
    copy.numPeople = pl.numPeople;
    return copy;
}