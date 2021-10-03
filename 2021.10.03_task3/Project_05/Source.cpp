#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	int d = 1;
	while (d<=n)
	{
		if (n%d == 0)
		{
			cout << d << endl;
		}
		++d;
	}
	return EXIT_SUCCESS;
}