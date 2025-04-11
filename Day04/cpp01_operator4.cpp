/*
*/
#include <iostream>

class MyClass {
private:
	int x, y;
public:
	// ������
	MyClass(int ax, int ay) : x(ax), y(ay) {}

	// �� ��ü�� ���� ���� ���ο� ��ü ��ȯ
	MyClass add(const MyClass& other) {
		return MyClass(x + other.x, y + other.y);
	}

	// ��ü + ��ü (MyClass Ÿ�Գ��� ���ϱ�)
	MyClass operator+(const MyClass& other) {
		return MyClass(x + other.x, y + other.y);
	}

	// ��ü + ���� (MyClass ��ü�� ������ ���ϱ�)
	MyClass operator+(int value) {
		return MyClass(x + value, y + value);
	}
		
	void showMyClass() {
		printf("%d, %d\n", x, y);
	}
};

int main()
{
	MyClass obj(10, 20);
	obj.showMyClass();
	MyClass obj2(20, 30);
	obj2.showMyClass();
	MyClass obj3 = obj.add(obj2);
	obj3.showMyClass();
	MyClass obj4 = obj.operator+(obj3);
	obj4.showMyClass();

	MyClass obj5 = obj4 + 100;			// ��ü�� ���� ���ϱ� obj4.operator+(100);
	obj5.showMyClass();
	return 0;
}

// �����ε� �� �� ���� ������:
// ::, ., *, sizeof