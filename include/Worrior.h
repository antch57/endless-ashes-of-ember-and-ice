// Warrior.h (within include directory)
#ifndef WARRIOR_H
#define WARRIOR_H

#include "Player.h"

class Warrior : public Player {
private:
  std::string name;
  int health;
  int strength; // Example additional attribute for a warrior

public:
  Warrior(const std::string &name, int health, int strength);
  virtual ~Warrior() override; // Virtual destructor

  void setName(const std::string &name) override;
  std::string getName() const override;
  void setHealth(int health) override;
  int getHealth() const override;
  void attack(Player *target) override;
};

#endif // WARRIOR_H
