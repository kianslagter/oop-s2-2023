#include <ctime>
#include <iostream>

#include "Utils.h"
using namespace std;

int main() {
  srand(time(0));

  tuple<int, int> pos1 = Utils::generateRandomPos(100, 100);
  tuple<int, int> pos2 = Utils::generateRandomPos(100, 100);

  double distance = Utils::calculateDistance(pos1, pos2);
  cout << "distance between positions: " << distance << endl;

  return 0;
}
