#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count(int[], int);

int main() {
    // test case 1
    int array1[5] = {4,5,6,7,8};
    std::cout << "The number is: " << count(array1, 5) << std::endl;
    

    // test case 2
    int array2[5] = {1,2,3,4,5};
    std::cout << "The number is: " << count(array2, 5) << std::endl;
    

    // test case 3
    int array3[3] = {2,2,2};
    std::cout << "The number is: " << count(array3, 3) << std::endl;
    

    // test case 4
    int array4[4] = {0,0,0,0};
    std::cout << "The number is: " << count(array4, 4) << std::endl;
    return 0;
}