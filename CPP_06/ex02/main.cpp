#include <iostream>
#include <string>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base * generate(void)
{
    srand(time(NULL));
    int type = rand()%3;
    switch (type)
    {
        case 0:
            return new A; 
            break;
        case 1:
            return new B; 
            break;
        case 2:
            return new C; 
            break;
        default:
            return NULL;
    }
}

void identify(Base * p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "class type A" << std::endl;
	if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "class type B" << std::endl;
	if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "class type C" << std::endl;
}

void identify(Base & p) 
{
	try 
    {
		(void)dynamic_cast<A&>(p);
		std::cout << "class type A" << std::endl;
	}
	catch(const std::exception& e) {}
	try 
    {
		(void)dynamic_cast<B&>(p);
		std::cout << "class type B" << std::endl;
	}
	catch(const std::exception& e) {}
	try 
    {
		(void)dynamic_cast<C&>(p);
		std::cout << "class type C" << std::endl;
	}
	catch(const std::exception& e) {}
	
}

int main()
{
    Base * ptr = generate();
    identify(ptr);
    std::cout << "-----------------" << std::endl;
    identify(*ptr);
    delete ptr;
}
