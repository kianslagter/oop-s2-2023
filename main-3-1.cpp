#include <iostream>

extern bool is_fanarray(int[], int n);

int main() {
    int array1[5] = {1,2,3,4,5};
    std::cout << is_fanarray(array1, 3) << std::endl;
    return 0;
}