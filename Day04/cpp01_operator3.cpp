/*
	����Լ� ������ �����ε�: p1 operator������(p2) ex) p1 operator+(p2)
	��ü���� ���ϱ�
*/
#include <iostream>

class MyClass {
private:
	int value;
public:
	MyClass(int n) : value(n) {}					// ������: ��ü�� ���� �� �ʱⰪ�� ����

	// + ������ �����ε� (��ü���� ���ϱ� �����ϰ� ����)
	/*
		// MyClass(Ÿ��) operator+(��ü���� ������ �Լ�) (const MyClass&(������) other)(�Ű�����)
		const: �Լ� ���ο��� other�� �����͸� �ٲ��� �ʰ� �� -> ��ü ���� ����
		other: +�� ������ ��ü
		  - obj1 + obj2 : obj1�� operator+�� ȣ���ϴ� ��ü this��, obj2�� other�� ��
		const MyClass& other: other�� MyClass Ÿ���� ��ü�� ���� ����
		  - ������ ���� ��ü�� ������� �ʰ� ������ ���� ������ �� �ִ� -> ���� ����
		---------------------------------------------------------
		? MyClass Ÿ���� ���ο� ��ü�� ��ȯ�ϴ� + ������ �Լ�!
		? other�� +�� ������ ��ü�̸�, ������ �������� ����!
		? const MyClass&�� ������ ���ʿ��� ���縦 ���� ������ ������!
	*/
	MyClass operator+(const MyClass& other) {		
		printf("+ overoading");						// ������ �����ε��� ����� �� ���
		return MyClass(value + other.value);		// �� ��ü�� value�� ���� ���ο� MyClass ��ü ��ȯ
	}

	// ��� �Լ�
	void showMyClass() {
		printf("value: %d\n", value);
	}
};
int main()
{
	MyClass obj(10);				// �ʱⰪ�� ������ ��ü ����
	obj.showMyClass();

	MyClass obj2(obj);				// obj�� �����ؼ� ���ο� ��ü obj2 ����
	obj2.showMyClass();

	MyClass obj3 = obj2;			// obj2�� �����ؼ� ���ο� ��ü obj3 ���� ( == MyClass obj3(obj2); ���� �ǹ�)
	obj3.showMyClass();

	MyClass obj4 = obj + obj2;		// obj + obj2�� ����� ������ �� ��ü obj4 ����
	obj4.showMyClass();				// 20 ���

	return 0;
}