#include "header/AMateria.hpp"

AMateria::AMateria() : type(""){}

AMateria::AMateria(std::string const & type) : type(type){}

AMateria::AMateria(AMateria const & src) : type(src.type){}

AMateria::~AMateria(){}

AMateria & AMateria::operator=(AMateria const & src)
{
  if (this != &src)
    this->type = src.type;
  return *this;
}

std::string const & AMateria::getType() const
{
  return type;
}

void AMateria::use(ICharacter& target)
{
  (void)target;
}
