#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other.type)
{
	std::cout << "WrongCat copy constructor called\n";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called\n";
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	std::cout << "WrongCat assignment operator called\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}
