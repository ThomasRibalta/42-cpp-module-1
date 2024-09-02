#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap Jubileus("Jubileus");
	ScavTrap Robert("Robert");

	Jubileus.attack("Robert");
	Robert.takeDamage(0);

	Robert.attack("Jubileus");
	Jubileus.takeDamage(20);

	Jubileus.attack("Robert");

	Robert.beRepaired(7);

	Jubileus.attack("Robert");

	Robert.guardGate();

	std::cout << "Use copy/ assignation operator" << std::endl;
	ClapTrap Jubileus2 = Jubileus;
	ScavTrap Robert2(Robert);

	Jubileus2.attack("Robert");

	Robert2.guardGate();

	return 0;
}
