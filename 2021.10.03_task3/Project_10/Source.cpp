#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	int q = 0;
	while (true) 
	{
		if (q*q >= a && q*q<=b)
		{
			cout << q * q << endl;
		}
		else if (q*q>b)
		{
			break;
		}
		++q;
	}
	
	return EXIT_SUCCESS;
}