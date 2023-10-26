#include <iostream>
#include "Utils.h"
using namespace std;

int main() {
  tuple<int, int> pos = Utils::generateRandomPos(100, 100);
  tuple<int, int> pos2 = Utils::generateRandomPos(100, 100);

  double dist = Utils::calculateDistance(pos, pos2);
  cout << "distance:" << dist << endl;
  return 0;
}
