#include "header/MateriaSource.hpp"

MateriaSource::MateriaSource() : count(0)
{
  for (int i = 0; i < 4; i++)
    materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
  count = other.count;
  for (int i = 0; i < 4; i++)
    materias[i] = other.materias[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
  count = other.count;
  for (int i = 0; i < 4; i++)
    materias[i] = other.materias[i];
  return *this;
}

MateriaSource::~MateriaSource()
{
  for (int i = 0; i < 4; i++)
    delete materias[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
  if (count < 4)
  {
    materias[count] = m;
    count++;
  }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
  for (int i = 0; i < 4; i++)
  {
    if (materias[i] && materias[i]->getType() == type)
      return materias[i]->clone();
  }
  return NULL;
}