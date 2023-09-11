#include <iostream>
#include <vector>
#include "University.h"
#include "Course.h"
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Gradebook.h"
#include "Grade.h"
using namespace std;

int main() {
    University uni;
    uni.name = "Adelaide University";
    uni.location = "Adelaide";

    Instructor* instructor = new Instructor();
    instructor->name = "Joe";
    instructor->age = 30;
    instructor->id = 1;

    Course* course = new Course("Object oriented programming", instructor);
    uni.addCourse(course->name);

    Student* student = new Student();
    student->name = "Bill";
    student->age = 20;
    student->studentId = 1;
    course->addStudent(student);


    instructor->addGrade(student->studentId, 85.0f); 


    delete course;
    delete instructor;
    delete student;

    return 0;
}
