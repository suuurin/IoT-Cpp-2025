#include <iostream>
using namespace std;
/*
	�ٸ� �Լ��� ����� ���������� ���� �ٲٴ� ��� 1
*/
void chFunc(int*);

int main() {

	int n = 10;
	cout << "ȣ�� �� n: " << n << endl;
	chFunc(&n);								// �ּҸ� ���� ���޹޾ƾ� ��
	cout << "ȣ�� �� n: " << n << endl;

	return 0;
}

void chFunc(int* _n) {
	*_n = 20;
}