/*
*/
#include <iostream>

class MyClass {
private:
	int m_a, m_b;
	const char* m_name;
public:
	MyClass(int a = 0, int b = 0, const char* name = nullptr) : m_a(a),m_b(b), m_name(name) {}
	void showMyClass() {
		std::cout << m_a << ", " << m_b << ", " << m_name << std::endl;
	}
};

int main()
{
	//MyClass obj{1, 2, "ȫ�浿"};
	//obj.showMyClass();

	//MyClass obj2;						// �⺻ �����ڸ� �̿��� ��ü ����
	//obj2 = obj;						// num = 10; ����Ʈ ���� ������ ȣ��
	//obj2.showMyClass();
	MyClass obj{ 10, 20 };
	MyClass obj2{ 30, 40 };
	//MyClass obj3 = obj + obj2;
	return 0; 
}