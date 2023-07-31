#include <iostream>
using namespace std;

extern string shiftLeft(string binaryNum);

int main() {
    string binaryNum = "1100101";
    cout << shiftLeft(binaryNum) << endl;
    return 0;
}
