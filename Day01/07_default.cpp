#include <iostream>
/*
*	����Ʈ �Ű����� 
*/
int func(int num = 0) {		// default ���� �Լ��� ���� ���𿡼��� ��ġ���Ѿ� ��
	return num * num;
}

int main() {
	int res;
	res = func(10);
	std::cout << res << std::endl;

	res = func(0);
	std::cout << res << std::endl;

	res = func();					// �Է� X -> ����Ʈ �Ű������� �����
	std::cout << res << std::endl;

	return 0;
}