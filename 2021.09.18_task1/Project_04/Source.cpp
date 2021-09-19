#include <iostream>
using namespace std;

int main()
{
	int v, t;
	cin >> v;
	cin >> t;
	cout << ((v * t) % 109 + 109) % 109 << endl;
	
	return EXIT_SUCCESS;
}