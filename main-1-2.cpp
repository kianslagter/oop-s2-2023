#include <iostream>

extern double array_mean(int[], int);

int main() {
    int array1[5] = {1,2,3,4,5};
    std::cout << array_mean(array1, 5) << std::endl;
    return 0;
}