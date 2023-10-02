#pragma once
#include <iostream>
#include "Addition.h"
using namespace std;

class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    void testAddition() {
        Addition addition;

        if (addition.add(1, 2) != 3) {
            cout << "Test 1 failed!" << endl;
        }
        if (addition.add(2, 2) != 4) {
            cout << "Test 2 failed!" << endl;
        }
        if (addition.add(0, 0) != 0) {
            cout << "Test 3 failed!" << endl;
        }
        if (addition.add(120, 2) != 122) {
            cout << "Test 4 failed!" << endl;
        }
    }
};
