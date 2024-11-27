#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	brain = new Brain();
	std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat &other) : Animal(other.type)
{
	brain = new Brain();
	std::cout << "Cat copy constructor called\n";
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat destructor called\n";
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat assignment operator called\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void Cat::makeSound() const{
	std::cout << "meowwwww\n";
}