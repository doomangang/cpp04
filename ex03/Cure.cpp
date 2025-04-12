#include "Cure.hpp"

Cure::Cure()
{
	this->AMateria::type = "cure";
}

Cure::Cure(const Cure& other) : AMateria(other) {}

Cure::~Cure() {}

Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

Cure*	Cure::clone() const{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << GREEN << "* heals " << target.getName() << "'s wounds *" << RESET <<std::endl;
}