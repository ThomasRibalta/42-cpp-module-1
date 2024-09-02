#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
  std::cout << "ScavTrap " << name << " is born!" << std::endl;
  this->_hitpoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
  std::cout << "ScavTrap " << this->_name << " is created" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
  this->_name = other._name;
  this->_attackDamage = other._attackDamage;
  this->_energyPoints = other._energyPoints;
  this->_hitpoints = other._hitpoints;
  std::cout << "ScavTrap " << this->_name << " is created" << std::endl;
  return *this;
}

ScavTrap::~ScavTrap()
{
  std::cout << "ScavTrap " << this->_name << " is destroyed" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
  if (this->_hitpoints <= 0)
  {
    std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
    return;
  }
  if (this->_energyPoints <= 0)
  {
    std::cout << "ScavTrap " << this->_name << " is out of energy" << std::endl;
    return;
  }
  this->_energyPoints -= 1;
  std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
  std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode" << std::endl;
}
