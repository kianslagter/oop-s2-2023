#include <math.h>

#include <iostream>
using namespace std;

int bin_to_int(int binary_digits[], int number_of_digits) {
  int decimal_num = 0;

  for (int i = 0; i < number_of_digits; i++) {
    decimal_num =
        decimal_num + (binary_digits[i] * pow(2, number_of_digits - 1 - i));
  }

  return decimal_num;
}
