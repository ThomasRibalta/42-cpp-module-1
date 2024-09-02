#include "DaimondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

DaimondTrap::DaimondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
  this->_name = name;
  this->_hitpoints = FragTrap::_hitpoints;
  this->_energyPoints = ScavTrap::_energyPoints;
  this->_attackDamage = FragTrap::_attackDamage;
  std::cout << "DaimondTrap constructor called" << std::endl;
}

DaimondTrap::DaimondTrap(const DaimondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
  *this = other;
  std::cout << "DaimondTrap copy constructor called" << std::endl;
}

DaimondTrap &DaimondTrap::operator=(const DaimondTrap &other)
{
  this->_name = other._name;
  this->_hitpoints = other._hitpoints;
  this->_energyPoints = other._energyPoints;
  this->_attackDamage = other._attackDamage;
  std::cout << "DaimondTrap assignation operator called" << std::endl;
  return *this;
}

DaimondTrap::~DaimondTrap()
{
  std::cout << "DaimondTrap destructor called" << std::endl;
}

void DaimondTrap::whoAmI()
{
  std::cout << "My name is " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}