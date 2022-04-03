#pragma once
#include <iostream>
#include <cmath>

class ComplexNumber
{
	

private:

	double a;
	double b;

public:
	ComplexNumber(double a = 0, double b = 0);
	ComplexNumber(const ComplexNumber& number);
	~ComplexNumber();

	double GetA();
	double GetB();

	void setA(double a);
	void setB(double b);

	void print();

	double abs();

	double arg();


	friend bool operator==(const ComplexNumber& number1, const ComplexNumber& number2);

	ComplexNumber conjugate();


	ComplexNumber& operator=(const ComplexNumber& number);
	ComplexNumber operator+(const ComplexNumber& number);
	ComplexNumber operator-(const ComplexNumber& number);

	ComplexNumber operator*(const ComplexNumber& number);
	friend ComplexNumber operator*(const double k, const ComplexNumber& number);

	friend ComplexNumber operator+(const double k, const ComplexNumber& number);

	friend ComplexNumber operator-(const double k, const ComplexNumber& number);

	ComplexNumber operator/(ComplexNumber& number);
	ComplexNumber operator/(double c);

	friend ComplexNumber operator/(const double k, ComplexNumber& number);

	ComplexNumber operator^(double n);

	ComplexNumber* roots(double n);
	void sqr(int n, std::ostream& stream);

	friend std::ostream& operator<<(std::ostream& stream, const ComplexNumber& number);
};
