#include <iostream>
/*
	����� ��� : �Ϲ� ����
*/
int func(int anum) {

	anum++;
	return anum;	// �ӽ� ��ü, rvalue (���)
	// ��Ī���� ������!
	// ���� -> �Լ� ���� �����
}

int main() {

	int num = 10;
	//int& res = func(num);				
	// ���� �߻�! -> rvalue (�ӽ� ��ü)�� lvaule(�Ϲ� ����)�� �޸� �Ͻ����� �޸� ������ ����
	// => ��ȿ���� ����!! - func(num)�� ����� �� �ٷ� �޸𸮿��� ������� ����!!!!
	const int& res = func(num);
	// �ӽ� ��ü -> �ӽ� ������ �޸� ���� �Ҵ� => �����Ǵ� �̸� ���̱� 

	std::cout << res << std::endl;

	return 0;
}