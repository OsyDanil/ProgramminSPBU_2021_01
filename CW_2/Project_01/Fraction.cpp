#include "Fraction.h"
#include <iostream>
#include <cmath>

using namespace std;

Fraction::Fraction(long long num, long long dem) : num(num), dem(dem) {}

Fraction::Fraction(const Fraction& number) : num(number.num), dem(number.dem) {}

Fraction::~Fraction()
{
	this->num = 0;
	this->dem = 0;
}

long long  Fraction::getNUM()
{
	return this->num;
}
long long  Fraction::getDEM()
{
	return this->dem;
}

void Fraction::setNUM(long long x)
{
	this->num = x;
}
void Fraction::setDEM(long long y)
{
	this->dem = y;
}

Fraction Fraction::reverse()
{
	return Fraction(this->dem, this->num);
}
Fraction Fraction::absolute()
{
	return Fraction(abs(this->num), abs(this->dem));
}

long long NOD(const Fraction& number)
{
	long long at = abs(number.num);
	long long ab = abs(number.dem);
	while (at != ab)
	{

		if (at < ab)
		{
			ab -= at;
		}
		else
		{
			at -= ab;
		}
	}

	return  at;
}

bool operator==(const Fraction& number1, const Fraction& number2)
{
	Fraction dif = number1 - number2;
	return (dif.getNUM() * dif.getDEM() == 0);
}
bool operator>=(const Fraction& number1, const Fraction& number2)
{
	Fraction dif = number1 - number2;
	return (dif.getNUM() * dif.getDEM() >= 0);
	
}
bool operator<=(const Fraction& number1, const Fraction& number2)
{
	Fraction dif = number1 - number2;
	return (dif.getNUM() * dif.getDEM() <= 0);
}
bool operator<(const Fraction& number1, const Fraction& number2)
{
	Fraction dif = number1 - number2;
	return (dif.getNUM() * dif.getDEM() < 0);
}
bool operator>(const Fraction& number1, const Fraction& number2)
{
	Fraction dif = number1 - number2;
	return (dif.getNUM() * dif.getDEM() < 0);
}

bool operator==(long long k, const Fraction& number2)
{
	Fraction dif = k - number2;
	return ((dif.getNUM() * dif.getDEM()) == 0);
}
bool operator>=(long long k, const Fraction& number2)
{
	Fraction dif = k - number2;
	return (dif.getNUM() * dif.getDEM() >= 0);
}
bool operator<=(long long k, const Fraction& number2)
{
	Fraction dif = k - number2;
	return (dif.getNUM() * dif.getDEM() <= 0);
}
bool operator>(long long k, const Fraction& number2)
{
	Fraction dif = k - number2;
	return (dif.getNUM() * dif.getDEM() > 0);
}
bool operator<(long long k, const Fraction& number2)
{
	Fraction dif = k - number2;
	return (dif.getNUM() * dif.getDEM() < 0);
}

Fraction operator-(const Fraction& number1, const Fraction& number2)
{

	long long n1 = number1.num;
	long long d1 = number1.dem;
	long long n2 = number2.num;
	long long d2 = number2.dem;
	return Fraction(n1 * d2 - n2 * d1, d1 * d2);
}
Fraction operator+(const Fraction& number1, const Fraction& number2)
{
	long long n1 = number1.num;
	long long d1 = number1.dem;
	long long n2 = number2.num;
	long long d2 = number2.dem;
	return Fraction(n1 * d2 + n2 * d1, d1 * d2);
}
Fraction operator*(const Fraction& number1, const Fraction& number2)
{
	long long n1 = number1.num;
	long long d1 = number1.dem;
	long long n2 = number2.num;
	long long d2 = number2.dem;
	return Fraction(n1 * n2 , d1 * d2);
}
Fraction operator/(const Fraction& number1, const Fraction& number2)
{
	long long n1 = number1.num;
	long long d1 = number1.dem;
	long long n2 = number2.num;
	long long d2 = number2.dem;
	return Fraction(n1 * d2, d1 * n2);
}

Fraction operator-(long long k, const Fraction& number2)
{
	return (Fraction(k, 1) - number2);
}
Fraction operator+(long long k, const Fraction& number2)
{
	return (Fraction(k, 1) + number2);
}
Fraction operator*(long long k, const Fraction& number2)
{
	return (Fraction(k, 1) * number2);
}
Fraction operator/(long long k, const Fraction& number2)
{
	return (Fraction(k, 1) / number2);
}

Fraction operator^(long long k, const Fraction& number2)
{
	return Fraction(pow(number2.num, k), pow(number2.dem, k));
}


std::ostream& operator<<(std::ostream& stream, const Fraction& number)
{
	if (number.num == 0)
	{
		stream << 0;
		return stream;
	}
	long long n = number.num / NOD(number);
	long long d = number.dem / NOD(number);
    if (n * d > 0)
	{
		if (n < 0)
		{
			if (abs(d) != 1)
			{
				stream << -n << "/" << d;
			}
			else
			{
				stream << -n;
			}
		}
		else
		{
			if (abs(d) != 1)
			{
				stream << n << "/" << d;
			}
			else
			{
				stream << n;
			}
		}
		
		
	}
	else if (n*d <0)
	{
		if (n < 0)
		{
			if (abs(d) != 1)
			{
				stream << n << "/" << d;
			}
			else
			{
				stream << n;
			}
		}
		else 
		{
			if (abs(d) != 1)
			{
				stream << -n << "/" << -d;
			}
			else
			{
				stream << -n;
			}
		}

	}
	
	
	return stream;
}
