/*
	shared_ptr
	make_shared: ��ü�� ���� ī��Ʈ�� �ϳ��� �޸� ��Ͽ� ���� �Ҵ��Ų��. shared_ptr�� �����ϴ� �Լ�
	shared_ptr�� ���� ī��Ʈ�� ���� ��ü�� �������� �����Ѵ�. �������� shared_ptr�� ��ü�� ������ �� ������
	���۷��� ī��Ʈ�� 0�� �Ǹ� �޸𸮰� �ڵ� �����ȴ�.
*/
#include <iostream>

class MyClass {
public:
	MyClass() { std::cout << "MyClass constructor!!" << std::endl; }
	~MyClass() { std::cout << "MyClass destructor!!" << std::endl; }
	void func() { std::cout << "Hi shared_ptr" << std::endl; }
};
int main()
{
	std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();
	std::shared_ptr<MyClass> ptr2 = ptr;
	printf("ptr�� ptr2�� ������ ��ü�� ����Ų��. �����Ѵ�.\n");

	ptr2->func();

	return 0;
}