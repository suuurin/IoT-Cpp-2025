/*
	moveconstructor(�̵�������)
*/
#include <iostream>

int main() {
	int n = 10;
	int& rn = n;				// ���۷���, �Ϲ� ����, l-value ����
	const int& ra = 10;
	
	int&& rrn = 10;				// r-value ����

	std::cout << n << ", " << rn << ", " << ra << ", " << rrn << std::endl;
}