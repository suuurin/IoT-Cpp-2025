/*
	이동생성자(T&&)
	r-value reference 를 파라미터로 갖는 이동 생성자
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Human {
private:
	char name[10];
	int age;
public:
	// 입력 2개 받는 생성자
	Human(const char* name, int age) {
		printf("입력 2개 생성자 호출\n");
		strcpy(this->name, name);
		this->age = age;

	}
	// 복사 생성자
	Human(const Human& other) {
		printf("복사 생성자 호출\n");
		strcpy(this->name, other.name);
		this->age = other.age;
	}
	
	// 이동 생성자
	Human(Human&& other) noexcept{
		printf("이동 생성자 호출\n");
		strcpy(this->name, other.name);
		this->age = other.age;

		//other.name = nullptr;
		other.age = 0;
	}
	void printHuman() {
		printf("name: %s, age: %d\n", this->name, this->age);
	}

};
int main()
{
	Human h("홍길동", 30);
	h.printHuman();

	Human h2(h);
	h2.printHuman();

	Human h3(std::move(h));
	h3.printHuman();
	h.printHuman();
	return 0;
}