#include <iostream>

extern int two_five_nine(int[], int n);

int main() {
    int array1[5] = {2,2,5,4,9};
    two_five_nine(array1, 5);
    return 0;
}