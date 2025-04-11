/*
	Ŭ���� ���ø�
*/

#include <iostream>

template <typename T>
class CTemplate {
private:
	T data;
public:
	CTemplate(T d) { data = d;}
	T getData() { return data; }
};

int main()
{
	CTemplate<int> obj(100);
	printf("data: %d\n", obj.getData());

	CTemplate<std::string> obj2("Ŭ���� ���ø� �׽�Ʈ");
	std::cout << obj2.getData() << std::endl;
	return 0;
}