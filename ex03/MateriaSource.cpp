#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for(int i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
		if (other.inventory[i] != NULL)
			inventory[i] = other.inventory[i]->clone();
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for(int i = 0; i < 4; i++)
		{
			if (inventory[i] != NULL)
				delete (inventory[i]);
			inventory[i] = NULL;
			if (other.inventory[i] != NULL)
				inventory[i] = other.inventory[i]->clone();
			i++;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
		delete (inventory[i]);
}

void MateriaSource::learnMateria(AMateria* material)
{
	for (int i = 0; i < 4; i++){
		if (inventory[i] == NULL)
		{
			inventory[i] = material;
			return ;
		}
	}
	delete material;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
		{
			if (inventory[i]->getType() == type)
				return (inventory[i]->clone());
		}
	}
	return (0);
}
