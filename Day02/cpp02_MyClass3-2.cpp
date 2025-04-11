/*
	MyClass 3-1 코드 구조 바꾸기 :: (~에 소속된 ~입니다.)
	MyClass::MyClass , const
	Class 영역을 더 쾌적하게 만들 수 있음
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class MyClass {
private:
	int m_id;
	char* m_name;
	int m_age;
public:
	//MyClass() {}		// 디폴트 생성자
	~MyClass() { delete[] m_name; }		// 소멸자(자동 호출된다. - 동적할당경우 말고는 별도로 작성할 필요가 없다.)
	MyClass(int id, const char* name, int age);
	void getData() const;
};

MyClass::MyClass(int id, const char* name, int age) {
	m_id = id;
	m_age = age;
	m_name = new char[strlen(name) + 1];		// 동적할당
	strcpy(m_name, name);
}

// 상수 멤버 함수(모든 멤버들을 상수화 시킨다.(주로 getter 함수))
void MyClass::getData() const{		// const: 이 함수 안에서 속성 값을 변경하지마. (출력만 하는 함수니까)
	cout << "id : " << m_id << "  name: " << m_name << "  age: " << m_age << endl;
	//m_id = 2;		//변경 불가
}

int main()
{
	MyClass obj2(2, "김영희", 20);
	obj2.getData();
	return 0;
}