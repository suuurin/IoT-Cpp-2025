/*
	MyClass3 : ������(��ü)�� �����Ҵ� �ޱ�
	malloc ��� ����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
using namespace std;

class MyClass {
private:
	int m_id;
	//char m_name[20];
	char* m_name;
	int m_age;
public:
	MyClass() {}		// ����Ʈ ������
	MyClass(int id, const char* name, int age) : m_id(id), m_age(age) {	
		m_name = (char*)malloc(strlen(name) + 1);

		if (m_name == NULL) {
			cout << "����";
			exit(1);
		}
		strcpy(m_name, name);
	}

	void getData() {
		cout << "id : " << m_id << "  name: " << m_name << "  age: " << m_age << endl;
	}
};

int main()
{
	MyClass obj(1, "��ö��", 20);				// const �ٿ��� �ϴ� ����: "��ö��"�� ���ϸ� �ȵǱ� ������ �翬�� const �Ф�
	obj.getData();
	return 0;
}