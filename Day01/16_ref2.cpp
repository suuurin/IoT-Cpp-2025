#include <iostream>
using namespace std;
/*
	�ٸ� �Լ��� ����� ���������� ���� �ٲٴ� ��� 2
	���۷��� - �� �ٸ� �̸�, ������ �ʴ� ������, �޸� ������� ����
*/
void chFunc(int& rn) {						// ���۷���(��������)����
	rn = 20;
}

int main() {

	int n = 10;
	cout << "ȣ�� �� n: " << n << endl;
	chFunc(n);								// �ּҸ� ���� ���޹޾ƾ� ��
	cout << "ȣ�� �� n: " << n << endl;

	return 0;
}

