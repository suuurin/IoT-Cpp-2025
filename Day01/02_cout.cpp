#include <iostream>
using namespace std; // using�� ����ؼ� std include 

int main() {

	int num = 100;
	char str[100] = "ȫ�浿";
	double d = 3.14;

	std::cout << "abcdefg";				// std -> namespace! (std ���� �ȿ� �ִ� cout ��ü ����ϰڴ�!)
	std::cout << num << std::endl;
	std::cout << str << std::endl;
	cout << d << endl;					// ��ܿ� using���� include => std ���̵� ��� ����

	return 0;
}