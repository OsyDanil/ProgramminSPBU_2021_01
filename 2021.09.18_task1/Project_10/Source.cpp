#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0; 
	int b = 0;
	cin >> a >> b;
	int a_more_than_b = a / b;
	int b_more_than_a = b / a;
	cout << (a * (a_more_than_b)+b * (b_more_than_a)) / (a_more_than_b + b_more_than_a) <<endl;
	
	return EXIT_SUCCESS;
}

