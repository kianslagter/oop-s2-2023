#include <iostream>

int min_element(int array[], int n){
    // initailise minNum
    int minNumber = 0;
    // for loop to go through array
    for (int i = 1; i < n; i++) {
        if (array[i] < minNumber){
            minNumber = array[i];
        }
    }
   
   return minNumber;
}