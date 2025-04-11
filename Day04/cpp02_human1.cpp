/*
	step3
	char 포인터의 name, int타입의 age, 출력을 담당하는 showHuman()을 가지는 Human 클래스가 있다.
	name을 동적할당하고 나이 30, 이름 홍명보인 man 객체를 생성하시오.
	man 객체를 복사하여 copyman 객체를 생성하시오.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Human {
private:
	char* m_name;
	int m_age;

public:
	Human(const char* name = " ", int age = 0) {
		printf("constructor~\n");
		m_name = new char[strlen(name) + 1];
		strcpy(m_name, name);
		m_age = age;
	}

	Human(const Human& other) {
		printf("copy constructor~\n");
		m_name = new char[strlen(other.m_name) + 1];
		strcpy(m_name, other.m_name);
		m_age = other.m_age;
	}

	~Human() { printf("destructror!\n"); delete[] m_name; }
	void showHuman() {
		printf("name: %s, age: %d\n", m_name, m_age);
	}
};

int main() 
{
	Human man("홍명보", 30);
	man.showHuman();

	Human copyman = man;
	copyman.showHuman();

	Human xman;
	xman = copyman;
	xman.showHuman();

	return 0;
}