#include <iostream>
#include <string>
using namespace std;

string shiftLeft(string binaryNum) {
    binaryNum.erase(0, 1);
    binaryNum.push_back('0');

    return binaryNum;
}
