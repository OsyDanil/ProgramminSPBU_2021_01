#include "myLib.h"
#include <iostream>

#include <cmath>

using namespace std;

int quart(int r, int i)
{
	if (((i / (2 * r + 1)) >= r + 1) && ((i % (2 * r + 1) >= r + 1)))
	{
		return 4;
	}
	if (((i / (2 * r + 1)) >= r + 1) && ((i % (2 * r + 1) < r + 1)))
	{
		return 3;
	}
	if (((i / (2 * r + 1)) < r + 1) && ((i % (2 * r + 1) < r + 1)))
	{
		return 2;
	}
	if (((i / (2 * r + 1)) < r + 1) && ((i % (2 * r + 1) >= r + 1)))
	{
		return 1;
	}
}
int mini(float*& m, int x, int y, int z)
{
	if ((m[x] < m[y]) && (m[x] < m[z])) {

		return x;
	}
	if ((m[y] < m[x]) && (m[y] < m[z])) { return y; }
	if ((m[z] < m[x]) && (m[z] < m[y])) { return z; }
}
int to_1(int n, int& step)
{
	if (n == 0)
	{
		return n;
	}
	if (n == 1)
	{
		return step;
	}
	else if (n % 2 == 1)
	{
		step = step + 1;
		return to_1(3 * n + 1, step);
	}
	else
	{
		step = step + 1;
		return to_1(n / 2, step);
	}

}
void circle(int r)
{
	int capa = (2 * r + 1) * (2 * r + 1);
	int c = (2 * r + 1);

	int x = 0;
	int y = 0;

	float a = x;
	float b = y;
	float R = r;
	float delta = 0;

	float* m = new float [capa] {0};


	for (int i = 0; i < capa; ++i)
	{
		x = i % c;
		y = i / c;
		a = x;
		b = y;
		R = r;
		delta = R - sqrt((R - a) * (R - a) + (R - b) * (R - b));
		m[i] = abs(delta);
	}
	float* min_delt = new float[2 * r + 1]{ 0 };

	for (int i = 0; i < 2 * r + 1; ++i)
	{
		min_delt[i] = 100;
	}
	int stroke = 0;

	for (int i = 0; i < capa; ++i)
	{
		if (m[i] < min_delt[stroke])
		{
			min_delt[stroke] = m[i];
		}
		if ((i % (2 * r + 1)) == 2 * r)
		{
			stroke++;
		}

	}
	stroke = 0;
	int* bin_mas = new int[capa] {0};

	for (int i = 0; i < capa; ++i)
	{
		if ((m[i] == min_delt[stroke]))
		{
			bin_mas[i] = 1;
		}
		if ((i % (2 * r + 1)) == 2 * r)
		{
			++stroke;
		}
	}
	
	//"выглаживание"

	bool perfect = false;
	while (not(perfect)) {
		perfect = true;
		for (int i = 0; i < capa; ++i)
		{
			if (bin_mas[i] == 1)
			{
				if ((i % (2 * r + 1)) == r)
				{
					if (i / (2 * r + 1) < 1)
					{

						bin_mas[mini(m, i + 2 * r, i - 1, i + 2 * r + 1)] = 1;
						bin_mas[mini(m, i + (2 * r) + 2, i + 1, i + 2 * r + 1)] = 1;

					}
					else
					{
						bin_mas[mini(m, i - 2 * r - 2, i - 1, i - 2 * r - 1)] = 1;
						bin_mas[mini(m, i - 2 * r, i + 1, i - 2 * r - 1)] = 1;
					}
				}
				else if (quart(r, i) == 1)
				{
					if (bin_mas[i + 2 * r + 2] + bin_mas[i + 1] + bin_mas[i + 2 * r + 1] == 0)
					{
						bin_mas[mini(m, i + 2 * r + 2, i + 1, i + 2 * r + 1)] = 1;
						perfect = false;
					}

				}
				else if (quart(r, i) == 2)
				{
					if (bin_mas[i + 2 * r] + bin_mas[i - 1] + bin_mas[i + 2 * r + 1] == 0) {

						bin_mas[mini(m, i + 2 * r, i - 1, i + 2 * r + 1)] = 1;
						perfect = false;
					}
				}
				else if (quart(r, i) == 3)
				{
					if (i + 2 * r + 2 < capa)
					{
						if (bin_mas[i + 2 * r + 2] + bin_mas[i + 1] + bin_mas[i + 2 * r + 1] == 0) {

							bin_mas[mini(m, i + 2 * r + 2, i + 1, i + 2 * r + 1)] = 1;
							perfect = false;
						}
					}
					else
					{
						bin_mas[i + 1] = 1;
					}

				}
				else if (quart(r, i) == 4)
				{
					if (i + 2 * r + 2 < capa)
					{
						if (bin_mas[i + 2 * r] + bin_mas[i - 1] + bin_mas[i + 2 * r + 1] == 0) {

							bin_mas[mini(m, i + 2 * r, i - 1, i + 2 * r + 1)] = 1;
							perfect = false;
						}
					}
					else
					{
						bin_mas[i - 1] = 1;
					}
				}
			}

		}
	}
	cout << endl;
	
	for (int i = 0; i < capa; ++i)
	{
		if ((bin_mas[i] == 1))
		{
			cout << "**";
		}
		else
		{
			cout << "  ";
		}
		if ((i % (2 * r + 1)) == 2 * r)
		{
			cout << endl;
		}
	}
	
	delete[] m;
	delete[] bin_mas;
	delete[] min_delt;
}