#include <iostream>
#include "ComplexNumber.h"

using namespace std;

int main()
{
	ComplexNumber z1(3, 1);
	ComplexNumber z2(5, -2);
	cout << z1 * z2 << endl;
	cout << z1 / z2 << endl;
	cout << 3 * z1 + 4 * z2 << endl;
	cout << z1.abs() << endl; //модуль числа
	cout << z2.arg() << endl; //аргумент числа
	cout << z1.conjugate() << endl; //обратное число
	z1.sqr(5, cout);

	




	return EXIT_SUCCESS;
}