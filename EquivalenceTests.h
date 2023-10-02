#pragma once
#include <iostream>
#include "Addition.h"
using namespace std;

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testZeroValues();
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            cout << "Test 1 failed!" << endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            cout << "Test 2 failed!" << endl;
        }
    }

    void testZeroValues() {
        Addition addition;
        if (addition.add(0, 0) != 0) {
            cout << "Test 3 failed!" << endl;
        }
    }


};