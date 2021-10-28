#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int sum = 0;
	int product_negative = 1;
	int minimum = 0;
	int min_index = 0;
	int maximum = 0;
	int sec_max = 0;
	bool negative_is = false;
	cin >> n;
	int m[100] = { 0 };
	
	for (int i = 0; i < n; ++i)
	{
		cin >> m[i];
		if (i == 0)
		{
			minimum = m[i];
			min_index = i;
			maximum = m[i];
			sec_max = m[i];
		}
	}
	cout << "ARRAY: ";
	for (int i = 0; i < n; ++i)
	{
		cout << m[i] << " ";
	}
	cout << endl;
	cout << "EVEN: ";
	for (int i = 0; i < n; ++i)
	{
		if (m[i] % 2 == 0)
		{
			cout << m[i] << " ";
		}
	}
	cout << endl;
	for (int i = 0; i < n; ++i)
	{
		sum = sum + m[i];
	}
	cout << "SUM: " << sum << endl;
	for (int i = 0; i < n; ++i)
	{
		if (m[i] < 0)
		{
			negative_is = true;
			product_negative *= m[i];
		}
	}
	if (!negative_is) {
		product_negative = 0;
	}
	cout << "PRODUCT OF NEGATIVE: " << product_negative << endl;
	for (int i = 0; i < n; ++i)
	{
		if (m[i] < minimum) 
		{
			minimum = m[i];
			min_index = i;
		}
	}
	cout << "FIRST MIN INDEX: " << min_index << endl;
	for (int i = 0; i < n; ++i)
	{
		if (m[i] > maximum)
		{
			sec_max = maximum;
			maximum = m[i];
		}
		else if (m[i] > sec_max)
		{
			sec_max = m[i];
		}
	}
	cout << "SECOND MAX: " << sec_max << endl;
	cout << "REVERSE: ";
	for (int i = 0; i < n; ++i)
	{
		cout << m[n - 1 - i] << " ";
	}
	cout << endl;
	cout << "ODD INDEXES: ";
	for (int i = 1; i < n; i += 2)
	{
		cout << m[i] << " ";
	}

	return EXIT_SUCCESS;
}