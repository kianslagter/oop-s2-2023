#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count(int[], int);

int main() {
    // test case 1
    int array1[5] = {4,5,6,7,8};
    std::cout << "The number is: " << count(array1, 5) << std::endl;
    return 0;
}