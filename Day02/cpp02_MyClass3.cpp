/*
	MyClass3 : 생성자(객체)로 동적할당 받기
	malloc 사용 버전
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
using namespace std;

class MyClass {
private:
	int m_id;
	//char m_name[20];
	char* m_name;
	int m_age;
public:
	MyClass() {}		// 디폴트 생성자
	MyClass(int id, const char* name, int age) : m_id(id), m_age(age) {	
		m_name = (char*)malloc(strlen(name) + 1);

		if (m_name == NULL) {
			cout << "실패";
			exit(1);
		}
		strcpy(m_name, name);
	}

	void getData() {
		cout << "id : " << m_id << "  name: " << m_name << "  age: " << m_age << endl;
	}
};

int main()
{
	MyClass obj(1, "김철수", 20);				// const 붙여야 하는 이유: "김철수"가 변하면 안되기 때문에 당연히 const ㅠㅠ
	obj.getData();
	return 0;
}