/*
	전역함수 오버로딩: operator(p1, p2)
	1. public
*/
#include <iostream>

class Point {
public:
	int x, y;
	
	Point(int ax, int ay) : x(ax), y(ay) {}
	Point operator+(const Point& other) {			// 객체 + 객체
		return Point(x + other.x, y + other.y);
	}
	Point operator+(int n) {						// 객체 + 정수
		return Point(x + n, y + n);
	}
	void showPoint() {
		printf("x: %d, y: %d\n", x, y); 
	}
	
};
// 전역함수 -> inline 추가(붙인 이유: 간단 함수에서 사용하면 호출에서 성능 향상됨)
// 전역함수 오버로딩: Point 클래스 public 선언이라 멤버변수에 접근 가능
inline Point operator+(int n, const Point& other) {	// 정수 + 객체 ㅇ
	return Point(n + other.x, n + other.y);
}




int main()
{
	Point a(10, 20);
	Point b(30, 40);
	Point c = a + b;
	c.showPoint();
	Point d = a + 100;
	d.showPoint();
	Point e = 200 + b;
	e.showPoint();
	return 0;
}