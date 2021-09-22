#include <iostream>
using namespace std;

int main()
{
	int v = 0; 
	int t = 0;
	cin >> v;
	cin >> t;
	cout << ((v * t) % 109 + 109) % 109 <<endl;
	
	return EXIT_SUCCESS;
}