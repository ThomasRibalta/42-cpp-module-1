#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Jubileus("Jubileus");
	ClapTrap Robert("Robert");

	Jubileus.attack("Robert");
	Robert.takeDamage(5);

	Jubileus.attack("Robert");
	Robert.takeDamage(1);

	Jubileus.attack("Robert");
	Robert.takeDamage(1);

	Robert.beRepaired(7);


	Jubileus.attack("Robert");
	Robert.takeDamage(10);

	return 0;
}
