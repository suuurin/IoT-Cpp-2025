/*
	��ӿ��� ��ü ������
	�θ�Ÿ���� �����ͷ� �ڽ�Ÿ���� ��ü�� ����Ű�� ��ü�� �θ�Ÿ������ ��ĳ���� �ȴ�.
	��ü�� �߿��ѵ� ������ ���ַ� �ȴ�...?
*/
#include <iostream>

class Base {
public:
	void show() { printf("Base Class!!\n"); }
};

class Derived : public Base {				// Base Ŭ���� ��ӹ޾�
public:
	void show() { printf("Derived Class!!\n"); }		// show �Լ� �������̵�(������) : Derived Ŭ������ ��ü���� ȣ��Ǹ� Derived Class�� ��µ�
};

int main()
{

	Base* bptr = nullptr;		// Base Ŭ���� Ÿ���� ������
	Derived* dptr = nullptr;	// Deirved Ŭ���� Ÿ���� ������

	Derived obj;		// �Ļ�Ŭ���� ��ü!!!!! ����
	dptr = &obj;		// ��ü(obj) �ּҸ� Derived ������(dptr)�� ���� (��ü ������)
	dptr->show();		// Derived show() �������̵�

	bptr = &obj;		// �θ�Ÿ���� �����ͷ� �ڽ�Ÿ���� ��ü�� ����ų�� �ִ�. (Upcasting)	(�θ�� �ڽ��� �հ������� �� ����)
	bptr->show();		// �ڽ� ��ü�ε� �θ� �� ��µ�.	
	//bptr->Derived::show();
	return 0;
}