#include <iostream>

using namespace std;

// �Լ�
void CheckT()
{
	int t = 0;

	cin >> t;

	if (t == 0)
	{
		cout << "t�� 0�Դϴ�!" << endl;
	}
}

// �Լ��� ���� ��
void CheckTParam(int NumberToCheck) 
{
	int t = 0;

	cin >> t;
	
	if (t == NumberToCheck)
	{
		cout << "t�� " << NumberToCheck << "�Դϴ�!" << endl;
	}
}

// �Լ��� ���� ��
int MultiplyTwo(int NumberToMultiply) {
	return NumberToMultiply * 2;
}


int main()
{
	// continue / break
	int i = 0;

	while (i < 10)
	{
		if (i == 10)
		{
			break;
		}

		if (i % 2 == 0)
		{
			i++;
			continue;
		}

		cout << i << "��° �Դϴ�!" << endl;
		i++;
	}

	cout << "��!";

	// �Լ�
	CheckT();

	// �Լ��� ���� ��
	CheckTParam(5);

	// �Լ��� ���� ��
	int Number = 0;

	cin >> Number;
	
	cout << MultiplyTwo(Number);


	return 0;
}