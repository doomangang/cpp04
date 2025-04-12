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
		if (inventory[i] != NULL)
			delete (inventory[i]);
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
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
		delete inventory[i];
}

void MateriaSource::learnMateria(AMateria* material)
{
	if (material == NULL)
		return ;
	for (int i = 0; i < 4; i++){
		if (inventory[i] == NULL)
		{
			inventory[i] = material;
			std::cout << "material learned, stored at " << GREEN << i << RESET << std::endl;
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
			if (inventory[i]->getType() == type) {
				std::cout << YELLOW << type << RESET << " is created from " << YELLOW << i << RESET << "th source inventory" << std::endl;
				return (inventory[i]->clone());
			}
		}
	}
	return (0);
}
