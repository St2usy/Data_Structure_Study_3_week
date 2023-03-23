#include <iostream>
void main() {
	char* str;
	str = new char[1000];
	if (str == NULL) {
		std::cout << "Insufficient memory availbale" << std::endl;
	}
	else {
		std::cout << "Allocated 1000 bytes" << std::endl;
		delete[] str;
		std::cout << "Memory freed" << std::endl;
	}
}