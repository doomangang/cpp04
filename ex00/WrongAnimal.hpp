#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(type);
	WrongAnimal(const WrongAnimal& other);
	~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal& other);
	void    makeSound();
};