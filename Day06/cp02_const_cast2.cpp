/*
*/
#include <iostream>
using namespace std;

class MyClass {
private:
	int num;
public:
	void setNum(int n) { num = n; }
	void print() const {
		cout << "Before: " << num << endl;
		//num++;	// const라서 변경할 수 없음
		const_cast<MyClass*>(this)->num--;		// 그래서 const_cast, 꼭 (this)->
		cout << "after: " << num << endl;
	}
};
int main()
{
	MyClass obj;
	obj.setNum(10);
	obj.print();

	return 0;
}