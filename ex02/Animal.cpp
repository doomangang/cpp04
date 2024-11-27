#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal default constructor called\n";
}

Animal::Animal(std::string type)  : type(type)
{
	std::cout << "Animal type constructor called\n";
}
Animal::Animal(const Animal &other) {
	*this = other;
	std::cout << "Animal copy constructor called\n";
}

Animal::~Animal() {
	std::cout << "Animal destructor called\n";
}

Animal &Animal::operator=(const Animal &other) {
	std::cout << "Animal assignment operator called\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void Animal::makeSound() const {
	std::cout << "I am an animal\n";
}

std::string Animal::getType() const
{
	return type;
}