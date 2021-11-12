#include<iostream>

using namespace std;

void expand(int*& m, int& capacity);
void move_right(int*& m, int& capacity, int& marker);
void move_left(int*& m, int& capacity, int& marker);
void printMas(int*& m, int& marker);
void add_end(int*& m, int& capacity, int& marker, int n);
void del_last(int*& m, int& capacity, int& marker);
void reverse(int*& m, int& marker);

int main(int argc, char* argv[])
{
	int capacity = 1;
	int marker = 0;
	int* m = new int[capacity] {0};
	int command = 0;

	cout << "_____MENU_____" << endl;
	cout << "0. Exit programm" << endl;
	cout << "1. Current massive capacity" << endl;
	cout << "2. Add element in the end of the massive" << endl;
	cout << "3. Add element in the start of the massive" << endl;
	cout << "4. Delete element in the end of the massive" << endl;
	cout << "5. Delete element in the start of the massive" << endl;
	cout << "6. Reverse massive" << endl;

	while (true)
	{
		cout << "Orders?" << endl;
		cin >> command;
		if (command == 0)
		{
			break;
		}
		else if (command == 1)
		{
			cout << "Current massive capacity is " << capacity << endl;

			printMas(m, marker);
		}
		else if (command == 2)
		{
			int n = 0;
			cout << "what to add in the end, my Lord?" << endl;
			cin >> n;
			add_end(m, capacity, marker, n);
		}
		else if (command == 3)
		{
			int n = 0;
			cout << "what to add in the start, my Lord?" << endl;
			cin >> n;
			move_right(m, capacity, marker);
			m[0] = n;
		}
		else if (command == 4)
		{
			del_last(m, capacity, marker);
		}
		else if (command == 5)
		{
			if (marker > 0)
			{

				move_left(m, capacity, marker);
			}
		}
		else if (command == 6)
		{
			reverse(m, marker);
		}
		else
		{
			cout << "Cant understand you" << endl;
		}
	}

	delete[] m;
	cout << "End programm work" << endl;
	return EXIT_SUCCESS;
}

void expand(int*& m, int& capacity)
{
	int* newM = new int[capacity * 2]{ 0 };
	for (int i = 0; i < capacity; ++i)
	{
		newM[i] = m[i];
	}
	delete[] m;
	m = newM;
	capacity = 2 * capacity;


}
void add_end(int*& m, int& capacity, int& marker, int n)
{
	if (marker < capacity)
	{
		m[marker] = n;
		++marker;
	}
	else
	{

		expand(m, capacity);
		add_end(m, capacity, marker, n);
	}
}
void move_right(int*& m, int& capacity, int& marker)
{
	if (marker < capacity)
	{
		for (int i = marker; i > 0; --i)
		{
			m[i] = m[i - 1];
		}
		++marker;
		m[0] = 0;
	}
	else
	{
		expand(m, capacity);
		move_right(m, capacity, marker);
	}
}
void move_left(int*& m, int& capacity, int& marker)
{
	int* newM = new int[capacity - 1]{ 0 };
	for (int i = 0; i < marker; ++i)
	{
		newM[i] = m[i + 1];
	}
	delete[] m;
	m = newM;
	--capacity;
	--marker;
}
void printMas(int*& m, int& marker)
{
	for (int i = 0; i < marker; ++i) {
		cout << m[i] << " ";
	}
	cout << endl;
}
void del_last(int*& m, int& capacity, int& marker)
{
	m[marker - 1] = 0;
	int* newM = new int[capacity - 1]{ 0 };
	for (int i = 0; i < marker - 1; ++i)
	{
		newM[i] = m[i];
	}
	delete[] m;
	m = newM;
	--capacity;
	--marker;
}
void reverse(int*& m, int& marker)
{
	int t = 0;
	for (int i = 0; i < marker / 2; ++i)
	{
		t = m[i];
		m[i] = m[marker - 1 - i];
		m[marker - i - 1] = t;
	}


}