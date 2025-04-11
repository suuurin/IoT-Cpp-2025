/*
	생성자(메서드) constructor
	생성자 호출로 객체가 만들어진다.
	객체 생성시 구조에 맞는 생성자가 없으면 객체는 생성되지 않는다.
	생성자는 초기화 기능에 사용한다.
	생성자는 오버로딩이 가능하다.
	프로그래머가 생성자를 작성화면 더이상 디폴트 생성자는 제공되지 않는다.
*/
#include <iostream>
using namespace std;

class MyClass {
private:
	int m_num1;
	int m_num2;
public:
	MyClass() {}							// 생성자(기본형태
	MyClass(int num) {						// 생성자(입력을 한 개 받는)
		m_num1 = num;
	}
	MyClass(int num1, int num2) {			// 생성자(입력을 두 개 받는)
		m_num1 = num1;
		m_num2 = num2;
	}
	~MyClass(){}							// 소멸자 ~ 

	void printData() {
		cout << "나는 MyClass의 인스턴스입니다.";
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