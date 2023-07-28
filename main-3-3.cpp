#include <iostream>

extern double weighted_average(int array[], int n);

int main() {
  int array1[5] = {3, 1, 4, 1, 5};
  std::cout << weighted_average(array1, 5) << std::endl;
  return 0;
}