#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Person.h"
using namespace std;

class Instructor : public Person {
public:
    int id;
    vector<pair<int, float>> grades; // Pair of student ID and grade

    void addGrade(int studentId, float grade) {
        grades.push_back(make_pair(studentId, grade));
    }
};