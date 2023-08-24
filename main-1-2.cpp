#include <iostream>
#include <string>

#include "House.h"
#include "Subdivision.h"
using namespace std;

int main() {
  Subdivision s1;
  Subdivision s2("Glenelg", 100);

  House h1("Joe", 6);
  House h2("Bill", 12);
  House h3("Mia", 32);
  House h4("Sarah", 45);

  s2.add_House(h1);
  s2.add_House(h2);
  s2.add_House(h3);
  s2.add_House(h4);

  cout << "Subdivision name: " << s2.get_subdiv_name() << endl;

  cout << "Number of houses: " << s2.get_num_houses() << endl;

  House* houses = s2.get_Houses();
  int n = s2.get_num_houses();

  return 0;
}