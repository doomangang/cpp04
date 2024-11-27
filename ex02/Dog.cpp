#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	brain = new Brain();
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog &other) : Animal(other.type)
{
	brain = new Brain(*(other.brain));
	std::cout << "Dog copy constructor called\n";
}

Dog::~Dog() {
	delete brain;
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

Brain *Dog::getBrain() {
	return brain;
}