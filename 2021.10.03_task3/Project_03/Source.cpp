#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	int k = 1;
	int t = 0;
	int shift_last = 1;
	while (k <=n) 
	{
		++t;
		if (t == shift_last) {
			cout << k << " " << endl;
			t = 0;
			++shift_last;
		}
		else
		{
			cout << k << " ";
		}
		++k;
	}
	return EXIT_SUCCESS;
}