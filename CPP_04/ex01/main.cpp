#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// differenza tra shallow copy & deep copy
// con la shallow copy due oggetti puntano alla stessa area di memoria, se il brain cambia una sua idea la cambia anche l'altro
// con la deep copy si crea un altro oggetto che persiste in un'area di memoria separata. si effettua con overload dell'operatore = 

int main()
{
        const Animal *zoo[2];
        for(int i=0; i < 2; i++){
            if (i % 2)
                zoo[i] = new Dog();
            else
                zoo[i] = new Cat();
        }
       for(int i=0; i < 2; i++){
           delete zoo[i];
        }
        std::cout << "--------------------------------" << std::endl;
        Dog basic;
        {
            Dog tmp  = basic;
            std::cout << "[" << &basic.getBrain() << "]" << std::endl; 
            std::cout << "[" << &tmp.getBrain() << "]" << std::endl;
        }
        std::cout << "[" << &basic.getBrain() << "]" << std::endl;
    return 0;
}