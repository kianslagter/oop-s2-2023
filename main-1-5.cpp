#include <iostream>

extern int count_evens(int);

int main() {
    int num = 13;
    std::cout << count_evens(num) << std::endl;
    return 0;
}