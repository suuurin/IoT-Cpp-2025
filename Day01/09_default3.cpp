#include <iostream>
using namespace std;
/*
	�Լ� �����ε� �߿��� ����Ʈ �Ű������� �Է��� ���� ������ �Լ� ���ǰ� ���� ���
	�Է¾��� �Լ� ȣ��� ���� �߻�
*/
int func(int n = 0) {
	return n * n;
}

int func() {
	return 10;
}

int main() {

	cout << func(10) << endl;
	//cout << func() << endl;
	// -> �����߻� => default ���� ������ �Ű������� ���� ������ ȣ�� ����!!

	return 0;
}