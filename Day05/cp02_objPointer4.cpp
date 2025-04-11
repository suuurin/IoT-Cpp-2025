//#include <iostream>
//class MyClass
//{
//	int num;
//
//public:
//	MyClass(int num = 0) {}
//	void show()
//	{
//		std::cout << "Hello!!" << std::endl;
//	}
//};
//int main(void)
//{
//	//MyClass mc;
//	//MyClass* ptr = &(MyClass mc); // 클래스 선언을 괄호로 감싸사 주소 얻는 건 불가능
//	// 임시객체또한 안됨 &MyClass{}
//	MyClass* ptr = nullptr;
//	if (ptr != nullptr) ptr->show();
//	else printf("ptr is null\n");
//
//	ptr = new MyClass{};
//	ptr->show();
//
//	return 0;
//}