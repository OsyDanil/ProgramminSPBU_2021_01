#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int x2 = x * x;
	int x4 = x2 * x2;
	int x3 = x4 / x;
	cout << x4 + x3 + x2 + x + 1 << endl;


	return EXIT_SUCCESS;
}