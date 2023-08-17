#include <iostream>
using namespace std;

#include "Person.h"
extern Person* createPersonArray(int n);
extern PersonList createPersonList(int n);
extern PersonList shallowCopyPersonList(PersonList pl);

int main() {
  int n = 5;
  PersonList persons = createPersonList(n);

  PersonList copiedPersons = shallowCopyPersonList(persons);
  for (int i = 0; i < n; i++) {
    cout << "Person " << i + 1 << ": " << copiedPersons.people[i].name << ", "
         << copiedPersons.people[i].age << endl;
  }

  delete[] persons.people;

  return 0;
}