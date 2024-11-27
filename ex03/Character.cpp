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
		delete (inventory[i]);
}

Character&	Character::operator=(const Character& other)
{
	name = other.name;
	if (this != &other)
	{
		for ( int i = 0; i < 4; i++)
			delete inventory[i];
		inventory[i] = NULL;
		if (other.inventory[i] != NULL)
			inventory[i] = other.inventory[i].clone();
	}
	return (*this);
}
