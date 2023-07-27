#include <iostream>

int min_element(int array[], int n){
    // initailise minNum
    int minNumber = array[0];
    if (n < 1) return 0;
    // for loop to go through array
    for (int i = 0; i < n; i++) {
        if (array[i] < minNumber){
            minNumber = array[i];
        }
    }
   
   return minNumber;
}