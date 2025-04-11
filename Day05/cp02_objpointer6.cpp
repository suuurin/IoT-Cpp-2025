/*
	다운캐스팅: 자식 포인터로 부모 객체를 가리킬 수 없다. (부모타입 포인터 -> 자식타입 포인터로 변환)
	부모 객체를 자식 포인터로 변환은 불가능
*/
#include <iostream>

class Base {
public:
	void show() { printf("Base Class!!"); }
};
class Derived : public Base {
public:
	void show() { printf("Derived Class!!"); }
};
int main()
{
	Base bobj;					// 부모 클래스 객체
	Derived* dptr = nullptr;	// 자식 클래스 포인터	
	//dptr = &bobj;
	/*
	dptr = (Base*)&bobj;
	dptr->show();
	*/
	
	dptr = (Derived*)&bobj;		// 다운캐스팅(강제 형변환)
	dptr->show();

	return 0;
}