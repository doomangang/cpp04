#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog &other) : Animal(other.type)
{
	std::cout << "Dog copy constructor called\n";
}

Dog::~Dog() {
	std::cout << "Dog destructor called\n";
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog assignment operator called\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void Dog::makeSound() const{
	std::cout << "Bowowowowow\n";
}