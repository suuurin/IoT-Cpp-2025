/*
	const_cast: const ������ �����Ѵ�.
*/
#include <iostream>
using namespace std;

int main()
{
	int num = 10;
	cout << ++num << endl;

	const int num2 = 10;
	cout << num2 << endl;

	/* ���: 11�� ���;� �ϴµ� �� �ż� �ٽ� ����� ��
	int* np = const_cast<int*>(&num2);
	*np += 1;
	cout << "num2: " << num2 << endl;
	*/
	const char str[] = "orange";
	char* cp = const_cast<char*>(str);
	cp[0] = 'O';
	cout << str << endl;

	return 0;
}