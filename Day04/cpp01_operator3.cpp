/*
	멤버함수 연산자 오버로딩: p1 operator연산자(p2) ex) p1 operator+(p2)
	객체끼리 더하기
*/
#include <iostream>

class MyClass {
private:
	int value;
public:
	MyClass(int n) : value(n) {}					// 생성자: 객체를 만들 때 초기값을 받음

	// + 연산자 오버로딩 (객체끼리 더하기 가능하게 만듦)
	/*
		// MyClass(타입) operator+(객체끼리 연산자 함수) (const MyClass&(참조자) other)(매개변수)
		const: 함수 내부에서 other의 데이터를 바꾸지 않게 함 -> 객체 안전 전달
		other: +의 오른쪽 객체
		  - obj1 + obj2 : obj1은 operator+를 호출하는 객체 this로, obj2는 other로 들어감
		const MyClass& other: other는 MyClass 타입의 객체를 참조 받음
		  - 참조를 쓰면 객체가 복사되지 않고 원본을 직접 참조할 수 있다 -> 성능 증가
		---------------------------------------------------------
		? MyClass 타입의 새로운 객체를 반환하는 + 연산자 함수!
		? other는 +의 오른쪽 객체이며, 원본을 변경하지 않음!
		? const MyClass&로 받으면 불필요한 복사를 막아 성능이 좋아짐!
	*/
	MyClass operator+(const MyClass& other) {		
		printf("+ overoading");						// 연산자 오버로딩이 실행될 때 출력
		return MyClass(value + other.value);		// 두 객체의 value를 더한 새로운 MyClass 객체 반환
	}

	// 출력 함수
	void showMyClass() {
		printf("value: %d\n", value);
	}
};
int main()
{
	MyClass obj(10);				// 초기값을 가지는 객체 생성
	obj.showMyClass();

	MyClass obj2(obj);				// obj를 복사해서 새로운 객체 obj2 생성
	obj2.showMyClass();

	MyClass obj3 = obj2;			// obj2를 복사해서 새로운 객체 obj3 생성 ( == MyClass obj3(obj2); 같은 의미)
	obj3.showMyClass();

	MyClass obj4 = obj + obj2;		// obj + obj2의 결과를 가지고 새 객체 obj4 생성
	obj4.showMyClass();				// 20 출력

	return 0;
}