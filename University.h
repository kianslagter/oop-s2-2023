#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class University {
public:
    string name;
    string location;
    vector<string> courses;

    void addCourse(const string& course) {
        courses.push_back(course);
    }
};

