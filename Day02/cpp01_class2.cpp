/*
	class 2
*/
#include <iostream>
using namespace std;

class AClass {
private:
	int m_n1 = 0;
	int m_n2 = 0;
public:
	AClass() {}
	void setData(int n1, int n2) {
		m_n1 = n1;
		m_n2 = n2;
		
	}
	void getData() {
		cout << "���� AClass�� �ν��Ͻ��Դϴ�. " << "n1: " << m_n1 << ", n2: " << m_n2 << endl;
	}
};

int main()
{
	AClass obj;
	//AClass obj(100, 200); �� �Ǵ� ����: 2���� ���� �޴� �����ڰ� ���� ������

	obj.getData();
	obj.setData(10, 20);
	obj.getData();
	return 0;
}