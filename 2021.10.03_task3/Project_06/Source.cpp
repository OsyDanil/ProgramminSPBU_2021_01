#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	int k_0 = 0;
	int k_neg = 0;
	int k_pos = 0;
	int t = 0;
	while (t<n)
	{
		int x = 0;
		cin >> x;
		if (x==0)
		{
			++k_0;
		}
		else if (x > 0) 
		{
			++k_pos;
		}
		else 
		{
			++k_neg;
		}
		++t;
	} 
	cout << k_0 << " " << k_pos << " " << k_neg << endl;;
	return EXIT_SUCCESS;
}