#include <iostream>
using namespace std;
/*
*  �޸� ���� �Ҵ� : new - delete
*  new ������ = new �ڷ���(ũ��)
*  new�� �����ڸ� ȣ���Ѵ�. ��, new�� ��ü�� ������Ų��.
*  ��ü�� �����ϱ� ���ؼ��� ������ ȣ���� �־�� �Ѵ�.
*/
int main() {

	int size;
	int* pary;

	//int* pn = new int;  //-> �������� int ũ��� ���� �Ҵ��� �޴´�.
	//delete pn;   // �������� �Ҵ� �޸𸮸� ���´�.

	cout << "ũ�� >> ";
	cin >> size;

	pary = new int[size]; //int�� Ÿ���� �������� ����� ������
	pary[0] = 1;
	pary[1] = 2;
	*(pary + 2) = 3;

	//���
	cout << pary[0] << ", " << pary[1] << ", " << *(pary + 2) << endl;
	delete[] pary;

	return 0;
}