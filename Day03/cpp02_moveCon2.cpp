/*
	�̵�������(T&&)
	r-value reference �� �Ķ���ͷ� ���� �̵� ������
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Human {
private:
	char name[10];
	int age;
public:
	// �Է� 2�� �޴� ������
	Human(const char* name, int age) {
		printf("�Է� 2�� ������ ȣ��\n");
		strcpy(this->name, name);
		this->age = age;

	}
	// ���� ������
	Human(const Human& other) {
		printf("���� ������ ȣ��\n");
		strcpy(this->name, other.name);
		this->age = other.age;
	}
	
	// �̵� ������
	Human(Human&& other) noexcept{
		printf("�̵� ������ ȣ��\n");
		strcpy(this->name, other.name);
		this->age = other.age;

		//other.name = nullptr;
		other.age = 0;
	}
	void printHuman() {
		printf("name: %s, age: %d\n", this->name, this->age);
	}

};
int main()
{
	Human h("ȫ�浿", 30);
	h.printHuman();

	Human h2(h);
	h2.printHuman();

	Human h3(std::move(h));
	h3.printHuman();
	h.printHuman();
	return 0;
}