#pragma once
#include <iostream>
#include "Invoice.h"
using namespace std;

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        testMultipleServiceCosts();
    }

private:
    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                cout << "Test 1 failed!" << endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                cout << "Test 2 failed!" << endl;
            }
        }
    }

    void testMultipleServiceCosts() {
        {
            Invoice invoice("EFGH");
            invoice.addServiceCost(5);
            invoice.addServiceCost(15);
            if (invoice.getDollarsOwed() != 20) {
                cout << "Test 3 failed!" << endl;
            }
        }

        {
            Invoice invoice("IJKL");
            invoice.addServiceCost(3);
            invoice.addServiceCost(7);
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 20) {
                cout << "Test 4 failed!" << endl;
            }
        }
    }
};
