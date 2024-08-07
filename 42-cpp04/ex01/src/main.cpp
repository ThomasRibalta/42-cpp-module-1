#include "header/Cat.hpp"
#include "header/Dog.hpp"
#include "header/Animal.hpp"
#include "header/WrongCat.hpp"
#include "header/WrongAnimal.hpp"

int main()
{
  const int size = 10;
  Animal* meta[size];

  for (int i = 0; i < size; i++)
  {
    if (i % 2 == 0)
      meta[i] = new Dog();
    else
      meta[i] = new Cat();
  }

  for (int i = 0; i < size; i++)
  {
    std::cout << meta[i]->getType() << " => ";
    meta[i]->makeSound();
    delete meta[i];
    std::cout << std::endl;
  }
  return 0;
}