#include <iostream>
/*
	����� ��� : �Ϲ� ����
*/
int func(int anum) {

	anum++;
	return anum;	
}

int main() {

	int num = 10;
	//int& res = func(num);
	// -> ���� �߻� => ���� ������ ������ ������ �ؼ�! (�������� ����)
	const int& res = func(num);
	// func(num) - ���� ��ȯ�ϴ� �Լ� / ��ȯ�� - �ӽð�
	// �ӽ� ���� �޸𸮿� ��� �����ϰ� �Լ��� ������ �����
	// ����(&)�� ����ϸ� �ӽ� ���� �������� ����! => �ӽ� ���� �ݹ� ������� ����
	// const - �б� ���� �����̱� ������ �����ϰ� ���� ����

	std::cout << res << std::endl;

	return 0;
}