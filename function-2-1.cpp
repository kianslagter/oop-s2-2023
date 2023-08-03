#include <iostream>
#include <string>
using namespace std;

void print_binary_str(string decimal_number) {
    string binary = "";
    int n = stoi(decimal_number);
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    cout << binary << endl;
}