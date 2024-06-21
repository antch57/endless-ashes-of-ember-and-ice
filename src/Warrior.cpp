// Warrior.cpp (within src directory)
#include <iostream>
#include "../include/Warrior.h"

Warrior::Warrior(const std::string &name, int health, int strength)
    : name(name), health(health), strength(strength) {}

Warrior::~Warrior() {}

void Warrior::setName(const std::string &name) { this->name = name; }

std::string Warrior::getName() const { return name; }

void Warrior::setHealth(int health) { this->health = health; }

int Warrior::getHealth() const { return health; }

void Warrior::attack(Player *target) {
  // Implement attack logic
  // Example: Reduce target's health based on warrior's strength
  int damage = strength * 2; // Example formula
  target->setHealth(target->getHealth() - damage);
}
