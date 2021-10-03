#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;
	int x = 0;
	while (x<1001)
	{
		int t = (a * x * x * x + b * x * x + c * x + d);
		if (t == 0)
		{
			cout << x << endl;
		}
		++x;
	}
	return EXIT_SUCCESS;
}