/*
	괄호 초기화:
	{} 안에 값을 넣어주면 변수가 초기화 된다.
	*기본값을 설정* 할 때 매우 유용 -> 객체 생성 시 0으로 자동 초기화
	쓰는 이유: 명시적으로 설정하기 위해서? / 잘못된 타입 넣으면 컴파일 에러 발생시켜줌
*/
#include <iostream>

class BoxClass {
private:
	int m_width{ 0 };
	int m_height{ 0 };
	int m_length{ 0 };
public:
	int volume() {
		return m_width * m_height * m_length;
	}

};
int main()
{
	BoxClass b;
	std::cout << "b.volume: " << b.volume() << std::endl;

	return 0;
}