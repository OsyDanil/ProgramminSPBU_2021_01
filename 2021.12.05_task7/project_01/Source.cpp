#include <iostream>
#include "myLib.h"

using namespace std;

int main(int argc, char* argv[]) 
{
	int n = 0;
	int step = 0;
	int r = 0;
	
	cin >> n;
	
	cout << to_1(n, step);
	cout << endl;

	cin >> r;
	
	circle(r);

	return EXIT_SUCCESS;
}