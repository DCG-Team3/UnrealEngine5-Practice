#include <iostream>
#include <string>

using namespace std;

int main()
{
	// ���� �ڷ���
	int iNumber = 100;
	float fNumber = 100.f;
	double dNumber = 107.6;

	cout << iNumber << endl;
	cout << fNumber << endl;
	cout << dNumber << endl;

	// ���� �ڷ���
	char cCharacter1 = 'b';
	char cCharacter2 = 'a';
	string sString1 = "��";
	string sString2 = "�ȳ��ϼ���";

	cout << cCharacter1 << endl;
	cout << cCharacter2 << endl;
	cout << sString1 << endl;
	cout << sString2 << endl;

	// boolean �ڷ���
	bool bTrue = true;
	bool bFalse = false;
	bool bNumber1 = (10 == 10);
	bool bNumber2 = (11 != 10);
	bool bNumber3 = (11 == 10);

	cout << bTrue << endl;
	cout << bFalse << endl;
	cout << bNumber1 << endl;
	cout << bNumber2 << endl;
	cout << bNumber3 << endl;

	return 0;
}
