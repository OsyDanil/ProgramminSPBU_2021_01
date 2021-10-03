#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	int x = 0;
	int y = 0;
	cin >> m >> n >> x >> y;

	int p1 = x;
	int p2 = y - 1;
	if ((p1>0 && p1<m+1) && (p2>0 && p2<n+1))
	{
		cout << p1 << " " << p2 << endl;
	}
	int q1 = x - 1;
	int q2 = y;
	if ((q1 > 0 && q1 < m + 1) && (q2 > 0 && q2 < n + 1))
	{
		cout << q1 << " " << q2 << endl;
	}
	int v1 = x + 1;
	int v2 = y;
	if ((v1 > 0 && v1 < m + 1) && (v2 > 0 && v2 < n + 1))
	{
		cout << v1 << " " << v2 << endl;
	}
	int t1 = x;
	int t2 = y + 1;
	if ((t1 > 0 && t1 < m + 1) && (t2 > 0 && t2 < n + 1))
	{
		cout << t1 << " " << t2 << endl;
	}
	return EXIT_SUCCESS;
}