// Player.cpp
#include "Player.h"

// Concrete Player class implementing the interface
class Warrior : public Player {
private:
  std::string name;
  int health;
  int strength; // Example additional attribute for a warrior

public:
  Warrior(const std::string &name, int health, int strength)
      : name(name), health(health), strength(strength) {}

  void setName(const std::string &name) override { this->name = name; }

  std::string getName() const override { return name; }

  void setHealth(int health) override { this->health = health; }

  int getHealth() const override { return health; }

  void attack(Player *target) override {
    // Implement attack logic
    // Example: Reduce target's health based on warrior's strength
    int damage = strength * 2; // Example formula
    target->setHealth(target->getHealth() - damage);
  }

  // Implement additional functions specific to Warrior or other player types
};

// Other concrete player classes can be similarly implemented
