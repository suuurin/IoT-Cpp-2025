/*
	StaticTest라는 클래스를 만드는데 멤버변수로는 이름, 전화번호, 주소, 회원번호(cnt, 초기값 0)를 가지고
	3개 입력을 받는 생성자를 작성한다. 회원번호는 자동으로 증가시킬 것이기 때문에 
	출력 담당하는 showmember() 메서드를 구현하시오.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class StaticTest {
private:
	static int cnt;
	char name[50];
	char phone[50];
	char addr[100];

public:
	StaticTest(const char* n, const char* p, const char* a);
	void showmember();
};

int StaticTest::cnt = 0;

StaticTest::StaticTest(const char* n, const char* p, const char* a) {
	strcpy(name, n);
	strcpy(phone, p);
	strcpy(addr, a);
	cnt++;
}

void StaticTest::showmember() {
	std::cout << "회원번호: " << cnt << std::endl;
	printf("이름: %s, 전화번호: %s, 주소: %s\n", name, phone, addr);
}

int main() {

	StaticTest m1("홍길동", "010-1111-1111", "부산");
	m1.showmember();
	StaticTest m2("김영희", "010-2222-2222", "부산");
	m2.showmember();
	StaticTest m3("김철수", "010-3333-3333", "울산");
	m3.showmember();
	return 0;
}