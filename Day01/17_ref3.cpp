#include <iostream>
using namespace std;
/*
* using namespace std;
*/

int main() {

	int num = 10, num2 = 100;
	int& ref = num;				// num�� �޸� ������ ref��� ������ ����
	int* pn = &num;				// ������ ����
	int& rref = ref;
	rref = num2;

	cout << rref<< ", " << num2 << endl;
	// int& rref;				
	// rref = ref;
	// ���� �߻� ->  ����� �̸����� ��� X
	
	num++;		// 11
	ref++;		// 12
	(*pn)++;	// 13

	cout << "num++: " << num << endl;
	cout << "ref++: " << ref << endl;
	cout << "*(pn)++: " << *pn << endl;

	cout << "&num: " << &num << endl;
	cout << "&ref: " << &ref << endl;
	// -> ���� �ּҰ� ��µ�

	return 0;
}