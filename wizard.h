#pragma once
#include <iostream>
#include <string>

#include "player.h"
using namespace std;

class Wizard : public Player {
 private:
  int mana;

 public:
  Wizard() : Player(), mana(1){};

  Wizard(string name, int health, int damage, int mana)
      : Player(name, health, damage), mana(mana){};

  void castSpell(Player* opponent) {
    cout << name << " casts a spell on " << opponent->getName() << " for "
         << mana << " mana.\n";
    opponent->takeDamage(mana);
  }
  int getMana() { return mana; }

  void setMana(int newMana) { mana = newMana; }
};