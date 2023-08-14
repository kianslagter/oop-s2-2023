#include <iostream>
using namespace std;

int *readNumbers() {
  int *numbers = new int[10];
  for (int i = 0; i < 10; i++) {
    cin >> numbers[i];
  }
  return numbers;
}

void printNumbers(int *numbers, int length) {
  for (int i = 0; i < length; i++) {
    cout << i << " " << numbers[i] << endl;
  }
  return;
}

int secondSmallestSum(int *numbers, int length) {
    std::vector<int> sums;
    for (int i = 0; i < length; i++) {
        int sum = 0;
        for (int j = i; j < length; j++) {
            sum += numbers[j];
            sums.push_back(sum);
        }
    }
    std::sort(sums.begin(), sums.end());
    int smallest = sums[0];
    for (int i = 1; i < sums.size(); i++) {
        if (sums[i] != smallest) {
            return sums[i];
        }
    }
    return smallest;
}
