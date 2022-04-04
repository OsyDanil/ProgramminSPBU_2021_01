#pragma once

#include <iostream>
#include <cmath>

using namespace std;

class Fraction
{


private:

	long long num;
	long long dem;

public:
	Fraction(long long num = 0, long long dem = 0);
	Fraction(const Fraction& number);
	~Fraction();

	long long  getNUM();
	long long  getDEM();

	void setNUM(long long x);
	void setDEM(long long y);

	Fraction reverse();
	Fraction absolute();
	friend bool operator==(const Fraction& number1, const Fraction& number2);
	friend bool operator>=(const Fraction& number1, const Fraction& number2);
	friend bool operator<=(const Fraction& number1, const Fraction& number2);
	friend bool operator>(const Fraction& number1, const Fraction& number2);
	friend bool operator<(const Fraction& number1, const Fraction& number2);

	friend bool operator==(long long k, const Fraction& number2);
	friend bool operator>=(long long k, const Fraction& number2);
	friend bool operator<=(long long k, const Fraction& number2);
	friend bool operator>(long long k, const Fraction& number2);
	friend bool operator<(long long k, const Fraction& number2);
	
	friend Fraction operator-(const Fraction& number1, const Fraction& number2);
	friend Fraction operator+(const Fraction& number1, const Fraction& number2);
	friend Fraction operator*(const Fraction& number1, const Fraction& number2);
	friend Fraction operator/(const Fraction& number1, const Fraction& number2);
	
	friend Fraction operator-(long long k, const Fraction& number2);
	friend Fraction operator+(long long k, const Fraction& number2);
	friend Fraction operator*(long long k, const Fraction& number2);
	friend Fraction operator/(long long k, const Fraction& number2);

	friend Fraction operator^(long long k, const Fraction& number2);
	
	friend long long NOD(const Fraction& number);

	friend std::ostream& operator<<(std::ostream& stream, const Fraction& number);

};