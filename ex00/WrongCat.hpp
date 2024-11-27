#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "Animal.hpp"

class WrongCat : public Animal
{
public:
	WrongCat();
	WrongCat(const WrongCat& other);
	~WrongCat();
	WrongCat& operator=(const WrongCat& other);
	void    makeSound();
};