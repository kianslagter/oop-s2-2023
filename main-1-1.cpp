#include <iostream>
using namespace std;

#include "Person.h"

extern Person* createPersonArray(int n);

int main() {
  int n = 5;
  Person* persons = createPersonArray(n);

  for (int i = 0; i < n; i++) {
    cout << "Person " << i + 1 << ": " << persons[i].name << ", "
         << persons[i].age << endl;
  }

  delete[] persons;
  return 0;
}