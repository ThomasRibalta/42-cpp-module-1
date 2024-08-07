#include <iostream>
#include <string>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *brainPtr = &brain;
    std::string &brainRef = brain;

    std::cout << "Adresse (brain): " << &brain << std::endl;
    std::cout << "Adresse (brainPtr): " << brainPtr << std::endl;
    std::cout << "Adresse (brainRef): " << &brainRef << std::endl;

    std::cout << "Contenu (brain): " << brain << std::endl;
    std::cout << "Contenu (brainPtr): " << *brainPtr << std::endl;
    std::cout << "Contenu (brainRef): " << brainRef << std::endl;

    return (0);
}