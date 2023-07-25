#include <iostream>

int array_sum(int array[], int n){
    // initailise sum
    int sum = 0;
    // for loop to go through array
    for (int i = 0; i < n; i++) {
        sum = array[i] + sum;
    }
    return sum;
}