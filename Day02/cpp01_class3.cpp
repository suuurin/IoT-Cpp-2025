/*
	������(�޼���) constructor
	������ ȣ��� ��ü�� ���������.
	��ü ������ ������ �´� �����ڰ� ������ ��ü�� �������� �ʴ´�.
	�����ڴ� �ʱ�ȭ ��ɿ� ����Ѵ�.
	�����ڴ� �����ε��� �����ϴ�.
	���α׷��Ӱ� �����ڸ� �ۼ�ȭ�� ���̻� ����Ʈ �����ڴ� �������� �ʴ´�.
*/
#include <iostream>
using namespace std;

class MyClass {
private:
	int m_num1;
	int m_num2;
public:
	MyClass() {}							// ������(�⺻����
	MyClass(int num) {						// ������(�Է��� �� �� �޴�)
		m_num1 = num;
	}
	MyClass(int num1, int num2) {			// ������(�Է��� �� �� �޴�)
		m_num1 = num1;
		m_num2 = num2;
	}
	~MyClass(){}							// �Ҹ��� ~ 

	void printData() {
		cout << "���� MyClass�� �ν��Ͻ��Դϴ�.";
		cout << "m_num1: " << m_num1 << "  m_num2: " << m_num2 << endl;
	}
};

int main()
{
	MyClass obj;
	MyClass obj1(20);
	MyClass obj2(100, 200);
	obj1.printData();
	obj2.printData();
	return 0;
}