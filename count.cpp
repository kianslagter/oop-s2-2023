#include <iostream>

int count(int array[], int n) {
    // initailise even count
    int evenCount = 0;
    // for loop to go through array
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            // if i in array is even then increase even count
            evenCount++;
        }
    }
    return evenCount;
}


