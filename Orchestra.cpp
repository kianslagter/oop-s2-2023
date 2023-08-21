#include "Orchestra.h"

// default constructor
Orchestra::Orchestra() : size(0), current_members(0), members(new Musician[size]) {}

// constructor for an orchestra of given size
Orchestra::Orchestra(int size) : size(size), current_members(0), members(new Musician[size]) {}

// returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members() {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (!members[i].get_instrument().empty()) {
            ++count;
        }
    }
    return count;
}

// returns true if any musician in the orchestra plays the specified instrument
bool Orchestra::has_instrument(std::string instrument) {
    for (int i = 0; i < size; i++) {
        if (members[i].get_instrument() == instrument) {
            return true;
        }
    }
    return false;
}

// returns a pointer to the array of members of the orchestra
Musician* Orchestra::get_members() {
    return members;
}

// returns true and adds new musician to the orchestra if the orchestra is not full
bool Orchestra::add_musician(Musician new_musician) {
        if (current_members < size) {
            members[current_members] = new_musician;
            ++current_members;
            return true;
        }
        return false;
    }

Orchestra::~Orchestra() {
    delete[] members;
}
