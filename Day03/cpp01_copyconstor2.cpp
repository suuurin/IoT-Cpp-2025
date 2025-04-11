/*
	(deep copy) 복사생성자
	동적할당 받은경우 복사하는 객체도 동적할당 받아서 별개로 복사하여 저장이 되어야 한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Person {
private:
	char* name;
	int age;	
public:
	Person(const char* name, int age) {
		printf("constructor call!!\n");
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->age = age;
	}
	Person(const Person& other) {				// 깊은 복사생성자
		printf("copy constructor!!\n");
		this->name = new char[strlen(other.name) + 1];
		strncpy(this->name, other.name, strlen(other.name) + 1);
		this->age = other.age;
	}
	~Person() { delete[] this->name; }

	void printPerson() {
		printf("name: %s, age:%d\n", this->pname, this->age);
	}
};

int main()
{
	Person p("홍길동", 30);
	p.printPerson();

	Person p2(p);
	p2.printPerson();

	Person p3 = p;
	p3.printPerson();

	return 0;
}
/*
	디폴트로 자동으로 제공받는 생성자: 디폴트 생성자, 복사 생성자, 소멸자, 
*/