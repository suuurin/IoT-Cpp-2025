//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human
//{
//protected:
//	char mName[20];
//	int mAge;
//public:
//	Human(const char* name, int age)
//	{
//		strcpy(this->mName, name);
//		this->mAge = age;
//	}
//	void showHuman() 
//	{
//		std::cout << "이름: " << this->mName << ", 나이: " << this->mAge << std::endl;
//	}
//};
//class Student : public Human
//{
//private:
//	int mStudentId;
//public:
//	Student(const char* name, int age, int studentId)
//		: Human(name, age)
//		, mStudentId(studentId)
//	{
//	}
//
//	void showStudent() 
//	{
//		std::cout << "학번: " << mStudentId << std::endl;
//		std::cout << "이름: " << mName << ", 나이: " << mAge << std::endl;
//		// 접근제한자 protected 로 바꾸면 접근 가능
//	}
//
//};
//int main(void)
//{
//	// 부모 클래스 생성
//	Human h("홍길동", 25);
//	h.showHuman();
//	// 자식 클래스 생성
//	Student h2{ "임꺽정", 30, 202503 };
//	h2.showHuman();
//	h2.showStudent();
//	return 0;
//}