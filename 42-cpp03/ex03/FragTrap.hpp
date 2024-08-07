#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
  public:
    FragTrap(std::string name);
    ~FragTrap();

    void highFivesGuys(void);

    static const int _dhitpoints = 100;
		static const int _denergyPoints = 100;
		static const int _dattackDammage = 30;
};

#endif