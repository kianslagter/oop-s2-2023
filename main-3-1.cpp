#include <iostream>
using namespace std;

extern int *readNumbers();
extern bool equalsArray(int *numbers1, int *numbers2, int length);

int main() {
  int *array1 = readNumbers();
  int *array2 = readNumbers();

  cout << equalsArray(array1, array2, 10) << endl;

  
  delete[] array1;
  delete[] array2;

  return 0;
}