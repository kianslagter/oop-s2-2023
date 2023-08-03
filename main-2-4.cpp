#include <iostream>
using namespace std;

extern int array_min(int integers[], int length); 
extern int array_max(int integers[], int length);
extern int sum_min_max(int integers[], int length);

int main () {
    int array[5] = {1, 2, 3, 4, 5};
    cout << sum_min_max(array, 5);
    return 0;
}