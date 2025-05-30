/*
	reinterpret_cast
	포인터->포인터, 포인터->변수. 변수->포인터로 하는 주로 포인터관련 연산자.
*/
#include <iostream>

int main()
{
	int* ip = new int{ 10 };
	long lg = reinterpret_cast<long>(ip);			// int* --> long
	unsigned int ui = reinterpret_cast<int>(ip);	// int* --> uint
	printf("ip: %u, lg: %u, ui: %u\n", ip, lg, ui);

	
	// 이것도 안 돼서 다음에 다시 하기로 함
	//int* p = reinterpret_cast<int*>(lg);			// long --> *int
	//int* p1 = reinterpret_cast<int*>(ui);
	//printf("p: %d\n", *p1);		

	int* p = new int{ 100 };
	char* pc = reinterpret_cast<char*>(p);
	printf("c: %d\n", *pc);							// int* --> char*

	//delete p;
	
	int* p2 = reinterpret_cast<int*>(pc);			// char* --> int*
	printf("p: %d\n", *p);

	return 0;
}

char ch = 10;
int n = (int)ch;