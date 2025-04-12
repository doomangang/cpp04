#ifndef CURE_HPP
#define	CURE_HPP

#include <iostream>
#include "AMateria.hpp"

/* Color Sets */
#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define GREY    "\033[38;5;250m"


class Cure : public AMateria 
{
public:
	Cure();
	Cure(const Cure& other);
	~Cure();
	Cure&				operator=(const Cure& other);
	std::string const &	getType() const; //Returns the materia type
	Cure* 				clone() const;
	void				use(ICharacter& target);
};
#endif