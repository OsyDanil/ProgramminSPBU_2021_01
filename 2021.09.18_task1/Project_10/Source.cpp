#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int x = abs(a - b);
	int ans = (a + b + x) / 2;
	cout << ans;
	return EXIT_SUCCESS;
}