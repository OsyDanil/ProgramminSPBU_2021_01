#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	double d = -45.678;
	long long k = 1;
	long long con = (sizeof(double) * 8 - k);

	long long d1 = *((long long*)&d);

	long long bit = k << con;
	long long d2 = ~(~d1 | bit);

	cout << "|" << d << "| = " << *((double*)&d2) << endl;

	return EXIT_SUCCESS;
}