/*
*/
#include <iostream>

class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0) : x(ax), y(ay) { printf("constructor\n"); }
	Point(const Point& other) {
		printf("copy constructor~!\n");
		x = other.x;
		y = other.y;
	}
	const Point& add(const Point& other) {
		printf("add()!~\n");
		return Point(x + other.x, y + other.y);
	}
	void showPoint() {
		printf("x: %d, y: %d\n", x, y);
	}
};

int main()
{
	Point obj(10, 20);
	//obj.showPoint();
	Point obj2(30, 40);
	//obj2.showPoint();
	Point obj3;
	obj3 = obj.add(obj2);	// 두개의 객체를 합치는 기능 : add 멤버함수 = 복사 생성자 사용..
	obj3.showPoint();

	return 0;
}