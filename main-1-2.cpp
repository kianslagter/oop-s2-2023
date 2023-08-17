#include <iostream>
using namespace std;

#include "Person.h"
extern PersonList createPersonList(int n);

int main() {
  int n = 5;
  PersonList persons = createPersonList(n);

  for (int i = 0; i < n; i++) {
    cout << "Person " << i + 1 << ": " << persons.people[i].name << ", "
         << persons.people[i].age << endl;
  }

  delete[] persons.people;

  return 0;
}