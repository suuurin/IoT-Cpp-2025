//#include <iostream>
//
//class MyClass 
//{
//public:
//	int value;
//	//MyClass() { }
//	MyClass(int v=0) : value(v) { }	// 디폴트 생성자를 주지 않고 기본값을 설정하는 방법도 있음
//	void showMyClass()
//	{
//		std::cout << "value: " << value << std::endl;
//	}
//};
//int main(void) 
//{
//	MyClass* ptr = new MyClass{ 10 };
//	ptr->showMyClass();
//	printf("value: %d\n", ptr->value);
//
//	delete ptr;
//
//	MyClass obj{ 11 };
//	ptr = &obj;
//
//	ptr->showMyClass();
//	(*ptr).showMyClass(); // 위와 같음
//	printf("value: %d\n", ptr->value);
//	printf("value: %d\n", (*ptr).value);
//
//
//
//	return 0;
//}