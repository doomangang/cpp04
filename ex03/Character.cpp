#include "Character.hpp"

Character::Character()
{
	name = "Default";
	for(int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(std::string name)
{
	this->name = name;
	for(int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character& other)
{
	this->name = "Default";
	for(int i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
		if (other.inventory[i] != NULL)
		{
			inventory[i] = other.inventory[i]->clone();
		}
	}
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		delete inventory[i];
}

Character&	Character::operator=(const Character& other)
{
	name = other.name;
	if (this != &other)
	{
		for ( int i = 0; i < 4; i++)
		{
			delete inventory[i];
			inventory[i] = NULL;
			if (other.inventory[i] != NULL)
				inventory[i] = other.inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const&	Character::getName() const { return this->name; }

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4 ; i++) {
		if (inventory[i] == m)
			return ;
		if (inventory[i] == NULL){
			inventory[i] = m;
			std::cout << MAGENTA << m->getType() << " is equiped at " << i << RESET << std::endl;
			return ;
		}
	}
}

void	Character::unequip(int idx) {
	if (inventory[idx] != NULL) {
		std::cout << CYAN << inventory[idx]->getType() << RESET << " from "  <<CYAN<< idx << RESET << "th slot is unequiped" << RESET << std::endl;
		inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target) {
	if ( idx >= 0 && idx < 4 && inventory[idx] != NULL )
		inventory[idx]->use(target);
	else
		std::cout << RED << "No such Materia in this inventory" << RESET << std::endl;
}