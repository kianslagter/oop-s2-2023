#include <iostream>
using namespace std;

extern int palindrome_sum(int integers[], int length);


int main() {
    int array[8] = {8,6,4,2,2,4,6,8};
    
    cout << palindrome_sum(array, 8) << endl;
  

}