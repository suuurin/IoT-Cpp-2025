/*
*/
#include <iostream>

class MyClass {
private:
	int x, y;
public:
	// 생성자
	MyClass(int ax, int ay) : x(ax), y(ay) {}

	// 두 객체의 값을 더한 새로운 객체 반환
	MyClass add(const MyClass& other) {
		return MyClass(x + other.x, y + other.y);
	}

	// 객체 + 객체 (MyClass 타입끼리 더하기)
	MyClass operator+(const MyClass& other) {
		return MyClass(x + other.x, y + other.y);
	}

	// 객체 + 정수 (MyClass 객체에 정수를 더하기)
	MyClass operator+(int value) {
		return MyClass(x + value, y + value);
	}
		
	void showMyClass() {
		printf("%d, %d\n", x, y);
	}
};

int main()
{
	MyClass obj(10, 20);
	obj.showMyClass();
	MyClass obj2(20, 30);
	obj2.showMyClass();
	MyClass obj3 = obj.add(obj2);
	obj3.showMyClass();
	MyClass obj4 = obj.operator+(obj3);
	obj4.showMyClass();

	MyClass obj5 = obj4 + 100;			// 객체와 정수 더하기 obj4.operator+(100);
	obj5.showMyClass();
	return 0;
}

// 오버로딩 할 수 없는 연산자:
// ::, ., *, sizeof