#include <iostream>
/*
	����� ���: ���۷���
*/
int& func(int& ref) {
	ref++;
	return ref;					// lvalue
	//return ref++;					// rvalue
}

int main() {

	int n = 10;
	//int& ref = func(n);
	// ����ϴ� Ÿ�԰� ���Ͻ� ���� �߻� X
	int ref = func(n);

	std::cout << ref << std::endl;

	return 0;
}