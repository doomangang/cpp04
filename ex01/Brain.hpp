#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
private:
	std::string[100] ideas;
public:
	Brain();
	Brain(const Brain& other);
	~Brain();
	Brain&		operator=(const Brain& other);
	std::string getIdea(int idx);
	void		setIdea(int idx, std::string content);
};
#endif
