#include <iostream>
using namespace std;

int main()
{
	int a, b, t;
	cin >> a >> b;
	t = a;
	a = b;
	b = t;
	cout << a <<" "<< b << endl;

	return EXIT_SUCCESS;
}