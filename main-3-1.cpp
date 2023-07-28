#include <iostream>

extern bool is_fanarray(int[], int n);

int main() {
    int array1[3] = {1, 2, 1};
    std::cout << is_fanarray(array1, 3) << std::endl;
    return 0;
}