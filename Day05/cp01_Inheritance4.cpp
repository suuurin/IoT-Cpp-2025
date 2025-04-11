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
//// 객체를 생성할 때 호출되는 생성자와 생성자의 실행은 다르다.
//// 즉, 생성자의 호출과 생성자의 실행은 다르다.