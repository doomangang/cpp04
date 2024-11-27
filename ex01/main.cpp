#include "Dog.hpp"
#include "Cat.hpp"

//void	leac(void) {
//	system("leaks brain");
//}

int main() {
//	atexit(leac);
	const int arraySize = 6;
	Animal* animals[arraySize];

	for (int i = 0; i < arraySize / 2; ++i) {
		animals[i] = new Dog();
		std::cout << std::endl;
	}
	for (int i = arraySize / 2; i < arraySize; ++i) {
		animals[i] = new Cat();
		std::cout << std::endl;
	}

	std::cout << "\n--- Deep Copy Test ---\n" << std::endl;

	Dog* originalDog = new Dog();
	std::cout << std::endl;
	originalDog->getBrain()->setIdea(0,"Original Dog Idea");

	Dog* copiedDog = new Dog(*originalDog);
	std::cout << std::endl;
	originalDog->getBrain()->setIdea(0, "Modified Original Dog Idea");

	Dog* assignedDog = new Dog();
	*assignedDog = *originalDog;
	std::cout << std::endl;
	assignedDog->getBrain()->setIdea(0, "Modified Assigned Dog Idea");

	std::cout << "Original Dog Brain Idea: " << originalDog->getBrain()->getIdea(0) << std::endl;
	std::cout << "Copied Dog Brain Idea: " << copiedDog->getBrain()->getIdea(0) << std::endl;
	std::cout << "Assigned Dog Brain Idea: " << assignedDog->getBrain()->getIdea(0) << std::endl;
	std::cout << "Original Dog Brain Idea: " << originalDog->getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;
	delete originalDog;
	std::cout << std::endl;
	delete copiedDog;
	std::cout << std::endl;
	delete assignedDog;

	std::cout << "\n--- Deleting Animals ---\n" << std::endl;
	for (int i = 0; i < arraySize; ++i) {
		delete animals[i];
		std::cout << std::endl;
	}
	std::cout << std::endl;

	return 0;
}
