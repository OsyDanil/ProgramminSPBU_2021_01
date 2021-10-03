#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int n = 0;
	cin >> n;
	int k = 1;
	int factorial = 1;
	while (k<=n)
	{
		factorial = factorial * k;
		++k;
	}
	cout << factorial << endl;
	return EXIT_SUCCESS;
}