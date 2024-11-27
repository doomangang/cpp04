#include "Cure.hpp"

Cure::Cure()
{
	this->AMateria::type = "cure";
}

Cure::Cure(const Cure& other)
{
	this->AMateria::type = other.type;
}

Cure::~Cure()
{
}

Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

std::string const & Cure::getType() const
{
	return type;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" <<std::endl;
}