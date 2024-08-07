#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie = newZombie("Zombie");
    zombie->announce();
    delete zombie;
    
    Zombie zombie2("Zombie2");
    zombie2.announce();

    randomChump("Zombie3");

    return (0);
}
