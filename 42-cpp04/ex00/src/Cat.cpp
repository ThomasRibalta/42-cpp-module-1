#include "header/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
  std::cout << "Cat created." << std::endl;
}

Cat::~Cat()
{
  std::cout << "Cat destroyed." << std::endl;
}

void Cat::makeSound() const
{
  std::cout << "Meow meow." << std::endl;
}