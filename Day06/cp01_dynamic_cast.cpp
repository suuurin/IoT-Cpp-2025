/*
	�⺻ Ŭ������ �����ϴ� lvalue�� �Ļ��� Ŭ������ ���� ������ ��ȯ
	��Ӱ��迡�� �����ϰ� ����ȯ�� �����Ѵ�.
*/
#include <iostream>

class Super {
public:
	int n1, n2;

};
class Sub : public Super {		// ��� = public
public: 
	int n3, n4;
};
class Sub2 : public Sub {
public:
	int n5, n6;
};
int main()
{
	Super* sp;
	Sub* sup;
	Sub2* sup2;
	Sub2 obj{};

	sup2 = dynamic_cast<Sub2*>(&obj);
	dynamic_cast<Sub*>(sup2);				// upcasting
	dynamic_cast<Super*>(sup2);
	return 0;
}