#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;

	bool can_be = ((a + b > c) && (a + c > b) && (b + c > a));
	if (!can_be)
	{
		cout << "impossible" << endl;
	}
	else if ((a*a == b*b +c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b))
	{
		cout << "right" << endl;
	}
	else if ((a * a > b * b + c * c) || (b * b > a * a + c * c) || (c * c > a * a + b * b)) 
	{
		cout << "obtuse" << endl;
	}else 
	{
		cout << "acute"<< endl;
	}


	return EXIT_SUCCESS;
}
