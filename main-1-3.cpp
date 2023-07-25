#include <iostream>

extern int num_count(int[], int, int);

int main() {
    int array1[5] = {1,3,3,4,5};
    std::cout << num_count(array1, 5, 3) << std::endl;
    return 0;
}