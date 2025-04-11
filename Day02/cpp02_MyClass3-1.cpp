/*
	MyClass3 : ������(��ü)�� �����Ҵ� �ޱ�
	����� ���� �����Ҵ�: new/delete
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
	MyClass(int id, const char* name, int age) {
		m_id = id;
		m_age = age;
		m_name = new char[strlen(name) + 1];		// �����Ҵ�
		//m_name = name;		// �迭�� ������ �Ŀ�, ���� �����ڸ� ����Ͽ� ���� ���� �Ҵ��� �� ����.
		strcpy(m_name, name);
	}
	~MyClass() { delete[] m_name; }		// �Ҹ���(�ڵ� ȣ��ȴ�. - �����Ҵ��� ����� ������ �ۼ��� �ʿ䰡 ����.)

	void getData() {
		cout << "id : " << m_id << "  name: " << m_name << "  age: " << m_age << endl;
	}
};

int main()
{
	MyClass obj2(2, "�迵��", 20);
	obj2.getData();
	return 0;
}