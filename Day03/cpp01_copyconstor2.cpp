/*
	(deep copy) ���������
	�����Ҵ� ������� �����ϴ� ��ü�� �����Ҵ� �޾Ƽ� ������ �����Ͽ� ������ �Ǿ�� �Ѵ�.
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
	Person(const Person& other) {				// ���� ���������
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
	Person p("ȫ�浿", 30);
	p.printPerson();

	Person p2(p);
	p2.printPerson();

	Person p3 = p;
	p3.printPerson();

	return 0;
}
/*
	����Ʈ�� �ڵ����� �����޴� ������: ����Ʈ ������, ���� ������, �Ҹ���, 
*/