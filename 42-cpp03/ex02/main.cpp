#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap Jubileus("Jubileus");
	ScavTrap Robert("Robert");
	FragTrap Jean("Jean");

	Jubileus.attack("Robert");
	Robert.takeDamage(0);

	Robert.attack("Jubileus");
	Jubileus.takeDamage(20);

	Jubileus.attack("Robert");

	Robert.beRepaired(7);


	Jubileus.attack("Robert");

	Jean.attack("Robert");
	Robert.takeDamage(10);
	Jean.highFivesGuys();

	return 0;
}
