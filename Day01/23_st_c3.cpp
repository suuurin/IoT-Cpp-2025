#include <iostream>
/*
	C++ class
*/

class Human {
public:				// ��ü���� - ���� ���� Ư�� ���� (�ܺο����� class ���� ����)
	char name[20];
	int age;
	char job[10];
	
	// ������ ���� (��� X, Ŭ���� �̸��� �Ȱ��� �޼���)
	Human() {			// default ������ (�Է� X)
	}

	void showHuman() {
		printf("name: %s, age: %d, job: %s", name, age, job);
	}

};

int main() {

	Human h = { "��ö��", 30, "���" };
	h.showHuman();

	return 0;
}