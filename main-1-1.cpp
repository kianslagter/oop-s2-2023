#include <iostream>

extern int array_sum(int[], int);

int main() {
    int array1[5] = {1,2,3,4,5};
    std::cout << array_sum(array1, 5) << std::endl;
    return 0;
}