#include <algorithm>
#include <iostream>
#include <vector>

double weighted_average(int array[], int n) {
  if (n < 1) return 0;

  double sum = 0;

  for (int i = 0; i < n; i++) {
    double val = std::count(array, array + n, array[i]);
    sum += array[i] * val / n;
  }

  return sum;
}