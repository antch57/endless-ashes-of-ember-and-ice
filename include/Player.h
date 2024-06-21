// Player.h
#ifndef PLAYER_H
#define PLAYER_H

// Abstract base class for Player
class Player {
public:
  virtual ~Player() {} // Virtual destructor for polymorphic behavior

  virtual void setName(const std::string &name) = 0; // Pure virtual function
  virtual std::string getName() const = 0;           // Pure virtual function
  virtual void setHealth(int health) = 0;            // Pure virtual function
  virtual int getHealth() const = 0;                 // Pure virtual function
  virtual void attack(Player *target) = 0;           // Pure virtual function
  // Add more virtual functions as needed for your game
};

#endif // PLAYER_H
