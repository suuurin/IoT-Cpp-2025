/*

*/
#include <iostream>

class Base {
public:
	void func1() { std::cout << "Base::func1()" << std::endl; }
};
class Derived : public Base {
public:
	void func() { std::cout << "Derived::func()" << std::endl; }
	void func1() { std::cout << "Derived::func1()" << std::endl; }
};
class Derived2 : public Derived {
public:
	void func() { std::cout << "Derived2::func()" << std::endl; }
	void func1() { std::cout << "Derived2::func1()" << std::endl; }
};
int main()
{
	Base* bptr;
	Derived dobj;
	bptr = static_cast<Base*>(&dobj);				// Upcasting
	bptr->func1();		// Ãâ·Â #1

	Base bobj;
	Derived* dptr;
	dptr = static_cast<Derived*>(&bobj);			// Downcasting
	dptr->func();		// #2
	dptr->func1();		// #3

	Derived2* dptr2 = static_cast<Derived2*>(dptr);
	dptr2->func();		// #4
	dptr2->func1();		// #5

	return 0;
}