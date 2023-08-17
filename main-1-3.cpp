#include <iostream>
using namespace std;

#include "Person.h"
extern Person* deepCopyPersonArray(Person* original, int n);
extern PersonList deepCopyPersonList(PersonList pl);
extern PersonList createPersonList(int n);

int main() {
  int n = 5;
  PersonList persons = createPersonList(n);
  PersonList copiedPersons = deepCopyPersonList(persons);
  for (int i = 0; i < n; i++) {
    cout << "Person " << i + 1 << ": " << copiedPersons.people[i].name << ", "
         << copiedPersons.people[i].age << endl;
  }

  delete[] persons.people;
  delete[] copiedPersons.people;

  return 0;
}