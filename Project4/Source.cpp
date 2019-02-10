#include<iostream>
using namespace std;

int InvertDigits(int &k)
{
	/*Proc7. ������� ��������� InvertDigits(K), �������� ������� ���������� ���� 
	������ �������������� ����� K �� �������� (K � �������� ������ ����, ���������� ������������ ������� � ��������). 
	� ������� ���� ��������� �������� ������� ���������� ���� �� �������� ��� ������� �� ���� ������ ����� �����. */
	int b, a = k, count = 0, num = 0;
	while (a)
	{
		a /= 10;
		count++;
	}
	while (k)
	{
		b = k % 10;
		k /= 10;
		num += b * pow(10, count - 1);
		count--;
	}
	return num;
}

int AddRightDigit(int d, int &k)
{
	/*������� ��������� AddRightDigit(D, K), ����������� � ������ �������������� ����� K 
	������ ����� D (D � ������� �������� ������ ����, ������� � ��������� 0�9, K � �������� ������ ����, 
	���������� ������������ ������� � ��������). � ������� ���� ��������� 
	��������������� �������� � ������� ����� K ������ ������ ����� D1 � D2, ������ ��������� ������� ����������. */
	k *= 10;
	k += d;
	return k;
}

int AddLeftDigit(int d, int &k)
{
	/*������� ��������� AddLeftDigit(D, K), ����������� � ������ �������������� ����� K 
	����� ����� D(D � ������� �������� ������ ����, ������� � ��������� 1�9, K � �������� ������ ����, 
	���������� ������������ ������� � ��������).� ������� ���� ��������� ��������������� �������� 
		� ������� ����� K ����� ������ ����� D1 � D2, ������ ��������� ������� ����������.*/
	int a = 0, b = k;
	while (b)
	{
		b /= 10;
		a++;
	}
	d = d * pow(10, a);
	k += d;
	return k;
}

void task1()
{
	int a;
	for (size_t i = 0; i < 5; i++)
	{
		cout << "Write any number: ";
		cin >> a;
		cout << InvertDigits(a) << endl;
	}
	

	system("pause");
}

void task2()
{
	int a, b;
	cout << "Write any number: ";
	cin >> b;
	for (size_t i = 0; i < 2; i++)
	{
		do
		{
			cout << "Write any number from 0 to 9: ";
			cin >> a;
			if (a < 0 || a > 9)
				cout << "Invalid number" << endl;
		} while (a > 9 || a < 0);

		cout << AddRightDigit(a, b) << endl;
	}
	system("pause");
}

void task3()
{
	int a, b;
	cout << "Write any number: ";
	cin >> b;
	for (size_t i = 0; i < 2; i++)
	{
		do
		{
			cout << "Write any number from 0 to 9: ";
			cin >> a;
			if (a < 0 || a > 9)
				cout << "Invalid number" << endl;
		} while (a > 9 || a < 0);

		cout << AddLeftDigit(a, b) << endl;
	}
	system("pause");
}


int main()
{
	int fl;
	do {
		int task;
		cout << "The number of task: ";
		cin >> task;
		switch (task)
		{
		case 1:
		{
			task1();
			break;
		}
		case 2:
		{
			task2();
			break;
		}
		case 3:
		{
			task3();
			break;
		}
		}

		cout << "Do you want to continue: 1/0? ";
		cin >> fl;
	} while (fl == 1);
}