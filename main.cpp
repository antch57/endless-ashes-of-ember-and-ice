#include "include/Player.h"
#include <iostream>

int main() {
  // Create an instance of Warrior
  Warrior player1("Aragorn", 100,
                  20); // Example warrior with name, health, and strength

  // Example usage
  std::cout << "Player 1: " << player1.getName()
            << ", Health: " << player1.getHealth() << std::endl;

  // Attack another player
  Warrior player2("Uruk-Hai", 80, 15); // Another warrior
  player1.attack(&player2);

  std::cout << "Player 2 after attack: Health: " << player2.getHealth()
            << std::endl;

  return 0;
}
