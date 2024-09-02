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

	std::cout << "Use copy/ assignation operator" << std::endl;

	ClapTrap Jubileus2 = Jubileus;
	ClapTrap TestCopy("TestCopy");
	ClapTrap Robert2(TestCopy);

	Jubileus2.attack("TestCopy");
	Robert2.takeDamage(5);

	return 0;
}
