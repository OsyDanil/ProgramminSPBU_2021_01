#include "ComplexNumber.h"
#define M_PI 3.14159265358979323846

using namespace std;

ComplexNumber::ComplexNumber(double a, double b) : a(a), b(b) {}

ComplexNumber::ComplexNumber(const ComplexNumber& number) : a(number.a), b(number.b) {}

ComplexNumber::~ComplexNumber()
{
	this->a = 0;
	this->b = 0;
}

double ComplexNumber::GetA()
{
	return this->a;
}

double ComplexNumber::GetB()
{
	return this->b;
}

void ComplexNumber::setA(double a)
{
	this->a = a;
}

void ComplexNumber::setB(double b)
{
	this->b = b;
}

void ComplexNumber::print()
{
	if (this->b > 0)
	{
		cout << this->a << " + " << this->b << "i" << endl;
	}
	else
	{
		cout << this->a << " - " << -this->b << "i" << endl;
	}
}

double ComplexNumber::abs()
{
	return sqrt(pow(this->a, 2) + pow(this->b, 2));
}

double ComplexNumber::arg()
{
	return (atan(this->b / this->a));
}

ComplexNumber ComplexNumber::conjugate()
{
	return ComplexNumber(this->a, -this->b);
}

ComplexNumber& ComplexNumber::operator=(const ComplexNumber& number)
{
	this->a = number.a;
	this->b = number.b;
	return *this;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& number)
{
	return ComplexNumber(this->a + number.a, this->b + number.b);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& number)
{
	return ComplexNumber(this->a - number.a, this->b - number.b);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& number)
{

	return ComplexNumber(this->a * number.a - this->b * number.b, this->a * number.b + this->b * number.a);
}

ComplexNumber operator+(const double k, const ComplexNumber& number)
{
	return ComplexNumber(number.a + k, number.b);
}

ComplexNumber operator-(const double k, const ComplexNumber& number)
{
	return ComplexNumber(number.a - k, number.b);
}

ComplexNumber operator*(const double k, const ComplexNumber& number)
{
	return ComplexNumber(number.a * k, number.b * k);
}

ComplexNumber ComplexNumber::operator/(ComplexNumber& number)
{
	return ((*this * number.conjugate()) / (number.a * number.a + number.b * number.b));
}

ComplexNumber ComplexNumber::operator/(double c)
{
	return ComplexNumber(this->a / c, this->b / c);
}

ComplexNumber operator/(const double k, ComplexNumber& number)
{
	ComplexNumber c = ComplexNumber(k, 0);
	return (c/number);
}

ComplexNumber ComplexNumber::operator^(double n)
{
	double r = sqrt(pow(this->a, 2) + pow(this->b, 2));
	double ang = acos(this->a / r);
	return ComplexNumber(pow(r, n) * cos(ang * n), pow(r, n) * sin(ang * n));
}

ComplexNumber* ComplexNumber::roots(double n)
{
	ComplexNumber* mass_of_comp = new ComplexNumber[n]{ 0 };
	double r = sqrt(pow(this->a, 2) + pow(this->b, 2));
	double ang = acos(this->a / r);

	for (int k = 0; k <= n - 1; k++)
	{
		ComplexNumber number = ComplexNumber(pow(r, 1 / n) * cos((ang + 2 * M_PI * k) / n), pow(r, 1 / n) * sin((ang + 2 * M_PI * k) / n));
		mass_of_comp[k] = number;
	}
	return mass_of_comp;
}

std::ostream& operator<<(std::ostream& stream, const ComplexNumber& number)
{
	
	if (number.a == 0)
	{
		if (number.b == 0)
		{
			stream << 0;
		}
		else if (abs(number.b) == 1)
		{
			if (number.b == 1)
			{
				stream << "i";
			}
			else
			{
				stream << "-i";
			}
		}
		else
		{
			stream << number.b << "*i";
		}
	}
	else
	{
		if (number.b == 0)
		{
			stream << number.a;
		}
		else if (abs(number.b) == 1)
		{
			if (number.b == 1)
			{
				stream << number.a << "+i";
			}
			else
			{
				stream << number.a << "-i";
			}
		}
		else
		{
			if (number.b > 0) 
			{
				stream << number.a << "+" << number.b << "*i";
			}
			else
			{
				stream << number.a << number.b << "*i";
			}
		}
	}
	return stream;
}

void ComplexNumber::sqr(int n, std::ostream& stream)
{
	ComplexNumber* massive_roots = (*this).roots(n);
	for (int i = 0; i < n; ++i)
	{
		stream << massive_roots[i] << endl;
	}
	delete[] massive_roots;
}

bool operator== (const ComplexNumber& number1, const ComplexNumber& number2)
{
	if ((number1.a == number2.a) & (number1.b == number2.b))
	{
		return true;
	}
	return false;
}