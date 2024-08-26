#include <iostream>

using namespace std;

// Ŭ����
class Test
{
	string name;

public:
	int age;

	virtual int GetAge()
	{
		return age;
	}
};

// ���
class TestChild1 : public Test
{
	int test;
};

// �������̵�
class TestChild2 : public Test
{
public:
	int GetAge() override
	{
		return age + 1;
	}
};


int main()
{
	// Ŭ����
	Test test{};
	Test test1{};
	Test test2{};
	// test.name = "test";          Error!

	test.age = 10;
	test1.age = 100;
	test2.age = 1000;

	cout << "test�� ���̴� " << test.age << endl;
	cout << "test1�� ���̴� " << test1.age << endl;
	cout << "test2�� ���̴� " << test2.age << endl;


	// ������� / �޼ҵ�
	Test* test3 = new Test();

	test3->age = 10;

	cout << test3->GetAge() << endl;


	// ���
	TestChild1* testChild1 = new TestChild1();

	testChild1->age = 10;

	cout << testChild1->GetAge() << endl;


	// �������̵�
	TestChild2* testChild2 = new TestChild2();

	testChild2->age = 10;

	cout << testChild2->GetAge() << endl;

	return 0;
}