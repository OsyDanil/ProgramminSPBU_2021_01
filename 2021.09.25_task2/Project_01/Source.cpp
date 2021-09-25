#include<iostream>
#include<clocale>

using namespace std;

int main(int argc, char* argv[]) 
{
	setlocale(LC_ALL, "Russian");
	
	int n = 0;
	cin >> n;

	if (n > 99) 
	{
		switch (n/100)
		{
		case 1:
			cout << "Сто ";
			break;
		case 2:
			cout << "Двести ";
			break;
		case 3:
			cout << "Триста ";
			break;
		case 4:
			cout << "Четыреста ";
			break;
		case 5:
			cout << "Пятьсот ";
			break;
		case 6:
			cout << "Шестьсот ";
			break;
		case 7:
			cout << "Семьсот ";
			break;
		case 8:
			cout << "Восемьсот ";
			break;
		case 9:
			cout << "Девятьсот ";
			break;
		}
	}
	if ((n>9)&&(n%100<20)&&(n%100>9))
	{
		switch (n%100)
		{
		case 10:
			cout << "Десять ";
			break;
		case 11:
			cout << "Одиннадцать ";
			break;
		case 12:
			cout << "Двенадцать ";
			break;
		case 13:
			cout << "Тринадцать ";
			break;
		case 14:
			cout << "Четырнадцать ";
			break;
		case 15:
			cout << "Пятьнадцать ";
			break;
		case 16:
			cout << "Шестьнадцать ";
			break;
		case 17:
			cout << "Семьнадцать ";
			break;
		case 18:
			cout << "Восемьнадцать ";
			break;
		case 19:
			cout << "Девятьнадцать ";
			break;
		}
		cout << "Бананов";
	}
	else if (n>0)
	{
		switch ((n/10)%10)
		{
		case 2:
			cout << "Двадцать ";
			break;
		case 3:
			cout << "Тридцать ";
			break;
		case 4:
			cout << "Сорок ";
			break;
		case 5:
			cout << "Пятьдесять ";
			break;
		case 6:
			cout << "Шестьдесят ";
			break;
		case 7:
			cout << "Семьдесят ";
			break;
		case 8:
			cout << "Восемьдесят ";
			break;
		case 9:
			cout << "Девяносто ";
			break;
		}
		switch (n % 10)
		{
		case 0:
			cout << "бананов";
			break;
		case 1:
			cout << "Один банан";
			break;
		case 2:
			cout << "Два банана";
			break;
		case 3:
			cout << "Три банана";
			break;
		case 4:
			cout << "Четыре банана";
			break;
		case 5:
			cout << "Пять бананов";
			break;
		case 6:
			cout << "Шесть бананов";
			break;
		case 7:
			cout << "Семь бананов";
			break;
		case 8:
			cout << "Восемь бананов";
			break;
		case 9:
			cout << "Девять бананов";
			break;
		}
	}
	else {
	cout << "Ноль бананов";
	}

	return EXIT_SUCCESS;
}