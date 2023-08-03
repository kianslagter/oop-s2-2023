#include <iostream>
#include <string>
#include <math.h>
int sum_array_elements(int integers[], int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum = sum + integers[i];
  }
  return sum;
}

bool is_palindrome(int integers[], int length) {
  for (int i = 0; i < floor(length/2); i++) {
    if (integers[i] != integers[length-1-i]) {
      return 0;
    }
  }
  return 1;
}

int sum_if_palindrome(int integers[], int length) {
  if (is_palindrome(integers, length) == 1) {
    return sum_array_elements(integers, length);
  } else {
    return -2;
  }
}