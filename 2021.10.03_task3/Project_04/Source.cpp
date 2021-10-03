#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int c = 1;
	cin >> n >> k;
	int factorial_n = 1;
	while (c <= n)
	{
		factorial_n = factorial_n * c;
		++c;
	}
	int factorial_k = 1;
	c = 1;
	while (c <= k)
	{
		factorial_k = factorial_k * c;
		++c;
	}
	int factorial_dif = 1;
	c = 1;
	while (c<=n-k)
	{
		factorial_dif = factorial_dif * c;
		++c;
	}
	cout << factorial_n / (factorial_dif * factorial_k) << endl;
	return EXIT_SUCCESS;
}