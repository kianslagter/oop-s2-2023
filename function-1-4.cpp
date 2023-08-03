#include <iostream>
using namespace std;

void print_scaled(int array[3][3], int scale) {
  int scaledarray[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scaledarray[i][j] = array[i][j] * scale;
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << scaledarray[i][j] << " ";
    }
    cout << "\n";
  }

  return;
}