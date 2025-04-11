/*
	MyClass 3-1 �ڵ� ���� �ٲٱ� :: (~�� �Ҽӵ� ~�Դϴ�.)
	MyClass::MyClass , const
	Class ������ �� �����ϰ� ���� �� ����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class MyClass {
private:
	int m_id;
	char* m_name;
	int m_age;
public:
	//MyClass() {}		// ����Ʈ ������
	~MyClass() { delete[] m_name; }		// �Ҹ���(�ڵ� ȣ��ȴ�. - �����Ҵ��� ����� ������ �ۼ��� �ʿ䰡 ����.)
	MyClass(int id, const char* name, int age);
	void getData() const;
};

MyClass::MyClass(int id, const char* name, int age) {
	m_id = id;
	m_age = age;
	m_name = new char[strlen(name) + 1];		// �����Ҵ�
	strcpy(m_name, name);
}

// ��� ��� �Լ�(��� ������� ���ȭ ��Ų��.(�ַ� getter �Լ�))
void MyClass::getData() const{		// const: �� �Լ� �ȿ��� �Ӽ� ���� ����������. (��¸� �ϴ� �Լ��ϱ�)
	cout << "id : " << m_id << "  name: " << m_name << "  age: " << m_age << endl;
	//m_id = 2;		//���� �Ұ�
}

int main()
{
	MyClass obj2(2, "�迵��", 20);
	obj2.getData();
	return 0;
}