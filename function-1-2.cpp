#include <iostream>

double array_mean(int array[], int n){
    // initailise mean and sum
    double sum = 0;
    double mean = 0;
    if (n < 1) return 0;
    // for loop to go through array
    for (int i = 0; i < n; i++) {
        sum = array[i] + sum;
    }
    mean = sum / n;

    return mean;

}