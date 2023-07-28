#include <iostream>

extern int median_array(int array[], int n);

int main() {
  int array1[5] = {3, 1, 4, 1, 5};
  std::cout << median_array(array1, 5) << std::endl;
  return 0;
}