#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "Default Idea";
	std::cout << "Brain constructor called\n";
}

Brain::Brain(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	std::cout << "Brain copy constructor called\n";
}

Brain::~Brain() {
	std::cout << "Brain destructor called\n";
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain assignment operator called\n";
	if (this != &other) {
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	return (*this);
}

std::string Brain::getIdea(int idx) {
	return ideas[idx];
}

void Brain::setIdea(int idx, std::string content) {
	ideas[idx] = content;
}