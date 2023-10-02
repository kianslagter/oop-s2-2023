#pragma once

#include <string>
using namespace std;

class Invoice {
public:
    Invoice(const string& id) : id(id), dollarsOwed(0) {}

    void addServiceCost(int cost) {
        dollarsOwed += cost;
    }

    int getDollarsOwed() const {
        return dollarsOwed;
    }

private:
    string id;
    int dollarsOwed;
};
