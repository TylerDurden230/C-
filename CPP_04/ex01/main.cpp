#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iomanip>

int main()
{

        const Animal *zoo[2];
        zoo[0] = new Dog();
        zoo[1] = new Cat();
        delete zoo[0];
        delete zoo[1];

        Dog basic;
        {
            Dog tmp = basic;
            std::cout << "[" << &basic.getBrain() << "]" << std::endl;
            std::cout << "[" << &tmp.getBrain() << "]" << std::endl;
        }
        std::cout << "[" << &basic.getBrain() << "]" << std::endl;
    return 0;
}