#include <iostream>
using namespace std;
/*
	�Լ� �����ε�(��������) 
	- �̸��� ������ �Ű����� Ÿ���� �ٸ��ų�, �Ű������� ������ �ٸ��� �ٸ� �Լ��� ����
*/
int func() {
	return 10;
}
int func(char c) {
	return c;
}
int func(int n) {
	return 10 + n;
}
int func(int n1, int n2) {
	return n1 + n2;
}
//char func(char c) {
//	return c;
//}
// => ���� �߻� (�̹� �Ȱ��� �Լ��� ������)
int main() {

	cout << func() << endl;
	cout << func('a') << endl;		// 97 ('a')
	cout << func(100) << endl;		// 110
	cout << func(10, 20) << endl;	// 30

	return 0;
}