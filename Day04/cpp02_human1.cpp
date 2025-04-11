/*
	step3
	char �������� name, intŸ���� age, ����� ����ϴ� showHuman()�� ������ Human Ŭ������ �ִ�.
	name�� �����Ҵ��ϰ� ���� 30, �̸� ȫ���� man ��ü�� �����Ͻÿ�.
	man ��ü�� �����Ͽ� copyman ��ü�� �����Ͻÿ�.
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
	Human man("ȫ��", 30);
	man.showHuman();

	Human copyman = man;
	copyman.showHuman();

	Human xman;
	xman = copyman;
	xman.showHuman();

	return 0;
}