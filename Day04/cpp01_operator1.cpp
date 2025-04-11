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
	//MyClass obj{1, 2, "홍길동"};
	//obj.showMyClass();

	//MyClass obj2;						// 기본 생성자를 이용해 객체 생성
	//obj2 = obj;						// num = 10; 디폴트 대입 연산자 호출
	//obj2.showMyClass();
	MyClass obj{ 10, 20 };
	MyClass obj2{ 30, 40 };
	//MyClass obj3 = obj + obj2;
	return 0; 
}