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

		cout << "номер итерации " << i << endl;

		if (i % 3 == 0)
		{

			list.pushend(x);
			cout << "Я пушендаю " << x << endl;
			cout << "теперь лист выглядит так:" << endl;
			cout << list << endl;
		}
		else if (i % 3 == 1)
		{

			list.pushbegin(x);
			cout << "Я пушбегиню " << x << endl;
			cout << "теперь лист выглядит так:" << endl;
			cout << list << endl;
		}
		else if (i % 3 == 2)
		{

			int p = rand() % 100;
			list.insert(x, p);
			cout << "Я инсертю " << x << " на позицию " << p << endl;
			cout << "теперь лист выглядит так:" << endl;
			cout << list << endl;
		}
		if (i % 2 == 1)
		{
			int f = rand();

			if (f % 3 == 0)
			{
				cout << "Я екстрактбегиню элемент ";
				list.extractbegin();
				cout << endl;
				cout << "теперь лист выглядит так:" << endl;
				cout << list << endl;
			}
			else if (f % 3 == 1)
			{
				cout << "Я екстракэндю элемент " << list.extractend() << endl;
				cout << "теперь лист выглядит так:" << endl;
				cout << list << endl;
			}
			else
			{

				f = f % 100;
				list.insert(x, f);
				cout << "Я инсертю " << x << " на позицию " << f << endl;
				cout << "теперь лист выглядит так:" << endl;
				cout << list << endl;

			}

		}

	}
	
	list.sort();
	cout << endl << "После сортировки: " << endl;
	cout << list;
	return EXIT_SUCCESS;
}