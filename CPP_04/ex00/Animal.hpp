#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

#define Black "\e[0;30m"
#define RED "\e[0;31m"    
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m" 
#define Blue "\e[0;34m"   
#define PURPLE "\e[0;35m" 
#define CYAN "\e[0;36m"   
#define White "\e[0;37m"
#define RESET "\e[0m"

class Animal {
    protected:
        std::string _type;
    private:
        
    public:
        Animal();
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const;
};

#endif
