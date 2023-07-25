#include <iostream>

extern int sum_two_arrays(int[], int[], int);

int main() {
    int array1[5] = {1,2,3,4,5};
    int array2[5] = {6,7,8,9,10};
    std::cout << sum_two_arrays(array1, array2, 5) << std::endl;
    return 0;
}