#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int m = 0;
	cin >> k >> m >> n;
	if (n<=k)
	{
		cout << 2 * m << endl;
	}
	else if ((2 * n) % k == 0) 
	{
		cout << ((n*2)/k) * m << endl;
	}
	else
	{
		cout << (2*n /k) * m + m<< endl;
	}
	return EXIT_SUCCESS;
}