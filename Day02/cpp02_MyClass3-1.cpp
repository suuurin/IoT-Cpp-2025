/*
	MyClass3 : 생성자(객체)로 동적할당 받기
	강사님 버전 동적할당: new/delete
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
	MyClass(int id, const char* name, int age) {
		m_id = id;
		m_age = age;
		m_name = new char[strlen(name) + 1];		// 동적할당
		//m_name = name;		// 배열을 선언한 후에, 대입 연산자를 사용하여 값을 직접 할당할 수 없다.
		strcpy(m_name, name);
	}
	~MyClass() { delete[] m_name; }		// 소멸자(자동 호출된다. - 동적할당경우 말고는 별도로 작성할 필요가 없다.)

	void getData() {
		cout << "id : " << m_id << "  name: " << m_name << "  age: " << m_age << endl;
	}
};

int main()
{
	MyClass obj2(2, "김영희", 20);
	obj2.getData();
	return 0;
}