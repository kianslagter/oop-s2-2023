#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Course.h"
using namespace std;

class Gradebook {
public:
    vector<pair<Course*, vector<float>>> grades; 

    void addGrade(Course* course, vector<float> courseGrades) {
        grades.push_back(make_pair(course, courseGrades));
    }
};
