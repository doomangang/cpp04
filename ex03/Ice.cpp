#include "Ice.hpp"

Ice::Ice()
{
	this->AMateria::type = "Ice";
}

Ice::Ice(const Ice& other)
{
	this->AMateria::type = other.type;
}

Ice::~Ice()
{
}

Ice& Ice::operator=(const Ice& other)
{
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

std::string const & Ice::getType() const
{
	return type;
}

Ice*	Ice::clone() const{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<std::endl;
}