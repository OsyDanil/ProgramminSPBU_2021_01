#include <iostream>
using namespace std;

int main()
{
	int a = 0; 
	int b = 0; 
	int t = 0;
	cin >> a >> b;
	t = a;
	a = b;
	b = t;
	cout << a << " " << b <<endl;

	return EXIT_SUCCESS;
}