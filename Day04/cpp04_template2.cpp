/*
*	���ø��� ����� �Լ����ǰ� �и��� �� ����.
*/
#include <iostream>
using namespace std;

template <typename T>			// ���ø� ����(�Ϲ�ȭ)
T func(T a, T b) {				// ���ø� �Լ�
	cout << "type: T" << endl;
	return a + b;
}
template <>						// ���ø� Ư��ȭ - ���ø� �Ϲ�ȭ�� Ư���� Ÿ�Ը� ó���� ���
int func<int>(int a, int b) {
	cout << "type: <int>" << endl;
	return a + b;
}
int main()
{
	cout << func(10, 20) << endl;
	cout << func(10.5, 20.5) << endl;

	cout << func<double>(10.1, 20.2) << endl;
	cout << func<int>(10, 10) << endl;
	return 0;
}