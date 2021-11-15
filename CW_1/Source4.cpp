#include <iostream>

using namespace std;

int main(int argc, char argv[])
{
	int n = 0;
	int max = 0;
	int min = 0;
	cin >> n;
	int* mas = new int[n] {0};
	for (int i = 0; i < n; ++i)
	{
		int x = 0;
		cin >> x;
		mas[i] = x;
		if (i ==0)
		{
			max = x;
			min = x;
		}
		else
		{
			if (x > max) { max = x; }
			if (x < min) { min = x; }
		}
	}
	for (int i  = 0; i < n; ++i)
	{
		if (mas[i] == max) 
		{
			mas[i] = min;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << mas[i] << endl;
	}
	delete[] mas;
	return EXIT_SUCCESS;
}