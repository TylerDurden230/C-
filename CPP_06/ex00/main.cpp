
#include "Type.hpp"

int main(int ac, char **av)
{
	if(ac == 2)
	{
		Type type(av[1]);
		type.analyse();
		std::cout << "Type is " << type.getType() << std::endl;
		type.print();
	}
	std::cout << "FAI SCHIFO MERDA" << std::endl;
}