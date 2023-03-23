#include <iostream>

void swap(int* px, int* py) {
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
}

void main() {
	int a = 1;
	int b = 2;
	std::cout << a << " " << b << std::endl;
	swap(&a, &b);
	std::cout << a << " " << b << std::endl;
}