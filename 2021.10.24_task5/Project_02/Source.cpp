#include<iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[])
{
	double d = 8.15;
	long long k = 1;
	long long val = *((long long*)&d);
	cout << val << endl;
	for (long long i = 0; i < sizeof(double) * 8; ++i)
	{

		long long cur_ind = sizeof(double) * 8 - 1 - i;
		long long mask = k << cur_ind;

		long long bit = val & mask;
		bit = bit >> cur_ind;
		cout << bit;
		if (i % 4 == 3)
		{
			cout << " ";
		}
	}


}