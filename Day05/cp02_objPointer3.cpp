//#include <iostream>
//
//class MyClass 
//{
//public:
//	int value;
//	//MyClass() { }
//	MyClass(int v=0) : value(v) { }	// ����Ʈ �����ڸ� ���� �ʰ� �⺻���� �����ϴ� ����� ����
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
//	(*ptr).showMyClass(); // ���� ����
//	printf("value: %d\n", ptr->value);
//	printf("value: %d\n", (*ptr).value);
//
//
//
//	return 0;
//}