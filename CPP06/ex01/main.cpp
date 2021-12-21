
#include <iostream>
#include "main.hpp"


uintptr_t	serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int main(void) {

	Data		data;
	uintptr_t	uintptr;
	Data *		dataptr;

	data.uid = 71;
	data.str = "Mortacci";

	std::cout << "original:\t" << &data <<std::endl;

	uintptr = serialize(&data);
	std::cout << std::hex;
	std::cout << "serial:\t\t" << "0x" << uintptr <<std::endl;
	dataptr = deserialize(uintptr);
	std::cout << "deserial:\t" << dataptr <<std::endl;

	std::cout << std::dec;
	std::cout << dataptr->uid <<std::endl;
	std::cout << dataptr->str <<std::endl;

	return 0 ;
}