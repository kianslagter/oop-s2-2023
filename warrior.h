#pragma once
#include <iostream>
#include <string>

#include "player.h"
using namespace std;

class Warrior : public Player {
 private:
  string weapon;

 public:
  Warrior() : Player(), weapon("No weapon"){};

  Warrior(string name, int health, int damage, string weapon)
      : Player(name, health, damage), weapon(weapon){};

  void swingWeapon(Player* opponent) {
    cout << name << " swings their " << weapon << " at " << opponent->getName()
         << "!\n";
    opponent->takeDamage(damage);
  }
};