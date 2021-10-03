#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	int sam = 0;
	int k = 0;
	while (k!=n)
	{
		int x = 0;
		cin >> x;
		sam = sam + x;
		++k;
	}
	cout << sam << endl;
	return EXIT_SUCCESS;
}