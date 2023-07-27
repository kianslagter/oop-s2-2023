#include <iostream>

int num_count(int array[], int n, int number){
    // initailise numCount
    int numCount = 0;
    if (n < 1) return 0;
    // for loop to go through array
    for (int i = 0; i < n; i++) {
        if (array[i] == number){
            numCount++;
        }
    }
   return numCount;

}