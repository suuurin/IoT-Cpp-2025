//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
///* Inheritance(���) */
//// private, public, protected
//// is a(������ �����̴�), has a ���谡 �����ؾ� �Ѵ�.
//class Human // �θ�Ŭ����. ���� Ŭ����, ���� Ŭ����, ���̽� Ŭ����
//{
//private:
//	char mName[20];
//	int mAge;
//public:
//	Human(const char*, int);	// ����Լ� ����
//	void getData();
//};
//class Student : public Human	// �ڽ� Ŭ����, �Ļ� Ŭ����, ���� Ŭ����, ����̹��� Ŭ����
//{
//private:
//	int mStudentID;
//public:
//	Student(const char* mName, int mAge, int mStudnetID);
//	void showStudent();
//	
//};
//// �θ� Ŭ���� ����
//Human::Human(const char* name, int age) 
//{
//	strcpy(mName, name);
//	mAge = age;
//}
//void Human::getData()		// �ڷ����� �׻� �տ�!
//{
//	std::cout << "�̸�: " << mName << " ����: " << mAge << std::endl;
//}
//
//// �ڽ� Ŭ���� ����
//// ��ӹ��� ������� ����� �θ�Ŭ������ �����ڿ��� �ʱ�ȭ�� �Ѵ�.
//Student::Student(const char* name, int age, int studentID)
//	: Human(name, age)
//{
//	// �θ� Ŭ���� ���� �����Ǿ� �־�� �Ѵ�.
//	//strcpy(mName, name);
//	//mAge = age;
//	mStudentID = studentID;
//}
//void Student::showStudent()
//{
//	std::cout << "�й�: " << mStudentID << std::endl;
//}
//int main(void)
//{
//	// �θ� Ŭ���� ����
//	Human h("ȫ�浿", 25);
//	h.getData();
//	// �ڽ� Ŭ���� ����
//	Student h2{ "�Ӳ���", 30, 202503 };
//	h2.getData();
//	h2.showStudent();
//	return 0;
//}