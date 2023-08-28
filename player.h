#pragma once
#include <iostream>
#include <string>
using namespace std;

class Player {
 protected:
  int health;
  int damage;

 private:

 public:
  string name;
  Player(string name, int health, int damage)
      : name(name), health(health), damage(damage){};

  Player() : name("Unknown"), health(100), damage(1){};

  void attack(Player* opponent, int damage) { opponent->takeDamage(damage); }

  void takeDamage(int damage) {
    health = health - damage;
    cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
  }

  string getName() { return name; }

  int getHealth() { return health; }

  void setHealth(int newHealth) { health = newHealth; }

  int getMana() {
    cout << "Player does not have mana" << endl;
    return -1;
  }
};
