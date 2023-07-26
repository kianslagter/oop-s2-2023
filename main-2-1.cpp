#include <iostream>

extern int min_element(int[], int n);

int main() {
    int array1[5] = {1,2,3,4,5};
    std::cout << min_element(array1, 5) << std::endl;
    return 0;
}