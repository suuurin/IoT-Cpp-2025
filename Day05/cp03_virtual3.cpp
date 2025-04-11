/*
*	�߻� �ڷ����� �̿��ؼ� ���� �Ҵ�� ��ü�� ������ ���� �޸� ���� �� ���� Ÿ���� �Ҹ��ڸ� ȣ��Ǿ� �޸� ������ �߻�
*	���� ���� Ŭ������ �Ҹ��� �������� ����� ��Ÿ���� �Ҹ��� ȣ���� �����Ѵ�.
*/
#include <iostream>
using namespace std;

class CTest {
private:
	int num;
public:
	CTest(int anum) : num(anum) {cout << num << " CTest constructor!" << endl;}
	virtual ~CTest() { cout << num << " CTest destructor" << endl; }
	virtual void vfunc() {cout << "CTest virtual function()" << endl;}
	void func() {cout << "CTest function()" << endl;}
};
class CTestSub : public CTest {
private:
	int subN;
public:
	CTestSub(int an1, int an2) : CTest(an1), subN(an2) { cout << subN << " CTestSub constructor" << endl; }
	~CTestSub() { cout << subN << " CTestSub destructor" << endl; }

	void vfunc() override { cout << "CTestSub function() override" << endl; }
};
int main()
{
	CTest obj(1);
	cout << "------------------------------------------------" << endl;
	CTestSub obj2(2, 22);
	cout << "------------------------------------------------" << endl;
	obj.func();
	obj.vfunc();
	cout << "------------------------------------------------" << endl;
	obj2.func();
	obj2.vfunc();
	cout << "------------------------------------------------" << endl;

	CTest* ptr = new CTestSub(3, 33);

	delete ptr;
	return 0;
}