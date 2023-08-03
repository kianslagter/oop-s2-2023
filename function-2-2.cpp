#include <iostream>
#include <math.h>

int binary_to_int(int binary[], int n) {
  int decimal = 0;
  for (int i = 0; i < n; i++) {
     decimal = decimal + (binary[n-i-1] * pow(2, i));
  }
  return decimal;
}