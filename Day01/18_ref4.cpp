#include <iostream>
using namespace std;

/*
	��� ���۷��� : ����� ���� ������
*/
int main() {

	int n = 10;
	//int& ref = n;
	const int& ref = 10;			// ������۷����� �����ϸ� ���ͷ��� ������ �� �ִ�.
									// �ӽ� ��ü�� ������ �� �ִ� ������ �����ȴ�.

	cout << "ref: " << ref << endl;



	return 0;
}