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
//		std::cout << "�̸�: " << this->mName << ", ����: " << this->mAge << std::endl;
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
//		std::cout << "�й�: " << mStudentId << std::endl;
//		std::cout << "�̸�: " << mName << ", ����: " << mAge << std::endl;
//		// ���������� protected �� �ٲٸ� ���� ����
//	}
//
//};
//int main(void)
//{
//	// �θ� Ŭ���� ����
//	Human h("ȫ�浿", 25);
//	h.showHuman();
//	// �ڽ� Ŭ���� ����
//	Student h2{ "�Ӳ���", 30, 202503 };
//	h2.showHuman();
//	h2.showStudent();
//	return 0;
//}