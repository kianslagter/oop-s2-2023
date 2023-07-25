#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n){
    // initailise sum
    int sum = 0;
    // for loop to go through arrays
    for (int i = 0; i < n; i++) {
        sum = array[i] + sum;
        sum = secondarray[i] + sum;
    }
   
   return sum;
}


