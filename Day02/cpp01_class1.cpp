/*
	class 1
*/
#include <iostream>
using namespace std;

class A {
public:
	int m_num = 0;				// �������(�Ӽ�)

	void set(int num) {
		m_num = num;
	}

	// ����� ����ϴ� �Լ�
	void print() {			// ����Լ�(���), �޼���
		cout << "���� A Ŭ������ �ν��Ͻ��Դϴ�. " << "num: "<< m_num << endl;
	}
};

int main()
{
	A obj;					// A Ŭ������ ���� ���� �ϳ��� Ÿ��. (Ÿ�� �����̸�;) A Ÿ���� obj ��ü�� ����
	obj.print();
	obj.set(10);
	obj.print();
	return 0;
}