#include <iostream>
#include <string>
using namespace std;

string base10tobase2(int n) {
    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary;
}