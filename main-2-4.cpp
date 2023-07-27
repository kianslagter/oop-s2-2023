#include <iostream>

extern int is_ascending(int[], int n);

int main() {
    int array1[5] = {1,2,3,4,5};
    std::cout << is_ascending(array1, 5) << std::endl;
    return 0;
}