/*
	class 1
*/
#include <iostream>
using namespace std;

class A {
public:
	int m_num = 0;				// 멤버변수(속성)

	void set(int num) {
		m_num = num;
	}

	// 출력을 담당하는 함수
	void print() {			// 멤버함수(기능), 메서드
		cout << "나는 A 클래스의 인스턴스입니다. " << "num: "<< m_num << endl;
	}
};

int main()
{
	A obj;					// A 클래스는 내가 만든 하나의 타입. (타입 변수이름;) A 타입의 obj 객체를 선언
	obj.print();
	obj.set(10);
	obj.print();
	return 0;
}