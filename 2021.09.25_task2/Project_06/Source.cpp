#include <iostream>
using namespace std;
int main(int argc, char* argv[]) 
{
	int a = 0; 
	int b = 0; 
	int a2 = 0; 
	int b2 = 0;
	cin >> a >> b >> a2 >> b2;
	bool d = ((a - b) == (a2 - b2)) || (abs(a + b) == abs(a2 + b2));

	if ((d) || (a == a2) || (b == b2)) 
	{
		cout << "YES" << endl;
	}
	else 
	{
		cout << "NO" << endl;
	}
	return EXIT_SUCCESS;
}