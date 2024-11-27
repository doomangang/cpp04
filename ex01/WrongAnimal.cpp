#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal type constructor called\n";
}
WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	*this = other;
	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "WrongAnimal assignment operator called\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void WrongAnimal::makeSound() const{
	std::cout << "What did I do so wrong\n";
}

std::string WrongAnimal::getType() const
{
	return type;
}