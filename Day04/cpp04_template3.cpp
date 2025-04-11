/*

*/
#include <iostream>
using namespace std;

template <typename T, typename T2>
void func(T a, T2 b) {
	cout << a << endl;
	cout << b << endl;
}
int main()
{
	func(10, 3.14);
	func("Template", 3.14);
	func<const char*, double>("Hello", 3.1415);

	return 0;
}