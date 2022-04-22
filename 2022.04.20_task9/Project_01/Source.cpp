#include <iostream>
#include "Arraylist.h"
#include<clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	ArrayList list(1);

	for (int i = 0; i < 40; ++i)
	{
		int x = rand() % 100;

		cout << "����� �������� " << i << endl;

		if (i % 3 == 0)
		{

			list.pushend(x);
			cout << "� �������� " << x << endl;
			cout << "������ ���� �������� ���:" << endl;
			cout << list << endl;
		}
		else if (i % 3 == 1)
		{

			list.pushbegin(x);
			cout << "� ��������� " << x << endl;
			cout << "������ ���� �������� ���:" << endl;
			cout << list << endl;
		}
		else if (i % 3 == 2)
		{

			int p = rand() % 100;
			list.insert(x, p);
			cout << "� ������� " << x << " �� ������� " << p << endl;
			cout << "������ ���� �������� ���:" << endl;
			cout << list << endl;
		}
		if (i % 2 == 1)
		{
			int f = rand();

			if (f % 3 == 0)
			{
				cout << "� �������������� ������� ";
				list.extractbegin();
				cout << endl;
				cout << "������ ���� �������� ���:" << endl;
				cout << list << endl;
			}
			else if (f % 3 == 1)
			{
				cout << "� ����������� ������� " << list.extractend() << endl;
				cout << "������ ���� �������� ���:" << endl;
				cout << list << endl;
			}
			else
			{

				f = f % 100;
				list.insert(x, f);
				cout << "� ������� " << x << " �� ������� " << f << endl;
				cout << "������ ���� �������� ���:" << endl;
				cout << list << endl;

			}

		}

	}
	
	list.sort();
	cout << endl << "����� ����������: " << endl;
	cout << list;
	return EXIT_SUCCESS;
}