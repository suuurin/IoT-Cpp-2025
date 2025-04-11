/*
	step1. 이름과 전화번호는 동적할당.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	char* pname;
	int age;
	char* ptel;
public:
	Human(const char* name, int _age, const char* tel);
	~Human() { delete[] pname, ptel; }
	void getData() const;
};

Human::Human(const char* name, int _age, const char* tel) : age(_age) {
	pname = new char[strlen(name) + 1];
	strcpy(pname, name);

	ptel = new char[strlen(tel) + 1];
	strcpy(ptel, tel);
}

void Human::getData() const{
	cout << "pname: " << pname << "  age: " << age << "  tel: " << ptel << endl;
}

int main()
{
	Human h("홍길동", 30, "010-1234-1234");
	h.getData();
	return 0;
}