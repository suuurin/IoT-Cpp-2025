//#include <iostream>
//using namespace std;
//
//class SuperClass
//{
//private:
//	int num;
//public:
//	SuperClass(int an)
//	{
//		num = an;
//		cout << num << "SuperClass const" << endl;
//	}
//	~SuperClass() 
//	{
//		cout << num << "SuperClass Destructor" << endl;
//	}
//};
//class SubClass : public SuperClass
//{
//private:
//	int subNum;
//public:
//	SubClass(int an, int an2) : SuperClass(an)
//	{
//		subNum = an2;
//		cout << subNum << " SubClass Constructor" << endl;
//	}
//	~SubClass()
//	{
//		cout << subNum << " SubClass Destructor" << endl;
//	}
//};
//int main(void)
//{
//	SuperClass s{ 1 };
//	cout << "================" << endl;
//	SubClass ss{ 2, 22 };
//
//	return 0;
//}
//// ��ü�� ������ �� ȣ��Ǵ� �����ڿ� �������� ������ �ٸ���.
//// ��, �������� ȣ��� �������� ������ �ٸ���.