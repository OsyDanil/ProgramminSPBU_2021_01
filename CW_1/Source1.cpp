#include <iostream>

using namespace std;

int main(int argc, char argv[])
{
	int k = 0;

	cin >> k;
	int n = 0;
	int m = 0;
	int d = 0;
	int* p = new int[k] {0};
	
	for (int i = 0; i < k; ++i)
	{
		
		cin >> n >> m;
		d = 19 * m + (n + 239) * (n + 366) / 2;
		p[i] = d;
		

	}
	for (int i = 0; i < k; ++i)
	{
		cout << p[i] << endl;
	}
	delete[] p;
	return EXIT_SUCCESS;
}