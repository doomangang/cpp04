#ifndef ICE_HPP
#define	ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria 
{
public:
	Ice();
	Ice(const Ice& other);
	~Ice();
	Ice&				operator=(const Ice& other);
	std::string const &	getType() const; //Returns the materia type
	Ice* 				clone() const = 0;
	void				use(ICharacter& target);
};
#endif