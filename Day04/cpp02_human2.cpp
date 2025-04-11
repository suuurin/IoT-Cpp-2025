/*
	step4.
	char �������� name, i0ntŸ���� age, ����� ����ϴ� showHuman()�� ������ Human Ŭ������ �ִ�.
	name�� �����Ҵ��ϰ� ��0��0000000000000000000000000000000000 30, �̸� ȫ���� man ��ü�� �����Ͻÿ�.
	man ��ü�� �����Ͽ� copyman ��ü�� �����Ͻÿ�.
	xman = man �� �����Ű�ÿ�.

	��..... ���� ���Ķ� �̰� Ʋ�ǿ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Human {
private:
	char* name;
	int age;

public:
	Human(const char* name = " ", int age = 0) {
		printf("constructor~\n");
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->age = age;
	}

	Human(const Human& other) {
		printf("copy constructor~\n");
		name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
		age = other.age;
	}

	~Human() { printf("destructror");  delete[] name; }

	void showHuman() {
		printf("name: %s, age: %d\n", name, age);
	}
	Human& operator=(const Human* rhs);
};
Human& Human::operator=(const Human& rhs) {
	if (this != &rhs) {
		delete[] name;
		printf("operator overloading!\n");
		this->name = new char[strlen(rhs.name) + 1];
		strcpy(this->name, rhs.name);
		this->age = rhs.age;
	}
	return *this;
}
int main()
{
	Human man("ȫ��", 30);
	man.showHuman();

	Human copyman = man;
	copyman.showHuman();

	Human xman;
	xman = copyman;
	xman.showHuman();

	return 0;
}