#include "Musician.h"

// default constructor
Musician::Musician() : instrument("null"), experience(0) {}

// constructor that takes the instrument played and the years of experience
Musician::Musician(std::string instrument, int experience)
    : instrument(instrument), experience(experience) {}

// returns the instrument played
std::string Musician::get_instrument() { return this->instrument; }

// returns the number of years experience
int Musician::get_experience() { return this->experience; }
