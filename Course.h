#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
#include "Instructor.h"
using namespace std;

class Course {
public:
    string name;
    Instructor* instructor;
    vector<Student*> students;

    Course(string name, Instructor* instructor) : name(name), instructor(instructor) {}

    void addStudent(Student* student) {
        students.push_back(student);
    }
};