/*
	StaticTest��� Ŭ������ ����µ� ��������δ� �̸�, ��ȭ��ȣ, �ּ�, ȸ����ȣ(cnt, �ʱⰪ 0)�� ������
	3�� �Է��� �޴� �����ڸ� �ۼ��Ѵ�. ȸ����ȣ�� �ڵ����� ������ų ���̱� ������ 
	��� ����ϴ� showmember() �޼��带 �����Ͻÿ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class StaticTest {
private:
	static int cnt;
	char name[50];
	char phone[50];
	char addr[100];

public:
	StaticTest(const char* n, const char* p, const char* a);
	void showmember();
};

int StaticTest::cnt = 0;

StaticTest::StaticTest(const char* n, const char* p, const char* a) {
	strcpy(name, n);
	strcpy(phone, p);
	strcpy(addr, a);
	cnt++;
}

void StaticTest::showmember() {
	std::cout << "ȸ����ȣ: " << cnt << std::endl;
	printf("�̸�: %s, ��ȭ��ȣ: %s, �ּ�: %s\n", name, phone, addr);
}

int main() {

	StaticTest m1("ȫ�浿", "010-1111-1111", "�λ�");
	m1.showmember();
	StaticTest m2("�迵��", "010-2222-2222", "�λ�");
	m2.showmember();
	StaticTest m3("��ö��", "010-3333-3333", "���");
	m3.showmember();
	return 0;
}