#include <iostream>
#include <math.h>
using namespace std;
/*
	����Ʈ �Ű������� ���� �� ������ ���� �� �����ʺ��� �ۼ�
*/
int coordinates(int x, int y = 0, int z = 0);		// default���� ����(����)���� �ۼ�

int main() {

	cout << "(10, 20, 30): " << coordinates(10, 20, 30) <<endl;
	cout << "(10, 20, def): " << coordinates(10, 20) << endl;
	cout << "(10, def, def): " << coordinates(10) << endl;

	return 0;
}

int coordinates(int x, int y, int z) {

	int res;
	res = pow(x, 2) + pow(y, 2) + pow(z, 2); // pow -> ����

	return sqrt(res);						 // sqrt -> ������
}