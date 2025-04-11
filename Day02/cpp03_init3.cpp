/*
	콜론 초기화, 초기화 리스트
	- 생성자가 호출될 때 멤버 변수 바로 초기화
		- 내부에서 넣는 것(m_hour = h)보다 초기화 리스트에서 바로 넣는게 좋다.
	- 초기화 리스트: 값을 빠르게, 명확하게 넣는 방법.
	- 기본값을 먼저 넣고, 다시 값을 넣는 걸 피할 수 있음.
*/
#include <iostream>
using namespace std;

class CTime {
private:
	int m_hour{ 0 };
	int m_min{ 0 };
	int m_sec{ 0 };
public:
	CTime() { cout << "기본 생성자 호출" << endl; }					// 디폴트 생성자
	CTime(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s)		// 콜론 초기화, 이니셜라이저 리스트, 헤드에 달리는 게 중요
	{		
		cout << "입력 3개 받는 생성자 호출" << endl;
		//m_hour = h;
		//m_min = m;
		//m_sec = s;
	}
	void setTime(int hour, int min, int sec) {
		m_hour = hour;
		m_min = min;
		m_sec = sec;
	}
	void showTime() const {
		printf("현재 시간은 %d:%d:%d 입니다.\n", m_hour, m_min, m_sec);
	}
};

int main()
{
	//CTime now;
	CTime now = CTime();
	now.showTime();

	//CTime t(15, 30, 30);
	//CTime t = { 12, 12, 12 };
	CTime t{ 10, 11, 12 };
	t.showTime();

	return 0;
}