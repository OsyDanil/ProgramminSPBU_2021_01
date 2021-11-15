#include <iostream>

using namespace std;

int main(int argc, char argv[])
{

	int a = 0;
	int b = 0;
	int at = 0;
	int ab = 0;
	cin >> a >> b;

	at = a;
	ab = b;

	while (at != ab) 
	{
		
		if (at < ab)
		{
			ab -= at;
		}
		else
		{
			at -= ab;
		}
	}
	
	cout << (a * b) / at;



	return EXIT_SUCCESS;
}