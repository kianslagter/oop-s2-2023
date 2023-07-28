#include <iostream>

int count_evens(int number){
    // initailise evenCount
    int evenCount = 0;
    if (number < 1) return 0;
    // for loop to go through array
    for (int i = 0; i < number; i++) {
        if (i % 2 == 0){
            evenCount++;
        }
    }
   
   return evenCount;
}