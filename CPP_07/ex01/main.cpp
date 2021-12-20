#include "Iter.hpp"

int main() {
	int tab1[] = {0, 1, 2, 3, 4 };
	Awesome tab2[5];
	char tab3[6] = "43210";
	std::string tab4[5] = {"move", "to", "the", "next", "exercise"};

	std::cout << "--- print ---" << std::endl;
	iter(tab1, 5, print);
	iter(tab2, 5, print);
	iter(tab3, 5, print);
	iter(tab4, 5, print);

	std::cout << "--- print in color ---" << std::endl;
	iter<int>(tab1, 5, colorPrint);
	iter<Awesome>(tab2, 5, colorPrint);
	iter<char>(tab3, 5, colorPrint);
	iter<std::string>(tab4, 5, colorPrint);

	return 0;
}