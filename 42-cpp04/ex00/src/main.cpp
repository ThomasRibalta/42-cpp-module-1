#include "header/Cat.hpp"
#include "header/Dog.hpp"
#include "header/Animal.hpp"
#include "header/WrongCat.hpp"
#include "header/WrongAnimal.hpp"

int main()
{
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();

  std::cout << std::endl;

  const WrongAnimal* wrongCat = new WrongCat();
	const WrongAnimal* wrongAnimal = new WrongAnimal();

	std::cout << wrongCat->getType() << " " << std::endl; 
	wrongCat->makeSound();

	wrongAnimal->makeSound();

  delete wrongCat;
  delete wrongAnimal;
  delete meta;
  delete j;
  delete i;

  return 0;
}