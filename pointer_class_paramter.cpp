#include <iostream>

struct MyNewType {
	int i;
	float f;
};

void main() {
	MyNewType s;
	MyNewType* ps;
	ps = &s;
	ps->i = 2;
	ps->f = 3.14f;
}