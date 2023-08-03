#include <iostream>
using namespace std;

extern int binary_to_int(int[], int);

int main() {
  int binary[] = {1,0,1,1,1};
  cout << binary_to_int(binary, 5) << endl;
}