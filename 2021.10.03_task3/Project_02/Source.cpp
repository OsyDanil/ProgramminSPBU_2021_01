#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	int k = 0;
	int answer = 1;
	while (k!=n)
	{
		answer = answer * 2;
		++k;
	}
	cout << answer << endl;
	return EXIT_SUCCESS;
}