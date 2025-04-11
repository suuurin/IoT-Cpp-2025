/*
	MyClass1: , MyClass2: ������(��ü)�� �Է¹ޱ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class MyClass {
private:
	int m_id;
	char m_name[20];
	int m_age;
public:
	MyClass(int id, const char* name, int age) : m_id(id), m_age(age) {			// MyClass2: �����ڷ� �Է¹ޱ�
		strcpy(m_name, name);
	}

	void setData(int id, const char* name, int age) {							// MyClass1
		m_id = id;
		//m_name[20] = name;
		strcpy(m_name, name);
		m_age = age;
	}
	void getData() {
		cout << "id : " << m_id << "  name: " << m_name << "  age: " << m_age << endl;
	}

};

int main()
{
	MyClass obj(1, "��ö��", 20);	// MyClass2
	obj.setData(1, "��ö��", 20);	// MyClass1

	obj.getData();
	return 0;
}