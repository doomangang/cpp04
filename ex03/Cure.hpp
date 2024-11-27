#ifndef CURE_HPP
#define	CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria 
{
public:
	Cure();
	Cure(const Cure& other);
	~Cure();
	Cure&				operator=(const Cure& other);
	std::string const &	getType() const; //Returns the materia type
	Cure* 				clone() const = 0;
	void				use(ICharacter& target);
};
#endif