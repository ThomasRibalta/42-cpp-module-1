#ifndef DAIMONDTRAP_HPP
#define DAIMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DaimondTrap : public FragTrap, public ScavTrap
{
private:
  std::string _name;

public:
  DaimondTrap(std::string name);
  ~DaimondTrap();
  DaimondTrap(const DaimondTrap &other);
  DaimondTrap &operator=(const DaimondTrap &other);

  void whoAmI();

  using ScavTrap::attack;
};

#endif