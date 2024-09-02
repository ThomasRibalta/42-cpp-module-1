#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
  FragTrap(std::string name);
  ~FragTrap();
  FragTrap(const FragTrap &other);
  FragTrap &operator=(const FragTrap &other);

  void highFivesGuys(void);
};

#endif