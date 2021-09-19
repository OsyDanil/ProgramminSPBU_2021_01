#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b; 
    a=a+1;
	b=b+1;
	int a_more_than_b = (a % b) / 2 ^ ((a % b) / 2);
	cout << a * (a_more_than_b)+b * (1 - a_more_than_b) -1;


	return EXIT_SUCCESS;
}