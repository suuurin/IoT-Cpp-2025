/*
*	���ø� �Ű�����
*/
#include <iostream>
using namespace std;

template <typename T, int sz>
class CTest {
private:
	T ary[sz];
public:
	T& operator[](int idx) {			// ���� ���� �ε���
		if (idx < 0 || idx >= sz) {
			cout << "Error" << endl;
			exit(1);
		}
		return ary[idx];
	}
	void getData() {
		for (int i = 0; i < sz; i++) {
			cout << ary[i] << endl;
		}
	}
};
int main()
{
	CTest<int, 5> obj;
	obj.operator[](0) = 10;
	obj[1] = 20;
	obj[2] = 30;
	obj[3] = 40;
	obj[4] = 50;

	obj.getData();

	cout << obj[0] << endl;

	return 0;
}