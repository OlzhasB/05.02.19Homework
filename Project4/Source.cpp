#include<iostream>
using namespace std;

int InvertDigits(int &k)
{
	/*Proc7. ќписать процедуру InvertDigits(K), мен€ющую пор€док следовани€ цифр 
	целого положительного числа K на обратный (K Ч параметр целого типа, €вл€ющийс€ одновременно входным и выходным). 
	— помощью этой процедуры помен€ть пор€док следовани€ цифр на обратный дл€ каждого из п€ти данных целых чисел. */
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
	/*ќписать процедуру AddRightDigit(D, K), добавл€ющую к целому положительному числу K 
	справа цифру D (D Ч входной параметр целого типа, лежащий в диапазоне 0Ц9, K Ч параметр целого типа, 
	€вл€ющийс€ одновременно входным и выходным). — помощью этой процедуры 
	последовательно добавить к данному числу K справа данные цифры D1 и D2, вывод€ результат каждого добавлени€. */
	k *= 10;
	k += d;
	return k;
}

int AddLeftDigit(int d, int &k)
{
	/*ќписать процедуру AddLeftDigit(D, K), добавл€ющую к целому положительному числу K 
	слева цифру D(D Ч входной параметр целого типа, лежащий в диапазоне 1Ц9, K Ч параметр целого типа, 
	€вл€ющийс€ одновременно входным и выходным).— помощью этой процедуры последовательно добавить 
		к данному числу K слева данные цифры D1 и D2, вывод€ результат каждого добавлени€.*/
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