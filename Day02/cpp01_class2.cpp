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
		cout << "나는 AClass의 인스턴스입니다. " << "n1: " << m_n1 << ", n2: " << m_n2 << endl;
	}
};

int main()
{
	AClass obj;
	//AClass obj(100, 200); 안 되는 이유: 2개의 값을 받는 생성자가 없기 때문에

	obj.getData();
	obj.setData(10, 20);
	obj.getData();
	return 0;
}