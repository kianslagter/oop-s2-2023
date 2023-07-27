#include <iostream>

void two_five_nine(int array[], int n) {
    // intiailise variables
    int numTwos = 0, numFives = 0, numNines = 0;
    // for loop
    for (int i = 0; i < n; i++) {
        switch (array[i]) {
            case 2:
                numTwos++;
                break;
            case 5:
                numFives++;
                break;
            case 9:
                numNines++;
                break;
        }
    }
    std::cout << "2:" << numTwos << ";5:" << numFives << ";9:" << numNines << ";" << std::endl;
}