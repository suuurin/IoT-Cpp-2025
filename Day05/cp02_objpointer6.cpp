/*
	�ٿ�ĳ����: �ڽ� �����ͷ� �θ� ��ü�� ����ų �� ����. (�θ�Ÿ�� ������ -> �ڽ�Ÿ�� �����ͷ� ��ȯ)
	�θ� ��ü�� �ڽ� �����ͷ� ��ȯ�� �Ұ���
*/
#include <iostream>

class Base {
public:
	void show() { printf("Base Class!!"); }
};
class Derived : public Base {
public:
	void show() { printf("Derived Class!!"); }
};
int main()
{
	Base bobj;					// �θ� Ŭ���� ��ü
	Derived* dptr = nullptr;	// �ڽ� Ŭ���� ������	
	//dptr = &bobj;
	/*
	dptr = (Base*)&bobj;
	dptr->show();
	*/
	
	dptr = (Derived*)&bobj;		// �ٿ�ĳ����(���� ����ȯ)
	dptr->show();

	return 0;
}