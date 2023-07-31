#include <iostream>
using namespace std;

extern string base10tobase2(int n);

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << base10tobase2(n) << endl;
    return 0;
}
