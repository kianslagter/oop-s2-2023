#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Person.h"
using namespace std;

class Student : public Person {
public:
    int studentId;
    vector<string> assignments;

    void addAssignment(const string& assignment) {
        assignments.push_back(assignment);
    }
};