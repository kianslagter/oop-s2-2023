#include <iostream>
using namespace std;

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main() {
  int binary_digits[8] = {1, 0, 1, 1, 0, 1, 1, 1};
  // binary number equals = 183

  cout << bin_to_int(binary_digits, 8) << endl;
}