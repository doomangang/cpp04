#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

//void	leac(void) {
//	system("leaks polymorphism");
//}

int main() {
//	atexit(leac);
	const Animal* meta = new Animal();
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
	meta->makeSound();

	std::cout << std::endl << "Wrong Class TEST" << std::endl;
	const WrongAnimal* wrong = new WrongAnimal("right");
	std::cout << std::endl;

	const WrongCat* wrCat = new WrongCat();
	std::cout << std::endl;

	std::cout << "Wrong Animal's type: " << wrong->getType() << " " << std::endl;
	std::cout << "Wrong Cat's type: " << wrCat->getType() << " " << std::endl;
	std::cout << std::endl << "Wrong Animal and Cat will make sound" << std::endl;
	wrong->makeSound();
	wrCat->makeSound();

	std::cout << std::endl;
	delete meta;std::cout << std::endl;
	delete j;	std::cout << std::endl;
	delete i;	std::cout << std::endl;
	delete wrong;	std::cout << std::endl;
	delete wrCat;	std::cout << std::endl;

	return 0;
}