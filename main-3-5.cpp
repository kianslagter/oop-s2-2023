#include <iostream>

extern double sum_even(double[], int n);

int main() {
    double array1[5] = {1,2,3,4,5};
    std::cout << sum_even(array1, 5) << std::endl;
    return 0;
}