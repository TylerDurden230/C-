#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete j;
    delete i;
    delete meta;

    std::cout << "---------------Wrong Animal-----------------" << std::endl;

    const WrongAnimal* wrong = new WrongCat();
    std::cout << wrong->getType() << " " << std::endl;
    wrong->makeSound();

    delete wrong;
}