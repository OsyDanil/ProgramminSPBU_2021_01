#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;
	bool no1 = (c == 0 and d == 0);
	bool no2 = (a == 0 and b != 0);
	bool no3 = (c != 0 and a != 0 and b % a == 0 and  b*c == d*a);
	if (no1 || no2 || no3)
	{
		cout << "NO" << endl;
	}
	else if (a == 0 and b == 0)
	{
		cout << "INF" << endl;
		}
	else 
	{
		if (b % a == 0)
		{
			cout << -b / a << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

}