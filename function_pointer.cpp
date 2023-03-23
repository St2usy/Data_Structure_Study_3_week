#include <iostream>

void foo(int a) {
	std::cout << "foo: " << a << std::endl;
}

void main() {
	void(*f)(int);
	f = foo;
	f(10);
	foo(10);
	(*f)(10);
}