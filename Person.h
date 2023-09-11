#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {
public:
    string name;
    int age;
    vector<Person*> friends;

    void addFriend(Person* person) {
        friends.push_back(person);
    }
};