#include <iostream>
using namespace std;
/*
	new�� ������ ȣ���� �ǹǷ� �ʱ�ȭ�� ����
	������ - ��ü�� �����ϰ� �ʱ�ȭ��Ű�� ���
*/
int main() {
	
	int* parr;
	parr = new int[3] {10, 20, 30};			// �̸� ���� �迭 ��ü �����ϰ� 10, 20, 30���� �ʱ�ȭ
	// parr = new int[3] = {10, 20, 30};

	cout << parr[0] << ", " << parr[1] << ", " << parr[2] << endl;
	
	delete[] parr;

	return 0;
}