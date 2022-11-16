#include "pch.h" 
#include "Oper.h"


void Fraction::print(Fraction arr[], int size)
{
	for (size_t i = 0; i < size; i++)
		cout << i + 1 << ") " << arr[i] << endl;
}


void Fraction::task(Fraction arr[], int& size)
{
	for (int i = 0; i < size; i++)
		if ((i + 1) % 2 == 0 and i - 1 >= 0)
			arr[i] = arr[i] + arr[i - 1];
}

Fraction& operator+(const Fraction& ob1, const Fraction& ob2)
{
	Fraction result((ob1.denominator * ob2.numerator) + (ob2.denominator * ob1.numerator), ob1.numerator * ob2.numerator);
	return result;
}

Fraction& operator-(const Fraction& ob1, const Fraction& ob2)
{
	Fraction result((ob1.denominator * ob2.numerator) - (ob2.denominator * ob1.numerator), ob1.numerator * ob2.numerator);
	return result;
}

Fraction& operator/(const Fraction& ob1, const Fraction& ob2)
{
	Fraction result(ob2.numerator * ob1.denominator, ob2.denominator * ob1.numerator);
	return result;
}

Fraction& operator*(const Fraction& ob1, const Fraction& ob2)
{
	Fraction result(ob1.denominator * ob2.denominator, ob1.numerator * ob2.numerator);
	return result;
}

Fraction& Fraction::operator=(const Fraction& ob)
{
	denominator = ob.denominator; numerator = ob.numerator;
	return *this;
}

