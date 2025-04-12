#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

//void	leac(void) {
//	system("leaks abstract");
//}

int main() {
//	atexit(leac);
/*  parent class cannot be instantiated */
//	const Animal* meta = new Animal();
	std::cout << std::endl;

	const Animal* j = new Dog();
	std::cout << std::endl;

	const Animal* i = new Cat();
	std::cout << std::endl;

	std::cout << "Dog's type: " << j->getType() << " " << std::endl;
	std::cout << "Cat's type: " << i->getType() << " " << std::endl;

	std::cout << std::endl << "Cat, Dog and Animal will make sound" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	std::cout << std::endl << "Wrong Virtual Class TEST" << std::endl;

	const WrongCat* wrCat = new WrongCat();
	std::cout << std::endl;

	std::cout << "Wrong Cat's type: " << wrCat->getType() << " " << std::endl;
	std::cout << std::endl << "Wrong Cat won't make sound" << std::endl;
	wrCat->makeSound();

	std::cout << std::endl;
	delete j;	std::cout << std::endl;
	delete i;	std::cout << std::endl;
	delete wrCat;	std::cout << std::endl;

	return 0;
}