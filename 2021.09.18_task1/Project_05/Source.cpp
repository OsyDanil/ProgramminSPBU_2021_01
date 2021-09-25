#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	cin >> a;
	cout << (a / 100) + (a/10)%10 + a % 10 <<endl;

	return EXIT_SUCCESS;
}