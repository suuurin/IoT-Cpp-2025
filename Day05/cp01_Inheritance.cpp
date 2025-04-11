//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
///* Inheritance(상속) */
//// private, public, protected
//// is a(무엇은 무엇이다), has a 관계가 성립해야 한다.
//class Human // 부모클래스. 기초 클래스, 슈퍼 클래스, 베이스 클래스
//{
//private:
//	char mName[20];
//	int mAge;
//public:
//	Human(const char*, int);	// 멤버함수 선언
//	void getData();
//};
//class Student : public Human	// 자식 클래스, 파생 클래스, 서브 클래스, 드라이버드 클래스
//{
//private:
//	int mStudentID;
//public:
//	Student(const char* mName, int mAge, int mStudnetID);
//	void showStudent();
//	
//};
//// 부모 클래스 구현
//Human::Human(const char* name, int age) 
//{
//	strcpy(mName, name);
//	mAge = age;
//}
//void Human::getData()		// 자료형은 항상 앞에!
//{
//	std::cout << "이름: " << mName << " 나이: " << mAge << std::endl;
//}
//
//// 자식 클래스 구현
//// 상속받은 멤버들은 상속한 부모클래스의 생성자에서 초기화를 한다.
//Student::Student(const char* name, int age, int studentID)
//	: Human(name, age)
//{
//	// 부모 클래스 먼저 생성되어 있어야 한다.
//	//strcpy(mName, name);
//	//mAge = age;
//	mStudentID = studentID;
//}
//void Student::showStudent()
//{
//	std::cout << "학번: " << mStudentID << std::endl;
//}
//int main(void)
//{
//	// 부모 클래스 생성
//	Human h("홍길동", 25);
//	h.getData();
//	// 자식 클래스 생성
//	Student h2{ "임꺽정", 30, 202503 };
//	h2.getData();
//	h2.showStudent();
//	return 0;
//}