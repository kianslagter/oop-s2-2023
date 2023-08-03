#include <iostream>
using namespace std;

extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
extern int sum_is_palindrome(int integers[], int length);

int main () {
    int array[5] = {1, 0, 5, 0, 1};
    cout << sum_is_palindrome(array, 5);
}