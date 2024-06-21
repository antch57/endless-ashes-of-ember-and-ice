#include <iostream>
#include <string>
#include "include/Player.h"  // Adjust the path if necessary
#include "include/Warrior.h" // Include Warrior header file if separate

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
