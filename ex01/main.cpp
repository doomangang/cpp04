#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << "Wrong Clas TEST" << std::endl;
	const WrongAnimal* wrong = new WrongAnimal("right");
	const WrongCat* wrCat = new WrongCat();
	std::cout << wrong->getType() << " " << std::endl;
	std::cout << wrCat->getType() << " " << std::endl;
	wrong->makeSound();
	wrCat->makeSound();
	return 0;
}