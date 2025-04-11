/*
	virtual function : �Ļ�Ŭ�������� ������ �� ���� ����ϴ� ��� �Լ��� ���ϸ� Base Ŭ������ ��� �Լ���
	virtual Ű���带 ����Ͽ� �����.
	virtual table�� ���������, dynamic binding���� �����Ѵ�.
*/
#include <iostream>
using namespace std;

class Base {
public:
	virtual void func1() { cout << "B::func1()" << endl; }		// �����Լ�
	virtual void func2() { cout << "B::func2()" << endl; }		// �����Լ�
	void func3() { cout << "B::func3()" << endl; }				// �����Լ��� �ƴ�.
};

class Derived : public Base {
	void func1() override { cout << "D::func1()" << endl; }		// �����Լ��� �������ϴ� ����Լ��� ��Ÿ��.
	void func3() { cout << "D::func3()" << endl; }					
	void func4() { cout << "D::func4()" << endl; }
};
int main()
{
	Base b;
	Derived d;
	Base* bptr = new Derived();		// upcasting

	bptr->func1();					// Base Ŭ������ func1() �� �����Լ��� ����Ǿ� Derived Ŭ������ func1()�� ȣ��ȴ�.
	bptr->func2();					// Base Ŭ������ func2() �� �����Լ��� ����Ǿ����� �������̵�(������)�� ���� �ʾҴ�. 
	bptr->func3();					// ������ Ÿ���� ȣ�� �Լ��� �����ȴ�.
									// -> �����Ǵ� ������ �����Լ��� �ƴϴ� �翬��
	//bptr->fucn4();

	delete bptr;
	bptr = &b;
	bptr->func1();					// �θ�Ÿ�� ����Ű�� �����ϱ� �翬�� �θ��
	bptr->func2();
	bptr->func3();

	return 0;
}
/*
	��ü �������� ������*���� ���� Ŭ���� Ÿ���� �����ͷ� �Ļ� Ŭ������ ��ü�� ����Ű�� ������ ���� Ŭ���� ����� ���ѵȴ�.
	�̶�, �������̵��� �Ļ� Ŭ������ ����� ����ϱ� ���ؼ��� ���� Ŭ������ ��� �Լ��� �����Լ��� ����� �ȴ�.
	�̰��� �����Ͻ� ������������ ���ε����� ���ϰ� ��Ÿ�ӿ��� �����Ͱ� � ��ü�� ����Ű�� �ִ����� ���� ���ε��� �Լ���
	�����Ѵ�..
*/