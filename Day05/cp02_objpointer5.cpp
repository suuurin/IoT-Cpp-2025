/*
	상속에서 객체 포인터
	부모타입의 포인터로 자식타입의 객체를 가리키면 객체가 부모타입으로 업캐스팅 된다.
	객체가 중요한데 포인터 위주로 된다...?
*/
#include <iostream>

class Base {
public:
	void show() { printf("Base Class!!\n"); }
};

class Derived : public Base {				// Base 클래스 상속받았
public:
	void show() { printf("Derived Class!!\n"); }		// show 함수 오버라이딩(재정의) : Derived 클래스의 객체에서 호출되면 Derived Class가 출력됨
};

int main()
{

	Base* bptr = nullptr;		// Base 클래스 타입의 포인터
	Derived* dptr = nullptr;	// Deirved 클래스 타입의 포인터

	Derived obj;		// 파생클래스 객체!!!!! 생성
	dptr = &obj;		// 객체(obj) 주소를 Derived 포인터(dptr)에 저장 (객체 포인터)
	dptr->show();		// Derived show() 오버라이딩

	bptr = &obj;		// 부모타입의 포인터로 자식타입의 객체를 가리킬수 있다. (Upcasting)	(부모는 자식을 손가락질할 수 있음)
	bptr->show();		// 자식 객체인데 부모 거 출력됨.	
	//bptr->Derived::show();
	return 0;
}