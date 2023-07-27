#include <iostream>

extern int is_descending(int[], int n);

int main() {
    int array1[5] = {1,2,3,4,5};
    std::cout << is_descending(array1, 5) << std::endl;
    return 0;
}