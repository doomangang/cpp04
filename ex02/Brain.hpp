#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain& other);
	~Brain();
	Brain&		operator=(const Brain& other);
	std::string getIdea(int idx);
	void		setIdea(int idx, std::string content);
};
#endif
