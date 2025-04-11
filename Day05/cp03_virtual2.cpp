/*
	virtual Class - ���� �����ڸ� ������ �޼��带 ���� ���� �Լ��� �ϸ�, �� ���� ���� �Լ��� ������ Ŭ����
*/
#include <iostream>

class Cinterface {
public:
	Cinterface() { std::cout << "CInterface constructor" << std::endl; }
	virtual void getData() const = 0;								// ���� ���� �Լ�
};
class CinSub : public Cinterface {
public:
	CinSub() { std::cout << "CinSub constructor" << std::endl; }
	void getData() const override {
		std::cout << "Pure Virtual function()" << std::endl;
	}
};

int main()
{
	//Cinterface obj;
	CinSub obj;
	obj.getData();
	return 0;
}