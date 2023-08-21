#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician {
 private:
  std::string instrument;
  int experience;

 public:
  // default constructor
  Musician();

  // constructor that takes the instrument played and the years of experience
  Musician(std::string instrument, int experience);

  // returns the instrument played
  std::string get_instrument();

  // returns the number of years experience
  int get_experience();
};

#endif
