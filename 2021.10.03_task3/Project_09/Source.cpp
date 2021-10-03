#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;
	int i = 0;
	for (i = a; i<=b; ++i)
	{
		if (i % d == c) 
		{
			cout << i << endl;
		}
	}
	return EXIT_SUCCESS;
}