#include "header/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
  this->brain = new Brain();
  std::cout << "Cat created." << std::endl;
}

Cat::~Cat()
{
  delete this->brain;
  std::cout << "Cat destroyed." << std::endl;
}

void Cat::makeSound() const
{
  std::cout << "Meow meow." << std::endl;
}