#include <iostream>
/*
	C++ ����ü
*/

typedef struct human{
	char name[20];
	int age;
	char job[10];

	void showHuman() {
		printf("name: %s, age: %d, job: %s", name, age, job);
	}

} Human;

int main() {

	Human h = { "��ö��", 30, "���" };
	//showHuman(h);
	h.showHuman(); // ����ü ���� ���� -> . ������ ���� ���

	return 0;
}