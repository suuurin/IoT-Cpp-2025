#define _CRT_SECURE_NO_WARNINGS		// C 표준 함수 경고메시지 방지
#include <iostream>					// 입출력 위한 라이브러리 포함	
using namespace std;

int main()
{
	char str[20] = "홍길동";		// 문자 배열 str을 선언하고 "홍길동"으로 초기화
	cout << str << endl;			// str 출력 (결과: 홍길동)

	char str2[20];					// 문자 배열 str2 선언 (초기화X)
	//str2 = "김영희";				// (!) 잘못된 코드: 배열 전체를 문자열로 직접 대입할 수 없음
	strcpy(str2, "김영희");			// strcpy 사용하여 "김영희" 문자열을 str2에 복사 / 배열에 문자열을 넣으려면 "복사"해야만 함. 직접할당 X
	cout << str2 << endl;			// str2 출력 (결과: 김영희)
									
	//char* str3;					// (?) 왜 얘는 안 되는지:
									/* 포인터 변수만 선언했기 때문(단순히 문자만 가리킴), 문자열 저장할 공간이 없음
									   아래 코드는 [100]짜리 배열을 선언해 문자열을 저장할 공간이 있음
									   (?) 위 코드는 그럼 쓸 수 없는지 :
									   1. char* str3 = new char[100] 동적 할당으로 사용가능
										  cin >> str3 입력 받기
									   2. 기존 할당된 배열 가리키기용 
										  char buffur[100] = "Hello";
										  char* str3 = buffer; str3 출력;
									*/
									
	char str3[100];					// 크기 100짜리 문자 배열 str3 선언
	cout << "이름입력 >>";			// 이름 입력 메시지 출력
	cin >> str3;					// cin: 사용자 입력 str3에 저장 (공백 이전까지만 입력 받음)
	cout << str3 << endl;			// 입력된 이름 출력

	const char* name;				// 상수(const) 문자 포인터 변수 name(주소 저장하는 변수) 선언
	name = "김철수";				// 문자열 리터럴 "김철수"의 주소를 name에 저장 (변경X)
	cout << name << endl;			// name이 가리키는 김철수 출력

									// (!?) 항상 헷갈리는 부분
									/*
									리터럴 문자열은 메모리 어딘가 읽기 전용 메모리에 저장된다.
									name은 "김철수"를 저장하는 게 아닌 "김철수"가 저장된 메모리 공간 주소(ex: 0x1000)를 저장
									동시에 포인터 변수 name 자체의 주소도 함께 존재함.
									**name의 주소(&name)**는 또 다른 메모리 위치에(ex: 0x2000)에 존재하며
									0x2000 안에 "김철수"의 주소 0x1000 이 저장된다.
									*/

	return 0;
}