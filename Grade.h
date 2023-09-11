#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
#include "Course.h"
using namespace std;

class Grade {
public:
    Student* student;
    Course* course;
    float grade;

    Grade(Student* student, Course* course, float grade) : student(student), course(course), grade(grade) {}
};