#include <iostream>
#include "scope.h"
/*
	:: -> �������� ������
*/
A::A(int aa) {			// AŬ������ A()
	a = aa;
}
void A::AInfo() {		// AŬ������ AInfo()
	std::cout << "a: " << a << std::endl;
}

int main() {

	A a(10);
	a.AInfo();

	return 0;
}