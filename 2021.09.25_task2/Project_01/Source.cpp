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
			cout << "��� ";
			break;
		case 2:
			cout << "������ ";
			break;
		case 3:
			cout << "������ ";
			break;
		case 4:
			cout << "��������� ";
			break;
		case 5:
			cout << "������� ";
			break;
		case 6:
			cout << "�������� ";
			break;
		case 7:
			cout << "������� ";
			break;
		case 8:
			cout << "��������� ";
			break;
		case 9:
			cout << "��������� ";
			break;
		}
	}
	if ((n>9)&&(n%100<20)&&(n%100>9))
	{
		switch (n%100)
		{
		case 10:
			cout << "������ ";
			break;
		case 11:
			cout << "����������� ";
			break;
		case 12:
			cout << "���������� ";
			break;
		case 13:
			cout << "���������� ";
			break;
		case 14:
			cout << "������������ ";
			break;
		case 15:
			cout << "����������� ";
			break;
		case 16:
			cout << "������������ ";
			break;
		case 17:
			cout << "����������� ";
			break;
		case 18:
			cout << "������������� ";
			break;
		case 19:
			cout << "������������� ";
			break;
		}
		cout << "�������";
	}
	else if (n>0)
	{
		switch ((n/10)%10)
		{
		case 2:
			cout << "�������� ";
			break;
		case 3:
			cout << "�������� ";
			break;
		case 4:
			cout << "����� ";
			break;
		case 5:
			cout << "���������� ";
			break;
		case 6:
			cout << "���������� ";
			break;
		case 7:
			cout << "��������� ";
			break;
		case 8:
			cout << "����������� ";
			break;
		case 9:
			cout << "��������� ";
			break;
		}
		switch (n % 10)
		{
		case 0:
			cout << "�������";
			break;
		case 1:
			cout << "���� �����";
			break;
		case 2:
			cout << "��� ������";
			break;
		case 3:
			cout << "��� ������";
			break;
		case 4:
			cout << "������ ������";
			break;
		case 5:
			cout << "���� �������";
			break;
		case 6:
			cout << "����� �������";
			break;
		case 7:
			cout << "���� �������";
			break;
		case 8:
			cout << "������ �������";
			break;
		case 9:
			cout << "������ �������";
			break;
		}
	}
	else {
	cout << "���� �������";
	}

	return EXIT_SUCCESS;
}