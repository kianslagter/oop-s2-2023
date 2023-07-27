#include <iostream>

int max_element(int array[], int n){
    // initailise maxNum
    int maxNumber = array[0];
    if (n < 1) return 0;
    // for loop to go through array
    for (int i = 0; i < n; i++) {
        if (array[i] > maxNumber){
            maxNumber = array[i];
        }
    }
   
   return maxNumber;
}