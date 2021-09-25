#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int m = 0;
	cin >> k >> m >> n;
	int sesions = (n + k - 1) / k;
	cout << sesions*2*m;

}